#pragma once
#include <SADXModLoader.h>

NJS_MATERIAL matlist_001572E4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0015730C[] = {
	9, 3, 10, 2,
	15, 6, 14, 7,
	11, 7, 12, 6,
	12, 2, 11, 3,
	10, 0, 9, 1,
	14, 5, 15, 4
};

Sint16 poly_0015733C[] = {
	3, 11, 3, 8,
	3, 13, 5, 8,
	0x8000u | 5, 11, 7, 8, 14, 5,
	0x8000u | 5, 13, 1, 8, 9, 3
};

NJS_TEX uv_00157364[] = {
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 7 },
	{ 0, 7 },
	{ 0, 7 },
	{ 765, 7 },
	{ 0, 255 },
	{ 765, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 7 },
	{ 0, 7 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 7 },
	{ 0, 7 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 }
};

NJS_TEX uv_001573C4[] = {
	{ 125, 3 },
	{ 0, 3 },
	{ 125, 129 },
	{ 125, 254 },
	{ 251, 254 },
	{ 125, 129 },
	{ 125, 3 },
	{ 251, 3 },
	{ 125, 129 },
	{ 251, 129 },
	{ 251, 254 },
	{ 125, 254 },
	{ 0, 254 },
	{ 125, 129 },
	{ 0, 129 },
	{ 0, 3 }
};

NJS_MESHSET_SADX meshlist_00157404[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0015730C, NULL, NULL, NULL, uv_00157364, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0015733C, NULL, NULL, NULL, uv_001573C4, NULL }
};

NJS_VECTOR vertex_00157434[] = {
	{ -25, -15, -3 },
	{ -25, -15, 0 },
	{ -25, 15, -3 },
	{ -25, 15, 0 },
	{ 25, -15, -3 },
	{ 25, -15, 0 },
	{ 25, 15, -3 },
	{ 25, 15, 0 },
	{ 0 },
	{ -25, 0, 0 },
	{ -25, 0, -3 },
	{ 0, 15, 0 },
	{ 0, 15, -3 },
	{ 0, -15, 0 },
	{ 25, 0, 0 },
	{ 25, 0, -3 }
};

NJS_VECTOR normal_001574F4[] = {
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, 1 },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_001575B4 = { vertex_00157434, normal_001574F4, LengthOfArray<Sint32>(vertex_00157434), meshlist_00157404, matlist_001572E4, LengthOfArray<Uint16>(meshlist_00157404), LengthOfArray<Uint16>(matlist_001572E4), { 0, 0, -1.5f }, 25.04496f, NULL };

NJS_OBJECT O_SIGNB_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001575B4, 0, 15, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0016CD24[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 106, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 106, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 124, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 106, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0016CD74[] = {
	3, 6, 8, 0
};

Sint16 poly_0016CD7C[] = {
	1, 7, 6, 8,
	0, 3, 6, 1
};

Sint16 poly_0016CD8C[] = {
	3, 4, 1, 2,
	2, 5, 1, 7
};

Sint16 poly_0016CD9C[] = {
	8, 7, 0, 3
};

NJS_TEX uv_0016CDA4[] = {
	{ 0, 123 },
	{ 244, 9 },
	{ 245, 253 }
};

NJS_TEX uv_0016CDB0[] = {
	{ 108, 252 },
	{ 244, 251 },
	{ 1, -124 },
	{ 244, -251 },
	{ 244, -251 },
	{ 244, 251 },
	{ 1, -124 },
	{ 108, 252 }
};

NJS_TEX uv_0016CDD0[] = {
	{ 0, 7 },
	{ 765, 7 },
	{ 0, 255 },
	{ 765, 255 },
	{ 765, 255 },
	{ 765, 7 },
	{ 0, 255 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_0016CDF0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0016CD74, NULL, NULL, NULL, uv_0016CDA4, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0016CD7C, NULL, NULL, NULL, uv_0016CDB0, NULL },
	{ NJD_MESHSET_4 | 2, 2, poly_0016CD8C, NULL, NULL, NULL, uv_0016CDD0, NULL },
	{ NJD_MESHSET_4 | 3, 1, poly_0016CD9C, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_0016CE50[] = {
	{ 1, -2.000004f, 6.5f },
	{ 0, 1.999996f, 3.500001f },
	{ 0, -1.000004f, -6.499998f },
	{ 1, 0.9999959f, 3.500001f },
	{ 1, -2.000004f, -6.499998f },
	{ -1, -2.000004f, -6.499998f },
	{ 0, -0.00004f, 6.5f },
	{ -1, 0.9999959f, 3.500001f },
	{ -1, -2.000004f, 6.5f }
};

NJS_VECTOR normal_0016CEBC[] = {
	{ 0.597396f, -0.631826f, 0.493877f },
	{ -0.042862f, 0.982065f, 0.183606f },
	{ 0, 0.957826f, -0.287348f },
	{ 0.864776f, 0.481179f, -0.143626f },
	{ 0.691714f, 0.691714f, -0.207514f },
	{ -0.691714f, 0.691714f, -0.207514f },
	{ -0.065427f, 0.604692f, 0.793768f },
	{ -0.913664f, 0.376254f, -0.153788f },
	{ -0.625915f, -0.661054f, 0.413809f }
};

NJS_MODEL_SADX attach_0016CF28 = { vertex_0016CE50, normal_0016CEBC, LengthOfArray<Sint32>(vertex_0016CE50), meshlist_0016CDF0, matlist_0016CD24, LengthOfArray<Uint16>(meshlist_0016CDF0), LengthOfArray<Uint16>(matlist_0016CD24), { 0, -0.00004f, 0.000001f }, 6.800735f, NULL };

NJS_OBJECT SignBLight_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0016CF28, -20, 31, 6.499998f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00157630[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00157658[] = {
	9, 3, 10, 2,
	15, 6, 14, 7,
	11, 7, 12, 6,
	12, 2, 11, 3,
	10, 0, 9, 1,
	14, 5, 15, 4
};

Sint16 poly_00157688[] = {
	3, 11, 3, 8,
	3, 13, 5, 8,
	5, 5, 14, 8, 7, 11,
	0x8000u | 5, 13, 1, 8, 9, 3
};

NJS_TEX uv_001576B0[] = {
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 7 },
	{ 0, 7 },
	{ 0, 7 },
	{ 765, 7 },
	{ 0, 255 },
	{ 765, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 7 },
	{ 0, 7 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 7 },
	{ 0, 7 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 }
};

NJS_TEX uv_00157710[] = {
	{ 130, 4 },
	{ 0, 4 },
	{ 121, 130 },
	{ 130, 254 },
	{ 250, 254 },
	{ 121, 130 },
	{ 250, 254 },
	{ 250, 111 },
	{ 121, 130 },
	{ 250, 4 },
	{ 130, 4 },
	{ 130, 254 },
	{ 0, 254 },
	{ 121, 130 },
	{ 0, 139 },
	{ 0, 4 }
};

NJS_MESHSET_SADX meshlist_00157750[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_00157658, NULL, NULL, NULL, uv_001576B0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_00157688, NULL, NULL, NULL, uv_00157710, NULL }
};

NJS_VECTOR vertex_00157780[] = {
	{ -24.6392f, -15, -1.8648f },
	{ -24.7513f, -15, 0.3841f },
	{ -24.42882f, 14.99731f, -1.97656f },
	{ -25.39055f, 14.8447f, -0.66251f },
	{ 24.8792f, -15, -3.5416f },
	{ 25.0688f, -15, -0.8825999f },
	{ 25.29176f, 15.23572f, -2.112235f },
	{ 25.15667f, 14.75641f, -0.09865499f },
	{ -0.935469f, -0.055875f, -1.82973f },
	{ -22.95717f, -0.791513f, 0.179304f },
	{ -24.72935f, -0.477596f, -2.210076f },
	{ 0.377522f, 13.04773f, 0.7733189f },
	{ -0.266341f, 15.08888f, -3.355084f },
	{ 0.9104249f, -14.46337f, 0.279823f },
	{ 21.84249f, 2.298386f, -0.37507f },
	{ 23.3418f, -0.664515f, -3.274966f }
};

NJS_VECTOR normal_00157840[] = {
	{ -0.997068f, 0.058183f, -0.049701f },
	{ -0.734224f, 0.086036f, 0.6734329f },
	{ -0.448774f, 0.864045f, -0.228096f },
	{ -0.770964f, 0.542572f, 0.333512f },
	{ 0.986148f, 0.150224f, -0.07031699f },
	{ 0.768046f, 0.139624f, 0.624988f },
	{ 0.710131f, 0.672714f, 0.207774f },
	{ 0.62915f, 0.45818f, 0.627887f },
	{ 0.008683f, -0.013643f, 0.999869f },
	{ -0.683328f, 0.035658f, 0.7292399f },
	{ -0.934323f, -0.008803f, -0.356318f },
	{ -0.008316999f, 0.523295f, 0.852111f },
	{ 0.001157f, 0.98354f, 0.180688f },
	{ 0.02786f, 0.148313f, 0.988548f },
	{ 0.5938849f, -0.08230899f, 0.800329f },
	{ 0.996851f, 0.06404699f, -0.046758f }
};

NJS_MODEL_SADX attach_00157900 = { vertex_00157780, normal_00157840, LengthOfArray<Sint32>(vertex_00157780), meshlist_00157750, matlist_00157630, LengthOfArray<Uint16>(meshlist_00157750), LengthOfArray<Uint16>(matlist_00157630), { -0.049396f, 0.117863f, -1.38414f }, 25.43283f, NULL };

NJS_OBJECT O_SIGNB_BR_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00157900, 0, 15, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017CA20[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 155, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 94, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xCCB2B2B2 }, { 0x00000000 }, 0, 60, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xCCB2B2B2 }, { 0x00000000 }, 0, 60, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017CA70[] = {
	8, 1, 14, 15, 13, 11, 19, 18, 10,
	8, 15, 0, 1, 2, 3, 10, 12, 19
};

Sint16 poly_0017CA94[] = {
	4, 4, 0, 16, 15,
	4, 10, 9, 18, 17
};

Sint16 poly_0017CAA8[] = {
	3, 4, 5, 6,
	3, 7, 16, 8,
	3, 5, 9, 6,
	3, 7, 8, 17
};

Sint16 poly_0017CAC8[] = {
	0x8000u | 6, 9, 17, 5, 7, 4, 16,
	6, 16, 15, 8, 11, 17, 18,
	6, 0, 4, 2, 6, 10, 9
};

NJS_TEX uv_0017CAF4[] = {
	{ 0, 30 },
	{ 0, 232 },
	{ 32, 232 },
	{ 0, 255 },
	{ 32, 255 },
	{ 0, 232 },
	{ 32, 232 },
	{ 32, 30 },
	{ 32, 232 },
	{ 32, 30 },
	{ 0, 30 },
	{ 32, 7 },
	{ 0, 7 },
	{ 32, 30 },
	{ 0, 30 },
	{ 0, 232 }
};

NJS_TEX uv_0017CB34[] = {
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0017CB54[] = {
	{ 216, 7 },
	{ 247, 255 },
	{ 185, 255 },
	{ 185, 255 },
	{ 216, 7 },
	{ 247, 255 },
	{ 185, 255 },
	{ 216, 7 },
	{ 247, 255 },
	{ 247, 255 },
	{ 185, 255 },
	{ 216, 7 }
};

NJS_TEX uv_0017CB84[] = {
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 510, 7 },
	{ 0, 7 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 7 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_0017CBCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0017CA70, NULL, NULL, NULL, uv_0017CAF4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0017CA94, NULL, NULL, NULL, uv_0017CB34, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0017CAA8, NULL, NULL, NULL, uv_0017CB54, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 3, poly_0017CAC8, NULL, NULL, NULL, uv_0017CB84, NULL }
};

NJS_VECTOR vertex_0017CC2C[] = {
	{ -4.5f, -1, 1 },
	{ -6, -1, 1 },
	{ -4.5f, 0, 0 },
	{ -6, 0, 0 },
	{ 4.5f, -1, 1 },
	{ 5.5f, -1, 0 },
	{ 4.5f, 0, 0 },
	{ 5.5f, -10, 0 },
	{ 4.5f, -11, 0 },
	{ 4.5f, -1, -1 },
	{ -4.5f, -1, -1 },
	{ -4.5f, -11, 0 },
	{ -6, -1, -1 },
	{ -6, -11, 0 },
	{ -6, -10, 1 },
	{ -4.5f, -10, 1 },
	{ 4.5f, -10, 1 },
	{ 4.5f, -10, -1 },
	{ -4.5f, -10, -1 },
	{ -6, -10, -1 }
};

NJS_VECTOR normal_0017CD1C[] = {
	{ 0, 0.382683f, 0.92388f },
	{ 0, 0.382683f, 0.92388f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.341586f, 0.341586f, 0.875579f },
	{ 0.94313f, 0.332425f, 0 },
	{ 0.332425f, 0.94313f, 0 },
	{ 0.94313f, -0.332425f, 0 },
	{ 0.332425f, -0.94313f, 0 },
	{ 0.341586f, 0.341586f, -0.875579f },
	{ 0, 0.382683f, -0.92388f },
	{ 0, -1, 0 },
	{ 0, 0.382683f, -0.92388f },
	{ 0, -1, 0 },
	{ 0, -0.382683f, 0.92388f },
	{ 0, -0.382683f, 0.92388f },
	{ 0.341586f, -0.341586f, 0.875579f },
	{ 0.341586f, -0.341586f, -0.875579f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, -0.382683f, -0.92388f }
};

NJS_MODEL_SADX O_KANBANB_AD = { vertex_0017CC2C, normal_0017CD1C, LengthOfArray<Sint32>(vertex_0017CC2C), meshlist_0017CBCC, matlist_0017CA20, LengthOfArray<Uint16>(meshlist_0017CBCC), LengthOfArray<Uint16>(matlist_0017CA20), { -0.25f, -5.5f, 0 }, 5.836309f, NULL };

//NJS_OBJECT O_KANBANB_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017CE0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017C65C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 155, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 33, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 109, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_0017C698[] = {
	0x8000u | 8, 14, 15, 4, 17, 0, 9, 3, 2,
	0x8000u | 8, 4, 5, 14, 1, 16, 2, 6, 9
};

