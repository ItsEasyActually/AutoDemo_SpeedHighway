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
#include "IniFile.hpp"

//Replacement Functions
#define ReplaceBINFile(a, b) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" b ".BIN");
#define ReplacePVMFile(a, b) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" b ".PVM");

//Config Variables
static bool ADSetFile = true;
static bool ADCamFile = true;
static bool AlwaysLauncher = true;
static bool AlwaysBench = true;

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

DataPointer(float, CarLoopTotDist, 0x0819D20);
DataPointer(float, CarLoopSomething, 0x0819D1C);
DataPointer(float, CarLoopSomethingMore, 0x0819D18);

FunctionPointer(void, InitCollision, (ObjectMaster *obj, CollisionData *collisionArray, int count, unsigned __int8 list), 0x41CAF0);
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
FunctionPointer(void, sub_408530, (NJS_OBJECT *a1), 0x408530);

FunctionPointer(void, sub_617940, (ObjectMaster *a1), 0x617940);
FunctionPointer(void, sub_617990, (ObjectMaster *a1), 0x617990);

FunctionPointer(void, SetStatus, (ObjectMaster *a1), 0x0049CD60);
FunctionPointer(void, DynCol_LoadObject, (ObjectMaster *a1), 0x0049E170);
FunctionPointer(void, sub_409E70, (NJS_MODEL_SADX *a1, int a2, float a3), 0x409E70);
FunctionPointer(void, sub_446AF0, (ObjectMaster *a1, int a2), 0x446AF0);

DataPointer(int, DroppedFrames, 0x03B1117C);

//Additional SADX Functions
FunctionPointer(NJS_OBJECT *, DynamicCollision, (NJS_OBJECT *a1, ObjectMaster *a2, ColFlags surfaceFlags), 0x49D6C0);
FunctionPointer(int, rand1, (), 0x6443BF);
DataPointer(int, FramerateSetting, 0x0389D7DC);


static int RocketAlpha = 255;
static int AntennaAlpha = 255;
static int RocketAlphaDir = 4;
int colorrandom = 0;
int colormodebus = 0;
int colormodebug = 0;
int colormodeflat = 0;
int colormodefinal = 0;
bool colorrandomized = false;
bool benchcolorcheat = false;
bool Turnasicheat = true;


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


/*
static const void *const TriggerDeathPlaneDeathptr = (void*)0x446AF0;
static inline Bool TriggerDeathPlaneDeath(ObjectMaster *a1, int a2)
{
	Bool result;
	__asm
	{
		mov eax, [a1]
		call TriggerDeathPlaneDeathptr
		mov result, eax
	}
	return result;
}

void __cdecl DeathPlaneCall(ObjectMaster *a1, int a2)
{
	TriggerDeathPlaneDeath(a1, a2);
}



void __cdecl Act3DeathPlaneFix(ObjectMaster *a1, int a2)
{
	if (CurrentLevel != 4 && CurrentAct != 2)
	{
		DeathPlaneCall(a1, a2);
	}
	return;
}*/



