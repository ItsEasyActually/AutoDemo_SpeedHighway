#pragma once
#include "SADXModLoader.h"

//bridge models:
NJS_MATERIAL matlist_0019D080[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 38, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 32, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019D0A8[] = {
	2, 0, 5, 3,
	0, 1, 3, 4,
	1, 2, 4, 5
};

Sint16 poly_0019D0C0[] = {
	3, 2, 1, 0,
	3, 3, 4, 5
};

NJS_TEX uv_0019D0D0[] = {
	{ 1012, 1 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 7, 253 },
	{ 1012, 253 },
	{ 1012, 1 },
	{ 7, 253 },
	{ 7, 1 },
	{ 1012, 1 },
	{ 1012, 253 },
	{ 7, 1 },
	{ 7, 253 }
};

NJS_TEX uv_0019D100[] = {
	{ 0, 7 },
	{ 183, 7 },
	{ 91, 255 },
	{ 91, 255 },
	{ 183, 7 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_0019D118[] = {
	{ NJD_MESHSET_4 | 0, 3, poly_0019D0A8, NULL, NULL, NULL, uv_0019D0D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0019D0C0, NULL, NULL, NULL, uv_0019D100, NULL }
};

NJS_VECTOR vertex_0019D148[] = {
	{ 0.001928f, -2.914997f, -20.00098f },
	{ 2.526388f, 1.457499f, -20.00098f },
	{ -2.522535f, 1.457498f, -20.00098f },
	{ 0.001928f, -2.914997f, 19.99807f },
	{ 2.526388f, 1.457499f, 19.99807f },
	{ -2.522535f, 1.457498f, 19.99807f }
};

NJS_VECTOR normal_0019D190[] = {
	{ 0, -0.7071069f, -0.7071069f },
	{ 0.612372f, 0.353554f, -0.7071069f },
	{ -0.612373f, 0.353553f, -0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0.612372f, 0.353554f, 0.7071069f },
	{ -0.612373f, 0.353553f, 0.7071069f }
};

NJS_MODEL_SADX attach_Turi_Plank_AD = { vertex_0019D148, normal_0019D190, LengthOfArray<Sint32>(vertex_0019D148), meshlist_0019D118, matlist_0019D080, LengthOfArray<Uint16>(meshlist_0019D118), LengthOfArray<Uint16>(matlist_0019D080), { 0.001926f, -0.728749f, -0.001451f }, 20.15822f, NULL };

//NJS_OBJECT object_Turi_Plank_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019D1D8, 2.4822f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
//bridge plank/step

NJS_MATERIAL matlist_0019D394[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 32, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019D3A8[] = {
	3, 2, 1, 0,
	3, 3, 4, 5
};

Sint16 poly_0019D3B8[] = {
	2, 0, 5, 3,
	0, 1, 3, 4,
	1, 2, 4, 5
};

NJS_TEX uv_0019D3D0[] = {
	{ 131, 123 },
	{ 3, 123 },
	{ 0 },
	{ 131, 123 },
	{ 3, 123 },
	{ 0 }
};

NJS_TEX uv_0019D3E8[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_0019D418[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0019D3A8, NULL, NULL, NULL, uv_0019D3D0, NULL },
	{ NJD_MESHSET_4 | 0, 3, poly_0019D3B8, NULL, NULL, NULL, uv_0019D3E8, NULL }
};

NJS_VECTOR vertex_0019D448[] = {
	{ 1, 0.511057f, 0.000136f },
	{ 1, -0.275993f, -0.454267f },
	{ 1, -0.275993f, 0.454539f },
	{ 0, 0.5110559f, 0.000136f },
	{ 0, -0.275993f, -0.454267f },
	{ 0, -0.275993f, 0.454539f }
};

NJS_VECTOR normal_0019D490[] = {
	{ 0, 0.7071069f, 0 },
	{ 0, -0.353554f, -0.612372f },
	{ 0, -0.353553f, 0.612373f },
	{ 0, 0.7071069f, 0 },
	{ 0, -0.353554f, -0.612372f },
	{ 0, -0.353553f, 0.612373f }
};

NJS_MODEL_SADX attach_Turi_Horz_AD = { vertex_0019D448, normal_0019D490, LengthOfArray<Sint32>(vertex_0019D448), meshlist_0019D418, matlist_0019D394, LengthOfArray<Uint16>(meshlist_0019D418), LengthOfArray<Uint16>(matlist_0019D394), { 0.003433f, 0.117532f, 0.000136f }, 50, NULL };

//NJS_OBJECT object_0019D500 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019D4D8, 1.0273f, 10.5954f, 17.9594f, 0, 0, 0, 1, 1, 1, NULL, NULL };
//bridge horizontal piece

NJS_MATERIAL matlist_0019D234[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0019D248[] = {
	2, 0, 5, 3,
	0, 1, 3, 4,
	1, 2, 4, 5
};

NJS_TEX uv_0019D260[] = {
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -255 },
	{ 255, -255 },
	{ 0, 255 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0019D290[] = {
	{ NJD_MESHSET_4 | 0, 3, poly_0019D248, NULL, NULL, NULL, uv_0019D260, NULL }
};

NJS_VECTOR vertex_0019D2A8[] = {
	{ -0.000263f, 5.042087f, -0.44399f },
	{ 0.410936f, 5.042087f, 0.268228f },
	{ -0.411462f, 5.042087f, 0.268228f },
	{ -0.000263f, -5.101338f, -0.44399f },
	{ 0.410936f, -5.101338f, 0.268228f },
	{ -0.411462f, -5.101338f, 0.268228f }
};

NJS_VECTOR normal_0019D2F0[] = {
	{ 0, 1, -0.44399f },
	{ 0.410936f, 1, 0.268228f },
	{ -0.410936f, 1, 0.268228f },
	{ 0, 0, -0.44399f },
	{ 0.410936f, 0, 0.268228f },
	{ -0.410936f, 0, 0.268228f }
};

NJS_MODEL_SADX attach_Turi_Vert_AD = { vertex_0019D2A8, normal_0019D2F0, LengthOfArray<Sint32>(vertex_0019D2A8), meshlist_0019D290, matlist_0019D234, LengthOfArray<Uint16>(meshlist_0019D290), LengthOfArray<Uint16>(matlist_0019D234), { -0.000263f, -0.029626f, -0.087881f }, 20, NULL };

//NJS_OBJECT object_0019D360 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0019D338, 2.5137f, 5.3951f, 18.0446f, 0, 0, 0, 1, 1, 1, NULL, NULL };
//bridge vertical piece

NJS_MATERIAL matlist_001410E4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00141134[] = {
	7, 3, 2,
	2, 6, 7
};

Sint16 poly_00141140[] = {
	6, 2, 1,
	6, 1, 5
};

Sint16 poly_0014114C[] = {
	5, 1, 8,
	4, 0, 8,
	8, 0, 5,
	8, 1, 4
};

Sint16 poly_00141164[] = {
	5, 0, 7,
	5, 7, 6,
	0, 4, 3,
	0, 3, 7,
	3, 4, 1,
	3, 1, 2
};

NJS_TEX uv_00141188[] = {
	{ 420, -344 },
	{ 344, -152 },
	{ 498, -127 },
	{ 498, -127 },
	{ 522, -382 },
	{ 420, -344 }
};

NJS_TEX uv_001411A0[] = {
	{ 637, 166 },
	{ 382, 141 },
	{ 382, 0 },
	{ 637, 166 },
	{ 382, 0 },
	{ 637, 0 }
};

NJS_TEX uv_001411B8[] = {
	{ 522, -382 },
	{ 498, -127 },
	{ 458, -235 },
	{ 344, -152 },
	{ 420, -344 },
	{ 458, -235 },
	{ 458, -235 },
	{ 420, -344 },
	{ 522, -382 },
	{ 458, -235 },
	{ 498, -127 },
	{ 344, -152 }
};

NJS_TEX uv_001411E8[] = {
	{ 522, 1 },
	{ 420, 1 },
	{ 420, 116 },
	{ 522, 1 },
	{ 420, 116 },
	{ 522, 167 },
	{ 605, 2 },
	{ 400, 2 },
	{ 400, 232 },
	{ 605, 2 },
	{ 400, 232 },
	{ 605, 117 },
	{ 344, 230 },
	{ 344, 1 },
	{ 498, 1 },
	{ 344, 230 },
	{ 498, 1 },
	{ 498, 141 }
};

NJS_MESHSET_SADX meshlist_00141230[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00141134, NULL, NULL, NULL, uv_00141188, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00141140, NULL, NULL, NULL, uv_001411A0, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_0014114C, NULL, NULL, NULL, uv_001411B8, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_00141164, NULL, NULL, NULL, uv_001411E8, NULL }
};

NJS_VECTOR vertex_00141290[] = {
	{ -3, 7, 8 },
	{ 3, 7, -9 },
	{ 3, -4, -9 },
	{ -9, -11, -7 },
	{ -9, 7, -7 },
	{ 5, 7, 11 },
	{ 4.999998f, -6, 11 },
	{ -3, -2, 8 },
	{ 0, 6, -0.5f }
};

NJS_VECTOR normal_001412FC[] = {
	{ -0.6287079f, 0.6177149f, 0.472393f },
	{ 0.452901f, 0.620376f, -0.640324f },
	{ 0.432311f, -0.806519f, -0.403279f },
	{ -0.800348f, -0.388192f, -0.456891f },
	{ -0.408091f, 0.879276f, -0.245634f },
	{ 0.03092f, 0.756266f, 0.653533f },
	{ 0.728403f, -0.5436569f, 0.416972f },
	{ -0.456926f, -0.505416f, 0.7319649f },
	{ -0.009605f, 0.999946f, -0.003999f }
};

NJS_MODEL_SADX attach_00141368 = { vertex_00141290, normal_001412FC, LengthOfArray<Sint32>(vertex_00141290), meshlist_00141230, matlist_001410E4, LengthOfArray<Uint16>(meshlist_00141230), LengthOfArray<Uint16>(matlist_001410E4), { -2, -2, 1 }, 13.45362f, NULL };

NJS_OBJECT object_00141390 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00141368, 2, 0, 19, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001413C4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00141414[] = {
	1, 4, 7,
	7, 6, 1
};

Sint16 poly_00141420[] = {
	0, 3, 8,
	2, 5, 8,
	8, 3, 2,
	8, 5, 0
};

Sint16 poly_00141438[] = {
	6, 5, 2,
	6, 2, 1,
	2, 3, 4,
	2, 4, 1
};

Sint16 poly_00141450[] = {
	4, 3, 0,
	4, 0, 7,
	0, 5, 6,
	0, 6, 7
};

NJS_TEX uv_00141468[] = {
	{ 510, -625 },
	{ 382, -650 },
	{ 420, -344 },
	{ 420, -344 },
	{ 522, -382 },
	{ 510, -625 }
};

NJS_TEX uv_00141480[] = {
	{ 420, -344 },
	{ 382, -649 },
	{ 452, -516 },
	{ 510, -625 },
	{ 521, -382 },
	{ 452, -516 },
	{ 452, -516 },
	{ 382, -649 },
	{ 510, -625 },
	{ 452, -516 },
	{ 521, -382 },
	{ 420, -344 }
};

NJS_TEX uv_001414B0[] = {
	{ 637, 166 },
	{ 637, 0 },
	{ 880, 0 },
	{ 637, 166 },
	{ 880, 0 },
	{ 880, 192 },
	{ 508, 2 },
	{ 382, 2 },
	{ 382, 117 },
	{ 508, 2 },
	{ 382, 117 },
	{ 508, 194 }
};

NJS_TEX uv_001414E0[] = {
	{ 903, 116 },
	{ 903, 1 },
	{ 597, 1 },
	{ 903, 116 },
	{ 597, 1 },
	{ 597, 116 },
	{ 422, 2 },
	{ 522, 2 },
	{ 522, 168 },
	{ 422, 2 },
	{ 522, 168 },
	{ 422, 117 }
};

NJS_MESHSET_SADX meshlist_00141510[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00141414, NULL, NULL, NULL, uv_00141468, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_00141420, NULL, NULL, NULL, uv_00141480, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_00141438, NULL, NULL, NULL, uv_001414B0, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00141450, NULL, NULL, NULL, uv_001414E0, NULL }
};

NJS_VECTOR vertex_00141570[] = {
	{ -3, 7, -11 },
	{ 4, -8, 11 },
	{ 4, 7, 11 },
	{ -6, 7, 13 },
	{ -6, -2, 13 },
	{ 5, 7, -8 },
	{ 4.999998f, -6, -8 },
	{ -3, -2, -11 },
	{ -0.5f, 7, 2.5f }
};

NJS_VECTOR normal_001415DC[] = {
	{ -0.402657f, 0.628018f, -0.6659279f },
	{ 0.133628f, -0.891728f, 0.432394f },
	{ 0.6390899f, 0.534923f, 0.55265f },
	{ -0.343648f, 0.863261f, 0.369711f },
	{ -0.752033f, -0.302135f, 0.585799f },
	{ 0.525273f, 0.778331f, -0.343933f },
	{ 0.738657f, -0.291867f, -0.607617f },
	{ -0.59039f, -0.65873f, -0.466384f },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_00141648 = { vertex_00141570, normal_001415DC, LengthOfArray<Sint32>(vertex_00141570), meshlist_00141510, matlist_001413C4, LengthOfArray<Uint16>(meshlist_00141510), LengthOfArray<Uint16>(matlist_001413C4), { -0.5f, -0.5f, 1 }, 14.15097f, NULL };

NJS_OBJECT object_00141670 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00141648, 2, 0, 38, 0, 0, 0, 1, 1, 1, NULL, &object_00141390 };

NJS_MATERIAL matlist_001416A4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001416F4[] = {
	6, 5, 7,
	7, 2, 6
};

Sint16 poly_00141700[] = {
	3, 4, 8,
	1, 0, 8,
	8, 4, 1,
	8, 0, 3
};

Sint16 poly_00141718[] = {
	1, 4, 6,
	1, 6, 2,
	5, 6, 4,
	5, 4, 3
};

Sint16 poly_00141730[] = {
	1, 2, 7,
	1, 7, 0,
	0, 7, 5,
	0, 5, 3
};

NJS_TEX uv_00141748[] = {
	{ 255, -626 },
	{ 243, -384 },
	{ 420, -344 },
	{ 420, -344 },
	{ 382, -653 },
	{ 255, -626 }
};

NJS_TEX uv_00141760[] = {
	{ 242, -384 },
	{ 255, -626 },
	{ 338, -486 },
	{ 382, -653 },
	{ 420, -344 },
	{ 338, -486 },
	{ 338, -486 },
	{ 255, -626 },
	{ 382, -653 },
	{ 338, -486 },
	{ 420, -344 },
	{ 242, -384 }
};

NJS_TEX uv_00141790[] = {
	{ 382, 0 },
	{ 254, 0 },
	{ 254, 192 },
	{ 382, 0 },
	{ 254, 192 },
	{ 382, 115 },
	{ 637, 194 },
	{ 880, 194 },
	{ 880, 2 },
	{ 637, 194 },
	{ 880, 2 },
	{ 637, 2 }
};

NJS_TEX uv_001417C0[] = {
	{ 904, 1 },
	{ 904, 116 },
	{ 598, 116 },
	{ 904, 1 },
	{ 598, 116 },
	{ 598, 1 },
	{ 420, 0 },
	{ 420, 114 },
	{ 243, 191 },
	{ 420, 0 },
	{ 243, 191 },
	{ 243, 0 }
};

NJS_MESHSET_SADX meshlist_001417F0[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_001416F4, NULL, NULL, NULL, uv_00141748, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_00141700, NULL, NULL, NULL, uv_00141760, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_00141718, NULL, NULL, NULL, uv_00141790, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00141730, NULL, NULL, NULL, uv_001417C0, NULL }
};

NJS_VECTOR vertex_00141850[] = {
	{ 7, 6, -13 },
	{ 4, 6, 11 },
	{ 4, -3, 11 },
	{ -7, 6, -10 },
	{ -6, 6, 9 },
	{ -7, -9, -10 },
	{ -6, -9, 9 },
	{ 7, -3, -13 },
	{ 0.5f, 5, -2 }
};

NJS_VECTOR normal_001418BC[] = {
	{ 0.151218f, 0.7395729f, -0.6558689f },
	{ 0.440524f, 0.614834f, 0.6541539f },
	{ 0.667402f, -0.442065f, 0.5992939f },
	{ -0.437392f, 0.829767f, -0.346663f },
	{ -0.67564f, 0.658875f, 0.330748f },
	{ -0.6968819f, -0.316609f, -0.643517f },
	{ -0.179537f, -0.644245f, 0.743448f },
	{ 0.813284f, -0.542887f, -0.209388f },
	{ -0.003331f, 0.999992f, -0.002224f }
};

NJS_MODEL_SADX attach_00141928 = { vertex_00141850, normal_001418BC, LengthOfArray<Sint32>(vertex_00141850), meshlist_001417F0, matlist_001416A4, LengthOfArray<Uint16>(meshlist_001417F0), LengthOfArray<Uint16>(matlist_001416A4), { 0, -1.5f, -1 }, 14.15097f, NULL };

NJS_OBJECT object_00141950 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00141928, -8, 1, 40, 0, 0, 0, 1, 1, 1, NULL, &object_00141670 };

NJS_MATERIAL matlist_00141984[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001419D4[] = {
	2, 0, 1,
	2, 1, 3,
	1, 4, 5,
	1, 5, 3
};

Sint16 poly_001419EC[] = {
	5, 6, 2,
	2, 3, 5
};

Sint16 poly_001419F8[] = {
	7, 4, 8,
	1, 0, 8,
	8, 4, 1,
	8, 0, 7
};

Sint16 poly_00141A10[] = {
	5, 4, 7,
	5, 7, 6,
	7, 0, 2,
	7, 2, 6
};

NJS_TEX uv_00141A28[] = {
	{ 382, 141 },
	{ 382, 0 },
	{ 114, 0 },
	{ 382, 141 },
	{ 114, 0 },
	{ 114, 192 },
	{ 254, 0 },
	{ 380, 0 },
	{ 380, 115 },
	{ 254, 0 },
	{ 380, 115 },
	{ 254, 192 }
};

NJS_TEX uv_00141A58[] = {
	{ 382, 114 },
	{ 344, -153 },
	{ 266, -128 },
	{ 266, -128 },
	{ 255, 140 },
	{ 382, 114 }
};

NJS_TEX uv_00141A70[] = {
	{ 344, -153 },
	{ 382, 114 },
	{ 324, -6 },
	{ 254, 140 },
	{ 266, -127 },
	{ 324, -6 },
	{ 324, -6 },
	{ 382, 114 },
	{ 254, 140 },
	{ 324, -6 },
	{ 266, -127 },
	{ 344, -153 }
};

NJS_TEX uv_00141AA0[] = {
	{ 139, 117 },
	{ 139, 2 },
	{ 406, 2 },
	{ 139, 117 },
	{ 406, 2 },
	{ 406, 231 },
	{ 344, 2 },
	{ 268, 2 },
	{ 268, 142 },
	{ 344, 2 },
	{ 268, 142 },
	{ 344, 231 }
};

NJS_MESHSET_SADX meshlist_00141AD0[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_001419D4, NULL, NULL, NULL, uv_00141A28, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_001419EC, NULL, NULL, NULL, uv_00141A58, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_001419F8, NULL, NULL, NULL, uv_00141A70, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00141A10, NULL, NULL, NULL, uv_00141AA0, NULL }
};

NJS_VECTOR vertex_00141B30[] = {
	{ -3.999998f, 7, 10 },
	{ -4.999999f, 7, -11 },
	{ -3.999998f, -4, 10 },
	{ -4.999999f, -8, -11 },
	{ 5, 7, -9 },
	{ 5, -2, -9 },
	{ 2, -11, 12 },
	{ 2, 7, 12 },
	{ 0.500001f, 7, 0.5f }
};

NJS_VECTOR normal_00141B9C[] = {
	{ -0.507234f, 0.771403f, 0.384254f },
	{ -0.506196f, 0.630576f, -0.5883369f },
	{ -0.768061f, -0.419582f, 0.483771f },
	{ -0.259354f, -0.71074f, -0.653899f },
	{ 0.479794f, 0.809051f, -0.339461f },
	{ 0.6708609f, -0.461872f, -0.5801899f },
	{ 0.026903f, -0.680152f, 0.732578f },
	{ 0.414472f, 0.615198f, 0.67063f },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_00141C08 = { vertex_00141B30, normal_00141B9C, LengthOfArray<Sint32>(vertex_00141B30), meshlist_00141AD0, matlist_00141984, LengthOfArray<Uint16>(meshlist_00141AD0), LengthOfArray<Uint16>(matlist_00141984), { 0, -2, 0.5f }, 14.60308f, NULL };

NJS_OBJECT object_00141C30 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00141C08, -9, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00141950 };

NJS_MATERIAL matlist_00141C64[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00141CB4[] = {
	7, 6, 2,
	2, 3, 7
};

Sint16 poly_00141CC0[] = {
	6, 5, 1,
	6, 1, 2
};

Sint16 poly_00141CCC[] = {
	0, 4, 8,
	1, 5, 8,
	8, 5, 0,
	8, 4, 1
};

Sint16 poly_00141CE4[] = {
	1, 4, 3,
	1, 3, 2,
	4, 0, 7,
	4, 7, 3,
	0, 5, 6,
	0, 6, 7
};

NJS_TEX uv_00141D08[] = {
	{ 420, -344 },
	{ 243, -382 },
	{ 268, -127 },
	{ 268, -127 },
	{ 344, -152 },
	{ 420, -344 }
};

NJS_TEX uv_00141D20[] = {
	{ 637, 195 },
	{ 637, 23 },
	{ 382, 23 },
	{ 637, 195 },
	{ 382, 23 },
	{ 382, 149 }
};

NJS_TEX uv_00141D38[] = {
	{ 420, -344 },
	{ 344, -153 },
	{ 292, -268 },
	{ 266, -128 },
	{ 242, -382 },
	{ 292, -268 },
	{ 292, -268 },
	{ 242, -382 },
	{ 420, -344 },
	{ 292, -268 },
	{ 344, -153 },
	{ 266, -128 }
};

NJS_TEX uv_00141D68[] = {
	{ 266, 24 },
	{ 344, 24 },
	{ 344, 230 },
	{ 266, 24 },
	{ 344, 230 },
	{ 266, 150 },
	{ 406, 24 },
	{ 598, 24 },
	{ 598, 128 },
	{ 406, 24 },
	{ 598, 128 },
	{ 406, 231 },
	{ 420, 24 },
	{ 242, 24 },
	{ 242, 196 },
	{ 420, 24 },
	{ 242, 196 },
	{ 420, 127 }
};

NJS_MESHSET_SADX meshlist_00141DB0[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00141CB4, NULL, NULL, NULL, uv_00141D08, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00141CC0, NULL, NULL, NULL, uv_00141D20, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_00141CCC, NULL, NULL, NULL, uv_00141D38, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_00141CE4, NULL, NULL, NULL, uv_00141D68, NULL }
};

NJS_VECTOR vertex_00141E10[] = {
	{ 8, 7, 7 },
	{ -3.999998f, 7, -10 },
	{ -3.999998f, -4, -10 },
	{ 2, -11, -8 },
	{ 2, 7, -8 },
	{ -6, 7, 10 },
	{ -6, -8, 10 },
	{ 8, -2, 7 },
	{ -2, 9, 1 }
};

NJS_VECTOR normal_00141E7C[] = {
	{ 0.5380819f, 0.6293629f, 0.560686f },
	{ -0.526552f, 0.521717f, -0.671234f },
	{ -0.559708f, -0.749352f, -0.353834f },
	{ 0.434176f, -0.226849f, -0.871798f },
	{ 0.667784f, 0.520884f, -0.531737f },
	{ -0.519606f, 0.736744f, 0.432686f },
	{ -0.546146f, -0.41588f, 0.727165f },
	{ 0.752556f, -0.596824f, 0.278316f },
	{ -0.046291f, 0.998523f, -0.028441f }
};

NJS_MODEL_SADX attach_00141EE8 = { vertex_00141E10, normal_00141E7C, LengthOfArray<Sint32>(vertex_00141E10), meshlist_00141DB0, matlist_00141C64, LengthOfArray<Uint16>(meshlist_00141DB0), LengthOfArray<Uint16>(matlist_00141C64), { 1, -1, 0 }, 14.14214f, NULL };

NJS_OBJECT object_00141F10 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00141EE8, -9, 0, 20, 0, 0, 0, 1, 1, 1, NULL, &object_00141C30 };

NJS_MATERIAL matlist_00141F44[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00141F94[] = {
	0, 1, 8,
	4, 7, 8,
	8, 1, 4,
	8, 7, 0
};

Sint16 poly_00141FAC[] = {
	2, 3, 1,
	2, 1, 0,
	4, 1, 3,
	4, 3, 5
};

Sint16 poly_00141FC4[] = {
	5, 3, 2,
	2, 6, 5
};

Sint16 poly_00141FD0[] = {
	5, 6, 7,
	5, 7, 4,
	2, 0, 7,
	2, 7, 6
};

NJS_TEX uv_00141FE8[] = {
	{ 496, -127 },
	{ 510, 140 },
	{ 428, -6 },
	{ 382, 114 },
	{ 344, -153 },
	{ 428, -6 },
	{ 428, -6 },
	{ 510, 140 },
	{ 382, 114 },
	{ 428, -6 },
	{ 344, -153 },
	{ 496, -127 }
};

NJS_TEX uv_00142018[] = {
	{ 382, 152 },
	{ 114, 198 },
	{ 114, 25 },
	{ 382, 152 },
	{ 114, 25 },
	{ 382, 25 },
	{ 380, 24 },
	{ 508, 24 },
	{ 508, 197 },
	{ 380, 24 },
	{ 508, 197 },
	{ 380, 127 }
};

NJS_TEX uv_00142048[] = {
	{ 382, 114 },
	{ 510, 140 },
	{ 496, -128 },
	{ 496, -128 },
	{ 344, -153 },
	{ 382, 114 }
};

NJS_TEX uv_00142060[] = {
	{ 140, 129 },
	{ 408, 232 },
	{ 408, 25 },
	{ 140, 129 },
	{ 408, 25 },
	{ 140, 25 },
	{ 496, 151 },
	{ 496, 25 },
	{ 344, 25 },
	{ 496, 151 },
	{ 344, 25 },
	{ 344, 231 }
};

NJS_MESHSET_SADX meshlist_00142090[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_00141F94, NULL, NULL, NULL, uv_00141FE8, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_00141FAC, NULL, NULL, NULL, uv_00142018, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00141FC4, NULL, NULL, NULL, uv_00142048, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00141FD0, NULL, NULL, NULL, uv_00142060, NULL }
};

NJS_VECTOR vertex_001420F0[] = {
	{ 5, 7, 10 },
	{ 6, 7, -11 },
	{ 5, -4, 10 },
	{ 6, -8, -11 },
	{ -4, 7, -9 },
	{ -4, -2, -9 },
	{ -7, -11, 12 },
	{ -7, 7, 12 },
	{ -0.5f, 9, 0.5f }
};

NJS_VECTOR normal_0014215C[] = {
	{ 0.550916f, 0.702467f, 0.45059f },
	{ 0.687005f, 0.636434f, -0.350678f },
	{ 0.66514f, -0.497503f, 0.556848f },
	{ 0.059821f, -0.436134f, -0.897891f },
	{ -0.5116799f, 0.5409679f, -0.667485f },
	{ -0.707189f, -0.543203f, -0.452564f },
	{ -0.355225f, -0.78514f, 0.5073169f },
	{ -0.604211f, 0.5755129f, 0.551103f },
	{ -0.017935f, 0.9997759f, -0.011204f }
};

NJS_MODEL_SADX attach_001421C8 = { vertex_001420F0, normal_0014215C, LengthOfArray<Sint32>(vertex_001420F0), meshlist_00142090, matlist_00141F44, LengthOfArray<Uint16>(meshlist_00142090), LengthOfArray<Uint16>(matlist_00141F44), { -0.5f, -1, 0.5f }, 15.23975f, NULL };

NJS_OBJECT object_O_Breakstep2_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001421C8, -6, -7, -20, 0, 0, 0, 1, 1, 1, &object_00141F10, NULL };
//crumbling bridge 2