Sint16 poly_0017C6BC[] = {
	4, 8, 9, 7, 6,
	4, 15, 13, 14, 12
};

Sint16 poly_0017C6D0[] = {
	4, 8, 7, 11, 10,
	4, 12, 13, 10, 11,
	4, 7, 6, 10, 16,
	4, 14, 12, 16, 10,
	4, 9, 8, 17, 11,
	4, 13, 15, 11, 17
};

NJS_TEX uv_0017C70C[] = {
	{ 247, 230 },
	{ 247, 32 },
	{ 0, 32 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 32 },
	{ 0, 32 },
	{ 0, 230 },
	{ 0, 32 },
	{ 0, 230 },
	{ 247, 230 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 230 },
	{ 247, 230 },
	{ 247, 32 }
};

NJS_TEX uv_0017C74C[] = {
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0017C76C[] = {
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 219, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 219, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 219, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 219, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 219, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 219, 7 }
};

NJS_MESHSET_SADX meshlist_0017C7CC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0017C698, NULL, NULL, NULL, uv_0017C70C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0017C6BC, NULL, NULL, NULL, uv_0017C74C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 6, poly_0017C6D0, NULL, NULL, NULL, uv_0017C76C, NULL }
};

NJS_VECTOR vertex_0017C814[] = {
	{ -5, 0, 0 },
	{ -5, -10, 0 },
	{ -5, -9, 1 },
	{ -5, -1, 1 },
	{ -5, -1, -1 },
	{ -5, -9, -1 },
	{ -4, -9, 1 },
	{ 4, -9, 1 },
	{ 4, -1, 1 },
	{ -4, -1, 1 },
	{ 5, -10, 0 },
	{ 5, 0, 0 },
	{ 4, -9, -1 },
	{ 4, -1, -1 },
	{ -4, -9, -1 },
	{ -4, -1, -1 },
	{ -4, -10, 0 },
	{ -4, 0, 0 }
};

NJS_VECTOR normal_0017C8EC[] = {
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, -0.382683f, 0.92388f },
	{ 0, 0.382683f, 0.92388f },
	{ 0, 0.382683f, -0.92388f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, -0.382683f, 0.92388f },
	{ 0.300194f, -0.300194f, 0.90541f },
	{ 0.300194f, 0.300194f, 0.90541f },
	{ 0, 0.382683f, 0.92388f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.300194f, -0.300194f, -0.90541f },
	{ 0.300194f, 0.300194f, -0.90541f },
	{ 0, -0.382683f, -0.92388f },
	{ 0, 0.382683f, -0.92388f },
	{ 0, -1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX O_KANBANA_AD = { vertex_0017C814, normal_0017C8EC, LengthOfArray<Sint32>(vertex_0017C814), meshlist_0017C7CC, matlist_0017C65C, LengthOfArray<Uint16>(meshlist_0017C7CC), LengthOfArray<Uint16>(matlist_0017C65C), { 0, -5, 0 }, 5.09902f, NULL };

//NJS_OBJECT O_KANBANA_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C9C4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00189230[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 44, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 154, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00189294[] = {
	7, 7, 3, 13, 47, 46, 8, 14,
	4, 15, 48, 9, 51,
	5, 22, 16, 2, 45, 44,
	12, 2, 6, 22, 36, 37, 10, 20, 42, 41, 7, 18, 13,
	4, 8, 44, 14, 45
};

Sint16 poly_001892DE[] = {
	7, 19, 12, 1, 49, 50, 15, 9,
	10, 1, 5, 19, 40, 43, 11, 21, 39, 38, 4,
	3, 48, 17, 51,
	0x8000u | 6, 51, 0, 17, 4, 23, 38
};

Sint16 poly_0018931A[] = {
	4, 21, 38, 20, 37,
	4, 19, 43, 18, 41,
	0x8000u | 10, 13, 12, 46, 49, 14, 15, 45, 48, 16, 17,
	4, 20, 41, 21, 43,
	4, 22, 37, 23, 38
};

Sint16 poly_00189358[] = {
	4, 13, 12, 18, 19,
	4, 22, 23, 16, 17
};

Sint16 poly_0018936C[] = {
	4, 25, 24, 28, 29,
	3, 28, 26, 25,
	0x8000u | 5, 25, 27, 26, 24, 29,
	3, 27, 24, 25,
	4, 34, 35, 31, 30,
	3, 31, 33, 34,
	0x8000u | 5, 34, 32, 33, 35, 30,
	3, 31, 30, 33
};

NJS_TEX uv_001893B8[] = {
	{ 1229, 7 },
	{ 2183, 7 },
	{ 2183, 255 },
	{ 2240, 7 },
	{ 2240, 255 },
	{ 2295, 7 },
	{ 2295, 255 },
	{ 1065, 7 },
	{ 1120, 7 },
	{ 1065, 255 },
	{ 1120, 255 },
	{ 1008, 255 },
	{ 55, 255 },
	{ 55, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 55, 7 },
	{ 1008, 7 },
	{ 1008, 255 },
	{ 1065, 7 },
	{ 1065, 255 },
	{ 1120, 7 },
	{ 1120, 255 },
	{ 1173, 7 },
	{ 1173, 255 },
	{ 1229, 7 },
	{ 1229, 255 },
	{ 2183, 255 },
	{ 1065, 7 },
	{ 1120, 7 },
	{ 1065, 255 },
	{ 1120, 255 }
};

