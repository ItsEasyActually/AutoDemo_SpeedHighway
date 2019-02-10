// AutoDemo_SpeedHighway.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>

//LandTables
#include "LandTable\Act1.h"
#include "LandTable\Act2.h"
#include "LandTable\Act3.h"
#include "LandTable\Skybox_Objects.h"

//Objects
#include "ObjModels\Foliage.h"
#include "ObjModels\Billboards.h"
#include "ObjModels\Lamps.h"
#include "ObjModels\MiscObjs.h"
#include "ObjModels\Platforms.h"
#include "ObjModels\Vehicles.h"
#include "ObjModels\WaterTanks.h"
#include "ObjModels\Fountain.h"
#include "ObjModels\Helicopter.h"

//Misc
#include "MiscFiles\PathInfo.h"
#include "MiscFiles\StartPos.h"


//Structs
struct ObjectThing
{
	ObjectFuncPtr func;
	int16_t list;
	int16_t field_A;
	Rotation3 Rotation;
	NJS_VECTOR Position;
	NJS_OBJECT* object;
};


//Additional SADX Variables
DataArray(CollisionData, stru_C67750, 0xC67750, 1);
DataArray(CollisionData, stru_C673B8, 0xC673B8, 7);


DataArray(FogData, SpeedHighway1Fog, 0x024CA4E4, 3);
DataArray(FogData, SpeedHighway2Fog, 0x024CA514, 3);
DataArray(FogData, SpeedHighway3Fog, 0x024CA544, 3);




DataPointer(NJS_OBJECT, stru_C06A94, 0xC06A94);
DataPointer(float, CurrentFogDist, 0x03ABDC64);
DataPointer(float, CurrentFogLayer, 0x03ABDC60);
DataPointer(NJS_VECTOR, CurrentSkybox, 0x03ABDC94);
DataPointer(NJS_BGRA, CurrentFogColorX, 0x03ABDC68);
DataPointer(NJS_OBJECT, CraneLift, 0x02671A20);
DataPointer(NJS_OBJECT, CraneLights, 0x026710A8);
DataPointer(NJS_OBJECT, CraneLight1, 0x0267098C);
DataPointer(NJS_OBJECT, CraneLight2, 0x02670804);

DataPointer(NJS_OBJECT, Missile_SH, 0x026A0008);


FunctionPointer(void, SetStatus, (ObjectMaster *a1), 0x0049CD60);
FunctionPointer(void, DynCol_LoadObject, (ObjectMaster *a1), 0x0049E170);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);

DataPointer(int, DroppedFrames, 0x03B1117C);