NJS_MATERIAL matlist_00142224[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00142274[] = {
	7, 6, 5,
	5, 2, 7
};

Sint16 poly_00142280[] = {
	5, 6, 4,
	5, 4, 3,
	0, 4, 6,
	0, 6, 7
};

Sint16 poly_00142298[] = {
	3, 4, 8,
	0, 1, 8,
	8, 4, 0,
	8, 1, 3
};

Sint16 poly_001422B0[] = {
	3, 1, 2,
	3, 2, 5,
	1, 0, 7,
	1, 7, 2
};

NJS_TEX uv_001422C8[] = {
	{ 636, -636 },
	{ 508, -624 },
	{ 521, -382 },
	{ 521, -382 },
	{ 636, -344 },
	{ 636, -636 }
};

NJS_TEX uv_001422E0[] = {
	{ 637, 173 },
	{ 879, 195 },
	{ 879, 25 },
	{ 637, 173 },
	{ 879, 25 },
	{ 637, 25 },
	{ 637, 24 },
	{ 510, 24 },
	{ 510, 195 },
	{ 637, 24 },
	{ 510, 195 },
	{ 637, 161 }
};

NJS_TEX uv_00142310[] = {
	{ 521, -382 },
	{ 508, -624 },
	{ 573, -484 },
	{ 637, -637 },
	{ 637, -344 },
	{ 573, -484 },
	{ 573, -484 },
	{ 508, -624 },
	{ 637, -637 },
	{ 573, -484 },
	{ 637, -344 },
	{ 521, -382 }
};

NJS_TEX uv_00142340[] = {
	{ 521, 24 },
	{ 637, 24 },
	{ 637, 218 },
	{ 521, 24 },
	{ 637, 218 },
	{ 521, 173 },
	{ 598, 24 },
	{ 892, 24 },
	{ 892, 160 },
	{ 598, 24 },
	{ 892, 160 },
	{ 598, 217 }
};

NJS_MESHSET_SADX meshlist_00142370[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00142274, NULL, NULL, NULL, uv_001422C8, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_00142280, NULL, NULL, NULL, uv_001422E0, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_00142298, NULL, NULL, NULL, uv_00142310, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_001422B0, NULL, NULL, NULL, uv_00142340, NULL }
};