NJS_TEX uv_00189438[] = {
	{ 114, 7 },
	{ 11, 7 },
	{ 11, 255 },
	{ 5, 7 },
	{ 5, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 11, 255 },
	{ 114, 255 },
	{ 114, 7 },
	{ 120, 255 },
	{ 120, 7 },
	{ 126, 255 },
	{ 126, 7 },
	{ 132, 255 },
	{ 132, 7 },
	{ 138, 255 },
	{ 247, 7 },
	{ 241, 7 },
	{ 247, 255 },
	{ 247, 255 },
	{ 241, 255 },
	{ 241, 7 },
	{ 138, 255 },
	{ 138, 7 },
	{ 132, 7 }
};

NJS_TEX uv_001894A0[] = {
	{ 215, 34 },
	{ 215, 24 },
	{ 242, 34 },
	{ 243, 24 },
	{ 215, 34 },
	{ 215, 24 },
	{ 242, 34 },
	{ 243, 24 },
	{ 215, 68 },
	{ 242, 68 },
	{ 215, 50 },
	{ 242, 50 },
	{ 215, 34 },
	{ 242, 34 },
	{ 215, 24 },
	{ 243, 24 },
	{ 215, 11 },
	{ 243, 11 },
	{ 215, 34 },
	{ 215, 24 },
	{ 242, 34 },
	{ 243, 24 },
	{ 215, 34 },
	{ 215, 24 },
	{ 242, 34 },
	{ 243, 24 }
};

NJS_TEX uv_00189508[] = {
	{ 764, 7 },
	{ 764, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 764, 7 },
	{ 764, 255 }
};

NJS_TEX uv_00189528[] = {
	{ 510, 0 },
	{ 510, 255 },
	{ 0 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 0 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, -254 },
	{ 510, 0 },
	{ 510, -254 },
	{ 510, -254 },
	{ 510, 0 },
	{ 0, -254 },
	{ 0, -254 },
	{ 0 },
	{ 510, 0 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 0 },
	{ 0 },
	{ 510, -254 }
};

NJS_MESHSET_SADX meshlist_001895A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00189294, NULL, NULL, NULL, uv_001893B8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_001892DE, NULL, NULL, NULL, uv_00189438, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 5, poly_0018931A, NULL, NULL, NULL, uv_001894A0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00189358, NULL, NULL, NULL, uv_00189508, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 8, poly_0018936C, NULL, NULL, NULL, uv_00189528, NULL }
};

NJS_VECTOR vertex_00189618[] = {
	{ -8.5f, 2, -1 },
	{ -8.5f, 2, 1 },
	{ -8.5f, 9, -1 },
	{ -8.5f, 9, 1 },
	{ 8.5f, 2, -1 },
	{ 8.5f, 2, 1 },
	{ 8.5f, 9, -1 },
	{ 8.5f, 9, 1 },
	{ -10.0601f, 9, 0 },
	{ -10.0601f, 2, 0 },
	{ 10.0601f, 9, 0 },
	{ 10.0601f, 2, 0 },
	{ -8.5f, 3.95f, 1 },
	{ -8.5f, 7.05f, 1 },
	{ -10.0601f, 7.05f, 0 },
	{ -10.0601f, 3.95f, 0 },
	{ -8.5f, 7.05f, -1 },
	{ -8.5f, 3.95f, -1 },
	{ 8.5f, 7.05f, 1 },
	{ 8.5f, 3.95f, 1 },
	{ 10.0601f, 7.05f, 0 },
	{ 10.0601f, 3.95f, 0 },
	{ 8.5f, 7.05f, -1 },
	{ 8.5f, 3.95f, -1 },
	{ -7.5f, 9, 0.6f },
	{ -7.5f, 9, -0.6f },
	{ -8.500002f, 0, 0 },
	{ -8.500002f, 9, 0 },
	{ -7.5f, 0, -0.6f },
	{ -7.5f, 0, 0.6f },
	{ 7.500001f, 9, 0.6f },
	{ 7.5f, 9, -0.6f },
	{ 8.500002f, 0, 0 },
	{ 8.500002f, 9, 0 },
	{ 7.5f, 0, -0.6f },
	{ 7.500001f, 0, 0.6f },
	{ 9.465652f, 9, -0.77f },
	{ 9.465652f, 7.05f, -0.77f },
	{ 9.465652f, 3.95f, -0.77f },
	{ 9.465652f, 2, -0.77f },
	{ 9.465652f, 2, 0.77f },
	{ 9.465652f, 7.05f, 0.77f },
	{ 9.465652f, 9, 0.77f },
	{ 9.465652f, 3.95f, 0.77f },
	{ -9.465652f, 9, -0.77f },
	{ -9.465652f, 7.05f, -0.77f },
	{ -9.465652f, 7.05f, 0.77f },
	{ -9.465652f, 9, 0.77f },
	{ -9.465652f, 3.95f, -0.77f },
	{ -9.465652f, 3.95f, 0.77f },
	{ -9.465652f, 2, 0.77f },
	{ -9.465652f, 2, -0.77f }
};

NJS_VECTOR normal_00189888[] = {
	{ -0.116646f, 0, -0.993174f },
	{ -0.116646f, 0, 0.993174f },
	{ -0.116646f, 0, -0.993174f },
	{ -0.116646f, 0, 0.993174f },
	{ 0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ 0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.116646f, 0, 0.993174f },
	{ -0.116646f, 0, 0.993174f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.116646f, 0, -0.993174f },
	{ -0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, -0.993174f },
	{ 0.410137f, 0.554131f, 0.72438f },
	{ 0.410137f, 0.554131f, -0.72438f },
	{ -1, 0, 0 },
	{ -0.831271f, 0.555868f, 0 },
	{ 0.492699f, 0, -0.8702f },
	{ 0.492699f, 0, 0.8702f },
	{ -0.410137f, 0.554131f, 0.72438f },
	{ -0.410138f, 0.554131f, -0.72438f },
	{ 1, 0, 0 },
	{ 0.831271f, 0.555868f, 0 },
	{ -0.492699f, 0, -0.8702f },
	{ -0.492699f, 0, 0.8702f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, -0.839959f },
	{ -0.54265f, 0, -0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, -0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, -0.839959f }
};

NJS_MODEL_SADX attach_00189AF8 = { vertex_00189618, normal_00189888, LengthOfArray<Sint32>(vertex_00189618), meshlist_001895A0, matlist_00189230, LengthOfArray<Uint16>(meshlist_001895A0), LengthOfArray<Uint16>(matlist_00189230), { 0, 4.5f, 0 }, 10.10968f, NULL };