int __cdecl sub_610F50_NEW(int a1)
{
	int v1; // ebp
	int v2; // ebx
	double v3; // st7
	signed int v4; // esi
	int v5; // edi
	float v7; // ST20_4
	unsigned __int8 v8 = 0; // c0
	unsigned __int8 v9 = 0; // c3
	double v10; // st6
	int result; // eax
	float v12; // [esp+14h] [ebp-4h]
	float v13; // [esp+1Ch] [ebp+4h]

	v1 = a1;
	v2 = *(_DWORD *)(a1 + 36);
	v3 = *(float *)(v2 + 60);
	v4 = *(_DWORD *)(v2 + 36);
	v5 = *(_DWORD *)(a1 + 32);
	v13 = *(float *)(v5 + 48);
	v12 = *(float *)(v5 + 44);
	if (v13 == 0.0)
	{
		if (v4 > 0)
		{
			v4 -= 200;
			if (v4 < 0)
			{
				v4 = 0;
			}
		}
		v3 = v3 + 1.0;
		if (v8 | v9)
		{
			if (v3 == 20.0)
			{
				PlaySound(119, 0, 0, 0);
				v7 = v3;
				v3 = v7;
			}
		}
		else
		{
			v3 = 0.0;
			*(char *)v5 &= 0xFEu;
		}
	}
	else
	{
		v13 = v13 - 0.02;
		if (v4 > 2048)
		{
			v4 = 2048;
		}
		v4 += 40;
		if (v13 < 0.0)
		{
			v13 = 0.0;
			v3 = 0.0;
		}
	}
	v10 = v12 + v13;
	if (v10 > PathList_SpeedHighway2_1.TotalDist)
	{
		v10 = v10 - PathList_SpeedHighway2_1.TotalDist;
	}
	*(float *)(v5 + 48) = v13;
	result = *(_DWORD *)(v1 + 36);
	*(float *)(result + 60) = v3;
	*(_DWORD *)(v2 + 36) = v4;
	*(float *)(v5 + 44) = v10;
	return result;
}




void AntenaDrawChange(NJS_OBJECT obj1)
{
	sub_408530(&O_Antena_AD);
	ProcessModelNode(&O_Antena_AD_Z, (QueuedModelFlagsB)0, 1.0f);
}

void __cdecl NewspaperCollision(ObjectMaster *a2, CollisionData *c1, int b1, unsigned __int8 list)
{
	InitCollision(a2, Nbox_Collision, 1, 4u);
};

void __cdecl RadioTower_CollisionReplace(ObjectMaster *a2, CollisionData *c1, int b1, unsigned __int8 list)
{
	InitCollision(a2, RadioTower_Collision, 6, 4u);
};

void __cdecl SetCarTexture()
{
	njSetTexture(&HIGHWAY_CAR_TEXLIST);
}

void __cdecl CarColorRandomizerLoadLevel()
{
	switch (colormodebus)
	{
	case 0:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 16;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 16;
		break;
	case 1:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 16;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 16;
		break;
	case 2:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 17;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 17;
		break;
	case 3:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 18;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 18;
		break;
	case 4:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 19;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 19;
		break;
	case 5:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 20;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 20;
		break;
	case 6:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 21;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 21;
		break;
	case 7:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 22;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 22;
		break;
	default:
		Bus_AD.basicdxmodel->mats[2].attr_texId = 16;
		Deco_Bus_AD.basicdxmodel->mats[2].attr_texId = 16;
		break;
	}
	switch (colormodebug)
	{
	case 0:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 16;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 16;
		break;
	case 1:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 16;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 16;
		break;
	case 2:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 17;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 17;
		break;
	case 3:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 18;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 18;
		break;
	case 4:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 19;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 19;
		break;
	case 5:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 20;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 20;
		break;
	case 6:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 21;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 21;
		break;
	case 7:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 22;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 22;
		break;
	default:
		Bug_AD.basicdxmodel->mats[2].attr_texId = 16;
		object_00161FE8.basicdxmodel->mats[0].attr_texId = 16;
		break;
	}
	switch (colormodeflat)
	{
	case 0:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 16;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 16;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 16;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 16;
		break;
	case 1:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 16;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 16;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 16;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 16;
		break;
	case 2:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 17;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 17;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 17;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 17;
		break;
	case 3:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 18;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 18;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 18;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 18;
		break;
	case 4:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 19;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 19;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 19;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 19;
		break;
	case 5:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 20;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 20;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 20;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 20;
		break;
	case 6:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 21;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 21;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 21;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 21;
		break;
	case 7:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 22;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 22;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 22;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 22;
		break;
	default:
		Flat_Car_AD.basicdxmodel->mats[0].attr_texId = 16;
		object_0015A510.basicdxmodel->mats[0].attr_texId = 16;
		object_0015A240.basicdxmodel->mats[0].attr_texId = 16;
		object_00159D5C.basicdxmodel->mats[0].attr_texId = 16;
		break;
	}
	switch (colormodefinal)
	{
	case 0:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 16;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 16;
		break;
	case 1:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 16;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 16;
		break;
	case 2:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 17;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 17;
		break;
	case 3:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 18;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 18;
		break;
	case 4:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 19;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 19;
		break;
	case 5:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 20;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 20;
		break;
	case 6:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 21;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 21;
		break;
	case 7:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 22;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 22;
		break;
	default:
		Final_Car_AD.basicdxmodel->mats[2].attr_texId = 16;
		Final_Car_AD.basicdxmodel->mats[3].attr_texId = 16;
		break;
	}
}