NJS_VECTOR vertex_001423D0[] = {
	{ 4, 7, 10 },
	{ 4, 7, -13 },
	{ 4, -10, -13 },
	{ -5, 7, -10 },
	{ -6, 7, 9 },
	{ -5, -6, -10 },
	{ -6, -8, 9 },
	{ 4, -5, 10 },
	{ -1, 9, -2 }
};

NJS_VECTOR normal_0014243C[] = {
	{ 0.371545f, 0.615422f, 0.695133f },
	{ 0.665265f, 0.6379279f, -0.387904f },
	{ 0.013429f, -0.475756f, -0.879475f },
	{ -0.591073f, 0.5277089f, -0.610045f },
	{ -0.759679f, 0.5702119f, 0.312645f },
	{ -0.748329f, -0.592831f, -0.297583f },
	{ -0.397936f, -0.419284f, 0.815995f },
	{ 0.648511f, -0.654619f, 0.388469f },
	{ -0.033527f, 0.999316f, -0.015619f }
};

NJS_MODEL_SADX attach_001424A8 = { vertex_001423D0, normal_0014243C, LengthOfArray<Sint32>(vertex_001423D0), meshlist_00142370, matlist_00142224, LengthOfArray<Uint16>(meshlist_00142370), LengthOfArray<Uint16>(matlist_00142224), { -1, -0.5f, -1.5f }, 14.91643f, NULL };