NJS_OBJECT O_Fence02_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00189AF8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0016D2A0[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 145, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 144, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 146, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0016D2DC[] = {
	0x8000u | 5, 3, 7, 9, 5, 1,
	0x8000u | 5, 0, 4, 8, 6, 2
};

Sint16 poly_0016D2F4[] = {
	0, 4, 1, 5,
	6, 2, 7, 3
};

Sint16 poly_0016D304[] = {
	6, 7, 4, 5
};

NJS_TEX uv_0016D30C[] = {
	{ 0, 254 },
	{ 95, 0 },
	{ 127, 254 },
	{ 159, 0 },
	{ 255, 254 },
	{ 0, 254 },
	{ 95, 0 },
	{ 127, 254 },
	{ 159, 0 },
	{ 255, 254 }
};

NJS_TEX uv_0016D334[] = {
	{ 765, 255 },
	{ 765, 0 },
	{ 0, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_0016D354[] = {
	{ 255, 245 },
	{ 254, -1785 },
	{ 0, 245 },
	{ 0, -1785 }
};

NJS_MESHSET_SADX meshlist_0016D364[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0016D2DC, NULL, NULL, NULL, uv_0016D30C, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0016D2F4, NULL, NULL, NULL, uv_0016D334, NULL },
	{ NJD_MESHSET_4 | 2, 1, poly_0016D304, NULL, NULL, NULL, uv_0016D354, NULL }
};

NJS_VECTOR vertex_0016D3AC[] = {
	{ -12.36f, 0.000001f, -4.330126f },
	{ 12.36f, -0.00001f, -4.330127f },
	{ -12.36f, 0, 4.330127f },
	{ 12.36f, -0.00001f, 4.330126f },
	{ -12.30001f, 8.024999f, -1.082531f },
	{ 12.29999f, 8.024999f, -1.082532f },
	{ -12.30001f, 8.024999f, 1.082532f },
	{ 12.29999f, 8.024999f, 1.082531f },
	{ -15, 0.000001f, 0 },
	{ 14.99999f, -0.00001f, 0 }
};

NJS_VECTOR normal_0016D424[] = {
	{ -0.473732f, 0.333408f, -0.815118f },
	{ 0.473732f, 0.333408f, -0.815118f },
	{ -0.473732f, 0.333408f, 0.815118f },
	{ 0.473732f, 0.333408f, 0.815118f },
	{ -0.598377f, 0.6399879f, -0.482038f },
	{ 0.598377f, 0.6399879f, -0.482037f },
	{ -0.598377f, 0.6399879f, 0.482038f },
	{ 0.598377f, 0.6399879f, 0.482037f },
	{ -0.9619589f, 0.273192f, 0 },
	{ 0.9619589f, 0.273193f, 0 }
};

NJS_MODEL_SADX attach_0016D49C = { vertex_0016D3AC, normal_0016D424, LengthOfArray<Sint32>(vertex_0016D3AC), meshlist_0016D364, matlist_0016D2A0, LengthOfArray<Uint16>(meshlist_0016D364), LengthOfArray<Uint16>(matlist_0016D2A0), { -0.00003f, 4.012499f, 0 }, 15.61249f, NULL };

NJS_OBJECT O_FENCE_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0016D49C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0018A694[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 45, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 43, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 42, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 154, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018A6F8[] = {
	0x8000u | 6, 36, 37, 10, 20, 42, 41,
	0x8000u | 6, 51, 48, 9, 15, 50, 49,
	4, 16, 45, 2, 44,
	4, 12, 49, 1, 50,
	4, 18, 41, 7, 42,
	4, 23, 38, 4, 39,
	3, 27, 24, 25,
	3, 31, 30, 33,
	4, 3, 47, 13, 46,
	4, 0, 51, 17, 48,
	0x8000u | 6, 45, 44, 14, 8, 46, 47,
	4, 6, 36, 22, 37,
	4, 5, 40, 19, 43,
	0x8000u | 6, 38, 39, 21, 11, 43, 40
};

Sint16 poly_0018A790[] = {
	4, 3, 13, 7, 18,
	4, 5, 19, 1, 12,
	4, 0, 17, 4, 23,
	4, 6, 22, 2, 16
};

Sint16 poly_0018A7B8[] = {
	0x8000u | 6, 48, 45, 15, 14, 49, 46,
	0x8000u | 6, 43, 41, 21, 20, 38, 37
};

Sint16 poly_0018A7D4[] = {
	3, 41, 18, 43,
	3, 45, 16, 48,
	3, 49, 12, 46,
	0x8000u | 6, 46, 13, 12, 18, 19, 43,
	3, 38, 23, 37,
	0x8000u | 6, 37, 22, 23, 16, 17, 48
};

Sint16 poly_0018A810[] = {
	4, 27, 26, 24, 29,
	4, 25, 24, 28, 29,
	4, 27, 25, 26, 28,
	4, 30, 35, 33, 32,
	4, 34, 35, 31, 30,
	4, 32, 34, 33, 31
};

NJS_TEX uv_0018A84C[] = {
	{ 246, 8 },
	{ 246, 254 },
	{ 123, 8 },
	{ 123, 253 },
	{ 246, 8 },
	{ 246, 254 },
	{ 246, 254 },
	{ 246, 8 },
	{ 123, 253 },
	{ 123, 8 },
	{ 246, 254 },
	{ 246, 8 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 8 },
	{ 124, 9 },
	{ 0, 8 },
	{ 124, 9 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 8 },
	{ 124, 9 },
	{ 0, 8 },
	{ 124, 9 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 222 },
	{ 165, 185 },
	{ 0, 140 },
	{ 0, 222 },
	{ 165, 185 },
	{ 0, 140 },
	{ 0, 8 },
	{ 124, 9 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 8 },
	{ 124, 9 },
	{ 246, 254 },
	{ 246, 8 },
	{ 123, 253 },
	{ 123, 8 },
	{ 246, 254 },
	{ 246, 8 },
	{ 0, 8 },
	{ 124, 9 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 253 },
	{ 124, 254 },
	{ 0, 8 },
	{ 124, 9 },
	{ 246, 8 },
	{ 246, 254 },
	{ 123, 8 },
	{ 123, 253 },
	{ 246, 8 },
	{ 246, 254 }
};

NJS_TEX uv_0018A944[] = {
	{ 2, 7 },
	{ 2, 253 },
	{ 761, 7 },
	{ 761, 253 },
	{ 2, 253 },
	{ 2, 7 },
	{ 761, 253 },
	{ 761, 7 },
	{ 2, 253 },
	{ 2, 7 },
	{ 761, 253 },
	{ 761, 7 },
	{ 2, 7 },
	{ 2, 253 },
	{ 761, 7 },
	{ 761, 253 }
};

NJS_TEX uv_0018A984[] = {
	{ 0, 255 },
	{ 0, 8 },
	{ 123, 255 },
	{ 123, 8 },
	{ 246, 255 },
	{ 246, 8 },
	{ 246, 255 },
	{ 246, 8 },
	{ 123, 255 },
	{ 123, 8 },
	{ 0, 255 },
	{ 0, 8 }
};

NJS_TEX uv_0018A9B4[] = {
	{ 1016, 8 },
	{ 964, 8 },
	{ 1016, 255 },
	{ 2, 8 },
	{ 54, 8 },
	{ 2, 255 },
	{ 2, 255 },
	{ 54, 255 },
	{ 2, 8 },
	{ 2, 8 },
	{ 54, 8 },
	{ 54, 255 },
	{ 964, 8 },
	{ 964, 255 },
	{ 1016, 255 },
	{ 1016, 255 },
	{ 964, 255 },
	{ 1016, 8 },
	{ 1016, 8 },
	{ 964, 8 },
	{ 964, 255 },
	{ 54, 8 },
	{ 54, 255 },
	{ 2, 255 }
};

NJS_TEX uv_0018AA14[] = {
	{ 1, 7 },
	{ 761, 8 },
	{ 1, 254 },
	{ 761, 254 },
	{ 761, 52 },
	{ 761, 223 },
	{ 1, 52 },
	{ 1, 223 },
	{ 761, 8 },
	{ 761, 254 },
	{ 1, 7 },
	{ 1, 254 },
	{ 1, 254 },
	{ 761, 254 },
	{ 1, 7 },
	{ 761, 8 },
	{ 761, 52 },
	{ 761, 223 },
	{ 1, 52 },
	{ 1, 223 },
	{ 1, 7 },
	{ 1, 254 },
	{ 761, 8 },
	{ 761, 254 }
};

NJS_MESHSET_SADX meshlist_0018AA74[] = {
	{ NJD_MESHSET_TRIMESH | 0, 14, poly_0018A6F8, NULL, NULL, NULL, uv_0018A84C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0018A790, NULL, NULL, NULL, uv_0018A944, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0018A7B8, NULL, NULL, NULL, uv_0018A984, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_0018A7D4, NULL, NULL, NULL, uv_0018A9B4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_0018A810, NULL, NULL, NULL, uv_0018AA14, NULL }
};

NJS_VECTOR vertex_0018AAEC[] = {
	{ -8.5f, 2, -1 },
	{ -8.5f, 2, 1 },
	{ -8.5f, 9, -1 },
	{ -8.5f, 9, 1 },
	{ 8.5f, 2, -1 },
	{ 8.5f, 2, 1 },
	{ 8.5f, 9, -1 },
	{ 8.5f, 9, 1 },
	{ -10.0601f, 9, 0 },
	{ -10.0601f, 2, 0 },
	{ 10.0601f, 9, 0 },
	{ 10.0601f, 2, 0 },
	{ -8.5f, 3.95f, 1 },
	{ -8.5f, 7.05f, 1 },
	{ -10.0601f, 7.05f, 0 },
	{ -10.0601f, 3.95f, 0 },
	{ -8.5f, 7.05f, -1 },
	{ -8.5f, 3.95f, -1 },
	{ 8.5f, 7.05f, 1 },
	{ 8.5f, 3.95f, 1 },
	{ 10.0601f, 7.05f, 0 },
	{ 10.0601f, 3.95f, 0 },
	{ 8.5f, 7.05f, -1 },
	{ 8.5f, 3.95f, -1 },
	{ -7.5f, 9, 0.6f },
	{ -7.5f, 9, -0.6f },
	{ -8.500002f, 0, 0 },
	{ -8.500002f, 9, 0 },
	{ -7.5f, 0, -0.6f },
	{ -7.5f, 0, 0.6f },
	{ 7.500001f, 9, 0.6f },
	{ 7.5f, 9, -0.6f },
	{ 8.500002f, 0, 0 },
	{ 8.500002f, 9, 0 },
	{ 7.5f, 0, -0.6f },
	{ 7.500001f, 0, 0.6f },
	{ 9.465652f, 9, -0.77f },
	{ 9.465652f, 7.05f, -0.77f },
	{ 9.465652f, 3.95f, -0.77f },
	{ 9.465652f, 2, -0.77f },
	{ 9.465652f, 2, 0.77f },
	{ 9.465652f, 7.05f, 0.77f },
	{ 9.465652f, 9, 0.77f },
	{ 9.465652f, 3.95f, 0.77f },
	{ -9.465652f, 9, -0.77f },
	{ -9.465652f, 7.05f, -0.77f },
	{ -9.465652f, 7.05f, 0.77f },
	{ -9.465652f, 9, 0.77f },
	{ -9.465652f, 3.95f, -0.77f },
	{ -9.465652f, 3.95f, 0.77f },
	{ -9.465652f, 2, 0.77f },
	{ -9.465652f, 2, -0.77f }
};

NJS_VECTOR normal_0018AD5C[] = {
	{ -0.116646f, 0, -0.993174f },
	{ -0.116646f, 0, 0.993174f },
	{ -0.116646f, 0, -0.993174f },
	{ -0.116646f, 0, 0.993174f },
	{ 0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ 0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.116646f, 0, 0.993174f },
	{ -0.116646f, 0, 0.993174f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.116646f, 0, -0.993174f },
	{ -0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ 0.116646f, 0, 0.993174f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.116646f, 0, -0.993174f },
	{ 0.116646f, 0, -0.993174f },
	{ 0.410137f, 0.554131f, 0.72438f },
	{ 0.410137f, 0.554131f, -0.72438f },
	{ -1, 0, 0 },
	{ -0.831271f, 0.555868f, 0 },
	{ 0.492699f, 0, -0.8702f },
	{ 0.492699f, 0, 0.8702f },
	{ -0.410137f, 0.554131f, 0.72438f },
	{ -0.410138f, 0.554131f, -0.72438f },
	{ 1, 0, 0 },
	{ 0.831271f, 0.555868f, 0 },
	{ -0.492699f, 0, -0.8702f },
	{ -0.492699f, 0, 0.8702f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, -0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ 0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, -0.839959f },
	{ -0.54265f, 0, -0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, -0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, 0.839959f },
	{ -0.54265f, 0, -0.839959f }
};

NJS_MODEL_SADX attach_0018AFCC = { vertex_0018AAEC, normal_0018AD5C, LengthOfArray<Sint32>(vertex_0018AAEC), meshlist_0018AA74, matlist_0018A694, LengthOfArray<Uint16>(meshlist_0018AA74), LengthOfArray<Uint16>(matlist_0018A694), { 0, 4.5f, 0 }, 10.10968f, NULL };

NJS_OBJECT O_FF_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018AFCC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017A60C[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 3, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 2, NJD_D_025 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | 0x1 },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 21, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 21, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017A698[] = {
	4, 27, 31, 26, 30,
	4, 29, 24, 28, 25,
	4, 20, 21, 19, 23,
	4, 18, 16, 22, 17
};

Sint16 poly_0017A6C0[] = {
	4, 26, 30, 25, 28,
	4, 19, 23, 17, 22
};

Sint16 poly_0017A6D4[] = {
	4, 21, 27, 23, 26,
	4, 24, 18, 25, 22
};

Sint16 poly_0017A6E8[] = {
	4, 8, 1, 10, 5
};

Sint16 poly_0017A6F2[] = {
	0x8000u | 8, 20, 13, 19, 12, 17, 14, 16, 15,
	0x8000u | 8, 3, 31, 0, 30, 4, 28, 6, 29
};

Sint16 poly_0017A716[] = {
	0x8000u | 8, 6, 29, 7, 24, 11, 18, 15, 16,
	0x8000u | 8, 31, 3, 27, 2, 21, 9, 20, 13
};

Sint16 poly_0017A73A[] = {
	4, 22, 23, 10, 8,
	4, 25, 22, 5, 10,
	4, 23, 26, 8, 1,
	4, 26, 25, 1, 5
};

NJS_TEX uv_0017A764[] = {
	{ 0, 255 },
	{ 0, 3 },
	{ 251, 255 },
	{ 251, 3 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 251, 3 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 3 },
	{ 251, 255 },
	{ 251, 3 }
};

NJS_TEX uv_0017A7A4[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 2040, 255 },
	{ 2040, 7 },
	{ 2040, 7 },
	{ 2040, 255 },
	{ 0, 7 },
	{ 0, 255 }
};

NJS_TEX uv_0017A7C4[] = {
	{ 0, 7 },
	{ 1275, 7 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0, 7 },
	{ 1275, 7 },
	{ 0, 255 },
	{ 1275, 255 }
};

NJS_TEX uv_0017A7E4[] = {
	{ 0, 255 },
	{ 0, 3 },
	{ 251, 255 },
	{ 251, 3 }
};

NJS_TEX uv_0017A7F4[] = {
	{ 0, 254 },
	{ 0, 3 },
	{ 255, 254 },
	{ 255, 3 },
	{ 2805, 254 },
	{ 2805, 3 },
	{ 3060, 254 },
	{ 3060, 3 },
	{ 0, 3 },
	{ 0, 254 },
	{ 255, 3 },
	{ 255, 254 },
	{ 2805, 3 },
	{ 2805, 254 },
	{ 3060, 3 },
	{ 3060, 254 }
};

NJS_TEX uv_0017A834[] = {
	{ 0, 255 },
	{ 251, 255 },
	{ 0 },
	{ 251, 0 },
	{ 0, -2549 },
	{ 251, -2549 },
	{ 0, -2804 },
	{ 251, -2804 },
	{ 251, 254 },
	{ 0, 254 },
	{ 251, 0 },
	{ 0 },
	{ 251, -2550 },
	{ 0, -2550 },
	{ 251, -2805 },
	{ 0, -2805 }
};

NJS_TEX uv_0017A874[] = {
	{ 247, 255 },
	{ 247, -1784 },
	{ 0, 153 },
	{ 0, -1681 },
	{ 0, -1784 },
	{ 0, 255 },
	{ 247, -1681 },
	{ 247, 153 },
	{ 0, -1784 },
	{ 0, 255 },
	{ 247, -1681 },
	{ 247, 153 },
	{ 247, 255 },
	{ 247, -1784 },
	{ 0, 153 },
	{ 0, -1681 }
};

NJS_MESHSET_SADX meshlist_0017A8B4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0017A698, NULL, NULL, NULL, uv_0017A764, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_0017A6C0, NULL, NULL, NULL, uv_0017A7A4, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0017A6D4, NULL, NULL, NULL, uv_0017A7C4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0017A6E8, NULL, NULL, NULL, uv_0017A7E4, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, poly_0017A6F2, NULL, NULL, NULL, uv_0017A7F4, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0017A716, NULL, NULL, NULL, uv_0017A834, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 4, poly_0017A73A, NULL, NULL, NULL, uv_0017A874, NULL }
};