void __cdecl BellColorChangingDisabler(float a, float r, float g, float b)
{
	//Just do nothing
};

void __cdecl TurnasiStretch()
{
	njPushMatrix(0);
	if (Turnasicheat && !AlwaysLauncher)
	{
		njScale(0, 1.5f, 1, 1);
	}
};

void __cdecl Load_GREENF(ObjectMaster *a1)
{
	{
		EntityData1 *v1;

		v1 = a1->Data1;
		v1->Object = &O_GREENF_AD;
		a1->MainSub = Basic_Main;
		a1->DisplaySub = Basic_Display;
		a1->DeleteSub = (void(__cdecl *)(ObjectMaster *))nullsub;
	}
}

//borrowing from PkR
void HelicopterLight(NJS_OBJECT *a1, QueuedModelFlagsB a2)
{
	ProcessModelNode_A_WrapperB(&O_HELI_LIGHT_AD, QueuedModelFlagsB_EnableZWrite);
	ProcessModelNode_A_WrapperB(&object_00183EA4, QueuedModelFlagsB_EnableZWrite);
	ProcessModelNode_A_WrapperB(&O_HELI_LIGHT_AD_2, QueuedModelFlagsB_SomeTextureThing);
	ProcessModelNode_A_WrapperB(&object_00184060, QueuedModelFlagsB_SomeTextureThing);
}