NJS_OBJECT object_001424D0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001424A8, -9, -1, 39, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00142504[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00142554[] = {
	7, 1, 4,
	4, 3, 7
};

Sint16 poly_00142560[] = {
	7, 6, 0,
	7, 0, 1
};

Sint16 poly_0014256C[] = {
	2, 5, 8,
	0, 6, 8,
	8, 6, 2,
	8, 5, 0
};

Sint16 poly_00142584[] = {
	2, 6, 7,
	2, 7, 3,
	5, 2, 3,
	5, 3, 4,
	0, 5, 4,
	0, 4, 1
};

NJS_TEX uv_001425A8[] = {
	{ 522, -382 },
	{ 496, -127 },
	{ 612, -165 },
	{ 612, -165 },
	{ 637, -344 },
	{ 522, -382 }
};

NJS_TEX uv_001425C0[] = {
	{ 637, 173 },
	{ 637, 25 },
	{ 382, 25 },
	{ 637, 173 },
	{ 382, 25 },
	{ 382, 151 }
};

NJS_TEX uv_001425D8[] = {
	{ 637, -344 },
	{ 613, -165 },
	{ 568, -274 },
	{ 498, -127 },
	{ 522, -382 },
	{ 568, -274 },
	{ 568, -274 },
	{ 522, -382 },
	{ 637, -344 },
	{ 568, -274 },
	{ 613, -165 },
	{ 498, -127 }
};

NJS_TEX uv_00142608[] = {
	{ 637, 21 },
	{ 522, 21 },
	{ 522, 169 },
	{ 637, 21 },
	{ 522, 169 },
	{ 637, 215 },
	{ 420, 24 },
	{ 597, 24 },
	{ 597, 217 },
	{ 420, 24 },
	{ 597, 217 },
	{ 420, 138 },
	{ 496, 21 },
	{ 612, 21 },
	{ 612, 135 },
	{ 496, 21 },
	{ 612, 135 },
	{ 496, 146 }
};

NJS_MESHSET_SADX meshlist_00142650[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_00142554, NULL, NULL, NULL, uv_001425A8, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00142560, NULL, NULL, NULL, uv_001425C0, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_0014256C, NULL, NULL, NULL, uv_001425D8, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_00142584, NULL, NULL, NULL, uv_00142608, NULL }
};