//Additional SADX Functions
FunctionPointer(NJS_OBJECT *, DynamicCollision, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(int, rand1, (), 0x6443BF);
DataPointer(int, FramerateSetting, 0x0389D7DC);


static int RocketAlpha = 255;
static int AntennaAlpha = 255;
static int RocketAlphaDir = 4;



//Null Code (Used for debugging purposes)
void __cdecl NullFunction(ObjectMaster *a1)
{
	return;
}

//Standard Display
void __cdecl Basic_Display(ObjectMaster *a2)
{
	EntityData1 *v1; // esi@1
	Angle v2; // eax@2
	Angle v3; // eax@4
	Angle v4; // eax@6

	v1 = a2->Data1;
	if (!MissedFrames)
	{
		SetTextureToLevelObj();
		njPushMatrix(0);
		njTranslateV(0, &v1->Position);
		v2 = v1->Rotation.z;
		if (v2)
		{
			njRotateZ(0, (unsigned __int16)v2);
		}
		v3 = v1->Rotation.x;
		if (v3)
		{
			njRotateX(0, (unsigned __int16)v3);
		}
		v4 = v1->Rotation.y;
		if (v4)
		{
			njRotateY(0, (unsigned __int16)v4);
		}
		ProcessModelNode_AB_Wrapper(v1->Object, 1.0);
		njPopMatrix(1u);
	}
}

//Standard Main
void __cdecl Basic_Main(ObjectMaster *a1)
{
	EntityData1 *v1; // edi@1

	v1 = a1->Data1;
	if (!ClipSetObject_Min(a1))
	{
		if (!ObjectSelectedDebug(a1))
		{
			AddToCollisionList(v1);
		}
		Basic_Display(a1);
	}
}

//Standard Delete Dynamic
void deleteSub_Global(ObjectMaster *a1) {
	if (a1->Data1->Object)
	{
		DynamicCOL_Remove(a1, a1->Data1->Object);
		ObjectArray_Remove(a1->Data1->Object);
	}
	DeleteObject_(a1);
}

void AddToCollision(ObjectMaster *a1, uint8_t col) {
	/*  0 is static
	1 is moving (refresh the colision every frame)
	2 is static, scalable
	3 is moving, scalable   */

	EntityData1 * original = a1->Data1;
	NJS_OBJECT *colobject;

	colobject = ObjectArray_GetFreeObject(); //The collision is a separate object, we add it to the list of object

	//if scalable
	if (col == 2 || col == 3) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = original->Scale.x;
		colobject->scl[1] = original->Scale.y;
		colobject->scl[2] = original->Scale.z;
	}
	else if (col == 4) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = 1.0f + original->Scale.x;
		colobject->scl[1] = 1.0f + original->Scale.x;
		colobject->scl[2] = 1.0f + original->Scale.x;
	}
	else if (col == 5) {
		colobject->evalflags = NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE;
		colobject->scl[0] = 1.0f + original->Scale.z;
		colobject->scl[1] = 1.0f + original->Scale.z;
		colobject->scl[2] = 1.0f + original->Scale.z;
	}
	else {
		colobject->evalflags = NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK | NJD_EVAL_SKIP | NJD_EVAL_HIDE; //ignore scale
		colobject->scl[0] = 1.0;
		colobject->scl[1] = 1.0;
		colobject->scl[2] = 1.0;
	}

	//add the rest
	if (col == 4 || col == 1 || col == 5)
	{
		colobject->ang[0] = 0;
		colobject->ang[1] = original->Rotation.y;
		colobject->ang[2] = 0;
	}
	else {
		colobject->ang[0] = original->Rotation.x;
		colobject->ang[1] = original->Rotation.y;
		colobject->ang[2] = original->Rotation.z;
	}
	colobject->pos[0] = original->Position.x;
	colobject->pos[1] = original->Position.y;
	colobject->pos[2] = original->Position.z;

	colobject->basicdxmodel = a1->Data1->Object->basicdxmodel; //object it will use as a collision
	a1->Data1->Object = colobject; //pointer to the collision object into our original object

	if (col == 0 || col == 2) DynamicCOL_Add((ColFlags)1, a1, colobject); //Solid
	else if (col == 1 || col == 3 || col == 4 || col == 5) DynamicCOL_Add((ColFlags)0x8000000, a1, colobject); //Dynamic, solid
}

//Basic drawing call
void DrawObjModel(ObjectMaster *a1, NJS_MODEL_SADX *m, bool scalable) {
	if (!MissedFrames) {
		njSetTexture((NJS_TEXLIST*)&BEACH01_TEXLIST); //Current heroes level texlist is always onto Emerald Coast
		njPushMatrix(0);
		njTranslateV(0, &a1->Data1->Position);
		njRotateXYZ(nullptr, a1->Data1->Rotation.x, a1->Data1->Rotation.y, a1->Data1->Rotation.z);
		if (scalable) njScale(nullptr, a1->Data1->Scale.x, a1->Data1->Scale.y, a1->Data1->Scale.z);
		else njScale(nullptr, 1, 1, 1);
		DrawQueueDepthBias = -6000.0f;
		DrawModel(m);
		DrawQueueDepthBias = 0;
		njPopMatrix(1u);
	}
}
//Need to make sure that small pink pyramid light object is re-programmed so that it doesn't rotate on X or Z axis!!!
//Need to do something about SIGNB. It's boarder texture isn't meant to be that red reflective one. It's meant to be a hard, red metal one. Compare final's OBJ_HIGHWAY2 to AD's!!!


