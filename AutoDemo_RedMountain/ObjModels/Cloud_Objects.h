#pragma once
#include "SADXModLoader.h"

NJS_MATERIAL matlist_001A2CAC[] = {
	{ { 0xD2B2B2B2 }, { 0x00000000 }, 0, 36, NJD_D_100 | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

NJS_MATERIAL matlist_001A2CAC_2[] = {
	{ { 0xD2B2B2B2 }, { 0x00000000 }, 0, 36, NJD_D_100 | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001A2CC0[] = {
	0, 1, 2, 3
};

NJS_TEX uv_001A2CC8[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 765, 255 },
	{ 765, -510 }
};

NJS_TEX uv_001A2CC8_0[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 765, 255 },
	{ 765, -510 }
};

NJS_TEX uv_001A2CC8_2[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 765, 255 },
	{ 765, -510 }
};

NJS_MESHSET_SADX meshlist_001A2CD8[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_001A2CC0, NULL, NULL, NULL, uv_001A2CC8, NULL }
};

NJS_MESHSET_SADX meshlist_001A2CD8_2[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_001A2CC0, NULL, NULL, NULL, uv_001A2CC8_2, NULL }
};

NJS_VECTOR vertex_001A2CF0[] = {
	{ -1000, -0.0001f, -1000 },
	{ -1000, -0.0001f, 1000 },
	{ 1000, -0.0001f, -1000 },
	{ 1000, -0.0001f, 1000 }
};

NJS_VECTOR normal_001A2D20[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001A2D50 = { vertex_001A2CF0, normal_001A2D20, LengthOfArray<Sint32>(vertex_001A2CF0), meshlist_001A2CD8, matlist_001A2CAC, LengthOfArray<Uint16>(meshlist_001A2CD8), LengthOfArray<Uint16>(matlist_001A2CAC), { 0, -0.0001f, 0 }, 1414.214f, NULL };

NJS_MODEL_SADX attach_001A2D50_2 = { vertex_001A2CF0, normal_001A2D20, LengthOfArray<Sint32>(vertex_001A2CF0), meshlist_001A2CD8_2, matlist_001A2CAC_2, LengthOfArray<Uint16>(meshlist_001A2CD8_2), LengthOfArray<Uint16>(matlist_001A2CAC_2), { 0, -0.0001f, 0 }, 1414.214f, NULL };

NJS_OBJECT object_CloudLayer_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001A2D50, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_CloudLayer_AD_2 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001A2D50_2, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
//cloud layer 1

NJS_MATERIAL matlist_001A2BAC[] = {
	{ { 0xD2B2B2B2 }, { 0x00000000 }, 0, 95, NJD_D_100 | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC } //removed U and V clamps
};

Sint16 poly_001A2BC0[] = {
	0, 1, 2, 3
};

NJS_TEX uv_001A2BC8[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 510, 255 },
	{ 510, -510 }
};

NJS_TEX uv_001A2BC8_1[] = {
	{ 0, 255 },
	{ 0, -510 },
	{ 510, 255 },
	{ 510, -510 }
};

/*
	{ 0, 255 },
	{ 0, 1 },
	{ 255, 255 },
	{ 255, 1 }
*/

NJS_MESHSET_SADX meshlist_001A2BD8[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_001A2BC0, NULL, NULL, NULL, uv_001A2BC8, NULL }
};

NJS_VECTOR vertex_001A2BF0[] = { //modified vertex coords to make it look right with the code (originally 500)
	{ -1000, -0.0001f, -1000 },
	{ -1000, -0.0001f, 1000 },
	{ 1000, -0.0001f, -1000 },
	{ 1000, -0.0001f, 1000 }
};

NJS_VECTOR normal_001A2C20[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001A2C50 = { vertex_001A2BF0, normal_001A2C20, LengthOfArray<Sint32>(vertex_001A2BF0), meshlist_001A2BD8, matlist_001A2BAC, LengthOfArray<Uint16>(meshlist_001A2BD8), LengthOfArray<Uint16>(matlist_001A2BAC), { 0, -0.0001f, 0 }, 707.1068f, NULL };

NJS_OBJECT object_CloudLayer2_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001A2C50, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
//cloud layer 2 (Unreferenced in both AD and final game (still exists in final game))