NJS_VECTOR vertex_001426B0[] = {
	{ -4.999999f, 7, -10 },
	{ -4.999999f, -4, -10 },
	{ 6, 7, 7 },
	{ 6, -10, 7 },
	{ 4, -3, -7 },
	{ 4, 7, -7 },
	{ -3, 7, 10 },
	{ -3, -6, 10 },
	{ 0.5f, 9, 1.5f }
};

NJS_VECTOR normal_0014271C[] = {
	{ -0.542071f, 0.5983239f, -0.5900559f },
	{ -0.360762f, -0.666423f, -0.652481f },
	{ 0.611384f, 0.547474f, 0.571386f },
	{ 0.901222f, -0.402004f, 0.161841f },
	{ 0.388685f, -0.5388269f, -0.7473879f },
	{ 0.752319f, 0.51809f, -0.406939f },
	{ -0.400703f, 0.7423159f, 0.537034f },
	{ -0.5690179f, -0.606354f, 0.555475f },
	{ 0.033796f, 0.9993539f, 0.012209f }
};

NJS_MODEL_SADX attach_00142788 = { vertex_001426B0, normal_0014271C, LengthOfArray<Sint32>(vertex_001426B0), meshlist_00142650, matlist_00142504, LengthOfArray<Uint16>(meshlist_00142650), LengthOfArray<Uint16>(matlist_00142504), { 0.5f, -0.5f, 0 }, 13.79311f, NULL };

NJS_OBJECT object_001427B0 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00142788, -11, -1, 19, 0, 0, 0, 1, 1, 1, NULL, &object_001424D0 };

NJS_MATERIAL matlist_001427E4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00142834[] = {
	2, 0, 1,
	2, 1, 3,
	1, 4, 5,
	1, 5, 3
};

Sint16 poly_0014284C[] = {
	5, 6, 2,
	2, 3, 5
};

Sint16 poly_00142858[] = {
	7, 4, 8,
	1, 0, 8,
	8, 4, 1,
	8, 0, 7
};

Sint16 poly_00142870[] = {
	5, 4, 7,
	5, 7, 6,
	7, 0, 2,
	7, 2, 6
};

NJS_TEX uv_00142888[] = {
	{ 382, 145 },
	{ 382, 14 },
	{ 114, 14 },
	{ 382, 145 },
	{ 114, 14 },
	{ 114, 193 },
	{ 510, 13 },
	{ 637, 13 },
	{ 637, 132 },
	{ 510, 13 },
	{ 637, 132 },
	{ 510, 192 }
};

NJS_TEX uv_001428B8[] = {
	{ 637, 127 },
	{ 612, -165 },
	{ 496, -127 },
	{ 496, -127 },
	{ 510, 140 },
	{ 637, 127 }
};

NJS_TEX uv_001428D0[] = {
	{ 612, -165 },
	{ 637, 127 },
	{ 566, 0 },
	{ 510, 140 },
	{ 496, -127 },
	{ 566, 0 },
	{ 566, 0 },
	{ 637, 127 },
	{ 510, 140 },
	{ 566, 0 },
	{ 496, -127 },
	{ 612, -165 }
};

NJS_TEX uv_00142900[] = {
	{ 128, 133 },
	{ 128, 13 },
	{ 420, 13 },
	{ 128, 133 },
	{ 420, 13 },
	{ 420, 133 },
	{ 610, 13 },
	{ 496, 13 },
	{ 496, 144 },
	{ 610, 13 },
	{ 496, 144 },
	{ 610, 132 }
};

NJS_MESHSET_SADX meshlist_00142930[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_00142834, NULL, NULL, NULL, uv_00142888, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_0014284C, NULL, NULL, NULL, uv_001428B8, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_00142858, NULL, NULL, NULL, uv_001428D0, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00142870, NULL, NULL, NULL, uv_00142900, NULL }
};

NJS_VECTOR vertex_00142990[] = {
	{ -4.999999f, 6, 10 },
	{ -3.999999f, 6, -11 },
	{ -4.999999f, -5, 10 },
	{ -3.999999f, -9, -11 },
	{ 6, 6, -10 },
	{ 6, -4, -10 },
	{ 4, -4, 13 },
	{ 4, 6, 13 },
	{ 0.5f, 7, 0 }
};

NJS_VECTOR normal_001429FC[] = {
	{ -0.572253f, 0.735334f, 0.363058f },
	{ -0.558301f, 0.555967f, -0.615792f },
	{ -0.607377f, -0.544022f, 0.578907f },
	{ -0.360453f, -0.671613f, -0.64731f },
	{ 0.512599f, 0.768289f, -0.383372f },
	{ 0.739208f, -0.510373f, -0.43942f },
	{ 0.479209f, -0.605079f, 0.635797f },
	{ 0.46529f, 0.595053f, 0.6553f },
	{ -0.000703f, 1, -0.000286f }
};

NJS_MODEL_SADX attach_00142A68 = { vertex_00142990, normal_001429FC, LengthOfArray<Sint32>(vertex_00142990), meshlist_00142930, matlist_001427E4, LengthOfArray<Uint16>(meshlist_00142930), LengthOfArray<Uint16>(matlist_001427E4), { 0.5f, -1, 1 }, 14.4222f, NULL };

NJS_OBJECT object_00142A90 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00142A68, -11, 0, -1, 0, 0, 0, 1, 1, 1, NULL, &object_001427B0 };

NJS_MATERIAL matlist_00142AC4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00142B14[] = {
	5, 2, 7,
	5, 7, 6,
	1, 0, 5,
	1, 5, 6
};