ObjectListEntry	SpeedHighwayObjectList_list[] = {
	{ 2, 3, 0, 0, 0, Ring_Main, "RING   " },
	{ 2, 2, 0, 0, 0, Spring_Main, "SPRING " },
	{ 2, 2, 0, 0, 0, SpringB_Main, "SPRINGB" },
	{ 3, 3, 0, 0, 0, DashPanel_Main, "O AXPNL" },
	{ 6, 3, 0, 0, 0, SwingSpikeBall_Load, "O IRONB" },
	{ 2, 3, 0, 0, 0, FallingSpikeBall_Load, "O FeBJG" },
	{ 2, 3, 0, 0, 0, Spikes_Main, "O TOGE" },
	{ 3, 3, 0, 0, 0, EmeraldPiece_Load, "O EME P" },
	{ 2, 3, 0, 0, 0, Capsule_Load, "O RELEASE" },
	{ 6, 3, 0, 0, 0, Switch_Main, "O SWITCH" },
	{ 10, 3, 0, 0, 0, Weed_Main, "CMN KUSA" },
	{ 14, 3, 0, 0, 0, DashHoop_Main, "CMN_DRING" },
	{ 2, 3, 0, 0, 0, Balloon_Main, "O BALOON" },
	{ 2, 3, 0, 0, 0, ItemBox_Main, "O ITEMBOX" },
	{ 14, 2, 0, 0, 0, RocketH_Main, "Rocket H" },
	{ 14, 2, 0, 0, 0, RocketHS_Main, "Rocket HS" },
	{ 14, 2, 0, 0, 0, RocketV_Main, "Rocket V" } ,
	{ 14, 2, 0, 0, 0, RocketVS_Main, "Rocket VS" },
	{ 2, 2, 1, 4000000, 0, JumpPanel_Load, "O JPanel" },
	{ 15, 6, 0, 0, 0, CheckPoint_Main, "O Save Point" },
	{ 2, 3, 0, 0, 0, Wall_Main, "WALL" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x007A9140, "O KN HINT" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x0079F860, "SPRINGH" },
	{ 2, 3, 1, 1000000, 0, (ObjectFuncPtr)0x0061C740, "O EV" },
	{ 10, 3, 1, 1000000, 0, (ObjectFuncPtr)0x0061BDC0, "O FOUNT" },
	{ 6, 3, 1, 1000000, 0, (ObjectFuncPtr)0x0061B500, "O CRANE" },
	{ 2, 3, 1, 1000000, 0, (ObjectFuncPtr)0x0061AE80, "O GLASS " },
	{ 2, 3, 1, 2250000, 0, (ObjectFuncPtr)0x0061ACA0, "O GLASS2" },
	{ 6, 3, 0, 0, 0, (ObjectFuncPtr)0x00614E40, "HIGH RAFT A" },
	{ 6, 3, 0, 0, 0, (ObjectFuncPtr)0x00614E60, "HIGH RAFT C" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x0061A330, "O TANKA" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00619960, "O SIGNB" },
	{ 6, 3, 1, 1000000, 0, (ObjectFuncPtr)0x00619340, "O TurnAsi" },
	{ 2, 3, 1, 2.5E+07, 0, (ObjectFuncPtr)0x00618AB0, "O SLIGHT" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006188E0, "O ARCADE01" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006188F0, "O ARCADE02" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00618900, "O ARCADE03" },
	{ 6, 3, 1, 1000000, 0, (ObjectFuncPtr)0x006186D0, "O JAMER" },
	{ 6, 3, 1, 2250000, 0, (ObjectFuncPtr)0x00617C70, "O STP4S" },
	{ 6, 3, 1, 2250000, 0, (ObjectFuncPtr)0x00617F00, "O STP4T" },
	{ 14, 3, 1, 2250000, 0, (ObjectFuncPtr)0x00618030, "O FLYST" },
	{ 2, 3, 1, 160000, 0, (ObjectFuncPtr)0x00617AE0, "O Post1" },
	{ 2, 3, 1, 160000, 0, (ObjectFuncPtr)0x00617B10, "O Post4" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006178F0, "O Nbox1" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00617990, "O Nbox3" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00617940, "O Nbox2" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006179E0, "O Nbox4" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006177C0, "O Bench" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00617780, "O FENCE" },
	{ 6, 3, 1, 6250000, 0, (ObjectFuncPtr)0x00617680, "O NEON1" },
	{ 6, 3, 1, 6250000, 0, (ObjectFuncPtr)0x006176C0, "O NEON2" },
	{ 6, 3, 1, 6250000, 0, (ObjectFuncPtr)0x00617700, "O NEON3" },
	{ 6, 3, 1, 6250000, 0, (ObjectFuncPtr)0x00617740, "O NEON4" },
	{ 2, 3, 1, 160000, 0, (ObjectFuncPtr)0x00617420, "O POSTER0" },
	{ 2, 3, 1, 160000, 0, (ObjectFuncPtr)0x00617440, "O POSTER1" },
	{ 2, 3, 1, 160000, 0, (ObjectFuncPtr)0x00617460, "O POSTER2" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006173D0, "O SIGN1" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00617290, "O KANBANA" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00617330, "O KANBANB" },
	{ 2, 3, 1, 40000, 0, (ObjectFuncPtr)0x00617160, "O BAKETU" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00616C90, "O HYDBASS" },
	{ 6, 3, 0, 0, 0, (ObjectFuncPtr)0x00615810, "O GREEN" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615830, "O GREENA" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615880, "O GREENB" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006158D0, "O GREEND" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00616450, "O LAMP" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00616770, "O CLIGHT" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006163D0, "O LAMP01" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00616410, "O LAMP02" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00616210, "O PinPin" },
	{ 6, 3, 1, 4000000, 0, (ObjectFuncPtr)0x00616150, "O Escalator1" },
	{ 6, 3, 1, 4000000, 0, (ObjectFuncPtr)0x006161B0, "O Escalator2" },
	{ 2, 3, 1, 4000000, 0, (ObjectFuncPtr)0x00615EB0, "O Antena" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615C60, "O Cone1" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615CB0, "O Cone2" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615990, "O Curb" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615940, "O Fence02" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615920, "O GREENE" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615780, "O SIBA01" }, //originally had another object between this one and previous
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006157D0, "O SIBA02" },
	{ 6, 3, 1, 250000, 0, (ObjectFuncPtr)0x00615740, "O Tokei" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006155A0, "O Lmpa" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615410, "O GG" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615450, "O FF" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x006153C0, "O StPlant01" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00615310, "O StPlant02" },
	{ 2, 3, 1, 1000000, 0, (ObjectFuncPtr)0x00613E30, "O HeliA" },
	{ 2, 3, 1, 1000000, 0, (ObjectFuncPtr)0x00613E80, "O HeliB" },
	{ 2, 3, 1, 1000000, 0, (ObjectFuncPtr)0x00615200, "O HW BELL" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614ED0, "O HELIP L" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614E80, "O TUNAGI" },
	{ 2, 3, 1, 2250000, 0, (ObjectFuncPtr)0x00614D80, "O RING2" },
	{ 2, 3, 4, 0, 0, (ObjectFuncPtr)0x004B0DF0, "SPINA A" },
	{ 2, 3, 4, 0, 0, (ObjectFuncPtr)0x004B0F40, "SPINA B" },
	{ 2, 3, 4, 0, 0, (ObjectFuncPtr)0x004B1090, "SPINA C" },
	{ 2, 3, 5, 360000, 0, (ObjectFuncPtr)0x004B3210, "E POLICE" },
	{ 2, 3, 5, 360000, 0, (ObjectFuncPtr)0x004AF190, "E UNI A" },
	{ 2, 3, 5, 360000, 0, (ObjectFuncPtr)0x004AF500, "E UNI B" },
	{ 2, 2, 0, 0, 0, (ObjectFuncPtr)0x004D4700, "C SPHERE" },
	{ 2, 2, 0, 0, 0, (ObjectFuncPtr)0x004D4770, "C CYLINDER" },
	{ 2, 2, 0, 0, 0, (ObjectFuncPtr)0x004D47E0, "C CUBE" },
	{ 2, 2, 0, 0, 0, (ObjectFuncPtr)0x004D4B70, "OTTOTTO" },
	{ 2, 2, 0, 0, 0, (ObjectFuncPtr)0x007A1AA0, "O TIKAL" },
	{ 2, 2, 0, 0, 0, (ObjectFuncPtr)0x007A9C60, "O HINT" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x0079B2F0, "O GRING" }, //where the AD object list cuts off
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614B00, "O GFENCE" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614B30, "O GCURB" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614B60, "O GFENCE02" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614B90, "O GPINPIN" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614BC0, "O GFF" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614BF0, "O GRAFTA" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614C20, "O GRAFTC" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614C50, "O GGRENA" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614C80, "O GGRENB" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614CB0, "O GGREND" },
	{ 2, 3, 0, 0, 0, (ObjectFuncPtr)0x00614CE0, "O GCLIGHT" },
	{ 15, 3, 1, 2250000, 0, (ObjectFuncPtr)0x004C07D0, "O ItemBoxAir" },
	{ 2, 3, 1, 3240000, 0, (ObjectFuncPtr)0x00614380, "MISSILE" },
	{ 2, 3, 0, 0, 0, Load_GREENF, "O GREENF" }, //custom object that was in the unveiling version, but scrapped before the AD. Was placed in Knuckles's layout.
	{ 2, 0, 1, 1000000, 0, (ObjectFuncPtr)0x004D4E10, "NO WATER" } //Used to make sure that standing under the fountain doesn't trigger the screen color change
};