NJS_VECTOR vertex_0017A95C[] = {
	{ 100, 120, 0.000002f },
	{ 90, 90, 0 },
	{ 120, 100, 0 },
	{ 120, 120, 0.000002f },
	{ -100, 120, 0.000003f },
	{ -90, 90, 0 },
	{ -120, 120, 0.000002f },
	{ -120, 100, 0 },
	{ 90, -90, -0.00001f },
	{ 120, -100, -0.00001f },
	{ -90, -90, -0.00001f },
	{ -120, -100, -0.00001f },
	{ 100, -120, -0.00002f },
	{ 120, -120, -0.00002f },
	{ -100, -120, -0.00002f },
	{ -120, -120, -0.00003f },
	{ -120, -120, 9.999997f },
	{ -100, -120, 9.999997f },
	{ -120, -100, 9.999998f },
	{ 100, -120, 9.999997f },
	{ 120, -120, 9.999997f },
	{ 120, -100, 9.999998f },
	{ -100, -100, 9.999998f },
	{ 100, -100, 9.999998f },
	{ -120, 100, 10 },
	{ -100, 100, 10 },
	{ 100, 100, 10 },
	{ 120, 100, 10 },
	{ -100, 120, 10 },
	{ -120, 120, 10 },
	{ 100, 120, 10 },
	{ 120, 120, 10 }
};