Sint16 poly_00142B2C[] = {
	7, 4, 1,
	1, 6, 7
};

Sint16 poly_00142B38[] = {
	3, 2, 8,
	5, 0, 8,
	8, 0, 3,
	8, 2, 5
};

Sint16 poly_00142B50[] = {
	2, 3, 4,
	2, 4, 7,
	3, 0, 1,
	3, 1, 4
};

NJS_TEX uv_00142B68[] = {
	{ 764, 14 },
	{ 636, 14 },
	{ 636, 159 },
	{ 764, 14 },
	{ 636, 159 },
	{ 764, 195 },
	{ 637, 193 },
	{ 637, 12 },
	{ 879, 12 },
	{ 637, 193 },
	{ 879, 12 },
	{ 879, 193 }
};

NJS_TEX uv_00142B98[] = {
	{ 637, -638 },
	{ 637, -344 },
	{ 750, -382 },
	{ 750, -382 },
	{ 764, -625 },
	{ 637, -638 }
};

NJS_TEX uv_00142BB0[] = {
	{ 637, -344 },
	{ 637, -637 },
	{ 693, -510 },
	{ 764, -625 },
	{ 750, -382 },
	{ 693, -510 },
	{ 693, -510 },
	{ 750, -382 },
	{ 637, -344 },
	{ 693, -510 },
	{ 637, -637 },
	{ 764, -625 }
};

NJS_TEX uv_00142BE0[] = {
	{ 892, 14 },
	{ 598, 14 },
	{ 598, 220 },
	{ 892, 14 },
	{ 598, 220 },
	{ 892, 160 },
	{ 637, 11 },
	{ 750, 11 },
	{ 750, 192 },
	{ 637, 11 },
	{ 750, 192 },
	{ 637, 216 }
};

NJS_MESHSET_SADX meshlist_00142C10[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_00142B14, NULL, NULL, NULL, uv_00142B68, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00142B2C, NULL, NULL, NULL, uv_00142B98, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_00142B38, NULL, NULL, NULL, uv_00142BB0, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00142B50, NULL, NULL, NULL, uv_00142BE0, NULL }
};

NJS_VECTOR vertex_00142C70[] = {
	{ 4, 8, -10 },
	{ 4.000002f, -7, -10 },
	{ -5, 8, 10 },
	{ -5, 8, -13 },
	{ -5, -9, -13 },
	{ 5, 8, 9 },
	{ 5, -7, 9 },
	{ -5, -4, 10 },
	{ -0.5f, 9, 0 }
};

NJS_VECTOR normal_00142CDC[] = {
	{ 0.562629f, 0.722671f, -0.401491f },
	{ 0.688688f, -0.532732f, -0.491839f },
	{ -0.682481f, 0.638326f, 0.356033f },
	{ -0.194818f, 0.69146f, -0.69565f },
	{ -0.78447f, -0.492852f, -0.376436f },
	{ 0.651612f, 0.53589f, 0.536864f },
	{ 0.514236f, -0.60664f, 0.606258f },
	{ -0.305653f, -0.624526f, 0.7187099f },
	{ 0.004425f, 0.999988f, 0.001843f }
};

NJS_MODEL_SADX attach_00142D48 = { vertex_00142C70, normal_00142CDC, LengthOfArray<Sint32>(vertex_00142C70), meshlist_00142C10, matlist_00142AC4, LengthOfArray<Uint16>(meshlist_00142C10), LengthOfArray<Uint16>(matlist_00142AC4), { 0, 0, -1.5f }, 14.60308f, NULL };

NJS_OBJECT object_00142D70 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00142D48, 0, -2, 39, 0, 0, 0, 1, 1, 1, NULL, &object_00142A90 };

NJS_MATERIAL matlist_00142DA4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00142DF4[] = {
	0, 2, 8,
	7, 3, 8,
	8, 3, 0,
	8, 2, 7
};

Sint16 poly_00142E0C[] = {
	1, 4, 2,
	1, 2, 0
};

Sint16 poly_00142E18[] = {
	1, 5, 6,
	6, 4, 1
};

Sint16 poly_00142E24[] = {
	3, 5, 1,
	3, 1, 0,
	3, 7, 6,
	3, 6, 5,
	7, 2, 4,
	7, 4, 6
};

NJS_TEX uv_00142E48[] = {
	{ 752, -382 },
	{ 776, -127 },
	{ 706, -235 },
	{ 612, -165 },
	{ 637, -344 },
	{ 706, -235 },
	{ 706, -235 },
	{ 637, -344 },
	{ 752, -382 },
	{ 706, -235 },
	{ 776, -127 },
	{ 612, -165 }
};

NJS_TEX uv_00142E78[] = {
	{ 637, 195 },
	{ 382, 147 },
	{ 382, 14 },
	{ 637, 195 },
	{ 382, 14 },
	{ 637, 14 }
};

NJS_TEX uv_00142E90[] = {
	{ 750, -382 },
	{ 637, -344 },
	{ 610, -165 },
	{ 610, -165 },
	{ 776, -127 },
	{ 750, -382 }
};

NJS_TEX uv_00142EA8[] = {
	{ 637, 12 },
	{ 637, 216 },
	{ 752, 192 },
	{ 637, 12 },
	{ 752, 192 },
	{ 752, 12 },
	{ 598, 13 },
	{ 420, 13 },
	{ 420, 134 },
	{ 598, 13 },
	{ 420, 134 },
	{ 598, 218 },
	{ 610, 12 },
	{ 776, 12 },
	{ 776, 144 },
	{ 610, 12 },
	{ 776, 144 },
	{ 610, 132 }
};

NJS_MESHSET_SADX meshlist_00142EF0[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_00142DF4, NULL, NULL, NULL, uv_00142E48, NULL },
	{ NJD_MESHSET_3 | 1, 2, poly_00142E0C, NULL, NULL, NULL, uv_00142E78, NULL },
	{ NJD_MESHSET_3 | 2, 2, poly_00142E18, NULL, NULL, NULL, uv_00142E90, NULL },
	{ NJD_MESHSET_3 | 3, 6, poly_00142E24, NULL, NULL, NULL, uv_00142EA8, NULL }
};

NJS_VECTOR vertex_00142F50[] = {
	{ 4, 7, 10 },
	{ 4.000002f, -8, 10 },
	{ 6.000001f, 7, -10 },
	{ -5, 7, 7 },
	{ 6.000004f, -4, -10 },
	{ -5, -10, 7 },
	{ -7, -3, -7 },
	{ -7, 7, -7 },
	{ 0.5f, 8, -1.5f }
};

NJS_VECTOR normal_00142FBC[] = {
	{ 0.350347f, 0.806352f, 0.476501f },
	{ 0.565051f, -0.6449209f, 0.514581f },
	{ 0.668934f, 0.677088f, -0.306723f },
	{ -0.676944f, 0.481015f, 0.557109f },
	{ 0.182933f, -0.419823f, -0.888979f },
	{ -0.683413f, -0.579223f, 0.444351f },
	{ -0.662921f, -0.596994f, -0.451811f },
	{ -0.505924f, 0.618578f, -0.601167f },
	{ -0.000194f, 1, 0.000357f }
};

NJS_MODEL_SADX attach_00143028 = { vertex_00142F50, normal_00142FBC, LengthOfArray<Sint32>(vertex_00142F50), meshlist_00142EF0, matlist_00142DA4, LengthOfArray<Uint16>(meshlist_00142EF0), LengthOfArray<Uint16>(matlist_00142DA4), { -0.499998f, -1, 0 }, 13.45362f, NULL };

NJS_OBJECT object_00143050 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00143028, 0, -1, 19, 0, 0, 0, 1, 1, 1, NULL, &object_00142D70 };