//Borrowing from PkR for now:

void AntennaSprite(NJS_ARGB *a1)
{
	NJS_ARGB q1;
	q1.a = 1.0f;
	if (a1->r < 0.0f)
	{
		q1.r = 0;
		q1.g = 0;
		q1.b = 0;
	}
	else if (a1->r > 1.0f)
	{
		q1.r = 1.0f;
		q1.g = 1.0f;
		q1.b = 1.0f;
	}
	else
	{
		q1.r = a1->r;
		q1.g = a1->g;
		q1.b = a1->b;
	}
	SetMaterialAndSpriteColor(&q1);
}

void RocketSprite(float a, float r, float g, float b)
{
	float af;
	if (a < 0.0f) af = 0; else af = a;
	SetMaterialAndSpriteColor_Float(af, r, g, b);
}

void SetCopSpeederEffectAlpha(float a, float r, float g, float b)
{
	SetMaterialAndSpriteColor_Float(a - 0.1f, 1.0f, 1.0f, 0.95f);
}



PointerInfo pointers[] = {

	//ptrdecl(0x97DA88, &landtable_00015828),
	//ptrdecl(0x97DA8C, &landtable_00016420),
	//ptrdecl(0x97DA90, &landtable_00017D74)

	ptrdecl(0x26A5A9C, &SpeedHighway3DeathZones)

	/*
		WriteData((LandTable**)0x97DA88, &landtable_0001853C);
		WriteData((LandTable**)0x97DA8C, &landtable_00019178);
		WriteData((LandTable**)0x97DA90, &landtable_0001B08C);
	*/
};

//PathDataPtr WV1PathList = { levelact(LevelIDs_WindyValley, 0), PathList_WindyValley0 };
//PathDataPtr WV3PathList = { levelact(LevelIDs_WindyValley, 2), PathList_WindyValley2 };


void Init(const char *path, const HelperFunctions &helperFunctions)
{

	WriteData((LandTable**)0x97DA88, &landtable_00015828);
	WriteData((LandTable**)0x97DA8C, &landtable_00016420);
	WriteData((LandTable**)0x97DA90, &landtable_00017D74);

	/*
	ResizeTextureList(&HIGHWAY01_TEXLIST, 90);
	ResizeTextureList(&HIGHWAY02_TEXLIST, 32);
	ResizeTextureList(&HIGHWAY03_TEXLIST, 110);
	ResizeTextureList(&OBJ_HIGHWAY_TEXLIST, 164);
	*/



	//From PkR:
	WriteData<1>((char*)0x004B19E2, 0x08); //Cop speeder effect blending
	WriteCall((void*)0x4B1C6F, SetCopSpeederEffectAlpha);
	WriteData<1>((char*)0x00615DBB, 0x8); //Antenna sprite blending SA_SRC
	WriteData((float**)0x00615DA0, (float*)0x7DCB10); //Antenna sprite maximum brightness 1.0 instead of 0.5
	WriteData((float**)0x00616625, (float*)0x7DCC98); //GCLight sprite maximum brightness 0.5 instead of 0.8
	WriteData((float**)0x0061662B, (float*)0x7DCB5C); //Prevent inversion of the GCLight sprite alpha sign
	WriteCall((void*)0x00615DB5, AntennaSprite);
	WriteCall((void*)0x00616649, AntennaSprite); //This works for GCLight too
	WriteCall((void*)0x00614122, RocketSprite);
	WriteData((char*)0x006165DF, 0x00, 1); //Cone blending mode
	WriteData<1>((void*)0x00619545, 1); //blending mode for poster
	WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass
	WriteData<1>((void*)0x0061A8EA, 0); //blending mode for glass 2
	WriteData<1>((void*)0x0061A951, 0); //blending mode for glass 3
	//WriteCall((void*)0x0061BAA0, FountainPart1);
	//WriteCall((void*)0x0061BAF1, FountainPart2);
	//WriteCall((void*)0x0061BB31, FountainPart3);





	for (unsigned int i = 0; i < 3; i++)
	{
		SpeedHighway1Fog[i].Layer = 2000.0f;
		SpeedHighway1Fog[i].Distance = 5200.0f;
		SpeedHighway3Fog[i].Color = 0xFF7FB2E5;
		SpeedHighway3Fog[i].Layer = 1200.0f;
		SpeedHighway3Fog[i].Distance = 2900.0f;
		SpeedHighway3Fog[i].Toggle = 1;
		SpeedHighway2Fog[i].Layer = 1600.0f;
		SpeedHighway2Fog[i].Distance = 4800.0f;
		SpeedHighway2Fog[i].Color = 0xFF300020;
	}




	/*
	// registering start locations
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicWindyValley0);
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicWindyValley1);
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicWindyValley2);


	helperFunctions.RegisterStartPosition(Characters_Tails, tailsWindyValley2);


	// registering paths
	helperFunctions.RegisterPathList(WV1PathList);
	helperFunctions.RegisterPathList(WV3PathList);*/
}

extern "C"
{
	__declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer, &Init, NULL, 0, NULL, 0, NULL, 0, arrayptrandlength(pointers) };

	__declspec(dllexport) void cdecl Init()
	{

		*(NJS_OBJECT *)0x269A06C = O_StPlant02_AD; //wall plant
		*(NJS_OBJECT *)0x268843C = O_CLIGHT_AD; //pink pyramid light
		*(NJS_OBJECT *)0x26845F8 = O_SIGN1_AD; // roadway sign
		*(NJS_OBJECT *)0x26919C0 = O_Antena_AD; //radio tower
		*(NJS_OBJECT *)0x2699630 = O_StPlant01_AD; //potted plant

		*(NJS_OBJECT *)0x2664354 = O_SIGNB_AD; //Destructable sign
		*(NJS_OBJECT *)0x2674658 = SignBLight_AD; //Sign's light
		*(NJS_OBJECT *)0x266478C = O_SIGNB_BR_AD; //Broken Sign

		*(NJS_MODEL_SADX *)0x267E510 = O_SLIGHT_AD; //blue searchlight
		*(NJS_OBJECT *)0x267E110 = object_001757D4;
		*(NJS_OBJECT *)0x267DE14 = object_00175478;

		*(NJS_OBJECT *)0x2682650 = O_Bench_AD;//bench
		*(NJS_OBJECT *)0x2686688 = O_GREEN_AD;//5-segment bushes
		*(NJS_OBJECT *)0x267F14C = O_ARCADE03_AD;//red overhanger
		*(NJS_OBJECT *)0x267EBDC = O_ARCADE01_AD;//blue overhanger
		*(NJS_OBJECT *)0x267EF6C = O_ARCADE02_AD;//orange overhanger
		*(NJS_OBJECT *)0x26953A8 = O_GREENE_AD;//3-segment bushes
		*(NJS_MODEL_SADX *)0x2684E08 = O_KANBANB_AD;//red sideways sign
		*(NJS_MODEL_SADX *)0x26849A8 = O_KANBANA_AD;//purple sideways sign

		//TankA
		//Version1
		*(NJS_OBJECT *)0x26755B0 = O_TANKA_1_TOP_AD;//main tank
		*(NJS_OBJECT *)0x26751EC = O_TANKA_1_BOTT_AD;//stand
		*(NJS_OBJECT *)0x2676514 = O_TANKA_1_SIDE_AD;//ladder

		*(NJS_OBJECT *)0x2675730 = O_TANKA_1_BR1_AD;//piece 1
		*(NJS_OBJECT *)0x26759CC = O_TANKA_1_BR2_AD;//piece 2
		*(NJS_OBJECT *)0x2675CEC = O_TANKA_1_BR3_AD;//piece 3
		*(NJS_OBJECT *)0x2675F90 = O_TANKA_1_BR4_AD;//piece 4

		//Version2
		*(NJS_OBJECT *)0x2677010 = O_TANKA_2_TOP_AD;//main tank
		*(NJS_OBJECT *)0x2676A4C = O_TANKA_2_BOTT_AD;//stand
		*(NJS_OBJECT *)0x2677FE4 = O_TANKA_2_SIDE_AD;//ladder

		*(NJS_OBJECT *)0x2677288 = O_TANKA_2_BR1_AD;//piece 1
		*(NJS_OBJECT *)0x26774B8 = O_TANKA_2_BR2_AD;//piece 2
		*(NJS_OBJECT *)0x26777D4 = O_TANKA_2_BR3_AD;//piece 3
		*(NJS_OBJECT *)0x2677A4C = O_TANKA_2_BR4_AD;//piece 4

		//Version3
		*(NJS_OBJECT *)0x267890C = O_TANKA_3_TOP_AD;//main tank
		*(NJS_OBJECT *)0x26785FC = O_TANKA_3_BOTT_AD;//stand
		*(NJS_OBJECT *)0x2679A94 = O_TANKA_3_SIDE1_AD;//ladder
		*(NJS_OBJECT *)0x267943C = O_TANKA_3_SIDE2_AD;//pipe

		*(NJS_OBJECT *)0x2678AFC = O_TANKA_3_BR1_AD;//piece 1
		*(NJS_OBJECT *)0x2678D84 = O_TANKA_3_BR2_AD;//piece 2
		*(NJS_OBJECT *)0x2678F90 = O_TANKA_3_BR3_AD;//piece 3
		*(NJS_OBJECT *)0x26791D8 = O_TANKA_3_BR4_AD;//piece 4


		*(NJS_OBJECT *)0x26931BC = O_Fence02_AD;//yellow chevron sign
		*(NJS_OBJECT *)0x2687798 = O_GREEND_AD;//square-potted bush
		*(NJS_OBJECT *)0x2687284 = O_GREENB_AD;//two-layered square-potted bush
		*(NJS_OBJECT *)0x2686C58 = O_GREENA_AD;//single-layered square-potted bush
		*(NJS_OBJECT *)0x2693660 = O_SIBA02_AD;//grassy green circle
		*(NJS_OBJECT *)0x269392C = O_SIBA01_AD;//grassy green square
		*(NJS_OBJECT *)0x267FD9C = O_Nbox_1_AD;//light-blue newspaper box
		*(NJS_OBJECT *)0x2680754 = O_Nbox_2_AD;//light-blue newspaper box (square)
		*(NJS_OBJECT *)0x2681284 = O_Nbox_3_AD;//orange newspaper box
		*(NJS_OBJECT *)0x2681DB4 = O_Nbox_4_AD;//orange newspaper box (square)
		*(NJS_OBJECT *)0x267B63C = O_HIGH_RAFT_C_AD;//white wall platform
		*(NJS_OBJECT *)0x267B354 = O_HIGH_RAFT_A_AD;//orange wall platform

		*(NJS_OBJECT *)0x267DC14 = O_TurnAsi_AD;//180 launcher
		*(NJS_OBJECT *)0x267D3B4 = object_00174D24;
		*(NJS_OBJECT *)0x267C7AC = object_00174720;

		*(NJS_OBJECT *)0x267315C = O_EV_RING_AD;//Square Act 1 elevator ride
		*(NJS_OBJECT *)0x2672B4C = O_EV_PLAT_AD;

		*(NJS_OBJECT *)0x267497C = O_STP4S_AD; //small floating Act 1 platform
		*(NJS_MODEL_SADX *)0x2691FCC = O_Cone1_AD; //red cone
		*(NJS_MODEL_SADX *)0x26925B8 = O_Cone2_AD; //black and yellow cone
		*(NJS_OBJECT *)0x26894C4 = O_LAMP02_AD; //blue streetlight
		*(NJS_OBJECT *)0x2688C64 = O_LAMP01_AD; //light-blue streetlight
		*(NJS_OBJECT *)0x268D704 = O_PINPIN_AD; //metal pin light
		*(NJS_OBJECT *)0x2674BB4 = O_FENCE_AD; //red/pink arrow sign
		*(NJS_OBJECT *)0x2694E94 = O_GG_AD; //blue gate
		*(NJS_OBJECT *)0x269297C = O_CURB_AD; //caution block
		*(NJS_OBJECT *)0x26941A4 = O_FF_AD; //blue arrow sign

		*(NJS_MODEL_SADX *)0x269785C = O_HW_Bell_AD; //bell
		*(NJS_MODEL_SADX *)0x2697B30 = O_HWBell_STICK_AD;

		*(NJS_OBJECT *)0x2685EEC = O_HYDBASS_AD; //fire hydrant

		*(NJS_MODEL_SADX *)0x2696630 = O_Tokei_AD; //clock
		*(NJS_MODEL_SADX *)0x26968C0 = O_Tokei_STICK_AD;

		*(NJS_MODEL_SADX *)0x2697230 = O_Lmpa_AD; //wall lamp
		*(NJS_MODEL_SADX *)0x26969CC = attach_0018D7A4;

		*(NJS_MODEL_SADX *)0x26880B4 = O_LAMP_0_AD; //green street lamp
		*(NJS_MODEL_SADX *)0x2687984 = attach_0017F9F8;
		*(NJS_MODEL_SADX *)0x2687878 = attach_0017F8F4;

		*(NJS_OBJECT *)0x2683CB4 = O_POSTER2_AD; //poster 2
		*(NJS_OBJECT *)0x2683AD4 = O_POSTER0_AD; //poster 0
		*(NJS_OBJECT *)0x2683E94 = O_POSTER1_AD; //poster 1

		*(NJS_OBJECT *)0x267F3E4 = O_Post4_AD; //post4
		*(NJS_OBJECT *)0x267F258 = O_Post1_AD; //post1

		*(NJS_MODEL_SADX*)0x02685474 = attach_0017D1EC; //trashcan
		*(NJS_MODEL_SADX*)0x0268509C = O_BAKETU_AD;


		*(NJS_OBJECT *)0x266387C = O_FOUNT_P1_AD; //fountain middle
		*(NJS_OBJECT *)0x26613AC = O_FOUNT_P3_AD; //fountain bottom
		*(NJS_OBJECT *)0x26623D4 = O_FOUNT_P2_AD; //fountain geysers

		/**(NJS_OBJECT *)0x2682CF4 = O_NEON1_AD; //neon sign 1 //Don't know how to get these working now. Animating textures along with model changes and stuff...there's a few differences with them.
		*(NJS_OBJECT *)0x2683024 = O_NEON2_AD; //neon sign 2
		*(NJS_OBJECT *)0x2683434 = O_NEON3_AD; //neon sign 3
		*(NJS_OBJECT *)0x26838F4 = O_NEON4_AD; //neon sign 4*/

		//CraneLift.pos[2] = 0.0f;

		CraneLift.basicdxmodel->mats[0].attr_texId = 103;
		CraneLift.basicdxmodel->mats[1].attr_texId = 106;
		CraneLift.basicdxmodel->mats[2].attr_texId = 60;
		CraneLift.basicdxmodel->mats[3].attr_texId = 102;
		CraneLift.basicdxmodel->mats[4].attr_texId = 91;
		CraneLights.basicdxmodel->mats[0].attr_texId = 106;
		CraneLights.basicdxmodel->mats[1].attr_texId = 124;
		CraneLights.basicdxmodel->mats[2].attr_texId = 105;
		CraneLights.basicdxmodel->mats[3].attr_texId = 108;
		CraneLights.basicdxmodel->mats[4].attr_texId = 107;
		CraneLight1.basicdxmodel->mats[0].attr_texId = 2;
		CraneLight2.basicdxmodel->mats[0].attr_texId = 3;
		((NJS_OBJECT *)0x02671A20)->basicdxmodel->mats[0].attrflags &= ~NJD_FLAG_USE_ALPHA; //O Crane platform alpha fix
		*(NJS_OBJECT *)0x267225C = O_CRANE_PATH_AD;

		*(NJS_OBJECT *)0x2697C74 = O_HELIP_L_AD;

		*(NJS_OBJECT *)0x268F054 = O_ESCALATOR_AD; //sky walk
		*(NJS_MODEL_SADX *)0x268F180 = O_ESCALATOR_CONVEY2_AD;

		*(NJS_OBJECT *)0x2690DCC = O_ESCALATOR2_AD; //sky walk 2
		*(NJS_MODEL_SADX *)0x2690EF8 = O_ESCALATOR_CONVEY_AD;

		*(NJS_OBJECT *)0x2679ECC = O_STP4T_AD; //big yellow wall platform
		*(NJS_ACTION*)0x02674424 = action_Platform2_action;

		*(NJS_MODEL_SADX *)0x267A1A0 = O_GLASS_AD; //breakable glass
		*(NJS_OBJECT *)0x2679FDC = GLASS_FRAG_1_AD;
		*(NJS_OBJECT *)0x267A2DC = GLASS_FRAG_2_AD;
		*(NJS_OBJECT *)0x267A410 = GLASS_FRAG_3_AD;
		*(NJS_OBJECT *)0x267A56C = GLASS_FRAG_4_AD;
		*(NJS_OBJECT *)0x267A67C = GLASS_FRAG_5_AD;
		*(NJS_OBJECT *)0x267A7B0 = GLASS_FRAG_6_AD;
		*(NJS_OBJECT *)0x267A8C0 = GLASS_FRAG_7_AD;
		*(NJS_OBJECT *)0x267AA7C = GLASS_FRAG_8_AD;
		*(NJS_OBJECT *)0x267ABB0 = GLASS_FRAG_9_AD;
		*(NJS_OBJECT *)0x267ACC0 = GLASS_FRAG_10_AD;
		*(NJS_OBJECT *)0x267ADD0 = GLASS_FRAG_11_AD;
		*(NJS_OBJECT *)0x267AF14 = GLASS_FRAG_12_AD;
		*(NJS_OBJECT *)0x267B06C = GLASS_FRAG_13_AD;

		*(NJS_OBJECT *)0x26981DC = O_TUNGAI_AD; //small box platform

		*(NJS_OBJECT *)0x268C058 = O_HELI_AD; //helicopter
		*(NJS_OBJECT *)0x268C7DC = O_HELI_BLADES_AD;
		*(NJS_OBJECT *)0x268CF20 = O_HELI_LIGHT_AD;

		Missile_SH.basicdxmodel->mats[0].attr_texId = 155;
		Missile_SH.basicdxmodel->mats[1].attr_texId = 155;
		Missile_SH.basicdxmodel->mats[2].attr_texId = 56;
		Missile_SH.basicdxmodel->mats[3].attr_texId = 38;
		Missile_SH.basicdxmodel->mats[4].attr_texId = 90;
		Missile_SH.basicdxmodel->mats[5].attr_texId = 92;
		Missile_SH.basicdxmodel->mats[6].attr_texId = 164;

		//*(NJS_OBJECT *)0x26A5A10 = O_HELI_BLADES_AD;
	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 4)
		{
			if (RocketAlphaDir == 4 && RocketAlpha >= 255) RocketAlphaDir = -4;
			if (RocketAlphaDir == -4 && RocketAlpha <= 0) RocketAlphaDir = 4;
			RocketAlpha = RocketAlpha + RocketAlphaDir;
			AntennaAlpha = RocketAlpha;
		}
	}
}