NJS_VECTOR normal_0017AADC[] = {
	{ 0, 1, 0 },
	{ -0.300194f, -0.300194f, 0.90541f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 1, 0 },
	{ 0.300194f, -0.300194f, 0.90541f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -1, 0, 0 },
	{ -0.300194f, 0.300194f, 0.90541f },
	{ 1, 0, 0 },
	{ 0.300194f, 0.300194f, 0.90541f },
	{ -1, 0, 0 },
	{ 0, -1, 0 },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0, -1, 0 },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ 0, -0.7071069f, 0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, -0.7071069f, 0.7071069f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.11005f, 0.11005f, 0.987815f },
	{ -0.11005f, 0.11005f, 0.987815f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.11005f, -0.11005f, 0.987815f },
	{ -0.11005f, -0.11005f, 0.987815f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_0017AC5C = { vertex_0017A95C, normal_0017AADC, LengthOfArray<Sint32>(vertex_0017A95C), meshlist_0017A8B4, matlist_0017A60C, LengthOfArray<Uint16>(meshlist_0017A8B4), LengthOfArray<Uint16>(matlist_0017A60C), { 0, 0, 5 }, 120.1041f, NULL };

NJS_OBJECT O_NEON1_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017AC5C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017ACB8[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xB2B2B2B2 }, { 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 2, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017ACF4[] = {
	4, 4, 5, 3, 2,
	4, 6, 4, 1, 3,
	4, 5, 7, 2, 0,
	4, 7, 6, 0, 1
};

Sint16 poly_0017AD1C[] = {
	0x8000u | 5, 5, 7, 11, 6, 10,
	3, 5, 9, 11,
	0x8000u | 5, 6, 4, 8, 5, 9,
	3, 6, 10, 8
};

Sint16 poly_0017AD44[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uv_0017AD50[] = {
	{ 247, 255 },
	{ 247, -1784 },
	{ 0, 153 },
	{ 0, -1681 },
	{ 0, -1784 },
	{ 0, 255 },
	{ 247, -1681 },
	{ 247, 153 },
	{ 0, -1784 },
	{ 0, 255 },
	{ 247, -1681 },
	{ 247, 153 },
	{ 247, 255 },
	{ 247, -1784 },
	{ 0, 153 },
	{ 0, -1681 }
};

NJS_TEX uv_0017AD90[] = {
	{ 2337, 7 },
	{ 212, 7 },
	{ 0, 255 },
	{ 2337, 7 },
	{ 2549, 255 },
	{ 2337, 7 },
	{ 2550, 254 },
	{ 0, 255 },
	{ 212, 7 },
	{ 2337, 7 },
	{ 2550, 254 },
	{ 212, 7 },
	{ 0, 254 },
	{ 212, 7 },
	{ 0, 255 },
	{ 2550, 254 }
};

NJS_TEX uv_0017ADD0[] = {
	{ 0, 255 },
	{ 0, 3 },
	{ 251, 255 },
	{ 251, 3 }
};

NJS_MESHSET_SADX meshlist_0017ADE0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0017ACF4, NULL, NULL, NULL, uv_0017AD50, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0017AD44, NULL, NULL, NULL, uv_0017ADD0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0017AD1C, NULL, NULL, NULL, uv_0017AD90, NULL }
};

NJS_VECTOR vertex_0017AE28[] = {
	{ 90, 90, 0 },
	{ -90, 90, 0 },
	{ 90, -90, -0.00001f },
	{ -90, -90, -0.00001f },
	{ -100, -100, 9.999998f },
	{ 100, -100, 9.999998f },
	{ -100, 100, 10 },
	{ 100, 100, 10 },
	{ -120, -120, -0.00002f },
	{ 120, -120, -0.00002f },
	{ -120, 120, 0.000002f },
	{ 120, 120, 0.000002f }
};

NJS_VECTOR normal_0017AEB8[] = {
	{ -0.300194f, -0.300194f, 0.90541f },
	{ 0.300194f, -0.300194f, 0.90541f },
	{ -0.300194f, 0.300194f, 0.90541f },
	{ 0.300194f, 0.300194f, 0.90541f },
	{ -0.064366f, -0.064366f, 0.9958479f },
	{ 0.064366f, -0.064366f, 0.9958479f },
	{ -0.064366f, 0.064366f, 0.9958479f },
	{ 0.064366f, 0.064366f, 0.9958479f },
	{ -0.235702f, -0.235702f, 0.942809f },
	{ 0.235702f, -0.235702f, 0.942809f },
	{ -0.235702f, 0.235702f, 0.942809f },
	{ 0.235702f, 0.235702f, 0.942809f }
};

NJS_MODEL_SADX attach_0017AF48 = { vertex_0017AE28, normal_0017AEB8, LengthOfArray<Sint32>(vertex_0017AE28), meshlist_0017ADE0, matlist_0017ACB8, LengthOfArray<Uint16>(meshlist_0017ADE0), LengthOfArray<Uint16>(matlist_0017ACB8), { 0, 0, 4.999999f }, 120.1041f, NULL };

NJS_OBJECT O_NEON2_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017AF48, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017AFA4[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 3, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 2, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017AFF4[] = {
	4, 4, 5, 3, 2,
	4, 6, 4, 1, 3,
	4, 5, 7, 2, 0,
	4, 7, 6, 0, 1
};

Sint16 poly_0017B01C[] = {
	4, 7, 14, 6, 15,
	4, 4, 12, 5, 13,
	4, 5, 13, 7, 14,
	4, 6, 15, 4, 12
};

Sint16 poly_0017B044[] = {
	6, 13, 9, 14, 11, 15, 10,
	6, 15, 10, 12, 8, 13, 9
};

Sint16 poly_0017B060[] = {
	4, 2, 0, 3, 1
};

NJS_TEX uv_0017B06C[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_TEX uv_0017B0AC[] = {
	{ 510, -2072 },
	{ 0, -2295 },
	{ 508, 33 },
	{ 0, 254 },
	{ 510, -2072 },
	{ 0, -2295 },
	{ 508, 33 },
	{ 0, 254 },
	{ 510, -2072 },
	{ 0, -2295 },
	{ 508, 33 },
	{ 0, 254 },
	{ 510, -2072 },
	{ 0, -2295 },
	{ 508, 33 },
	{ 0, 254 }
};

NJS_TEX uv_0017B0EC[] = {
	{ 101, 7 },
	{ 0, 254 },
	{ 2447, 7 },
	{ 2550, 254 },
	{ 101, 7 },
	{ 0, 254 },
	{ 2447, 7 },
	{ 2550, 254 },
	{ 101, 7 },
	{ 0, 254 },
	{ 2447, 7 },
	{ 2550, 254 }
};

NJS_TEX uv_0017B11C[] = {
	{ 251, 255 },
	{ 251, 3 },
	{ 0, 255 },
	{ 0, 3 }
};

NJS_MESHSET_SADX meshlist_0017B12C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0017AFF4, NULL, NULL, NULL, uv_0017B06C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0017B01C, NULL, NULL, NULL, uv_0017B0AC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0017B044, NULL, NULL, NULL, uv_0017B0EC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_0017B060, NULL, NULL, NULL, uv_0017B11C, NULL }
};

NJS_VECTOR vertex_0017B18C[] = {
	{ 90, 90, 0 },
	{ -90, 90, 0 },
	{ 90, -90, -0.00001f },
	{ -90, -90, -0.00001f },
	{ -95, -95, 9.999998f },
	{ 95, -95, 9.999998f },
	{ -95, 95, 10 },
	{ 95, 95, 10 },
	{ -125, -125, -0.00002f },
	{ 125, -125, -0.00002f },
	{ -125, 125, 0.000002f },
	{ 125, 125, 0.000002f },
	{ -115, -115, 9.999997f },
	{ 115, -115, 9.999997f },
	{ 115, 115, 10 },
	{ -115, 115, 10 }
};

NJS_VECTOR normal_0017B24C[] = {
	{ -0.424796f, -0.424796f, 0.799435f },
	{ 0.424796f, -0.424796f, 0.799435f },
	{ -0.424796f, 0.424796f, 0.799435f },
	{ 0.424796f, 0.424796f, 0.799435f },
	{ 0.173709f, 0.173709f, 0.9693559f },
	{ -0.173709f, 0.173709f, 0.9693559f },
	{ 0.173709f, -0.173709f, 0.9693559f },
	{ -0.173709f, -0.173709f, 0.9693559f },
	{ -0.408248f, -0.408248f, 0.816497f },
	{ 0.408248f, -0.408248f, 0.816497f },
	{ -0.408248f, 0.408248f, 0.816497f },
	{ 0.408248f, 0.408248f, 0.816497f },
	{ -0.300194f, -0.300194f, 0.90541f },
	{ 0.300194f, -0.300194f, 0.90541f },
	{ 0.300194f, 0.300194f, 0.90541f },
	{ -0.300194f, 0.300194f, 0.90541f }
};

NJS_MODEL_SADX attach_0017B30C = { vertex_0017B18C, normal_0017B24C, LengthOfArray<Sint32>(vertex_0017B18C), meshlist_0017B12C, matlist_0017AFA4, LengthOfArray<Uint16>(meshlist_0017B12C), LengthOfArray<Uint16>(matlist_0017AFA4), { 0, 0, 5 }, 125.1f, NULL };

NJS_OBJECT O_NEON3_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B30C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017B368[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 3, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 0, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 1, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 2, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B3B8[] = {
	4, 7, 11, 12, 10,
	4, 9, 6, 8, 13,
	4, 4, 5, 3, 14,
	4, 2, 0, 15, 1
};

Sint16 poly_0017B3E0[] = {
	4, 12, 10, 13, 8,
	4, 5, 7, 14, 12,
	4, 6, 2, 13, 15,
	4, 3, 14, 1, 15
};

Sint16 poly_0017B408[] = {
	4, 14, 12, 15, 13
};

Sint16 poly_0017B412[] = {
	6, 0, 2, 19, 6, 17, 9,
	6, 4, 3, 18, 1, 19, 0,
	6, 4, 18, 5, 16, 7, 11,
	6, 9, 8, 17, 10, 16, 11
};

NJS_TEX uv_0017B44C[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 510, -255 },
	{ 510, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 }
};

NJS_TEX uv_0017B48C[] = {
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -1275 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 0, -1275 },
	{ 247, 255 },
	{ 247, -1275 },
	{ 0, -1275 },
	{ 0, 255 },
	{ 247, -1275 },
	{ 247, 255 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -1275 },
	{ 0, -1275 }
};

NJS_TEX uv_0017B4CC[] = {
	{ 251, 255 },
	{ 251, 3 },
	{ 0, 255 },
	{ 0, 3 }
};

NJS_TEX uv_0017B4DC[] = {
	{ 2942, 3 },
	{ 2588, 3 },
	{ 3060, 254 },
	{ 470, 3 },
	{ 0, 254 },
	{ 117, 3 },
	{ 2942, 3 },
	{ 2588, 3 },
	{ 3060, 254 },
	{ 470, 3 },
	{ 0, 254 },
	{ 117, 3 },
	{ 117, 3 },
	{ 0, 254 },
	{ 470, 3 },
	{ 3060, 254 },
	{ 2588, 3 },
	{ 2942, 3 },
	{ 2942, 3 },
	{ 2588, 3 },
	{ 3060, 254 },
	{ 470, 3 },
	{ 0, 254 },
	{ 117, 3 }
};

NJS_MESHSET_SADX meshlist_0017B53C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0017B3B8, NULL, NULL, NULL, uv_0017B44C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 4, poly_0017B3E0, NULL, NULL, NULL, uv_0017B48C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_0017B408, NULL, NULL, NULL, uv_0017B4CC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0017B412, NULL, NULL, NULL, uv_0017B4DC, NULL }
};

NJS_VECTOR vertex_0017B59C[] = {
	{ -120, -120, 9.999997f },
	{ -90, -120, 9.999997f },
	{ -120, -90, 9.999998f },
	{ 90, -120, 9.999997f },
	{ 120, -120, 9.999997f },
	{ 120, -90, 9.999998f },
	{ -120, 90, 10 },
	{ 120, 90, 10 },
	{ -90, 120, 10 },
	{ -120, 120, 10 },
	{ 90, 120, 10 },
	{ 120, 120, 10 },
	{ 90, 90, 10 },
	{ -90, 90, 10 },
	{ 90, -90, 9.999998f },
	{ -90, -90, 9.999998f },
	{ 130, 130, 0.000002f },
	{ -130, 130, 0.000002f },
	{ 130, -130, -0.00002f },
	{ -130, -130, -0.00003f }
};

NJS_VECTOR normal_0017B68C[] = {
	{ -0.300194f, -0.300194f, 0.90541f },
	{ 0, -0.382683f, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ 0, -0.382683f, 0.92388f },
	{ 0.300194f, -0.300194f, 0.90541f },
	{ 0.382683f, 0, 0.92388f },
	{ -0.382683f, 0, 0.92388f },
	{ 0.382683f, 0, 0.92388f },
	{ 0, 0.382683f, 0.92388f },
	{ -0.300194f, 0.300194f, 0.90541f },
	{ 0, 0.382683f, 0.92388f },
	{ 0.300194f, 0.300194f, 0.90541f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0.408248f, 0.408248f, 0.816497f },
	{ -0.408248f, 0.408248f, 0.816497f },
	{ 0.408248f, -0.408248f, 0.816497f },
	{ -0.408248f, -0.408248f, 0.816497f }
};

NJS_MODEL_SADX attach_0017B77C = { vertex_0017B59C, normal_0017B68C, LengthOfArray<Sint32>(vertex_0017B59C), meshlist_0017B53C, matlist_0017B368, LengthOfArray<Uint16>(meshlist_0017B53C), LengthOfArray<Uint16>(matlist_0017B368), { 0, 0, 5 }, 130.0961f, NULL };

NJS_OBJECT O_NEON4_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017B77C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017BF40[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 95, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 93, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BFB8[] = {
	8, 4, 7, 5, 8, 2, 6, 4, 7
};

Sint16 poly_0017BFCA[] = {
	4, 1, 7, 0, 6,
	4, 3, 8, 1, 7,
	4, 0, 6, 3, 8
};

Sint16 poly_0017BFE8[] = {
	0x8000u | 10, 13, 24, 15, 23, 11, 22, 9, 21, 13, 24,
	0x8000u | 10, 14, 22, 10, 23, 12, 24, 16, 21, 14, 22
};

Sint16 poly_0017C014[] = {
	4, 16, 12, 14, 10,
	4, 36, 32, 34, 30
};

Sint16 poly_0017C028[] = {
	0x8000u | 10, 35, 38, 31, 40, 29, 39, 33, 37, 35, 38,
	0x8000u | 10, 30, 38, 32, 37, 36, 39, 34, 40, 30, 38
};

Sint16 poly_0017C054[] = {
	4, 20, 18, 19, 17,
	4, 28, 26, 27, 25
};

NJS_TEX uv_0017C068[] = {
	{ 248, 3 },
	{ 248, 254 },
	{ 248, 3 },
	{ 248, 254 },
	{ 33, 3 },
	{ 33, 254 },
	{ 248, 3 },
	{ 248, 254 }
};

NJS_TEX uv_0017C088[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_TEX uv_0017C0B8[] = {
	{ 21, 254 },
	{ 227, 12 },
	{ 0, 3 },
	{ 227, 12 },
	{ 0, 3 },
	{ 250, 246 },
	{ 21, 254 },
	{ 250, 246 },
	{ 21, 254 },
	{ 227, 12 },
	{ 60, 228 },
	{ 250, 246 },
	{ 60, 228 },
	{ 227, 12 },
	{ 60, 33 },
	{ 227, 12 },
	{ 60, 33 },
	{ 250, 246 },
	{ 60, 228 },
	{ 250, 246 }
};

NJS_TEX uv_0017C108[] = {
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0017C128[] = {
	{ 251, 3 },
	{ 4, 12 },
	{ 0, 3 },
	{ 4, 237 },
	{ 0, 255 },
	{ 247, 246 },
	{ 251, 255 },
	{ 247, 12 },
	{ 251, 3 },
	{ 4, 12 },
	{ 10, 228 },
	{ 4, 12 },
	{ 10, 33 },
	{ 247, 12 },
	{ 242, 33 },
	{ 247, 246 },
	{ 242, 228 },
	{ 4, 237 },
	{ 10, 228 },
	{ 4, 12 }
};

NJS_TEX uv_0017C178[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_MESHSET_SADX meshlist_0017C198[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017BFB8, NULL, NULL, NULL, uv_0017C068, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0017BFCA, NULL, NULL, NULL, uv_0017C088, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0017BFE8, NULL, NULL, NULL, uv_0017C0B8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_0017C014, NULL, NULL, NULL, uv_0017C108, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_0017C028, NULL, NULL, NULL, uv_0017C128, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_0017C054, NULL, NULL, NULL, uv_0017C178, NULL }
};

NJS_VECTOR vertex_0017C228[] = {
	{ -0.803844f, 0.084432f, 0.028642f },
	{ 0.255785f, 0.084432f, 0.470063f },
	{ -0.479161f, 22.47149f, 0.016976f },
	{ 0.255785f, 0.084432f, -0.41278f },
	{ 0.15247f, 22.47149f, 0.278606f },
	{ 0.15247f, 22.47149f, -0.244654f },
	{ -0.479161f, 1.871623f, 0.016976f },
	{ 0.15247f, 1.871623f, 0.278606f },
	{ 0.15247f, 1.871623f, -0.244654f },
	{ 0.189557f, 20.40888f, 3.889434f },
	{ 0.201858f, 20.59617f, 3.553135f },
	{ 0.18273f, 22.20073f, 3.889434f },
	{ 0.201858f, 21.99344f, 3.553135f },
	{ 0.189557f, 20.40888f, -4.389705f },
	{ 0.201857f, 20.59617f, -4.096971f },
	{ 0.18273f, 22.20073f, -4.389705f },
	{ 0.201857f, 21.99344f, -4.096971f },
	{ 0.201859f, 13.79177f, 4.554445f },
	{ 0.201859f, 15.68905f, 4.554445f },
	{ 0.201859f, 13.79177f, -5.095662f },
	{ 0.201859f, 15.68905f, -5.095662f },
	{ 0.261836f, 20.47053f, -4.265966f },
	{ 0.261837f, 20.47053f, 3.742796f },
	{ 0.254294f, 22.13908f, 3.742796f },
	{ 0.254293f, 22.13908f, -4.265966f },
	{ -4.553135f, 18.16816f, 0.408885f },
	{ -4.553135f, 20.06544f, 0.408885f },
	{ 5.096971f, 18.16816f, 0.408885f },
	{ 5.096971f, 20.06544f, 0.408885f },
	{ -3.890639f, 16.01649f, 0.38274f },
	{ -3.554445f, 16.20377f, 0.401868f },
	{ -3.890639f, 17.80833f, 0.38274f },
	{ -3.554445f, 17.60105f, 0.401868f },
	{ 4.388501f, 16.01649f, 0.38274f },
	{ 4.095662f, 16.20377f, 0.401868f },
	{ 4.388501f, 17.80833f, 0.38274f },
	{ 4.095662f, 17.60105f, 0.401868f },
	{ 4.264706f, 17.74669f, 0.454304f },
	{ -3.744056f, 17.74669f, 0.454304f },
	{ 4.264706f, 16.07813f, 0.454304f },
	{ -3.744056f, 16.14213f, 0.454304f }
};

NJS_VECTOR normal_0017C414[] = {
	{ -0.983712f, 0.179722f, 0.003214f },
	{ 0.546192f, 0.120038f, 0.8290139f },
	{ -1, 0, 0 },
	{ 0.5497479f, 0.109339f, -0.828144f },
	{ 0.5555699f, 0, 0.83147f },
	{ 0.5555699f, 0, -0.831469f },
	{ -0.99542f, 0.09557299f, -0.002331f },
	{ 0.5568939f, 0.062022f, 0.828264f },
	{ 0.555277f, 0.056362f, -0.829754f },
	{ 0.904865f, -0.268305f, 0.330502f },
	{ 0.978512f, 0.179814f, -0.100903f },
	{ 0.904162f, 0.271439f, 0.329867f },
	{ 0.9852419f, -0.136687f, -0.103027f },
	{ 0.881758f, -0.304095f, -0.360596f },
	{ 0.9775749f, 0.176425f, 0.114986f },
	{ 0.8811719f, 0.306771f, -0.35976f },
	{ 0.984002f, -0.13394f, 0.117477f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.941788f, -0.308383f, -0.13392f },
	{ 0.9415089f, -0.319356f, 0.107573f },
	{ 0.938745f, 0.326229f, 0.111052f },
	{ 0.938605f, 0.316206f, -0.137964f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.255838f, -0.30147f, 0.918511f },
	{ 0.08409999f, 0.225192f, 0.970678f },
	{ -0.328916f, 0.268834f, 0.905286f },
	{ 0.096538f, -0.136523f, 0.985922f },
	{ 0.346674f, -0.235554f, 0.907927f },
	{ -0.108608f, 0.201653f, 0.973417f },
	{ 0.358718f, 0.304133f, 0.8825099f },
	{ -0.110113f, -0.133754f, 0.9848779f },
	{ 0.140206f, 0.314742f, 0.938765f },
	{ -0.113433f, 0.324795f, 0.938958f },
	{ 0.131693f, -0.221048f, 0.9663309f },
	{ -0.113649f, -0.21874f, 0.969142f }
};

NJS_MODEL_SADX attach_0017C600 = { vertex_0017C228, normal_0017C414, LengthOfArray<Sint32>(vertex_0017C228), meshlist_0017C198, matlist_0017BF40, LengthOfArray<Uint16>(meshlist_0017C198), LengthOfArray<Uint16>(matlist_0017BF40), { 0.271918f, 11.27796f, -0.270608f }, 12.18918f, NULL };

NJS_OBJECT O_SIGN1_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017C600, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017BA50[] = {
	{ { 0xFFB2B2B2 }, { 0xFF7F7F7F }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 89, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BA78[] = {
	0x8000u | 10, 5, 11, 1, 8, 3, 9, 7, 10, 5, 11,
	4, 2, 8, 6, 9,
	8, 8, 2, 11, 0, 10, 4, 9, 6
};

Sint16 poly_0017BAAA[] = {
	4, 7, 3, 5, 1
};

NJS_TEX uv_0017BAB4[] = {
	{ 241, 247 },
	{ 0, 254 },
	{ 9, 247 },
	{ 0, 3 },
	{ 9, 10 },
	{ 251, 3 },
	{ 241, 10 },
	{ 251, 254 },
	{ 241, 247 },
	{ 0, 254 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 3 },
	{ 0, 254 },
	{ 0, 254 },
	{ 251, 254 },
	{ 251, 254 },
	{ 251, 3 },
	{ 251, 3 }
};

NJS_TEX uv_0017BB0C[] = {
	{ 241, 10 },
	{ 9, 10 },
	{ 241, 247 },
	{ 9, 247 }
};

NJS_MESHSET_SADX meshlist_0017BB1C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017BA78, NULL, NULL, NULL, uv_0017BAB4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0017BAAA, NULL, NULL, NULL, uv_0017BB0C, NULL }
};

NJS_VECTOR vertex_0017BB4C[] = {
	{ 0.013811f, 0.000281f, 0.372834f },
	{ 0.33331f, 0.31978f, 0.626503f },
	{ 0.013811f, 11.44025f, 0.372834f },
	{ 0.33331f, 11.12075f, 0.626503f },
	{ 8.24981f, 0.000281f, 0.372834f },
	{ 7.930313f, 0.31978f, 0.626503f },
	{ 8.24981f, 11.44025f, 0.372834f },
	{ 7.930313f, 11.12075f, 0.626503f },
	{ 0.013811f, 11.44025f, 0.8738599f },
	{ 8.24981f, 11.44025f, 0.8738599f },
	{ 8.24981f, 0.000281f, 0.8738599f },
	{ 0.013811f, 0.000281f, 0.8738599f }
};

NJS_VECTOR normal_0017BBDC[] = {
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.25075f, 0.25075f, 0.935013f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.25075f, -0.250749f, 0.935013f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.25075f, 0.25075f, 0.935013f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.25075f, -0.250749f, 0.935013f },
	{ -0.50256f, 0.5025589f, 0.703469f },
	{ 0.50256f, 0.5025589f, 0.703469f },
	{ 0.5025589f, -0.5025589f, 0.703469f },
	{ -0.5025589f, -0.5025589f, 0.703469f }
};

NJS_MODEL_SADX attach_0017BC6C = { vertex_0017BB4C, normal_0017BBDC, LengthOfArray<Sint32>(vertex_0017BB4C), meshlist_0017BB1C, matlist_0017BA50, LengthOfArray<Uint16>(meshlist_0017BB1C), LengthOfArray<Uint16>(matlist_0017BA50), { 4.131811f, 5.720266f, 0.623347f }, 5.725468f, NULL };

NJS_OBJECT O_POSTER2_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017BC6C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017B7D8[] = {
	{ { 0xFFB2B2B2 }, { 0xFF7F7F7F }, 11, 92, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 87, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017B800[] = {
	0x8000u | 10, 3, 9, 7, 10, 5, 11, 1, 8, 3, 9,
	4, 2, 8, 6, 9,
	8, 8, 2, 11, 0, 10, 4, 9, 6
};

Sint16 poly_0017B832[] = {
	4, 7, 3, 5, 1
};

NJS_TEX uv_0017B83C[] = {
	{ 9, 10 },
	{ 251, 3 },
	{ 241, 10 },
	{ 251, 255 },
	{ 241, 247 },
	{ 0, 255 },
	{ 9, 247 },
	{ 0, 3 },
	{ 9, 10 },
	{ 251, 3 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 3 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 251, 3 },
	{ 251, 3 }
};

NJS_TEX uv_0017B894[] = {
	{ 241, 10 },
	{ 9, 10 },
	{ 241, 247 },
	{ 9, 247 }
};

NJS_MESHSET_SADX meshlist_0017B8A4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017B800, NULL, NULL, NULL, uv_0017B83C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0017B832, NULL, NULL, NULL, uv_0017B894, NULL }
};

NJS_VECTOR vertex_0017B8D4[] = {
	{ 0.002842f, 0.025193f, 0.020457f },
	{ 0.45284f, 0.475191f, 0.274127f },
	{ 0.002842f, 16.13782f, 0.020457f },
	{ 0.45284f, 15.68782f, 0.274127f },
	{ 11.60284f, 0.025193f, 0.020457f },
	{ 11.15284f, 0.475191f, 0.274127f },
	{ 11.60284f, 16.13782f, 0.020457f },
	{ 11.15284f, 15.68782f, 0.274127f },
	{ 0.002842f, 16.13782f, 0.521484f },
	{ 11.60284f, 16.13782f, 0.521484f },
	{ 11.60284f, 0.025193f, 0.521484f },
	{ 0.002842f, 0.025193f, 0.521484f }
};

NJS_VECTOR normal_0017B964[] = {
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.190258f, 0.190258f, 0.963122f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.190258f, -0.190258f, 0.963122f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.190258f, 0.190258f, 0.963122f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.190258f, -0.190258f, 0.963122f },
	{ -0.523287f, 0.523287f, 0.672563f },
	{ 0.523287f, 0.523287f, 0.672563f },
	{ 0.523287f, -0.523287f, 0.672563f },
	{ -0.523287f, -0.523287f, 0.672564f }
};

NJS_MODEL_SADX attach_0017B9F4 = { vertex_0017B8D4, normal_0017B964, LengthOfArray<Sint32>(vertex_0017B8D4), meshlist_0017B8A4, matlist_0017B7D8, LengthOfArray<Uint16>(meshlist_0017B8A4), LengthOfArray<Uint16>(matlist_0017B7D8), { 5.80284f, 8.081507f, 0.270971f }, 5.537941f, NULL };

NJS_OBJECT O_POSTER0_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0017B9F4, 0, 0, 0, 0, 0, 0, 0.6758f, 0.6867f, 1, NULL, NULL };

NJS_MATERIAL matlist_0017BCC8[] = {
	{ { 0xFFB2B2B2 }, { 0xFF7F7F7F }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 88, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017BCF0[] = {
	0x8000u | 10, 9, 3, 8, 1, 11, 5, 10, 7, 9, 3,
	4, 2, 8, 6, 9,
	8, 8, 2, 11, 0, 10, 4, 9, 6
};

Sint16 poly_0017BD22[] = {
	4, 7, 3, 5, 1
};

NJS_TEX uv_0017BD2C[] = {
	{ 251, 3 },
	{ 9, 10 },
	{ 0, 3 },
	{ 9, 247 },
	{ 0, 254 },
	{ 241, 247 },
	{ 251, 254 },
	{ 241, 10 },
	{ 251, 3 },
	{ 9, 10 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 3 },
	{ 0, 254 },
	{ 0, 254 },
	{ 251, 254 },
	{ 251, 254 },
	{ 251, 3 },
	{ 251, 3 }
};

NJS_TEX uv_0017BD84[] = {
	{ 241, 10 },
	{ 9, 10 },
	{ 241, 247 },
	{ 9, 247 }
};

NJS_MESHSET_SADX meshlist_0017BD94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0017BCF0, NULL, NULL, NULL, uv_0017BD2C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0017BD22, NULL, NULL, NULL, uv_0017BD84, NULL }
};

NJS_VECTOR vertex_0017BDC4[] = {
	{ 0.02964f, 0.037755f, 0.015218f },
	{ 0.353639f, 0.361753f, 0.268888f },
	{ 0.02964f, 11.63885f, 0.015218f },
	{ 0.353639f, 11.31485f, 0.268888f },
	{ 8.381639f, 0.037755f, 0.015218f },
	{ 8.057639f, 0.361753f, 0.268888f },
	{ 8.381639f, 11.63885f, 0.015218f },
	{ 8.057639f, 11.31485f, 0.268888f },
	{ 0.02964f, 11.63885f, 0.516244f },
	{ 8.381639f, 11.63885f, 0.516244f },
	{ 8.381639f, 0.037755f, 0.516244f },
	{ 0.02964f, 0.037755f, 0.516244f }
};

NJS_VECTOR normal_0017BE54[] = {
	{ -0.7071069f, -0.7071069f, 0 },
	{ 0.248118f, 0.248118f, 0.936416f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.248118f, -0.248118f, 0.936416f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ -0.248118f, 0.248118f, 0.936416f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.248118f, -0.248118f, 0.936416f },
	{ -0.503514f, 0.503514f, 0.7021019f },
	{ 0.503514f, 0.503514f, 0.7021019f },
	{ 0.503514f, -0.503514f, 0.7021019f },
	{ -0.503514f, -0.503514f, 0.7021019f }
};

NJS_MODEL_SADX attach_0017BEE4 = { vertex_0017BDC4, normal_0017BE54, LengthOfArray<Sint32>(vertex_0017BDC4), meshlist_0017BD94, matlist_0017BCC8, LengthOfArray<Uint16>(meshlist_0017BD94), LengthOfArray<Uint16>(matlist_0017BCC8), { 4.205639f, 5.838301f, 0.265731f }, 5.805953f, NULL };

NJS_OBJECT O_POSTER1_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017BEE4, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00176A0C[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 86, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 85, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00176A34[] = {
	5, 0, 4, 2
};

Sint16 poly_00176A3C[] = {
	4, 3, 5, 1
};

NJS_TEX uv_00176A44[] = {
	{ 251, 254 },
	{ 0, 254 },
	{ 251, 3 },
	{ 0, 3 }
};

NJS_TEX uv_00176A54[] = {
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 254 },
	{ 251, 254 }
};

NJS_MESHSET_SADX meshlist_00176A64[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_00176A34, NULL, NULL, NULL, uv_00176A44, NULL },
	{ NJD_MESHSET_4 | 1, 1, poly_00176A3C, NULL, NULL, NULL, uv_00176A54, NULL }
};

NJS_VECTOR vertex_00176A94[] = {
	{ -20, -10, 0 },
	{ 20, -10, 0 },
	{ -20, 10, 0 },
	{ 20, 10, 0 },
	{ 0, 10, 0 },
	{ 0, -10, 0 }
};

NJS_VECTOR normal_00176ADC[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_00176B24 = { vertex_00176A94, normal_00176ADC, LengthOfArray<Sint32>(vertex_00176A94), meshlist_00176A64, matlist_00176A0C, LengthOfArray<Uint16>(meshlist_00176A64), LengthOfArray<Uint16>(matlist_00176A0C), { 0 }, 20, NULL };

NJS_OBJECT O_Post4_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00176B24, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017690C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00176920[] = {
	1, 0, 3, 2
};

NJS_TEX uv_00176928[] = {
	{ 0, 254 },
	{ 251, 254 },
	{ 0, 3 },
	{ 251, 3 }
};

NJS_MESHSET_SADX meshlist_00176938[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_00176920, NULL, NULL, NULL, uv_00176928, NULL }
};

NJS_VECTOR vertex_00176950[] = {
	{ -10, -10, 0 },
	{ 10, -10, 0 },
	{ -10, 10, 0 },
	{ 10, 10, 0 }
};

NJS_VECTOR normal_00176980[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_001769B0 = { vertex_00176950, normal_00176980, LengthOfArray<Sint32>(vertex_00176950), meshlist_00176938, matlist_0017690C, LengthOfArray<Uint16>(meshlist_00176938), LengthOfArray<Uint16>(matlist_0017690C), { 0 }, 10, NULL };

NJS_OBJECT O_Post1_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001769B0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