NJS_MATERIAL matlist_00143084[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 17, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 18, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 22, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 19, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001430D4[] = {
	6, 5, 3,
	3, 2, 6
};

Sint16 poly_001430E0[] = {
	2, 3, 1,
	2, 1, 0,
	4, 1, 3,
	4, 3, 5
};

Sint16 poly_001430F8[] = {
	0, 1, 8,
	4, 7, 8,
	8, 1, 4,
	8, 7, 0
};

Sint16 poly_00143110[] = {
	4, 5, 6,
	4, 6, 7,
	7, 6, 2,
	7, 2, 0
};

NJS_TEX uv_00143128[] = {
	{ 612, -165 },
	{ 637, 127 },
	{ 765, 140 },
	{ 765, 140 },
	{ 776, -127 },
	{ 612, -165 }
};

NJS_TEX uv_00143140[] = {
	{ 382, 142 },
	{ 114, 193 },
	{ 114, 2 },
	{ 382, 142 },
	{ 114, 2 },
	{ 382, 2 },
	{ 637, 1 },
	{ 765, 1 },
	{ 765, 192 },
	{ 637, 1 },
	{ 765, 192 },
	{ 637, 128 }
};

NJS_TEX uv_00143170[] = {
	{ 777, -129 },
	{ 765, 137 },
	{ 689, -14 },
	{ 637, 124 },
	{ 612, -167 },
	{ 689, -14 },
	{ 689, -14 },
	{ 765, 137 },
	{ 637, 124 },
	{ 689, -14 },
	{ 612, -167 },
	{ 777, -129 }
};

NJS_TEX uv_001431A0[] = {
	{ 126, 1 },
	{ 126, 129 },
	{ 420, 129 },
	{ 126, 1 },
	{ 420, 129 },
	{ 420, 1 },
	{ 612, 1 },
	{ 612, 129 },
	{ 777, 142 },
	{ 612, 1 },
	{ 777, 142 },
	{ 777, 1 }
};

NJS_MESHSET_SADX meshlist_001431D0[] = {
	{ NJD_MESHSET_3 | 0, 2, poly_001430D4, NULL, NULL, NULL, uv_00143128, NULL },
	{ NJD_MESHSET_3 | 1, 4, poly_001430E0, NULL, NULL, NULL, uv_00143140, NULL },
	{ NJD_MESHSET_3 | 2, 4, poly_001430F8, NULL, NULL, NULL, uv_00143170, NULL },
	{ NJD_MESHSET_3 | 3, 4, poly_00143110, NULL, NULL, NULL, uv_001431A0, NULL }
};

NJS_VECTOR vertex_00143230[] = {
	{ 6.000001f, 6, 9 },
	{ 5.000001f, 6, -12 },
	{ 6.000004f, -5, 9 },
	{ 5.000001f, -9, -12 },
	{ -5, 6, -11 },
	{ -5, -4, -11 },
	{ -7, -4, 12 },
	{ -7, 6, 12 },
	{ -1, 5, 0 }
};

NJS_VECTOR normal_0014329C[] = {
	{ 0.438645f, 0.827508f, 0.350458f },
	{ 0.620415f, 0.701015f, -0.351658f },
	{ 0.729341f, -0.296379f, 0.616621f },
	{ 0.118643f, -0.69939f, -0.704824f },
	{ -0.571021f, 0.568499f, -0.592236f },
	{ -0.7334549f, -0.423335f, -0.531818f },
	{ -0.7308339f, -0.608715f, 0.308784f },
	{ -0.13778f, 0.734786f, 0.664158f },
	{ 0.008686f, 0.999952f, 0.004538f }
};

NJS_MODEL_SADX attach_00143308 = { vertex_00143230, normal_0014329C, LengthOfArray<Sint32>(vertex_00143230), meshlist_001431D0, matlist_00143084, LengthOfArray<Uint16>(meshlist_001431D0), LengthOfArray<Uint16>(matlist_00143084), { -0.499998f, -1.5f, 0 }, 14.15097f, NULL };

//NJS_OBJECT object_O_Breakstep1_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00143308, 15, -6, -19, 0, 0, 0, 1, 1, 1, &object_00143050, &object_001421F0 };
//crumbling bridge 1

//Bridge poles: taken from Dreamcast version (borrowing from PkR). Weren't in the AD, but will use them in "complete layouts".
NJS_MATERIAL matlist_00181834[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181884[] = {
	0x8000u | 12, 22, 17, 21, 16, 25, 20, 24, 19, 23, 18, 22, 17
};

Sint16 poly_0018189E[] = {
	0x8000u | 12, 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 1, 2,
	0x8000u | 12, 3, 16, 6, 17, 9, 18, 12, 19, 15, 20, 3, 16
};

Sint16 poly_001818D2[] = {
	0x8000u | 12, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 2, 3
};

Sint16 poly_001818EC[] = {
	4, 23, 24, 0, 25,
	5, 25, 21, 0, 22, 23
};

NJS_TEX uv_00181904[] = {
	{ 0, 254 },
	{ 0 },
	{ 50, 255 },
	{ 50, 0 },
	{ 101, 255 },
	{ 101, 0 },
	{ 153, 255 },
	{ 152, 0 },
	{ 203, 255 },
	{ 203, 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_TEX uv_00181934[] = {
	{ 15, 251 },
	{ 15, 3 },
	{ 204, 255 },
	{ 204, 0 },
	{ 406, 255 },
	{ 406, 0 },
	{ 613, 255 },
	{ 613, 0 },
	{ 815, 255 },
	{ 815, 0 },
	{ 1004, 251 },
	{ 1004, 3 },
	{ 15, 251 },
	{ 15, 3 },
	{ 204, 255 },
	{ 204, 0 },
	{ 406, 255 },
	{ 406, 0 },
	{ 613, 255 },
	{ 613, 0 },
	{ 815, 255 },
	{ 815, 0 },
	{ 1004, 251 },
	{ 1004, 3 }
};

NJS_TEX uv_00181994[] = {
	{ 1004, -247 },
	{ 15, -247 },
	{ 1020, -152 },
	{ 0, -152 },
	{ 1020, -50 },
	{ 0, -50 },
	{ 1020, 51 },
	{ 0, 51 },
	{ 1020, 153 },
	{ 0, 153 },
	{ 1004, 247 },
	{ 15, 247 }
};

NJS_TEX uv_001819C4[] = {
	{ 0, 206 },
	{ 0, 48 },
	{ 114, 127 },
	{ 157, 0 },
	{ 157, 0 },
	{ 255, 127 },
	{ 114, 127 },
	{ 157, 255 },
	{ 0, 206 }
};

NJS_MESHSET_SADX meshlist_001819E8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00181884, NULL, NULL, NULL, uv_00181904, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0018189E, NULL, NULL, NULL, uv_00181934, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_001818D2, NULL, NULL, NULL, uv_00181994, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001818EC, NULL, NULL, NULL, uv_001819C4, NULL }
};

NJS_VECTOR vertex_00181A48[] = {
	{ 0, 40.20168f, 0 },
	{ 2.999999f, 0, 0 },
	{ 2.999999f, 3.099999f, 0 },
	{ 2.999999f, 29.60002f, 0 },
	{ 0.9270509f, 0, -2.910232f },
	{ 0.9270509f, 3.099999f, -2.910232f },
	{ 0.9270509f, 29.60002f, -2.910232f },
	{ -2.42705f, 0, -1.798622f },
	{ -2.42705f, 3.099999f, -1.798622f },
	{ -2.42705f, 29.60002f, -1.798622f },
	{ -2.42705f, 0, 1.798623f },
	{ -2.42705f, 3.099999f, 1.798623f },
	{ -2.42705f, 29.60002f, 1.798623f },
	{ 0.9270509f, 0, 2.910232f },
	{ 0.9270509f, 3.099999f, 2.910232f },
	{ 0.9270509f, 29.60002f, 2.910232f },
	{ 2.999999f, 32.60001f, 0 },
	{ 0.9270509f, 32.60001f, -2.910232f },
	{ -2.42705f, 32.60001f, -1.798622f },
	{ -2.42705f, 32.60001f, 1.798623f },
	{ 0.9270509f, 32.60001f, 2.910232f },
	{ 3.013199f, 38.80172f, 0 },
	{ 0.931129f, 38.80172f, -2.886949f },
	{ -2.437728f, 38.80172f, -1.784233f },
	{ -2.437728f, 38.80172f, 1.784233f },
	{ 0.93113f, 38.80172f, 2.886949f }
};

NJS_VECTOR normal_00181B80[] = {
	{ -0.00001f, 1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.310691f, 0, -0.950511f },
	{ 0.310691f, 0, -0.950511f },
	{ 0.310691f, 0, -0.950511f },
	{ -0.810738f, 0, -0.58541f },
	{ -0.810738f, 0, -0.58541f },
	{ -0.810738f, 0, -0.58541f },
	{ -0.810738f, 0, 0.58541f },
	{ -0.810738f, 0, 0.58541f },
	{ -0.810738f, 0, 0.58541f },
	{ 0.310691f, 0, 0.950511f },
	{ 0.310691f, 0, 0.950511f },
	{ 0.310691f, 0, 0.950511f },
	{ 1, -0.00024f, 0 },
	{ 0.310111f, 0.001029f, -0.9507f },
	{ -0.810151f, -0.00016f, -0.586221f },
	{ -0.810152f, 0.0006349999f, 0.58622f },
	{ 0.310113f, 0.0006349999f, 0.9507f },
	{ 0.886722f, 0.462304f, 0 },
	{ 0.274917f, 0.464205f, -0.8419819f },
	{ -0.718468f, 0.462605f, -0.5194229f },
	{ -0.718178f, 0.463292f, 0.5192119f },
	{ 0.274987f, 0.463787f, 0.84219f }
};

NJS_MODEL_SADX attach_00181CB8 = { vertex_00181A48, normal_00181B80, LengthOfArray<Sint32>(vertex_00181A48), meshlist_001819E8, matlist_00181834, LengthOfArray<Uint16>(meshlist_001819E8), LengthOfArray<Uint16>(matlist_00181834),{ 0.287735f, 20.10084f, 0 }, 20.31042f, NULL };

NJS_OBJECT object_00181CE0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00181CB8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00181D14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 78, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00181D64[] = {
	0x8000u | 12, 22, 17, 21, 16, 25, 20, 24, 19, 23, 18, 22, 17
};

Sint16 poly_00181D7E[] = {
	0x8000u | 12, 1, 2, 4, 5, 7, 8, 10, 11, 13, 14, 1, 2,
	0x8000u | 12, 3, 16, 6, 17, 9, 18, 12, 19, 15, 20, 3, 16
};

Sint16 poly_00181DB2[] = {
	0x8000u | 12, 2, 3, 5, 6, 8, 9, 11, 12, 14, 15, 2, 3
};

Sint16 poly_00181DCC[] = {
	4, 23, 24, 0, 25,
	5, 25, 21, 0, 22, 23
};

NJS_TEX uv_00181DE4[] = {
	{ 0, 254 },
	{ 0 },
	{ 50, 255 },
	{ 50, 0 },
	{ 101, 255 },
	{ 101, 0 },
	{ 153, 255 },
	{ 152, 0 },
	{ 203, 255 },
	{ 203, 0 },
	{ 254, 254 },
	{ 254, 0 }
};

NJS_TEX uv_00181E14[] = {
	{ 15, 251 },
	{ 15, 3 },
	{ 204, 255 },
	{ 204, 0 },
	{ 406, 255 },
	{ 406, 0 },
	{ 613, 255 },
	{ 613, 0 },
	{ 815, 255 },
	{ 815, 0 },
	{ 1004, 251 },
	{ 1004, 3 },
	{ 15, 251 },
	{ 15, 3 },
	{ 204, 255 },
	{ 204, 0 },
	{ 406, 255 },
	{ 406, 0 },
	{ 613, 255 },
	{ 613, 0 },
	{ 815, 255 },
	{ 815, 0 },
	{ 1004, 251 },
	{ 1004, 3 }
};

NJS_TEX uv_00181E74[] = {
	{ 1004, -247 },
	{ 15, -247 },
	{ 1020, -152 },
	{ 0, -152 },
	{ 1020, -50 },
	{ 0, -50 },
	{ 1020, 51 },
	{ 0, 51 },
	{ 1020, 153 },
	{ 0, 153 },
	{ 1004, 247 },
	{ 15, 247 }
};

NJS_TEX uv_00181EA4[] = {
	{ 0, 206 },
	{ 0, 48 },
	{ 114, 127 },
	{ 157, 0 },
	{ 157, 0 },
	{ 255, 127 },
	{ 114, 127 },
	{ 157, 255 },
	{ 0, 206 }
};

NJS_MESHSET_SADX meshlist_00181EC8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00181D64, NULL, NULL, NULL, uv_00181DE4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00181D7E, NULL, NULL, NULL, uv_00181E14, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00181DB2, NULL, NULL, NULL, uv_00181E74, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00181DCC, NULL, NULL, NULL, uv_00181EA4, NULL }
};