ObjectList SpeedHighwayObjectList = { arraylengthandptrT(SpeedHighwayObjectList_list, int) };


PointerInfo pointers[] = {
	ptrdecl(0x974B78, &SpeedHighwayObjectList),
	ptrdecl(0x974B7C, &SpeedHighwayObjectList),
	ptrdecl(0x974B80, &SpeedHighwayObjectList),
	//ptrdecl(0x97DA88, &landtable_00015828),
	//ptrdecl(0x97DA8C, &landtable_00016420),
	//ptrdecl(0x97DA90, &landtable_00017D74)

	//ptrdecl(0x26A5A9C, &SpeedHighway3DeathZones)
};

PathDataPtr SH1PathList = { levelact(LevelIDs_SpeedHighway, 0), PathList_SpeedHighway0 };
PathDataPtr SH3PathList = { levelact(LevelIDs_SpeedHighway, 2), PathList_SpeedHighway2 };


void Init(const char *path, const HelperFunctions &helperFunctions)
{
	//Replacing PVM Files
	ReplacePVMFile("OBJ_HIGHWAY", "OBJ_HIGHWAY_AD");
	ReplacePVMFile("BG_HIGHWAY", "BG_HIGHWAY_AD");
	ReplacePVMFile("BG_HIGHWAY01", "BG_HIGHWAY01_AD");
	ReplacePVMFile("BG_HIGHWAY02", "BG_HIGHWAY02_AD");
	ReplacePVMFile("BG_HIGHWAY03", "BG_HIGHWAY03_AD");
	ReplacePVMFile("HIGHWAY_CAR", "HIGHWAY_CAR_AD");
	ReplacePVMFile("HIGHWAY01", "HIGHWAY01_AD");
	ReplacePVMFile("HIGHWAY02", "HIGHWAY02_AD");
	ReplacePVMFile("HIGHWAY03", "HIGHWAY03_AD");
	ReplacePVMFile("OBJ_HIGHWAY2", "OBJ_HIGHWAY2_AD");

	//Replacing BIN Files
	ReplaceBINFile("SET0400M", "SET0400M_AD");
	ReplaceBINFile("SET0400S", "SET0400S_AD");
	ReplaceBINFile("SET0401S", "SET0401S_AD");
	ReplaceBINFile("SET0402S", "SET0402S_AD");
	ReplaceBINFile("SET0402K", "SET0402K_AD");
	ReplaceBINFile("CAM0402S", "CAM0402S_AD");
	ReplaceBINFile("CAM0402K", "CAM0402K_AD");

	const IniFile *config = new IniFile(std::string(path) + "\\config.ini");
	ADSetFile = config->getBool("Options", "ADSetFile", false);
	if (ADSetFile)
	{
		ReplaceBINFile("SET0400S", "SET0400S_Orig");
		ReplaceBINFile("SET0401S", "SET0401S_Orig");
		ReplaceBINFile("SET0402S", "SET0402S_Orig");
		ReplaceBINFile("SET0402K", "SET0402K_Orig");
	}
	ADCamFile = config->getBool("Options", "ADCamFile", false);
	if (ADCamFile)
	{
		ReplaceBINFile("CAM0400S", "CAM0400S_Orig");
		ReplaceBINFile("CAM0401S", "CAM0401S_Orig");
		ReplaceBINFile("CAM0402S", "CAM0402S_Orig");
		ReplaceBINFile("CAM0402K", "CAM0402K_Orig");
	}
	AlwaysLauncher = config->getBool("Options", "AlwaysLauncher", false);
	AlwaysBench = config->getBool("Options", "AlwaysBench", false);
	delete config;

	WriteData((LandTable**)0x97DA88, &landtable_00015828);
	WriteData((LandTable**)0x97DA8C, &landtable_00016420);
	WriteData((LandTable**)0x97DA90, &landtable_00017D74);

	ResizeTextureList(&HIGHWAY_CAR_TEXLIST, 24);


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

	WriteCall((void*)0x61378E, HelicopterLight); //from PkR so that lights render as it appears to have been intended.


	WriteJump((void *)0x610F50, sub_610F50_NEW);
	//WriteCall((void*)0x44AFFE, Act3DeathPlaneFix);
	WriteData<1>((void*)0x44AFF0, 0x52u); //New DeathPlane Fix
	WriteData<1>((void*)0x44AFEF, 0x20u); //New DeathPlane Fix


	//WriteCall((void*)0x0061BAA0, FountainPart1);
	//WriteCall((void*)0x0061BAF1, FountainPart2);
	//WriteCall((void*)0x0061BB31, FountainPart3);
	WriteCall((void*)0x6150D6, BellColorChangingDisabler);
	WriteCall((void*)0x618BFA, TurnasiStretch);
	WriteCall((void*)0x61790D, NewspaperCollision);
	WriteCall((void*)0x61795D, NewspaperCollision);
	WriteCall((void*)0x6179AD, NewspaperCollision);
	WriteCall((void*)0x6179FD, NewspaperCollision);
	WriteCall((void*)0x615EBF, RadioTower_CollisionReplace);


	WriteCall((void*)0x615D60, AntenaDrawChange);

	memcpy((void*)0x026682B8, &Final_Car_AD, sizeof(Final_Car_AD));

	*(NJS_OBJECT *)0x2664F10 = Van_Col_AD;
	*(NJS_OBJECT *)0x266518C = Bug_Col_AD;
	*(NJS_OBJECT *)0x2664C8C = FlatCar_Col_AD;

	*(NJS_ACTION *)0x266DA7C = BlueVan_Anim;
	*(NJS_ACTION *)0x266B5F4 = Flat_Anim;
	*(NJS_ACTION *)0x266FDFC = Bug_Anim;

	if ((int)rand() % 2 == 0)
	{
		*(NJS_ACTION *)0x266DA7C = BlueVan2_Anim; //extra
	}

	CarLoopTotDist = PathList_SpeedHighway2_1.TotalDist; //fixing Car path teleporting issue
	CarLoopSomething = (-1 * PathList_SpeedHighway2_1.TotalDist) + 50.0f;
	//CarLoopSomething = -8615.798f + 50.0f;
	//CarLoopSomethingMore = 6200.0f;

	for (unsigned int i = 0; i < 3; i++)
	{
		SpeedHighway1Fog[i].Layer = 2000.0f;
		SpeedHighway1Fog[i].Distance = 5200.0f;
		SpeedHighway3Fog[i].Color = 0xFFE3C0BB;
		SpeedHighway3Fog[i].Layer = 600.0f;
		SpeedHighway3Fog[i].Distance = 2900.0f;
		SpeedHighway3Fog[i].Toggle = 1;
		SpeedHighway2Fog[i].Layer = 1600.0f;
		SpeedHighway2Fog[i].Distance = 4800.0f;
		SpeedHighway2Fog[i].Color = 0xFF300020;
	}



	//Act 3 Path Additional Bullshit
	WriteData((LoopHead**)0x61136E, &PathList_SpeedHighway2_0);
	WriteData((LoopHead**)0x4B3357, &PathList_SpeedHighway2_0);
	WriteData((LoopHead**)0x610AD8, &PathList_SpeedHighway2_1);
	WriteData((LoopHead**)0x6113D2, &PathList_SpeedHighway2_1);
	WriteData((LoopHead**)0x6121B8, &PathList_SpeedHighway2_1);
	//WriteData((void**)0x611029, (float*)&PathList_SpeedHighway2_1.TotalDist);
	
	// registering start locations
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicSpeedHighway00);
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicSpeedHighway01);
	helperFunctions.RegisterStartPosition(Characters_Sonic, sonicSpeedHighway02);

	helperFunctions.RegisterStartPosition(Characters_Tails, milesSpeedHighway00);

	helperFunctions.RegisterStartPosition(Characters_Knuckles, knucklesSpeedHighway02);


	// registering paths
	helperFunctions.RegisterPathList(SH1PathList);
	helperFunctions.RegisterPathList(SH3PathList);
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

		/*
		*(NJS_OBJECT *)0x267DC14 = O_TurnAsi_AD;//180 launcher
		*(NJS_OBJECT *)0x267D3B4 = object_00174D24;
		*(NJS_OBJECT *)0x267C7AC = object_00174720;*/
		memcpy((void*)0x267DC14, &O_TurnAsi_AD, sizeof(O_TurnAsi_AD));
		memcpy((void*)0x267D3B4, &object_00174D24, sizeof(object_00174D24));
		memcpy((void*)0x267C7AC, &object_00174720, sizeof(object_00174720));

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
		*(NJS_MODEL_SADX *)0x2685680 = attach_0017D680;

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

		*(NJS_OBJECT *)0x2682CF4 = O_NEON1_AD; //neon sign 1
		*(NJS_OBJECT *)0x2683024 = O_NEON2_AD; //neon sign 2
		*(NJS_OBJECT *)0x2683434 = O_NEON3_AD; //neon sign 3
		//*(NJS_OBJECT *)0x26838F4 = O_NEON4_AD; //neon sign 4

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
	}

	__declspec(dllexport) void __cdecl OnFrame()
	{
		if (CurrentLevel == 4)
		{
			if (!EntityData1Ptrs[0] && (ControllerPointers[0]->HeldButtons & Buttons_X) && !AlwaysBench) //Blue-red bench color cheat code
			{
				benchcolorcheat = true;
			}

			if (!EntityData1Ptrs[0] && (ControllerPointers[0]->HeldButtons & Buttons_Y) && !AlwaysLauncher) //180-launcher stretch cheat code
			{
				Turnasicheat = false;
			}
			
			if ((benchcolorcheat || AlwaysBench) && O_Bench_AD.basicdxmodel->mats[1].attr_texId != 165)
			{
				O_Bench_AD.basicdxmodel->mats[1].attr_texId = 165;
			}
			else if (!benchcolorcheat && !AlwaysBench && O_Bench_AD.basicdxmodel->mats[1].attr_texId == 165)
			{
				O_Bench_AD.basicdxmodel->mats[1].attr_texId = 93;
			}

			//if (RocketAlphaDir == 4 && RocketAlpha >= 255) RocketAlphaDir = -4;
			//if (RocketAlphaDir == -4 && RocketAlpha <= 0) RocketAlphaDir = 4;
			//RocketAlpha = RocketAlpha + RocketAlphaDir;
			//AntennaAlpha = RocketAlpha;

			if (CurrentAct == 2 && colorrandomized == false)
			{
				colormodebus = rand();
				while (colormodebus > 7)
				{
					colormodebus -= 7;
				}
				colormodebug = rand();
				while (colormodebug > 7)
				{
					colormodebug -= 7;
				}
				colormodeflat = rand();
				while (colormodeflat > 7)
				{
					colormodeflat -= 7;
				}
				colormodefinal = rand();
				while (colormodefinal > 7)
				{
					colormodefinal -= 7;
				}
				CarColorRandomizerLoadLevel();
				colorrandomized = true;
			}
		}

		if ((CurrentLevel == 4 && CurrentAct != 2) || CurrentLevel != 4)
		{
			if (colorrandomized == true)
			{
				colorrandomized = false;
				if ((int)rand() % 2 == 0)
				{
					*(NJS_ACTION *)0x266DA7C = BlueVan2_Anim; //extra
				}
				else
				{
					*(NJS_ACTION *)0x266DA7C = BlueVan_Anim;
				}

			}
		}

		if (CurrentLevel != 4 && (benchcolorcheat == true || Turnasicheat == false))
		{
			if (!AlwaysBench)
			{
				benchcolorcheat = false;
			}

			if (!AlwaysLauncher)
			{
				Turnasicheat = true;
			}
		}
	}
}