NJS_VECTOR vertex_00181F28[] = {
	{ 0, 50.80168f, 0 },
	{ 2.999999f, 0, 0 },
	{ 2.999999f, 3.099999f, 0 },
	{ 2.999999f, 40.2f, 0 },
	{ 0.9270509f, 0, -2.910232f },
	{ 0.9270509f, 3.099999f, -2.910232f },
	{ 0.9270509f, 40.2f, -2.910232f },
	{ -2.42705f, 0, -1.798622f },
	{ -2.42705f, 3.099999f, -1.798622f },
	{ -2.42705f, 40.2f, -1.798622f },
	{ -2.42705f, 0, 1.798623f },
	{ -2.42705f, 3.099999f, 1.798623f },
	{ -2.42705f, 40.2f, 1.798623f },
	{ 0.9270509f, 0, 2.910232f },
	{ 0.9270509f, 3.099999f, 2.910232f },
	{ 0.9270509f, 40.2f, 2.910232f },
	{ 2.999999f, 43.2f, 0 },
	{ 0.9270509f, 43.2f, -2.910232f },
	{ -2.42705f, 43.2f, -1.798622f },
	{ -2.42705f, 43.2f, 1.798623f },
	{ 0.9270509f, 43.2f, 2.910232f },
	{ 3.013199f, 49.40171f, 0 },
	{ 0.931129f, 49.40171f, -2.886949f },
	{ -2.437728f, 49.40171f, -1.784233f },
	{ -2.437728f, 49.40171f, 1.784233f },
	{ 0.93113f, 49.40171f, 2.886949f }
};

NJS_VECTOR normal_00182060[] = {
	{ -0.00001f, 1, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.310691f, 0, -0.950511f },
	{ 0.310691f, 0, -0.950511f },
	{ 0.310691f, 0, -0.950511f },
	{ -0.810738f, 0, -0.58541f },
	{ -0.810738f, 0, -0.58541f },
	{ -0.810738f, 0, -0.58541f },
	{ -0.810738f, 0, 0.58541f },
	{ -0.810738f, 0, 0.58541f },
	{ -0.810738f, 0, 0.58541f },
	{ 0.310691f, 0, 0.950511f },
	{ 0.310691f, 0, 0.950511f },
	{ 0.310691f, 0, 0.950511f },
	{ 1, -0.00024f, 0 },
	{ 0.310111f, 0.001029f, -0.9507f },
	{ -0.810151f, -0.00016f, -0.586221f },
	{ -0.810152f, 0.0006349999f, 0.58622f },
	{ 0.310113f, 0.0006349999f, 0.9507f },
	{ 0.886722f, 0.462303f, 0 },
	{ 0.274917f, 0.464205f, -0.8419819f },
	{ -0.718468f, 0.462605f, -0.5194229f },
	{ -0.718179f, 0.463291f, 0.5192119f },
	{ 0.274987f, 0.463786f, 0.84219f }
};

NJS_MODEL_SADX attach_00182198 = { vertex_00181F28, normal_00182060, LengthOfArray<Sint32>(vertex_00181F28), meshlist_00181EC8, matlist_00181D14, LengthOfArray<Uint16>(meshlist_00181EC8), LengthOfArray<Uint16>(matlist_00181D14),{ 0.287735f, 25.40084f, 0 }, 25.56701f, NULL };

NJS_OBJECT object_001821C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00182198, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };
