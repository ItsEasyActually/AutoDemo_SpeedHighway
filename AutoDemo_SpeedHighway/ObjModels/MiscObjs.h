#pragma once
#include <SADXModLoader.h>

NJS_MATERIAL matlist_00187D18[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 24, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 147, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 48, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 16, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFFF425A }, { 0x00000000 }, 0, 15, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_00187D7C[] = {
	3, 3, 1, 0,
	3, 1, 2, 0,
	3, 2, 3, 0
};

Sint16 poly_00187D94[] = {
	4, 7, 8, 5, 6,
	4, 4, 7, 9, 5,
	4, 9, 6, 4, 8
};

Sint16 poly_00187DB2[] = {
	3, 7, 4, 8
};

Sint16 poly_00187DBA[] = {
	0x8000u | 5, 11, 12, 10, 13, 14,
	4, 17, 10, 18, 11,
	0x8000u | 5, 14, 15, 10, 16, 17,
	0x8000u | 5, 26, 27, 19, 20, 21,
	4, 21, 19, 22, 23,
	0x8000u | 5, 23, 24, 19, 25, 26
};

Sint16 poly_00187DFE[] = {
	3, 31, 29, 28,
	3, 29, 30, 28,
	3, 30, 31, 28
};

NJS_TEX uv_00187E18[] = {
	{ 0, 253 },
	{ 244, 253 },
	{ 123, 7 },
	{ 0, 253 },
	{ 244, 253 },
	{ 123, 7 },
	{ 0, 253 },
	{ 244, 253 },
	{ 123, 7 }
};

NJS_TEX uv_00187E3C[] = {
	{ 251, -1015 },
	{ 0, -1015 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, -1015 },
	{ 0, -1015 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, -1015 },
	{ 0, -1015 },
	{ 251, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00187E6C[] = {
	{ 104, -199 },
	{ 404, -199 },
	{ 255, 97 }
};

NJS_TEX uv_00187E78[] = {
	{ 247, 131 },
	{ 210, 44 },
	{ 123, 131 },
	{ 123, 7 },
	{ 36, 44 },
	{ 123, 254 },
	{ 123, 131 },
	{ 210, 218 },
	{ 247, 131 },
	{ 36, 44 },
	{ 0, 131 },
	{ 123, 131 },
	{ 36, 218 },
	{ 123, 254 },
	{ 123, 255 },
	{ 210, 218 },
	{ 123, 131 },
	{ 247, 131 },
	{ 210, 44 },
	{ 210, 44 },
	{ 123, 131 },
	{ 123, 7 },
	{ 36, 44 },
	{ 36, 44 },
	{ 0, 131 },
	{ 123, 131 },
	{ 36, 218 },
	{ 123, 255 }
};

NJS_TEX uv_00187EE8[] = {
	{ 238, 254 },
	{ 0, 254 },
	{ 120, 15 },
	{ 238, 254 },
	{ 0, 254 },
	{ 120, 15 },
	{ 238, 254 },
	{ 0, 254 },
	{ 120, 15 }
};

NJS_MESHSET_SADX meshlist_00187F0C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00187D7C, NULL, NULL, NULL, uv_00187E18, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00187D94, NULL, NULL, NULL, uv_00187E3C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 1, poly_00187DB2, NULL, NULL, NULL, uv_00187E6C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_00187DBA, NULL, NULL, NULL, uv_00187E78, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 3, poly_00187DFE, NULL, NULL, NULL, uv_00187EE8, NULL }
};

NJS_VECTOR vertex_00187F84[] = {
	{ 0, 170.262f, 0 },
	{ 1.309433f, 129.582f, 0.7559969f },
	{ 0, 129.582f, -1.512001f },
	{ -1.309433f, 129.582f, 0.756004f },
	{ 9.180008f, 129.6f, 6.479996f },
	{ -14.58f, 0, 9.72f },
	{ 0, 0, -17.28f },
	{ -9.180008f, 129.6f, 6.479996f },
	{ 0, 129.6f, -10.8f },
	{ 14.58f, 0, 9.72f },
	{ 0, 111.6511f, -12.06f },
	{ 12.96001f, 111.6511f, -17.46f },
	{ 9.164107f, 120.8152f, -17.46f },
	{ 0, 124.6111f, -17.45999f },
	{ -9.164107f, 120.8152f, -17.45999f },
	{ -12.95999f, 111.6511f, -17.45999f },
	{ -9.164107f, 102.487f, -17.45999f },
	{ 0, 98.69109f, -17.46f },
	{ 9.164107f, 102.487f, -17.46f },
	{ 0, 80.76304f, -13.5f },
	{ 15.552f, 80.76304f, -19.98f },
	{ 10.99692f, 91.75997f, -19.98f },
	{ 0, 96.31504f, -19.98f },
	{ -10.99693f, 91.75997f, -19.98f },
	{ -15.552f, 80.76304f, -19.98f },
	{ -10.99693f, 69.76612f, -19.98f },
	{ 0, 65.21104f, -19.98f },
	{ 10.99692f, 69.76612f, -19.98f },
	{ 0, 167.672f, 0 },
	{ 0, 175.964f, -1.8144f },
	{ 1.57132f, 175.964f, 0.907204f },
	{ -1.57132f, 175.964f, 0.907204f }
};

NJS_VECTOR normal_00188104[] = {
	{ -0.000183f, 1, 0.000112f },
	{ 0.865429f, 0.037142f, 0.499653f },
	{ -0.00001f, 0.037142f, -0.99931f },
	{ -0.865427f, 0.037143f, 0.499656f },
	{ 0.702154f, 0.574885f, 0.420104f },
	{ -0.857096f, 0.048534f, 0.5128649f },
	{ 0, 0.052579f, -0.998617f },
	{ -0.702154f, 0.574885f, 0.420104f },
	{ 0, 0.569261f, -0.822157f },
	{ 0.857096f, 0.048534f, 0.5128649f },
	{ 0, 0, -1 },
	{ -0.384615f, 0, -0.923077f },
	{ -0.271964f, -0.271964f, -0.923077f },
	{ 0, -0.384615f, -0.923077f },
	{ 0.271964f, -0.271964f, -0.923077f },
	{ 0.384615f, 0, -0.923077f },
	{ 0.271964f, 0.271964f, -0.923077f },
	{ 0, 0.384615f, -0.923077f },
	{ -0.271964f, 0.271964f, -0.923077f },
	{ 0, 0, -1 },
	{ -0.384616f, 0, -0.923077f },
	{ -0.271964f, -0.271964f, -0.923077f },
	{ 0, -0.384615f, -0.923077f },
	{ 0.271964f, -0.271964f, -0.923077f },
	{ 0.384615f, 0, -0.923077f },
	{ 0.271964f, 0.271964f, -0.923077f },
	{ 0, 0.384615f, -0.923077f },
	{ -0.271965f, 0.271964f, -0.923077f },
	{ 0, -1, 0 },
	{ 0, -0.213756f, -0.976887f },
	{ 0.846009f, -0.213756f, 0.488444f },
	{ -0.846009f, -0.213756f, 0.488444f }
};

NJS_MODEL_SADX attach_00188284 = { vertex_00187F84, normal_00188104, LengthOfArray<Sint32>(vertex_00187F84), meshlist_00187F0C, matlist_00187D18, LengthOfArray<Uint16>(meshlist_00187F0C), LengthOfArray<Uint16>(matlist_00187D18), { 0, 87.98202f, -5.130001f }, 89.22644f, NULL };

NJS_OBJECT O_Antena_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188284, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

CollisionData RadioTower_Collision[] = {
	{ 0, 2, 0x77, 0, 0,   0.0, 10.0, 0.0,    8.0, 11.0, 0.0,    0 },
	{ 0, 2, 0x77, 0, 0,   0.0, 32.0, 0.0,    7.0, 11.0, 0.0,    0 },
	{ 0, 2, 0x77, 0, 0,   0.0, 54.0, 0.0,    6.0, 11.0, 0.0,    0 },
	{ 0, 2, 0x77, 0, 0,   0.0, 76.0, 0.0,    0.5, 12.0, 0.0,    0 },
	{ 0, 3, 0x77, 0, 0,   0.0, 40.0, -9.0,   8.0, 8.0, 1.0,     0 },
	{ 0, 3, 0x77, 0, 0,   0.0, 56.0, -9.0,   6.0, 6.0, 1.0,     0 }
};

NJS_MATERIAL matlist_00179DA0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 91, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 93, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 155, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00179DDC[] = {
	4, 7, 3, 5, 1,
	8, 6, 7, 4, 5, 10, 11, 8, 9,
	4, 7, 6, 3, 2,
	0x8000u | 6, 22, 16, 18, 12, 20, 14,
	6, 10, 8, 4, 0, 6, 2,
	8, 16, 17, 22, 23, 18, 19, 20, 21,
	4, 20, 21, 14, 15,
	4, 21, 19, 15, 13
};

Sint16 poly_00179E44[] = {
	4, 14, 15, 2, 3,
	4, 15, 13, 3, 1,
	0x8000u | 8, 17, 9, 16, 8, 12, 0, 14, 2
};

Sint16 poly_00179E6A[] = {
	0x8000u | 8, 25, 24, 26, 30, 28, 31, 25, 24,
	6, 30, 32, 24, 29, 27, 32,
	3, 27, 31, 24,
	0x8000u | 8, 34, 33, 35, 39, 37, 40, 34, 33,
	6, 39, 41, 33, 38, 36, 41,
	3, 36, 40, 33,
	0x8000u | 8, 43, 42, 44, 48, 46, 49, 43, 42,
	6, 48, 50, 42, 47, 45, 50,
	3, 45, 49, 42
};

NJS_TEX uv_00179EE4[] = {
	{ 242, 3 },
	{ 167, 3 },
	{ 251, 254 },
	{ 167, 254 },
	{ 242, 3 },
	{ 242, 3 },
	{ 251, 207 },
	{ 251, 254 },
	{ 251, 207 },
	{ 251, 243 },
	{ 167, 207 },
	{ 167, 243 },
	{ 242, 255 },
	{ 242, 255 },
	{ 167, 255 },
	{ 167, 255 },
	{ 0, 207 },
	{ 83, 207 },
	{ 0, 207 },
	{ 83, 207 },
	{ 8, 3 },
	{ 83, 3 },
	{ 251, 207 },
	{ 167, 207 },
	{ 251, 207 },
	{ 167, 207 },
	{ 242, 3 },
	{ 167, 3 },
	{ 83, 207 },
	{ 83, 243 },
	{ 0, 207 },
	{ 0, 243 },
	{ 0, 207 },
	{ 0, 254 },
	{ 8, 3 },
	{ 8, 3 },
	{ 8, 255 },
	{ 8, 255 },
	{ 83, 255 },
	{ 83, 255 },
	{ 8, 3 },
	{ 0, 254 },
	{ 83, 3 },
	{ 83, 254 }
};

NJS_TEX uv_00179F94[] = {
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 0, 254 },
	{ 251, 3 },
	{ 251, 254 },
	{ 0, 243 },
	{ 251, 243 },
	{ 0, 207 },
	{ 251, 207 },
	{ 0, 207 },
	{ 251, 207 },
	{ 0, 3 },
	{ 251, 3 }
};

NJS_TEX uv_00179FD4[] = {
	{ 123, 10 },
	{ 123, 195 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 },
	{ 123, 10 },
	{ 123, 195 },
	{ 0, 255 },
	{ 0, 255 },
	{ 123, 195 },
	{ 123, 225 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 123, 195 },
	{ 123, 10 },
	{ 123, 195 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 },
	{ 123, 10 },
	{ 123, 195 },
	{ 0, 255 },
	{ 0, 255 },
	{ 123, 195 },
	{ 123, 225 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 123, 195 },
	{ 123, 10 },
	{ 123, 195 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 },
	{ 123, 10 },
	{ 123, 195 },
	{ 0, 255 },
	{ 0, 255 },
	{ 123, 195 },
	{ 123, 225 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 123, 195 }
};

NJS_MESHSET_SADX meshlist_0017A0A0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00179DDC, NULL, NULL, NULL, uv_00179EE4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_00179E44, NULL, NULL, NULL, uv_00179F94, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 9, poly_00179E6A, NULL, NULL, NULL, uv_00179FD4, NULL }
};

NJS_VECTOR vertex_0017A0E8[] = {
	{ 3.75f, 4.874989f, 2.4375f },
	{ 3.75f, 3.374989f, 4.3125f },
	{ 3.75f, 11.24999f, 2.411908f },
	{ 3.75f, 11.24999f, 4.007506f },
	{ 11.25f, 4.874989f, 2.4375f },
	{ 11.25f, 3.374989f, 4.3125f },
	{ 10.5f, 11.24999f, 2.411908f },
	{ 10.5f, 11.24999f, 4.007506f },
	{ 3.75f, 4.874989f, -3 },
	{ 3.75f, 3.749989f, -3.1875f },
	{ 11.25f, 4.874989f, -3 },
	{ 11.25f, 3.749989f, -3.1875f },
	{ -3.75f, 4.874989f, 2.4375f },
	{ -3.75f, 3.374989f, 4.3125f },
	{ -3.75f, 11.24999f, 2.411908f },
	{ -3.75f, 11.24999f, 4.007506f },
	{ -3.75f, 4.874989f, -3 },
	{ -3.75f, 3.749989f, -3.1875f },
	{ -11.25f, 4.874989f, 2.4375f },
	{ -11.25f, 3.374989f, 4.3125f },
	{ -10.5f, 11.24999f, 2.411908f },
	{ -10.5f, 11.24999f, 4.007506f },
	{ -11.25f, 4.874989f, -3 },
	{ -11.25f, 3.749989f, -3.1875f },
	{ 10.5f, 0.8999889f, -2.7375f },
	{ 10.5f, 3.712489f, -2.3625f },
	{ 10.125f, 3.749989f, -3.1875f },
	{ 10.875f, -0.00011f, 1.637501f },
	{ 10.875f, 3.749989f, -3.1875f },
	{ 10.5f, 0.449989f, 2.012501f },
	{ 10.125f, -0.00011f, -3.75f },
	{ 10.875f, -0.00011f, -3.75f },
	{ 10.125f, -0.00011f, 1.637501f },
	{ -0.09999999f, 0.8999889f, -2.7375f },
	{ -0.09999999f, 3.712489f, -2.3625f },
	{ -0.475f, 3.749989f, -3.1875f },
	{ 0.275f, -0.00011f, 1.637501f },
	{ 0.275f, 3.749989f, -3.1875f },
	{ -0.09999999f, 0.449989f, 2.012501f },
	{ -0.475f, -0.00011f, -3.75f },
	{ 0.275f, -0.00011f, -3.75f },
	{ -0.475f, -0.00011f, 1.637501f },
	{ -10.5f, 0.8999889f, -2.7375f },
	{ -10.5f, 3.712489f, -2.3625f },
	{ -10.875f, 3.749989f, -3.1875f },
	{ -10.125f, -0.00011f, 1.637501f },
	{ -10.125f, 3.749989f, -3.1875f },
	{ -10.5f, 0.449989f, 2.012501f },
	{ -10.875f, -0.00011f, -3.75f },
	{ -10.125f, -0.00011f, -3.75f },
	{ -10.875f, -0.00011f, 1.637501f }
};

NJS_VECTOR normal_0017A34C[] = {
	{ 0, 0.705686f, -0.7085249f },
	{ 0, 0.0387f, 0.9992509f },
	{ 0, 0.705686f, -0.7085249f },
	{ 0, 0.72066f, 0.693289f },
	{ 0.900497f, 0.350647f, -0.2572f },
	{ 0.695846f, 0.074237f, 0.714344f },
	{ 0.547538f, 0.615578f, -0.566803f },
	{ 0.53445f, 0.610503f, 0.584507f },
	{ 0, 0.76302f, -0.6463749f },
	{ 0, 0.164399f, -0.986394f },
	{ 0.586535f, 0.617988f, -0.523514f },
	{ 0.679701f, 0.120585f, -0.723509f },
	{ 0, 0.705686f, -0.7085249f },
	{ 0, 0.0387f, 0.9992509f },
	{ 0, 0.705686f, -0.7085249f },
	{ 0, 0.72066f, 0.693289f },
	{ 0, 0.76302f, -0.6463749f },
	{ 0, 0.164399f, -0.986394f },
	{ -0.902581f, 0.342152f, -0.261304f },
	{ -0.698594f, 0.06606299f, 0.7124619f },
	{ -0.550826f, 0.6062509f, -0.573629f },
	{ -0.540606f, 0.604728f, 0.58485f },
	{ -0.586535f, 0.617988f, -0.523514f },
	{ -0.679701f, 0.120585f, -0.723509f },
	{ 0.070709f, 0.75292f, 0.6543019f },
	{ -0.001976f, -0.140293f, 0.990108f },
	{ -0.860787f, 0.081604f, -0.50238f },
	{ 0.907445f, 0.193208f, 0.373114f },
	{ 0.861928f, 0.07521299f, -0.501422f },
	{ 0.099799f, 0.455654f, 0.884545f },
	{ -0.670148f, 0.354801f, -0.651934f },
	{ 0.698595f, 0.291479f, -0.653457f },
	{ -0.838386f, 0.351457f, 0.416638f },
	{ 0.070709f, 0.75292f, 0.6543019f },
	{ -0.001976f, -0.140293f, 0.990108f },
	{ -0.860787f, 0.081604f, -0.50238f },
	{ 0.907445f, 0.193208f, 0.373114f },
	{ 0.861928f, 0.07521299f, -0.501422f },
	{ 0.099799f, 0.455654f, 0.884545f },
	{ -0.670148f, 0.354801f, -0.651934f },
	{ 0.698595f, 0.291479f, -0.653457f },
	{ -0.838386f, 0.351457f, 0.416638f },
	{ 0.070709f, 0.75292f, 0.6543019f },
	{ -0.001976f, -0.140293f, 0.990108f },
	{ -0.860787f, 0.081604f, -0.50238f },
	{ 0.907445f, 0.193208f, 0.373114f },
	{ 0.861928f, 0.07521299f, -0.501422f },
	{ 0.099799f, 0.455654f, 0.884545f },
	{ -0.670148f, 0.354801f, -0.651934f },
	{ 0.698595f, 0.291479f, -0.653457f },
	{ -0.838386f, 0.351457f, 0.416638f }
};

NJS_MODEL_SADX attach_0017A5B0 = { vertex_0017A0E8, normal_0017A34C, LengthOfArray<Sint32>(vertex_0017A0E8), meshlist_0017A0A0, matlist_00179DA0, LengthOfArray<Uint16>(meshlist_0017A0A0), LengthOfArray<Uint16>(matlist_00179DA0), { 0, 5.624989f, 0.28125f }, 11.95046f, NULL };

NJS_OBJECT O_Bench_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017A5B0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00176738[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 6, 97, NJD_D_100 | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 6, 98, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00176760[] = {
	2, 3, 7, 5
};

Sint16 poly_00176768[] = {
	0, 4, 3, 5,
	4, 6, 5, 7,
	6, 1, 7, 2
};

NJS_TEX uv_00176780[] = {
	{ 0, -510 },
	{ 1530, -510 },
	{ 0, 255 },
	{ 1530, 255 }
};

NJS_TEX uv_00176790[] = {
	{ 1275, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 3060, 255 },
	{ 0, 255 },
	{ 3060, 0 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 }
};

NJS_MESHSET_SADX meshlist_001767C0[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_00176760, NULL, NULL, NULL, uv_00176780, NULL },
	{ NJD_MESHSET_4 | 1, 3, poly_00176768, NULL, NULL, NULL, uv_00176790, NULL }
};

NJS_VECTOR vertex_001767F0[] = {
	{ 0, -5, 29.5f },
	{ 0, -5, -30.5f },
	{ 0, 0, -30.5f },
	{ 0, 0, 29.5f },
	{ 20, -9, 29.5f },
	{ 19, -4, 29.5f },
	{ 20, -9, -30.5f },
	{ 19, -4, -30.5f }
};

NJS_VECTOR normal_00176850[] = {
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.145671f, 0.691939f, -0.7071069f },
	{ 0.145671f, 0.691939f, 0.7071069f },
	{ 0.693375f, 0.138675f, 0.7071069f },
	{ 0.6096849f, 0.6035579f, 0.5138119f },
	{ 0.693375f, 0.138675f, -0.7071069f },
	{ 0.6096849f, 0.6035579f, -0.5138119f }
};

NJS_MODEL_SADX attach_001768B0 = { vertex_001767F0, normal_00176850, LengthOfArray<Sint32>(vertex_001767F0), meshlist_001767C0, matlist_00176738, LengthOfArray<Uint16>(meshlist_001767C0), LengthOfArray<Uint16>(matlist_00176738), { 10, -4.5f, -0.5f }, 31.62277f, NULL };

NJS_OBJECT O_ARCADE03_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001768B0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00175D40[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 155, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 96, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 159, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 159, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 96, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00175DA4[] = {
	8, 0, 2, 3, 5, 6, 8, 9, 11,
	8, 9, 10, 6, 7, 3, 4, 0, 1
};

Sint16 poly_00175DC8[] = {
	12, 21, 23, 18, 22, 24, 26, 27, 29, 31, 39, 32, 37,
	12, 32, 33, 31, 30, 27, 28, 24, 25, 18, 19, 21, 20
};

Sint16 poly_00175DFC[] = {
	3, 14, 12, 16,
	3, 13, 15, 17
};

Sint16 poly_00175E0C[] = {
	4, 15, 13, 14, 12,
	4, 13, 17, 12, 16
};

Sint16 poly_00175E20[] = {
	4, 35, 33, 34, 32,
	4, 37, 38, 32, 36
};

NJS_TEX uv_00175E34[] = {
	{ 2, 253 },
	{ 0, 255 },
	{ 244, 253 },
	{ 247, 255 },
	{ 244, 9 },
	{ 247, 7 },
	{ 2, 9 },
	{ 0, 7 },
	{ 2, 9 },
	{ 0, 11 },
	{ 244, 9 },
	{ 237, 11 },
	{ 244, 253 },
	{ 237, 251 },
	{ 2, 253 },
	{ 0, 251 }
};

NJS_TEX uv_00175E74[] = {
	{ 765, -508 },
	{ 1529, -508 },
	{ 765, -364 },
	{ 1529, -364 },
	{ 765, -214 },
	{ 1529, -214 },
	{ 765, -59 },
	{ 1529, -59 },
	{ 765, 97 },
	{ 1530, 97 },
	{ 765, 255 },
	{ 1530, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 97 },
	{ 0, 97 },
	{ 765, -59 },
	{ 0, -59 },
	{ 765, -214 },
	{ 0, -214 },
	{ 765, -364 },
	{ 0, -364 },
	{ 765, -508 },
	{ 0, -508 }
};

NJS_TEX uv_00175ED4[] = {
	{ 0, 7 },
	{ 123, 255 },
	{ 247, 7 },
	{ 123, 255 },
	{ 247, 7 },
	{ 0, 7 }
};

NJS_TEX uv_00175EEC[] = {
	{ 1530, 7 },
	{ 1530, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 1530, 255 },
	{ 1530, 7 }
};

NJS_TEX uv_00175F0C[] = {
	{ 52, 255 },
	{ 0, 7 },
	{ 712, 255 },
	{ 765, 7 },
	{ 1529, 7 },
	{ 1476, 255 },
	{ 765, 7 },
	{ 816, 255 }
};

NJS_MESHSET_SADX meshlist_00175F2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_00175DA4, NULL, NULL, NULL, uv_00175E34, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00175DC8, NULL, NULL, NULL, uv_00175E74, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00175DFC, NULL, NULL, NULL, uv_00175ED4, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00175E0C, NULL, NULL, NULL, uv_00175EEC, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00175E20, NULL, NULL, NULL, uv_00175F0C, NULL }
};

NJS_VECTOR vertex_00175FA4[] = {
	{ -1.229919f, -12.84525f, -29.5f },
	{ -1.435974f, -12.12411f, -29.06698f },
	{ -1.435974f, -12.12411f, -29.93301f },
	{ 19.77008f, -6.845245f, -29.5f },
	{ 19.14767f, -6.243061f, -29.06698f },
	{ 19.98038f, -6.005146f, -29.93301f },
	{ 19.77008f, -6.845257f, 29.5f },
	{ 19.14767f, -6.243073f, 29.06698f },
	{ 19.98038f, -6.005157f, 29.93301f },
	{ -1.229919f, -12.84526f, 29.5f },
	{ -1.435974f, -12.12412f, 29.06698f },
	{ -1.435974f, -12.12412f, 29.93301f },
	{ 1, -1, -29.5f },
	{ 1, -1, 29.5f },
	{ 0, 0, -29.5f },
	{ 0, 0, 29.5f },
	{ 0, -2, -29.5f },
	{ 0, -2, 29.5f },
	{ 4.618286f, -2.544781f, 0 },
	{ 4.618286f, -2.544781f, -29 },
	{ 1, -1, -29 },
	{ 1, -1, 0 },
	{ 4.618286f, -2.544781f, 29 },
	{ 1, -1, 29 },
	{ 8.346497f, -3.849068f, 0 },
	{ 8.346497f, -3.849068f, -29 },
	{ 8.346497f, -3.849068f, 29 },
	{ 12.19104f, -4.756725f, 0 },
	{ 12.19104f, -4.756725f, -29 },
	{ 12.19104f, -4.756725f, 29 },
	{ 16.08764f, -5.412106f, -29 },
	{ 16.08764f, -5.412106f, 0 },
	{ 20, -6, 0 },
	{ 20, -6, -29 },
	{ 20.5f, -10, -2 },
	{ 20.5f, -10, -27 },
	{ 20.5f, -10, 2 },
	{ 20, -6, 29 },
	{ 20.5f, -10, 27 },
	{ 16.08764f, -5.412106f, 29 }
};

NJS_VECTOR normal_00176184[] = {
	{ 0.274721f, -0.961524f, 0 },
	{ 0.137361f, -0.480762f, 0.866026f },
	{ 0.137361f, -0.480762f, -0.866026f },
	{ 0.489512f, -0.838205f, -0.240397f },
	{ -0.352892f, -0.758595f, 0.547723f },
	{ 0.700397f, -0.457643f, -0.547729f },
	{ 0.489512f, -0.838205f, 0.240397f },
	{ -0.352892f, -0.758595f, -0.547723f },
	{ 0.700397f, -0.457643f, 0.547729f },
	{ 0.274721f, -0.961524f, 0 },
	{ 0.137361f, -0.480762f, -0.866026f },
	{ 0.137361f, -0.480762f, 0.866026f },
	{ 0.816497f, 0, -0.57735f },
	{ 0.816497f, 0, 0.57735f },
	{ 0.6324559f, 0.6324559f, -0.447214f },
	{ 0.6324559f, 0.6324559f, 0.447214f },
	{ 0.6324559f, -0.6324559f, -0.447214f },
	{ 0.6324559f, -0.6324559f, 0.447214f },
	{ 0.361636f, 0.932319f, 0 },
	{ 0.361636f, 0.932319f, 0 },
	{ 0.392649f, 0.919688f, 0 },
	{ 0.392649f, 0.919688f, 0 },
	{ 0.361636f, 0.932319f, 0 },
	{ 0.392649f, 0.919688f, 0 },
	{ 0.28038f, 0.959889f, 0 },
	{ 0.28038f, 0.959889f, 0 },
	{ 0.28038f, 0.959889f, 0 },
	{ 0.197923f, 0.980218f, 0 },
	{ 0.197923f, 0.980218f, 0 },
	{ 0.197923f, 0.980218f, 0 },
	{ 0.157236f, 0.987561f, 0 },
	{ 0.157236f, 0.987561f, 0 },
	{ 0.619654f, 0.784875f, 0 },
	{ 0.619654f, 0.784875f, 0 },
	{ 0.992278f, 0.124035f, 0 },
	{ 0.992278f, 0.124035f, 0 },
	{ 0.992278f, 0.124035f, 0 },
	{ 0.619654f, 0.784875f, 0 },
	{ 0.992278f, 0.124035f, 0 },
	{ 0.157236f, 0.987561f, 0 }
};

NJS_MODEL_SADX attach_00176364 = { vertex_00175FA4, normal_00176184, LengthOfArray<Sint32>(vertex_00175FA4), meshlist_00175F2C, matlist_00175D40, LengthOfArray<Uint16>(meshlist_00175F2C), LengthOfArray<Uint16>(matlist_00175D40), { 9.532013f, -6.42263f, 0 }, 31.87918f, NULL };

NJS_OBJECT O_ARCADE01_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00176364, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001763C0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 99, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 99, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 100, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001763FC[] = {
	6, 6, 2, 1, 3, 0, 14,
	3, 1, 7, 6,
	0x8000u | 7, 14, 15, 3, 10, 2, 11, 6
};

Sint16 poly_00176422[] = {
	3, 6, 7, 16,
	3, 17, 14, 15
};

Sint16 poly_00176432[] = {
	0x8000u | 7, 9, 8, 11, 5, 6, 4, 16,
	0x8000u | 7, 11, 10, 9, 15, 12, 17, 13
};

NJS_TEX uv_00176454[] = {
	{ 51, -280 },
	{ 382, -280 },
	{ 382, 255 },
	{ 1147, -280 },
	{ 1147, 254 },
	{ 1530, 254 },
	{ 382, 255 },
	{ 0, 255 },
	{ 51, -280 },
	{ 1530, 254 },
	{ 1477, -280 },
	{ 1147, -280 },
	{ 1147, -510 },
	{ 382, -280 },
	{ 382, -508 },
	{ 51, -280 }
};

NJS_TEX uv_00176494[] = {
	{ 247, 28 },
	{ 0, -255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 247, 28 }
};

NJS_TEX uv_001764AC[] = {
	{ 2057, 255 },
	{ 1000, 255 },
	{ 1001, 7 },
	{ 496, 255 },
	{ 496, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 1001, 7 },
	{ 2056, 7 },
	{ 2057, 255 },
	{ 2562, 7 },
	{ 2562, 255 },
	{ 3060, 7 },
	{ 3060, 255 }
};

NJS_MESHSET_SADX meshlist_001764E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_001763FC, NULL, NULL, NULL, uv_00176454, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00176422, NULL, NULL, NULL, uv_00176494, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00176432, NULL, NULL, NULL, uv_001764AC, NULL }
};

NJS_VECTOR vertex_0017652C[] = {
	{ 0, 0, -15.5f },
	{ 0, 0, 14.5f },
	{ 14, -5, 14.5f },
	{ 14, -5, -15.5f },
	{ 0, -9, 29.5f },
	{ 14, -9, 27.5f },
	{ 14, -5, 27.5f },
	{ 0, 0, 29.5f },
	{ 20, -9, 14.5f },
	{ 20, -9, -15.5f },
	{ 20, -6, -15.5f },
	{ 20, -6, 14.5f },
	{ 14, -9, -28.5f },
	{ 0, -9, -30.5f },
	{ 0, 0, -30.5f },
	{ 14, -5, -28.5f },
	{ 0, -5, 29.5f },
	{ 0, -5, -30.5f }
};

NJS_VECTOR normal_00176604[] = {
	{ 0.336336f, 0.9417419f, 0 },
	{ 0.336336f, 0.9417419f, 0 },
	{ 0.251361f, 0.9678929f, 0 },
	{ 0.251361f, 0.9678929f, 0 },
	{ 0.141421f, 0, 0.989949f },
	{ 0.5973099f, 0, 0.80201f },
	{ 0.575139f, 0.514191f, 0.636257f },
	{ 0.33955f, 0.698985f, 0.629385f },
	{ 0.976719f, 0, 0.214523f },
	{ 0.976719f, 0, -0.214523f },
	{ 0.786262f, 0.598337f, -0.154225f },
	{ 0.786262f, 0.598337f, 0.154225f },
	{ 0.5973099f, 0, -0.80201f },
	{ 0.141421f, 0, -0.989949f },
	{ 0.33955f, 0.698985f, -0.629385f },
	{ 0.575139f, 0.514191f, -0.636257f },
	{ 0.141421f, 0, 0.989949f },
	{ 0.141421f, 0, -0.989949f }
};

NJS_MODEL_SADX attach_001766DC = { vertex_0017652C, normal_00176604, LengthOfArray<Sint32>(vertex_0017652C), meshlist_001764E4, matlist_001763C0, LengthOfArray<Uint16>(meshlist_001764E4), LengthOfArray<Uint16>(matlist_001763C0), { 10, -4.5f, -0.5f }, 31.62277f, NULL };

NJS_OBJECT O_ARCADE02_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001766DC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00176B80[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00176B94[] = {
	0x8000u | 6, 22, 23, 7, 1, 10, 11,
	0x8000u | 6, 15, 14, 5, 2, 16, 17,
	0x8000u | 6, 9, 8, 6, 0, 12, 13,
	0x8000u | 6, 19, 18, 4, 3, 21, 20
};

NJS_TEX uv_00176BCC[] = {
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 }
};

NJS_MESHSET_SADX meshlist_00176C2C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00176B94, NULL, NULL, NULL, uv_00176BCC, NULL }
};

NJS_VECTOR vertex_00176C44[] = {
	{ -4, 0, -3.7f },
	{ -4, 0, 3.8f },
	{ 4, 0, -3.7f },
	{ 4, 0, 3.8f },
	{ 4, 0.494825f, 3.8f },
	{ 4, 0.494825f, -3.7f },
	{ -4, 0.494825f, -3.7f },
	{ -4, 0.494825f, 3.8f },
	{ -4, 0, -2.325f },
	{ -4, 0.494825f, -2.325f },
	{ -4, 0.494825f, 2.425f },
	{ -4, 0, 2.425f },
	{ -2.5f, 0.494825f, -3.7f },
	{ -2.5f, 0, -3.7f },
	{ 2.5f, 0, -3.7f },
	{ 2.5f, 0.494825f, -3.7f },
	{ 4, 0.494825f, -2.325f },
	{ 4, 0, -2.325f },
	{ 4, 0, 2.425f },
	{ 4, 0.494825f, 2.425f },
	{ 2.5f, 0, 3.8f },
	{ 2.5f, 0.494825f, 3.8f },
	{ -2.5f, 0.494825f, 3.8f },
	{ -2.5f, 0, 3.8f }
};

NJS_VECTOR normal_00176D64[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00176E84 = { vertex_00176C44, normal_00176D64, LengthOfArray<Sint32>(vertex_00176C44), meshlist_00176C2C, matlist_00176B80, LengthOfArray<Uint16>(meshlist_00176C2C), LengthOfArray<Uint16>(matlist_00176B80), { 0, 0.247413f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_00176EAC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00176E84, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00176EE0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 85, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00176F08[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 poly_00176F30[] = {
	4, 2, 3, 6, 7
};

NJS_TEX uv_00176F3C[] = {
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 }
};

NJS_TEX uv_00176F7C[] = {
	{ 251, 255 },
	{ 251, 3 },
	{ 0, 255 },
	{ 0, 3 }
};

NJS_MESHSET_SADX meshlist_00176F8C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00176F08, NULL, NULL, NULL, uv_00176F3C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00176F30, NULL, NULL, NULL, uv_00176F7C, NULL }
};

NJS_VECTOR vertex_00176FBC[] = {
	{ -3.139999f, 5.5f, -2.274f },
	{ -3.139999f, 5.5f, 3.161999f },
	{ -3.139999f, 7.000002f, -2.274f },
	{ -3.139999f, 7.000002f, 3.161999f },
	{ 3.139999f, 5.5f, -2.274f },
	{ 3.139999f, 5.5f, 3.161999f },
	{ 3.139999f, 7.000002f, -2.274f },
	{ 3.139999f, 7.000002f, 3.161999f }
};

NJS_VECTOR normal_0017701C[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_0017707C = { vertex_00176FBC, normal_0017701C, LengthOfArray<Sint32>(vertex_00176FBC), meshlist_00176F8C, matlist_00176EE0, LengthOfArray<Uint16>(meshlist_00176F8C), LengthOfArray<Uint16>(matlist_00176EE0), { 0, 6.250001f, 0.443999f }, 4.152965f, NULL };

NJS_OBJECT object_001770A4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017707C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00176EAC };

NJS_MATERIAL matlist_001770D8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001770EC[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_001770F8[] = {
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_00177108[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001770EC, NULL, NULL, NULL, uv_001770F8, NULL }
};

NJS_VECTOR vertex_00177120[] = {
	{ 4, 5.469823f, -3.7f },
	{ -4, 5.469823f, -3.7f },
	{ 4, 5.469823f, 3.8f },
	{ -4, 5.469823f, 3.8f }
};

NJS_VECTOR normal_00177150[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_00177180 = { vertex_00177120, normal_00177150, LengthOfArray<Sint32>(vertex_00177120), meshlist_00177108, matlist_001770D8, LengthOfArray<Uint16>(meshlist_00177108), LengthOfArray<Uint16>(matlist_001770D8), { 0, 5.469823f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_001771A8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00177180, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001770A4 };

NJS_MATERIAL matlist_001771DC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FB2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00177240[] = {
	0x8000u | 6, 18, 6, 17, 5, 8, 2,
	0x8000u | 6, 16, 2, 15, 5, 9, 4,
	4, 9, 13, 4, 3,
	4, 20, 19, 6, 0,
	4, 12, 18, 0, 6,
	0x8000u | 6, 19, 0, 14, 1, 11, 7,
	4, 11, 20, 7, 6,
	4, 13, 16, 3, 2,
	4, 8, 12, 2, 0
};

Sint16 poly_001772A6[] = {
	4, 6, 5, 21, 23
};

Sint16 poly_001772B0[] = {
	4, 3, 1, 4, 7,
	4, 0, 1, 2, 3
};

Sint16 poly_001772C4[] = {
	0x8000u | 6, 4, 10, 7, 22, 6, 21,
	4, 5, 4, 23, 10
};

Sint16 poly_001772DC[] = {
	4, 8, 17, 12, 18
};

NJS_TEX uv_001772E8[] = {
	{ 0, 255 },
	{ 223, 255 },
	{ 0, 31 },
	{ 223, 31 },
	{ 0, 255 },
	{ 223, 255 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 }
};

NJS_TEX uv_00177390[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uv_001773A0[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 }
};

NJS_TEX uv_001773C0[] = {
	{ 247, 7 },
	{ 247, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uv_001773E8[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_001773F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00177240, NULL, NULL, NULL, uv_001772E8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001772A6, NULL, NULL, NULL, uv_00177390, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_001772B0, NULL, NULL, NULL, uv_001773A0, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_001772C4, NULL, NULL, NULL, uv_001773C0, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001772DC, NULL, NULL, NULL, uv_001773E8, NULL }
};

NJS_VECTOR vertex_00177470[] = {
	{ -4, 10.46983f, -0.2f },
	{ -4, 10.46983f, 3.8f },
	{ 4, 10.46983f, -0.2f },
	{ 4, 10.46983f, 3.8f },
	{ 4, 5.469826f, 3.8f },
	{ 4, 5.469826f, -3.7f },
	{ -4, 5.469826f, -3.7f },
	{ -4, 5.469826f, 3.8f },
	{ 3.5f, 10.15732f, -0.424999f },
	{ 4, 5.782326f, 3.33125f },
	{ 4, 0.5f, 3.8f },
	{ -4, 5.782326f, 3.33125f },
	{ -3.5f, 10.15732f, -0.424999f },
	{ 4, 10.15732f, 3.33125f },
	{ -4, 10.15732f, 3.33125f },
	{ 4, 5.782326f, -3.006249f },
	{ 4, 10.15732f, 0.043751f },
	{ 3.5f, 5.782326f, -3.474999f },
	{ -3.5f, 5.782326f, -3.474999f },
	{ -4, 10.15732f, 0.043751f },
	{ -4, 5.782326f, -3.006249f },
	{ -4, 0.5f, -3.7f },
	{ -4, 0.5f, 3.8f },
	{ 4, 0.5f, -3.7f }
};

NJS_VECTOR normal_00177590[] = {
	{ -0.617692f, 0.698451f, -0.361418f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.617692f, 0.698451f, -0.361418f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.64707f, 0.231045f, -0.72658f },
	{ -0.64707f, 0.231045f, -0.72658f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.003872f, 0.577106f, -0.81666f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -0.003872f, 0.577106f, -0.81666f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.003872f, 0.577109f, -0.816658f },
	{ -0.003872f, 0.577109f, -0.816658f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_001776B0 = { vertex_00177470, normal_00177590, LengthOfArray<Sint32>(vertex_00177470), meshlist_001773F8, matlist_001771DC, LengthOfArray<Uint16>(meshlist_001773F8), LengthOfArray<Uint16>(matlist_001771DC), { 0, 5.484913f, 0.05f }, 6.237937f, NULL };

NJS_OBJECT O_Nbox_1_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001776B0, 0, 0.00001f, 0, 0, 0, 0, 1, 1, 1, &object_001771A8, NULL };

NJS_MATERIAL matlist_00178298[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 89, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001782C0[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 poly_001782E8[] = {
	4, 2, 3, 6, 7
};

NJS_TEX uv_001782F4[] = {
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 }
};

NJS_TEX uv_00178334[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 508, 255 },
	{ 508, -255 }
};

NJS_MESHSET_SADX meshlist_00178344[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_001782C0, NULL, NULL, NULL, uv_001782F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_001782E8, NULL, NULL, NULL, uv_00178334, NULL }
};

NJS_VECTOR vertex_00178374[] = {
	{ -2.889999f, 5.499969f, -2.824f },
	{ -2.889999f, 5.499969f, 2.911999f },
	{ -2.889999f, 6.999969f, -2.824f },
	{ -2.889999f, 6.999969f, 2.911999f },
	{ 2.889999f, 5.499969f, -2.824f },
	{ 2.889999f, 5.499969f, 2.911999f },
	{ 2.889999f, 6.999969f, -2.824f },
	{ 2.889999f, 6.999969f, 2.911999f }
};

NJS_VECTOR normal_001783D4[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_00178434 = { vertex_00178374, normal_001783D4, LengthOfArray<Sint32>(vertex_00178374), meshlist_00178344, matlist_00178298, LengthOfArray<Uint16>(meshlist_00178344), LengthOfArray<Uint16>(matlist_00178298), { 0, 6.249969f, 0.043999f }, 4.071549f, NULL };

NJS_OBJECT object_0017845C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00178434, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00178490[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001784A4[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_001784B0[] = {
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_001784C0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001784A4, NULL, NULL, NULL, uv_001784B0, NULL }
};

NJS_VECTOR vertex_001784D8[] = {
	{ 4, 5.469788f, -3.7f },
	{ -4, 5.469788f, -3.7f },
	{ 4, 5.469788f, 3.8f },
	{ -4, 5.469788f, 3.8f }
};

NJS_VECTOR normal_00178508[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_00178538 = { vertex_001784D8, normal_00178508, LengthOfArray<Sint32>(vertex_001784D8), meshlist_001784C0, matlist_00178490, LengthOfArray<Uint16>(meshlist_001784C0), LengthOfArray<Uint16>(matlist_00178490), { 0, 5.469788f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_00178560 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00178538, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0017845C };

NJS_MATERIAL matlist_00178594[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001785A8[] = {
	4, 7, 10, 1, 11,
	4, 6, 12, 0, 13,
	4, 5, 16, 2, 17,
	4, 4, 21, 3, 20,
	4, 1, 23, 7, 22,
	4, 2, 14, 5, 15,
	4, 0, 8, 6, 9,
	4, 3, 18, 4, 19
};

NJS_TEX uv_001785F8[] = {
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00178678[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_001785A8, NULL, NULL, NULL, uv_001785F8, NULL }
};

NJS_VECTOR vertex_00178690[] = {
	{ -4, -0.00031f, -3.7f },
	{ -4, -0.00031f, 3.8f },
	{ 4, -0.00031f, -3.7f },
	{ 4, -0.00031f, 3.8f },
	{ 4, 0.494797f, 3.8f },
	{ 4, 0.494797f, -3.7f },
	{ -4, 0.494797f, -3.7f },
	{ -4, 0.494797f, 3.8f },
	{ -4, -0.00031f, -2.325f },
	{ -4, 0.494797f, -2.325f },
	{ -4, 0.494797f, 2.425f },
	{ -4, -0.00031f, 2.425f },
	{ -2.5f, 0.494797f, -3.7f },
	{ -2.5f, -0.00031f, -3.7f },
	{ 2.5f, -0.00031f, -3.7f },
	{ 2.5f, 0.494797f, -3.7f },
	{ 4, 0.494797f, -2.325f },
	{ 4, -0.00031f, -2.325f },
	{ 4, -0.00031f, 2.425f },
	{ 4, 0.494797f, 2.425f },
	{ 2.5f, -0.00031f, 3.8f },
	{ 2.5f, 0.494797f, 3.8f },
	{ -2.5f, 0.494797f, 3.8f },
	{ -2.5f, -0.00031f, 3.8f }
};

NJS_VECTOR normal_001787B0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_001788D0 = { vertex_00178690, normal_001787B0, LengthOfArray<Sint32>(vertex_00178690), meshlist_00178678, matlist_00178594, LengthOfArray<Uint16>(meshlist_00178678), LengthOfArray<Uint16>(matlist_00178594), { 0, 0.247383f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_001788F8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001788D0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00178560 };

NJS_MATERIAL matlist_0017892C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 49, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x65B2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 51, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 50, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017897C[] = {
	4, 26, 21, 6, 5,
	4, 7, 4, 12, 24,
	4, 4, 5, 13, 19,
	4, 4, 3, 24, 23,
	4, 2, 0, 22, 10,
	4, 13, 17, 4, 3,
	4, 3, 2, 25, 22,
	4, 25, 11, 3, 1,
	4, 16, 26, 0, 6,
	4, 27, 18, 0, 1,
	4, 9, 23, 1, 3,
	4, 17, 20, 3, 2,
	4, 8, 16, 2, 0,
	4, 11, 10, 1, 0,
	4, 28, 27, 6, 0,
	4, 7, 1, 15, 18,
	4, 12, 9, 7, 1,
	4, 20, 19, 2, 5,
	4, 2, 5, 8, 21,
	4, 15, 28, 7, 6
};

Sint16 poly_00178A44[] = {
	4, 25, 22, 11, 10,
	4, 27, 28, 18, 15,
	4, 9, 12, 23, 24,
	4, 17, 13, 20, 19,
	4, 8, 21, 16, 26
};

Sint16 poly_00178A76[] = {
	4, 7, 6, 30, 29,
	0x8000u | 6, 30, 7, 14, 4, 31, 5
};

Sint16 poly_00178A8E[] = {
	4, 6, 5, 29, 31
};

NJS_TEX uv_00178A98[] = {
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 }
};

NJS_TEX uv_00178BD8[] = {
	{ 247, 7 },
	{ 247, 255 },
	{ 0, 7 },
	{ 0, 255 },
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
	{ 247, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_TEX uv_00178C28[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 247, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_TEX uv_00178C50[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_MESHSET_SADX meshlist_00178C60[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_0017897C, NULL, NULL, NULL, uv_00178A98, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_00178A44, NULL, NULL, NULL, uv_00178BD8, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00178A76, NULL, NULL, NULL, uv_00178C28, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00178A8E, NULL, NULL, NULL, uv_00178C50, NULL }
};

NJS_VECTOR vertex_00178CC0[] = {
	{ -4, 10.46979f, -3.7f },
	{ -4, 10.46979f, 3.8f },
	{ 4, 10.46979f, -3.7f },
	{ 4, 10.46979f, 3.8f },
	{ 4, 5.469795f, 3.8f },
	{ 4, 5.469795f, -3.7f },
	{ -4, 5.469795f, -3.7f },
	{ -4, 5.469795f, 3.8f },
	{ 3.5f, 10.15729f, -3.699999f },
	{ -3.5f, 10.15729f, 3.8f },
	{ -3.5f, 10.46979f, -3.23125f },
	{ -3.5f, 10.46979f, 3.33125f },
	{ -3.5f, 5.782295f, 3.8f },
	{ 4, 5.782295f, 3.33125f },
	{ 4, 0.499969f, 3.8f },
	{ -4, 5.782295f, 3.33125f },
	{ -3.5f, 10.15729f, -3.699999f },
	{ 4, 10.15729f, 3.33125f },
	{ -4, 10.15729f, 3.33125f },
	{ 4, 5.782295f, -3.231245f },
	{ 4, 10.15729f, -3.231249f },
	{ 3.5f, 5.782295f, -3.699995f },
	{ 3.5f, 10.46979f, -3.23125f },
	{ 3.5f, 10.15729f, 3.8f },
	{ 3.5f, 5.782295f, 3.8f },
	{ 3.5f, 10.46979f, 3.33125f },
	{ -3.5f, 5.782295f, -3.699995f },
	{ -4, 10.15729f, -3.231249f },
	{ -4, 5.782295f, -3.231245f },
	{ -4, 0.499969f, -3.7f },
	{ -4, 0.499969f, 3.8f },
	{ 4, 0.499969f, -3.7f }
};

NJS_VECTOR normal_00178E40[] = {
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0.000002f, -0.7071069f },
	{ -0.7071069f, 0.000002f, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, -0.00001f, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 0, -0.00001f, -1 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0.000006f, -1 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.000006f, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_00178FC0 = { vertex_00178CC0, normal_00178E40, LengthOfArray<Sint32>(vertex_00178CC0), meshlist_00178C60, matlist_0017892C, LengthOfArray<Uint16>(meshlist_00178C60), LengthOfArray<Uint16>(matlist_0017892C), { 0, 5.484882f, 0.05f }, 6.237937f, NULL };

NJS_OBJECT O_Nbox_2_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00178FC0, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001788F8, NULL };

NJS_MATERIAL matlist_0017770C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00177720[] = {
	0x8000u | 6, 22, 23, 7, 1, 10, 11,
	0x8000u | 6, 15, 14, 5, 2, 16, 17,
	0x8000u | 6, 9, 8, 6, 0, 12, 13,
	0x8000u | 6, 19, 18, 4, 3, 21, 20
};

NJS_TEX uv_00177758[] = {
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 }
};

NJS_MESHSET_SADX meshlist_001777B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00177720, NULL, NULL, NULL, uv_00177758, NULL }
};

NJS_VECTOR vertex_001777D0[] = {
	{ -4, 0, -3.7f },
	{ -4, 0, 3.8f },
	{ 4, 0, -3.7f },
	{ 4, 0, 3.8f },
	{ 4, 0.494825f, 3.8f },
	{ 4, 0.494825f, -3.7f },
	{ -4, 0.494825f, -3.7f },
	{ -4, 0.494825f, 3.8f },
	{ -4, 0, -2.325f },
	{ -4, 0.494825f, -2.325f },
	{ -4, 0.494825f, 2.425f },
	{ -4, 0, 2.425f },
	{ -2.5f, 0.494825f, -3.7f },
	{ -2.5f, 0, -3.7f },
	{ 2.5f, 0, -3.7f },
	{ 2.5f, 0.494825f, -3.7f },
	{ 4, 0.494825f, -2.325f },
	{ 4, 0, -2.325f },
	{ 4, 0, 2.425f },
	{ 4, 0.494825f, 2.425f },
	{ 2.5f, 0, 3.8f },
	{ 2.5f, 0.494825f, 3.8f },
	{ -2.5f, 0.494825f, 3.8f },
	{ -2.5f, 0, 3.8f }
};

NJS_VECTOR normal_001778F0[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00177A10 = { vertex_001777D0, normal_001778F0, LengthOfArray<Sint32>(vertex_001777D0), meshlist_001777B8, matlist_0017770C, LengthOfArray<Uint16>(meshlist_001777B8), LengthOfArray<Uint16>(matlist_0017770C), { 0, 0.247413f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_00177A38 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00177A10, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00177A6C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 47, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00177A94[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 poly_00177ABC[] = {
	4, 2, 3, 6, 7
};

NJS_TEX uv_00177AC8[] = {
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -510 },
	{ 239, -510 },
	{ 0, 255 },
	{ 239, 255 }
};

NJS_TEX uv_00177B08[] = {
	{ 508, 255 },
	{ 508, -255 },
	{ 0, 255 },
	{ 0, -255 }
};

NJS_MESHSET_SADX meshlist_00177B18[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00177A94, NULL, NULL, NULL, uv_00177AC8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00177ABC, NULL, NULL, NULL, uv_00177B08, NULL }
};

NJS_VECTOR vertex_00177B48[] = {
	{ -3.139999f, 5.5f, -2.274f },
	{ -3.139999f, 5.5f, 3.161999f },
	{ -3.139999f, 7.000002f, -2.274f },
	{ -3.139999f, 7.000002f, 3.161999f },
	{ 3.139999f, 5.5f, -2.274f },
	{ 3.139999f, 5.5f, 3.161999f },
	{ 3.139999f, 7.000002f, -2.274f },
	{ 3.139999f, 7.000002f, 3.161999f }
};

NJS_VECTOR normal_00177BA8[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_00177C08 = { vertex_00177B48, normal_00177BA8, LengthOfArray<Sint32>(vertex_00177B48), meshlist_00177B18, matlist_00177A6C, LengthOfArray<Uint16>(meshlist_00177B18), LengthOfArray<Uint16>(matlist_00177A6C), { 0, 6.250001f, 0.443999f }, 4.152965f, NULL };

NJS_OBJECT object_00177C30 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00177C08, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00177A38 };

NJS_MATERIAL matlist_00177C64[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00177C78[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00177C84[] = {
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_00177C94[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00177C78, NULL, NULL, NULL, uv_00177C84, NULL }
};

NJS_VECTOR vertex_00177CAC[] = {
	{ 4, 5.469823f, -3.7f },
	{ -4, 5.469823f, -3.7f },
	{ 4, 5.469823f, 3.8f },
	{ -4, 5.469823f, 3.8f }
};

NJS_VECTOR normal_00177CDC[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_00177D0C = { vertex_00177CAC, normal_00177CDC, LengthOfArray<Sint32>(vertex_00177CAC), meshlist_00177C94, matlist_00177C64, LengthOfArray<Uint16>(meshlist_00177C94), LengthOfArray<Uint16>(matlist_00177C64), { 0, 5.469823f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_00177D34 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00177D0C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_00177C30 };

NJS_MATERIAL matlist_00177D68[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x7FB2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00177DCC[] = {
	0x8000u | 6, 18, 6, 17, 5, 8, 2,
	0x8000u | 6, 16, 2, 15, 5, 9, 4,
	4, 9, 13, 4, 3,
	4, 20, 19, 6, 0,
	4, 12, 18, 0, 6,
	0x8000u | 6, 19, 0, 14, 1, 11, 7,
	4, 11, 20, 7, 6,
	4, 13, 16, 3, 2,
	4, 8, 12, 2, 0
};

Sint16 poly_00177E32[] = {
	4, 6, 5, 21, 23
};

Sint16 poly_00177E3C[] = {
	4, 3, 1, 4, 7,
	4, 0, 1, 2, 3
};

Sint16 poly_00177E50[] = {
	0x8000u | 6, 4, 10, 7, 22, 6, 21,
	4, 5, 4, 23, 10
};

Sint16 poly_00177E68[] = {
	4, 8, 17, 12, 18
};

NJS_TEX uv_00177E74[] = {
	{ 0, 255 },
	{ 223, 255 },
	{ 0, 31 },
	{ 223, 31 },
	{ 0, 255 },
	{ 223, 255 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 }
};

NJS_TEX uv_00177F1C[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00177F2C[] = {
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 }
};

NJS_TEX uv_00177F4C[] = {
	{ 247, 7 },
	{ 247, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 247, 7 },
	{ 247, 255 },
	{ 247, 7 },
	{ 0, 7 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00177F74[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_MESHSET_SADX meshlist_00177F84[] = {
	{ NJD_MESHSET_TRIMESH | 0, 9, poly_00177DCC, NULL, NULL, NULL, uv_00177E74, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00177E32, NULL, NULL, NULL, uv_00177F1C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00177E3C, NULL, NULL, NULL, uv_00177F2C, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 2, poly_00177E50, NULL, NULL, NULL, uv_00177F4C, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_00177E68, NULL, NULL, NULL, uv_00177F74, NULL }
};

NJS_VECTOR vertex_00177FFC[] = {
	{ -4, 10.46983f, -0.2f },
	{ -4, 10.46983f, 3.8f },
	{ 4, 10.46983f, -0.2f },
	{ 4, 10.46983f, 3.8f },
	{ 4, 5.469826f, 3.8f },
	{ 4, 5.469826f, -3.7f },
	{ -4, 5.469826f, -3.7f },
	{ -4, 5.469826f, 3.8f },
	{ 3.5f, 10.15732f, -0.424999f },
	{ 4, 5.782326f, 3.33125f },
	{ 4, 0.5f, 3.8f },
	{ -4, 5.782326f, 3.33125f },
	{ -3.5f, 10.15732f, -0.424999f },
	{ 4, 10.15732f, 3.33125f },
	{ -4, 10.15732f, 3.33125f },
	{ 4, 5.782326f, -3.006249f },
	{ 4, 10.15732f, 0.043751f },
	{ 3.5f, 5.782326f, -3.474999f },
	{ -3.5f, 5.782326f, -3.474999f },
	{ -4, 10.15732f, 0.043751f },
	{ -4, 5.782326f, -3.006249f },
	{ -4, 0.5f, -3.7f },
	{ -4, 0.5f, 3.8f },
	{ 4, 0.5f, -3.7f }
};

NJS_VECTOR normal_0017811C[] = {
	{ -0.617692f, 0.698451f, -0.361418f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.617692f, 0.698451f, -0.361418f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.64707f, 0.231045f, -0.72658f },
	{ -0.64707f, 0.231045f, -0.72658f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.003872f, 0.577106f, -0.81666f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -0.003872f, 0.577106f, -0.81666f },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.003872f, 0.577109f, -0.816658f },
	{ -0.003872f, 0.577109f, -0.816658f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_0017823C = { vertex_00177FFC, normal_0017811C, LengthOfArray<Sint32>(vertex_00177FFC), meshlist_00177F84, matlist_00177D68, LengthOfArray<Uint16>(meshlist_00177F84), LengthOfArray<Uint16>(matlist_00177D68), { 0, 5.484913f, 0.05f }, 6.237937f, NULL };

NJS_OBJECT O_Nbox_3_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0017823C, 0, 0.00001f, 0, 0, 0, 0, 1, 1, 1, &object_00177D34, NULL };

NJS_MATERIAL matlist_0017901C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 74, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 88, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_FLAT | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00179044[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 poly_0017906C[] = {
	4, 2, 3, 6, 7
};

NJS_TEX uv_00179078[] = {
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -508 },
	{ 0, -508 }
};

NJS_TEX uv_001790B8[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 508, 255 },
	{ 508, -255 }
};

NJS_MESHSET_SADX meshlist_001790C8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_00179044, NULL, NULL, NULL, uv_00179078, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0017906C, NULL, NULL, NULL, uv_001790B8, NULL }
};

NJS_VECTOR vertex_001790F8[] = {
	{ -2.889999f, 5.499969f, -2.824f },
	{ -2.889999f, 5.499969f, 2.911999f },
	{ -2.889999f, 6.999969f, -2.824f },
	{ -2.889999f, 6.999969f, 2.911999f },
	{ 2.889999f, 5.499969f, -2.824f },
	{ 2.889999f, 5.499969f, 2.911999f },
	{ 2.889999f, 6.999969f, -2.824f },
	{ 2.889999f, 6.999969f, 2.911999f }
};

NJS_VECTOR normal_00179158[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_001791B8 = { vertex_001790F8, normal_00179158, LengthOfArray<Sint32>(vertex_001790F8), meshlist_001790C8, matlist_0017901C, LengthOfArray<Uint16>(meshlist_001790C8), LengthOfArray<Uint16>(matlist_0017901C), { 0, 6.249969f, 0.043999f }, 4.071549f, NULL };

NJS_OBJECT object_001791E0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001791B8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00179214[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00179228[] = {
	4, 3, 2, 1, 0
};

NJS_TEX uv_00179234[] = {
	{ 247, 255 },
	{ 0, 255 },
	{ 247, 7 },
	{ 0, 7 }
};

NJS_MESHSET_SADX meshlist_00179244[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00179228, NULL, NULL, NULL, uv_00179234, NULL }
};

NJS_VECTOR vertex_0017925C[] = {
	{ 4, 5.469788f, -3.7f },
	{ -4, 5.469788f, -3.7f },
	{ 4, 5.469788f, 3.8f },
	{ -4, 5.469788f, 3.8f }
};

NJS_VECTOR normal_0017928C[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001792BC = { vertex_0017925C, normal_0017928C, LengthOfArray<Sint32>(vertex_0017925C), meshlist_00179244, matlist_00179214, LengthOfArray<Uint16>(meshlist_00179244), LengthOfArray<Uint16>(matlist_00179214), { 0, 5.469788f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_001792E4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001792BC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001791E0 };

NJS_MATERIAL matlist_00179318[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017932C[] = {
	4, 7, 10, 1, 11,
	4, 6, 12, 0, 13,
	4, 5, 16, 2, 17,
	4, 4, 21, 3, 20,
	4, 1, 23, 7, 22,
	4, 2, 14, 5, 15,
	4, 0, 8, 6, 9,
	4, 3, 18, 4, 19
};

NJS_TEX uv_0017937C[] = {
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 },
	{ 223, 31 },
	{ 0, 31 },
	{ 223, 255 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_001793FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_0017932C, NULL, NULL, NULL, uv_0017937C, NULL }
};

NJS_VECTOR vertex_00179414[] = {
	{ -4, -0.00031f, -3.7f },
	{ -4, -0.00031f, 3.8f },
	{ 4, -0.00031f, -3.7f },
	{ 4, -0.00031f, 3.8f },
	{ 4, 0.494797f, 3.8f },
	{ 4, 0.494797f, -3.7f },
	{ -4, 0.494797f, -3.7f },
	{ -4, 0.494797f, 3.8f },
	{ -4, -0.00031f, -2.325f },
	{ -4, 0.494797f, -2.325f },
	{ -4, 0.494797f, 2.425f },
	{ -4, -0.00031f, 2.425f },
	{ -2.5f, 0.494797f, -3.7f },
	{ -2.5f, -0.00031f, -3.7f },
	{ 2.5f, -0.00031f, -3.7f },
	{ 2.5f, 0.494797f, -3.7f },
	{ 4, 0.494797f, -2.325f },
	{ 4, -0.00031f, -2.325f },
	{ 4, -0.00031f, 2.425f },
	{ 4, 0.494797f, 2.425f },
	{ 2.5f, -0.00031f, 3.8f },
	{ 2.5f, 0.494797f, 3.8f },
	{ -2.5f, 0.494797f, 3.8f },
	{ -2.5f, -0.00031f, 3.8f }
};

NJS_VECTOR normal_00179534[] = {
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_00179654 = { vertex_00179414, normal_00179534, LengthOfArray<Sint32>(vertex_00179414), meshlist_001793FC, matlist_00179318, LengthOfArray<Uint16>(meshlist_001793FC), LengthOfArray<Uint16>(matlist_00179318), { 0, 0.247383f, 0.05f }, 5.482928f, NULL };

NJS_OBJECT object_0017967C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00179654, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_001792E4 };

NJS_MATERIAL matlist_001796B0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 55, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x65B2B2B2 }, { 0xFFFFFFFF }, 11, 52, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 53, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 54, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00179700[] = {
	4, 26, 21, 6, 5,
	4, 7, 4, 12, 24,
	4, 4, 5, 13, 19,
	4, 4, 3, 24, 23,
	4, 2, 0, 22, 10,
	4, 13, 17, 4, 3,
	4, 3, 2, 25, 22,
	4, 25, 11, 3, 1,
	4, 16, 26, 0, 6,
	4, 27, 18, 0, 1,
	4, 9, 23, 1, 3,
	4, 17, 20, 3, 2,
	4, 8, 16, 2, 0,
	4, 11, 10, 1, 0,
	4, 28, 27, 6, 0,
	4, 7, 1, 15, 18,
	4, 12, 9, 7, 1,
	4, 20, 19, 2, 5,
	4, 2, 5, 8, 21,
	4, 15, 28, 7, 6
};

Sint16 poly_001797C8[] = {
	4, 25, 22, 11, 10,
	4, 27, 28, 18, 15,
	4, 9, 12, 23, 24,
	4, 17, 13, 20, 19,
	4, 8, 21, 16, 26
};

Sint16 poly_001797FA[] = {
	4, 7, 6, 30, 29,
	0x8000u | 6, 30, 7, 14, 4, 31, 5
};

Sint16 poly_00179812[] = {
	4, 6, 5, 29, 31
};

NJS_TEX uv_0017981C[] = {
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 },
	{ 0, 255 },
	{ 0, 31 },
	{ 223, 255 },
	{ 223, 31 }
};

NJS_TEX uv_0017995C[] = {
	{ 247, 7 },
	{ 247, 255 },
	{ 0, 7 },
	{ 0, 255 },
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
	{ 247, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_TEX uv_001799AC[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 247, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 247, 255 },
	{ 247, 7 }
};

NJS_TEX uv_001799D4[] = {
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_MESHSET_SADX meshlist_001799E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_00179700, NULL, NULL, NULL, uv_0017981C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 5, poly_001797C8, NULL, NULL, NULL, uv_0017995C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_001797FA, NULL, NULL, NULL, uv_001799AC, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_00179812, NULL, NULL, NULL, uv_001799D4, NULL }
};

NJS_VECTOR vertex_00179A44[] = {
	{ -4, 10.46979f, -3.7f },
	{ -4, 10.46979f, 3.8f },
	{ 4, 10.46979f, -3.7f },
	{ 4, 10.46979f, 3.8f },
	{ 4, 5.469795f, 3.8f },
	{ 4, 5.469795f, -3.7f },
	{ -4, 5.469795f, -3.7f },
	{ -4, 5.469795f, 3.8f },
	{ 3.5f, 10.15729f, -3.699999f },
	{ -3.5f, 10.15729f, 3.8f },
	{ -3.5f, 10.46979f, -3.23125f },
	{ -3.5f, 10.46979f, 3.33125f },
	{ -3.5f, 5.782295f, 3.8f },
	{ 4, 5.782295f, 3.33125f },
	{ 4, 0.499969f, 3.8f },
	{ -4, 5.782295f, 3.33125f },
	{ -3.5f, 10.15729f, -3.699999f },
	{ 4, 10.15729f, 3.33125f },
	{ -4, 10.15729f, 3.33125f },
	{ 4, 5.782295f, -3.231245f },
	{ 4, 10.15729f, -3.231249f },
	{ 3.5f, 5.782295f, -3.699995f },
	{ 3.5f, 10.46979f, -3.23125f },
	{ 3.5f, 10.15729f, 3.8f },
	{ 3.5f, 5.782295f, 3.8f },
	{ 3.5f, 10.46979f, 3.33125f },
	{ -3.5f, 5.782295f, -3.699995f },
	{ -4, 10.15729f, -3.231249f },
	{ -4, 5.782295f, -3.231245f },
	{ -4, 0.499969f, -3.7f },
	{ -4, 0.499969f, 3.8f },
	{ 4, 0.499969f, -3.7f }
};

NJS_VECTOR normal_00179BC4[] = {
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0.000002f, -0.7071069f },
	{ -0.7071069f, 0.000002f, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0, -0.00001f, -1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ 0, -0.00001f, -1 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0, 0.000006f, -1 },
	{ 0, 1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0, 0.000006f, -1 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7071069f, 0, -0.7071069f }
};

NJS_MODEL_SADX attach_00179D44 = { vertex_00179A44, normal_00179BC4, LengthOfArray<Sint32>(vertex_00179A44), meshlist_001799E4, matlist_001796B0, LengthOfArray<Uint16>(meshlist_001799E4), LengthOfArray<Uint16>(matlist_001796B0), { 0, 5.484882f, 0.05f }, 6.237937f, NULL };

NJS_OBJECT O_Nbox_4_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_00179D44, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0017967C, NULL };

CollisionData Nbox_Collision[] = {
	{ 0, 3, 0x77, 0, 0,   0.0, 0.0, 0.0,    4.0, 10.0, 4.0,   0, 0, 0,   0 }
};

NJS_MATERIAL matlist_001882E0[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 26, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 25, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188344[] = {
	5, 9, 13, 0, 12, 16,
	4, 16, 14, 0, 10,
	0x8000u | 5, 9, 11, 0, 15, 10
};

Sint16 poly_00188366[] = {
	18, 32, 1, 31, 2, 25, 3, 27, 4, 30, 5, 28, 6, 26, 7, 29, 8, 32, 1
};

Sint16 poly_0018838C[] = {
	4, 20, 19, 18, 17,
	4, 24, 20, 22, 18,
	4, 23, 24, 21, 22,
	4, 19, 23, 17, 21
};

Sint16 poly_001883B4[] = {
	4, 24, 23, 20, 19
};

Sint16 poly_001883BE[] = {
	18, 12, 32, 16, 31, 14, 25, 10, 27, 15, 30, 11, 28, 9, 26, 13, 29, 12, 32
};

NJS_TEX uv_001883E4[] = {
	{ 123, 31 },
	{ 193, 61 },
	{ 123, 131 },
	{ 223, 131 },
	{ 193, 201 },
	{ 193, 201 },
	{ 123, 231 },
	{ 123, 131 },
	{ 53, 201 },
	{ 123, 31 },
	{ 53, 61 },
	{ 123, 131 },
	{ 23, 131 },
	{ 53, 201 }
};

NJS_TEX uv_0018841C[] = {
	{ 243, 251 },
	{ 243, 81 },
	{ 212, 251 },
	{ 212, 81 },
	{ 181, 251 },
	{ 181, 81 },
	{ 150, 251 },
	{ 150, 81 },
	{ 119, 251 },
	{ 119, 81 },
	{ 88, 251 },
	{ 88, 81 },
	{ 57, 251 },
	{ 57, 81 },
	{ 27, 251 },
	{ 27, 81 },
	{ 3, 251 },
	{ 3, 81 }
};

NJS_TEX uv_00188464[] = {
	{ 7, 227 },
	{ 7, 181 },
	{ 502, 227 },
	{ 502, 181 },
	{ 7, 227 },
	{ 7, 181 },
	{ 502, 227 },
	{ 502, 181 },
	{ 7, 227 },
	{ 7, 181 },
	{ 502, 227 },
	{ 502, 181 },
	{ 7, 227 },
	{ 7, 181 },
	{ 502, 227 },
	{ 502, 181 }
};

NJS_TEX uv_001884A4[] = {
	{ 7, 247 },
	{ 7, -247 },
	{ 502, 247 },
	{ 502, -247 }
};

NJS_TEX uv_001884B4[] = {
	{ 0, -502 },
	{ 0, 169 },
	{ 192, -502 },
	{ 192, 169 },
	{ 384, -502 },
	{ 384, 169 },
	{ 576, -502 },
	{ 576, 169 },
	{ 768, -502 },
	{ 768, 169 },
	{ 960, -502 },
	{ 960, 169 },
	{ 1152, -502 },
	{ 1152, 169 },
	{ 1344, -502 },
	{ 1344, 169 },
	{ 1530, -502 },
	{ 1530, 169 }
};

NJS_MESHSET_SADX meshlist_001884FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00188344, NULL, NULL, NULL, uv_001883E4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00188366, NULL, NULL, NULL, uv_0018841C, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_0018838C, NULL, NULL, NULL, uv_00188464, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_001883B4, NULL, NULL, NULL, uv_001884A4, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 1, poly_001883BE, NULL, NULL, NULL, uv_001884B4, NULL }
};

NJS_VECTOR vertex_00188574[] = {
	{ 0, 7.700034f, 0 },
	{ 2, 0.40004f, 0 },
	{ 1.414214f, 0.40004f, -1.414214f },
	{ 0, 0.40004f, -2 },
	{ -1.414213f, 0.40004f, -1.414213f },
	{ -2, 0.40004f, 0 },
	{ -1.414213f, 0.40004f, 1.414213f },
	{ 0, 0.40004f, 2 },
	{ 1.414213f, 0.40004f, 1.414213f },
	{ 0, 7.200033f, 0.4675f },
	{ -0.330572f, 7.200033f, -0.330572f },
	{ -0.330572f, 7.200033f, 0.330572f },
	{ 0.4675f, 7.200033f, 0 },
	{ 0.330572f, 7.200033f, 0.330572f },
	{ 0, 7.200033f, -0.4675f },
	{ -0.4675f, 7.200033f, 0 },
	{ 0.330572f, 7.200033f, -0.330572f },
	{ -2.9f, 0, -2.9f },
	{ -2.9f, 0, 2.9f },
	{ -2.7f, 0.4f, -2.7f },
	{ -2.7f, 0.4f, 2.7f },
	{ 2.9f, 0, -2.9f },
	{ 2.9f, 0, 2.9f },
	{ 2.7f, 0.4f, -2.7f },
	{ 2.7f, 0.4f, 2.7f },
	{ 0, 3.132776f, -1.335369f },
	{ 0, 3.132776f, 1.335369f },
	{ -0.944249f, 3.132776f, -0.944249f },
	{ -0.944249f, 3.132776f, 0.944249f },
	{ 0.944249f, 3.132776f, 0.944249f },
	{ -1.335369f, 3.132776f, 0 },
	{ 0.944249f, 3.132776f, -0.944249f },
	{ 1.335369f, 3.132775f, 0 }
};

NJS_VECTOR normal_00188700[] = {
	{ 0, 1, 0 },
	{ 0.971675f, 0.236322f, 0 },
	{ 0.687078f, 0.236322f, -0.687078f },
	{ 0, 0.236322f, -0.971675f },
	{ -0.687078f, 0.236322f, -0.687078f },
	{ -0.971675f, 0.236322f, 0 },
	{ -0.687078f, 0.236322f, 0.687078f },
	{ 0, 0.236322f, 0.971675f },
	{ 0.687078f, 0.236322f, 0.687078f },
	{ 0, 0.437767f, 0.899089f },
	{ -0.635752f, 0.437767f, -0.635752f },
	{ -0.635752f, 0.437767f, 0.635752f },
	{ 0.899089f, 0.437767f, 0 },
	{ 0.635752f, 0.437767f, 0.635752f },
	{ 0, 0.437767f, -0.899089f },
	{ -0.899089f, 0.437767f, 0 },
	{ 0.635752f, 0.437767f, -0.635752f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.424796f, 0.799435f, -0.424796f },
	{ -0.424796f, 0.799435f, 0.424796f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.424796f, 0.799435f, -0.424796f },
	{ 0.424796f, 0.799435f, 0.424796f },
	{ 0, 0.223278f, -0.974755f },
	{ 0, 0.223278f, 0.974755f },
	{ -0.689256f, 0.223278f, -0.689256f },
	{ -0.689256f, 0.223278f, 0.689256f },
	{ 0.689256f, 0.223278f, 0.689256f },
	{ -0.974755f, 0.223278f, 0 },
	{ 0.689256f, 0.223278f, -0.689256f },
	{ 0.974755f, 0.223278f, 0 }
};

NJS_MODEL_SADX O_Cone1_AD = { vertex_00188574, normal_00188700, LengthOfArray<Sint32>(vertex_00188574), meshlist_001884FC, matlist_001882E0, LengthOfArray<Uint16>(meshlist_001884FC), LengthOfArray<Uint16>(matlist_001882E0), { 0, 3.850017f, 0 }, 4.820024f, NULL };

//NJS_OBJECT object_001888B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018888C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001888E8[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188938[] = {
	4, 10, 27, 8, 25,
	4, 14, 29, 10, 27,
	4, 9, 26, 14, 29,
	4, 13, 24, 9, 26,
	4, 15, 30, 13, 24,
	4, 11, 31, 15, 30,
	4, 12, 28, 11, 31,
	4, 8, 25, 12, 28
};

Sint16 poly_00188988[] = {
	0x8000u | 18, 0, 30, 1, 24, 2, 26, 3, 29, 4, 27, 5, 25, 6, 28, 7, 31, 0, 30
};

Sint16 poly_001889AE[] = {
	4, 19, 18, 17, 16,
	4, 23, 19, 21, 17,
	4, 22, 23, 20, 21,
	4, 18, 22, 16, 20
};

Sint16 poly_001889D6[] = {
	4, 23, 22, 19, 18
};

NJS_TEX uv_001889E0[] = {
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 },
	{ 3, 11 },
	{ 3, 96 },
	{ 243, 11 },
	{ 243, 96 }
};

NJS_TEX uv_00188A60[] = {
	{ 474, 226 },
	{ 312, -233 },
	{ 410, 226 },
	{ 255, -233 },
	{ 255, 226 },
	{ 196, -233 },
	{ 99, 226 },
	{ 172, -233 },
	{ 35, 226 },
	{ 196, -233 },
	{ 99, 226 },
	{ 255, -233 },
	{ 255, 226 },
	{ 312, -233 },
	{ 410, 226 },
	{ 336, -233 },
	{ 474, 226 },
	{ 312, -233 }
};

NJS_TEX uv_00188AA8[] = {
	{ 502, 135 },
	{ 7, 135 },
	{ 502, 189 },
	{ 7, 189 },
	{ 502, 135 },
	{ 7, 135 },
	{ 502, 189 },
	{ 7, 189 },
	{ 502, 135 },
	{ 7, 135 },
	{ 502, 189 },
	{ 7, 189 },
	{ 502, 135 },
	{ 7, 135 },
	{ 502, 189 },
	{ 7, 189 }
};

NJS_TEX uv_00188AE8[] = {
	{ 502, -247 },
	{ 502, 247 },
	{ 7, -247 },
	{ 7, 247 }
};

NJS_MESHSET_SADX meshlist_00188AF8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 8, poly_00188938, NULL, NULL, NULL, uv_001889E0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00188988, NULL, NULL, NULL, uv_00188A60, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_001889AE, NULL, NULL, NULL, uv_00188AA8, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 1, poly_001889D6, NULL, NULL, NULL, uv_00188AE8, NULL }
};

NJS_VECTOR vertex_00188B58[] = {
	{ 2, 0.40004f, 0 },
	{ 1.414214f, 0.40004f, -1.414214f },
	{ 0, 0.40004f, -2 },
	{ -1.414213f, 0.40004f, -1.414213f },
	{ -2, 0.40004f, 0 },
	{ -1.414213f, 0.40004f, 1.414213f },
	{ 0, 0.40004f, 2 },
	{ 1.414213f, 0.40004f, 1.414213f },
	{ 0, 7.200033f, 0.645149f },
	{ -0.456189f, 7.200033f, -0.456189f },
	{ -0.456189f, 7.200033f, 0.456189f },
	{ 0.645149f, 7.200033f, 0 },
	{ 0.456189f, 7.200033f, 0.456189f },
	{ 0, 7.200033f, -0.645149f },
	{ -0.645149f, 7.200033f, 0 },
	{ 0.456189f, 7.200033f, -0.456189f },
	{ -2.9f, 0, -2.9f },
	{ -2.9f, 0, 2.9f },
	{ -2.7f, 0.4f, -2.7f },
	{ -2.7f, 0.4f, 2.7f },
	{ 2.9f, 0, -2.9f },
	{ 2.9f, 0, 2.9f },
	{ 2.7f, 0.4f, -2.7f },
	{ 2.7f, 0.4f, 2.7f },
	{ 0, 6.897671f, -0.747251f },
	{ 0, 6.897671f, 0.747251f },
	{ -0.528387f, 6.897671f, -0.528387f },
	{ -0.528387f, 6.897671f, 0.528387f },
	{ 0.528387f, 6.897671f, 0.528387f },
	{ -0.747251f, 6.897671f, 0 },
	{ 0.528387f, 6.897671f, -0.528387f },
	{ 0.747251f, 6.89767f, 0 }
};

NJS_VECTOR normal_00188CD8[] = {
	{ 0.981916f, 0.189314f, 0 },
	{ 0.69432f, 0.189314f, -0.69432f },
	{ 0, 0.189314f, -0.981916f },
	{ -0.69432f, 0.189314f, -0.69432f },
	{ -0.981916f, 0.189314f, 0 },
	{ -0.69432f, 0.189314f, 0.69432f },
	{ 0, 0.189314f, 0.981916f },
	{ 0.69432f, 0.189314f, 0.69432f },
	{ 0, 0.319933f, 0.94744f },
	{ -0.6699409f, 0.319933f, -0.6699409f },
	{ -0.6699409f, 0.319933f, 0.6699409f },
	{ 0.94744f, 0.319933f, 0 },
	{ 0.6699409f, 0.319933f, 0.6699409f },
	{ 0, 0.319933f, -0.94744f },
	{ -0.94744f, 0.319933f, 0 },
	{ 0.6699409f, 0.319933f, -0.6699409f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.424796f, 0.799435f, -0.424796f },
	{ -0.424796f, 0.799435f, 0.424796f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.424796f, 0.799435f, -0.424796f },
	{ 0.424796f, 0.799435f, 0.424796f },
	{ 0, 0.25123f, -0.967927f },
	{ 0, 0.25123f, 0.967927f },
	{ -0.684428f, 0.25123f, -0.684428f },
	{ -0.684428f, 0.25123f, 0.684428f },
	{ 0.684428f, 0.25123f, 0.684428f },
	{ -0.967927f, 0.25123f, 0 },
	{ 0.684428f, 0.25123f, -0.684428f },
	{ 0.967927f, 0.25123f, 0 }
};

NJS_MODEL_SADX O_Cone2_AD = { vertex_00188B58, normal_00188CD8, LengthOfArray<Sint32>(vertex_00188B58), meshlist_00188AF8, matlist_001888E8, LengthOfArray<Uint16>(meshlist_00188AF8), LengthOfArray<Uint16>(matlist_001888E8), { 0, 3.600017f, 0 }, 4.622783f, NULL };

//NJS_OBJECT object_00188E80 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00188E58, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00188EB4[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 28, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00188EF0[] = {
	4, 1, 11, 0, 10,
	4, 6, 3, 7, 2,
	8, 0, 10, 4, 14, 5, 12, 1, 11,
	8, 7, 8, 6, 13, 3, 15, 2, 9,
	4, 2, 9, 7, 8
};

Sint16 poly_00188F32[] = {
	4, 8, 11, 13, 12,
	4, 15, 14, 9, 10
};

Sint16 poly_00188F46[] = {
	4, 9, 10, 8, 11,
	4, 13, 12, 15, 14
};

NJS_TEX uv_00188F5C[] = {
	{ 984, 255 },
	{ 1000, 7 },
	{ 1308, 255 },
	{ 1293, 7 },
	{ 15, 220 },
	{ 15, 42 },
	{ 1004, 227 },
	{ 1004, 42 },
	{ 0, 255 },
	{ 0, 7 },
	{ 984, 255 },
	{ 1000, 7 },
	{ 1308, 255 },
	{ 1293, 7 },
	{ 2295, 255 },
	{ 2295, 7 },
	{ 0, 7 },
	{ 0, 255 },
	{ 805, 7 },
	{ 796, 255 },
	{ 977, 7 },
	{ 988, 255 },
	{ 1785, 7 },
	{ 1785, 255 },
	{ 805, 7 },
	{ 796, 255 },
	{ 977, 7 },
	{ 988, 255 }
};

NJS_TEX uv_00188FCC[] = {
	{ 6, 7 },
	{ 0, 254 },
	{ 757, 7 },
	{ 765, 254 },
	{ 757, 7 },
	{ 765, 254 },
	{ 6, 7 },
	{ 0, 254 }
};

NJS_TEX uv_00188FEC[] = {
	{ 23, 7 },
	{ 0, 254 },
	{ 223, 7 },
	{ 247, 254 },
	{ 223, 7 },
	{ 247, 254 },
	{ 23, 7 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_0018900C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_00188EF0, NULL, NULL, NULL, uv_00188F5C, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00188F32, NULL, NULL, NULL, uv_00188FCC, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00188F46, NULL, NULL, NULL, uv_00188FEC, NULL }
};

NJS_VECTOR vertex_00189054[] = {
	{ -7, 0, -2.300001f },
	{ -7, 0, 2.300001f },
	{ -6.6875f, 4.800001f, -1.425f },
	{ 6.6875f, 4.800001f, -1.425f },
	{ 7, 0, -2.300001f },
	{ 7, 0, 2.300001f },
	{ 6.6875f, 4.800001f, 1.425f },
	{ -6.6875f, 4.800001f, 1.425f },
	{ -6.8125f, 3.400001f, 1.64375f },
	{ -6.8125f, 3.400001f, -1.64375f },
	{ -6.9375f, 1.4f, -2.03125f },
	{ -6.9375f, 1.4f, 2.03125f },
	{ 6.9375f, 1.4f, 2.03125f },
	{ 6.8125f, 3.400001f, 1.64375f },
	{ 6.9375f, 1.4f, -2.03125f },
	{ 6.8125f, 3.400001f, -1.64375f }
};

NJS_VECTOR normal_00189114[] = {
	{ -0.667398f, 0.16902f, -0.725267f },
	{ -0.667398f, 0.16902f, 0.725267f },
	{ -0.555746f, 0.6404639f, -0.530049f },
	{ 0.555746f, 0.6404639f, -0.530049f },
	{ 0.667398f, 0.16902f, -0.725267f },
	{ 0.667398f, 0.16902f, 0.725267f },
	{ 0.555746f, 0.6404639f, 0.530049f },
	{ -0.555746f, 0.6404639f, 0.530049f },
	{ -0.707711f, 0.173114f, 0.684965f },
	{ -0.707711f, 0.173114f, -0.684965f },
	{ -0.7044269f, 0.169859f, -0.689151f },
	{ -0.7044269f, 0.169859f, 0.689151f },
	{ 0.7044269f, 0.169859f, 0.689151f },
	{ 0.707711f, 0.173114f, 0.684965f },
	{ 0.7044269f, 0.169859f, -0.689151f },
	{ 0.707711f, 0.173114f, -0.684965f }
};

NJS_MODEL_SADX attach_001891D4 = { vertex_00189054, normal_00189114, LengthOfArray<Sint32>(vertex_00189054), meshlist_0018900C, matlist_00188EB4, LengthOfArray<Uint16>(meshlist_0018900C), LengthOfArray<Uint16>(matlist_00188EB4), { 0, 2.4f, 0 }, 6.053925f, NULL };

NJS_OBJECT O_CURB_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_001891D4, 0, 0, 0, 0, 0, 0, 0.8f, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0018E054[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFF71 }, 6, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E068[] = {
	3, 36, 6, 0,
	0x8000u | 5, 36, 30, 0, 24, 18,
	4, 18, 0, 12, 6
};

Sint16 poly_0018E086[] = {
	31, 1, 32, 2,
	1, 7, 2, 8,
	2, 8, 3, 9,
	3, 9, 4, 10,
	4, 10, 5, 11,
	5, 11, 6, 12,
	35, 5, 36, 6,
	7, 13, 8, 14,
	8, 14, 9, 15,
	9, 15, 10, 16,
	10, 16, 11, 17,
	11, 17, 12, 18,
	34, 4, 35, 5,
	29, 35, 30, 36,
	13, 19, 14, 20,
	14, 20, 15, 21,
	15, 21, 16, 22,
	16, 22, 17, 23,
	17, 23, 18, 24,
	33, 3, 34, 4,
	28, 34, 29, 35,
	19, 25, 20, 26,
	20, 26, 21, 27,
	21, 27, 22, 28,
	22, 28, 23, 29,
	23, 29, 24, 30,
	32, 2, 33, 3,
	27, 33, 28, 34,
	25, 31, 26, 32,
	26, 32, 27, 33
};

NJS_TEX uv_0018E178[] = {
	{ 512, 39 },
	{ 610, 39 },
	{ 610, 0 },
	{ 512, 39 },
	{ 408, 39 },
	{ 610, 0 },
	{ 306, 39 },
	{ 204, 39 },
	{ 204, 39 },
	{ 0 },
	{ 102, 39 },
	{ 0, 39 }
};

NJS_TEX uv_0018E1A8[] = {
	{ 510, 255 },
	{ 610, 255 },
	{ 510, 245 },
	{ 610, 245 },
	{ 0, 255 },
	{ 102, 255 },
	{ 0, 245 },
	{ 102, 245 },
	{ 0, 245 },
	{ 102, 245 },
	{ 0, 234 },
	{ 102, 234 },
	{ 0, 234 },
	{ 102, 234 },
	{ 0, 209 },
	{ 102, 209 },
	{ 0, 209 },
	{ 102, 209 },
	{ 0, 111 },
	{ 102, 111 },
	{ 0, 111 },
	{ 102, 111 },
	{ 0, 39 },
	{ 102, 39 },
	{ 510, 111 },
	{ 610, 111 },
	{ 512, 39 },
	{ 610, 39 },
	{ 102, 255 },
	{ 204, 255 },
	{ 102, 245 },
	{ 204, 245 },
	{ 102, 245 },
	{ 204, 245 },
	{ 102, 234 },
	{ 204, 234 },
	{ 102, 234 },
	{ 204, 234 },
	{ 102, 209 },
	{ 204, 209 },
	{ 102, 209 },
	{ 204, 209 },
	{ 102, 111 },
	{ 204, 111 },
	{ 102, 111 },
	{ 204, 111 },
	{ 102, 39 },
	{ 204, 39 },
	{ 512, 209 },
	{ 610, 209 },
	{ 510, 111 },
	{ 610, 111 },
	{ 408, 111 },
	{ 510, 111 },
	{ 408, 39 },
	{ 512, 39 },
	{ 204, 255 },
	{ 306, 255 },
	{ 204, 245 },
	{ 306, 245 },
	{ 204, 245 },
	{ 306, 245 },
	{ 204, 234 },
	{ 306, 234 },
	{ 204, 234 },
	{ 306, 234 },
	{ 204, 209 },
	{ 306, 209 },
	{ 204, 209 },
	{ 306, 209 },
	{ 204, 111 },
	{ 306, 111 },
	{ 204, 111 },
	{ 306, 111 },
	{ 204, 39 },
	{ 306, 39 },
	{ 510, 234 },
	{ 610, 234 },
	{ 512, 209 },
	{ 610, 209 },
	{ 408, 209 },
	{ 512, 209 },
	{ 408, 111 },
	{ 510, 111 },
	{ 306, 255 },
	{ 408, 255 },
	{ 306, 245 },
	{ 408, 245 },
	{ 306, 245 },
	{ 408, 245 },
	{ 306, 234 },
	{ 408, 234 },
	{ 306, 234 },
	{ 408, 234 },
	{ 306, 209 },
	{ 408, 209 },
	{ 306, 209 },
	{ 408, 209 },
	{ 306, 111 },
	{ 408, 111 },
	{ 306, 111 },
	{ 408, 111 },
	{ 306, 39 },
	{ 408, 39 },
	{ 510, 245 },
	{ 610, 245 },
	{ 510, 234 },
	{ 610, 234 },
	{ 408, 234 },
	{ 510, 234 },
	{ 408, 209 },
	{ 512, 209 },
	{ 408, 255 },
	{ 510, 255 },
	{ 408, 245 },
	{ 510, 245 },
	{ 408, 245 },
	{ 510, 245 },
	{ 408, 234 },
	{ 510, 234 }
};

NJS_MESHSET_SADX meshlist_0018E388[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_0018E068, NULL, NULL, NULL, uv_0018E178, NULL },
	{ NJD_MESHSET_4 | 0, 30, poly_0018E086, NULL, NULL, NULL, uv_0018E1A8, NULL }
};

NJS_VECTOR vertex_0018E3B8[] = {
	{ 0 },
	{ 18.68486f, -52.67677f, 0 },
	{ 26.62621f, -50.64727f, 0 },
	{ 23.03397f, -48.43732f, 0 },
	{ 20.04048f, -43.26368f, 0 },
	{ 17.43692f, -23.12119f, 0 },
	{ 12.3759f, -8.104268f, 0 },
	{ 9.342428f, -52.67677f, -16.25007f },
	{ 13.31311f, -50.64727f, -23.2238f },
	{ 11.51698f, -48.43732f, -20.06704f },
	{ 10.02024f, -43.26368f, -17.28963f },
	{ 8.718462f, -23.12119f, -15.2018f },
	{ 6.187952f, -8.104268f, -10.67713f },
	{ -9.342429f, -52.67677f, -16.25007f },
	{ -13.31311f, -50.64727f, -23.22379f },
	{ -11.51699f, -48.43732f, -20.06704f },
	{ -10.02024f, -43.26368f, -17.28963f },
	{ -8.718463f, -23.12119f, -15.2018f },
	{ -6.187953f, -8.104268f, -10.67713f },
	{ -18.68486f, -52.67677f, 0.000003f },
	{ -26.62621f, -50.64727f, 0.000007f },
	{ -23.03397f, -48.43732f, 0.000006f },
	{ -20.04048f, -43.26368f, 0.000005f },
	{ -17.43692f, -23.12119f, 0.000003f },
	{ -12.37591f, -8.104268f, 0.000002f },
	{ -9.342428f, -52.67677f, 16.25007f },
	{ -13.3131f, -50.64727f, 23.2238f },
	{ -11.51698f, -48.43732f, 20.06704f },
	{ -10.02024f, -43.26368f, 17.28964f },
	{ -8.718459f, -23.12119f, 15.20181f },
	{ -6.187952f, -8.104268f, 10.67713f },
	{ 9.34243f, -52.67677f, 16.25007f },
	{ 13.31311f, -50.64727f, 23.22379f },
	{ 11.51699f, -48.43732f, 20.06704f },
	{ 10.02026f, -43.26368f, 17.28963f },
	{ 8.718463f, -23.12119f, 15.2018f },
	{ 6.187957f, -8.104268f, 10.67713f }
};

NJS_VECTOR normal_0018E574[] = {
	{ 0, 1, 0 },
	{ 0.247139f, -0.96898f, 0.000261f },
	{ 0.992874f, -0.119166f, 0.000853f },
	{ 0.670723f, 0.741707f, 0.000945f },
	{ 0.938707f, 0.344714f, 0.000938f },
	{ 0.975917f, 0.218144f, 0.000081f },
	{ 0.8244269f, 0.565968f, 0.000199f },
	{ 0.123739f, -0.969474f, -0.211683f },
	{ 0.496294f, -0.118342f, -0.860051f },
	{ 0.332193f, 0.74795f, -0.574646f },
	{ 0.471535f, 0.351209f, -0.808893f },
	{ 0.487135f, 0.217934f, -0.845698f },
	{ 0.412453f, 0.56816f, -0.712093f },
	{ -0.1242f, -0.9693559f, -0.211953f },
	{ -0.497018f, -0.118708f, -0.8595819f },
	{ -0.334207f, 0.745811f, -0.576257f },
	{ -0.472924f, 0.348147f, -0.809405f },
	{ -0.487182f, 0.21814f, -0.845617f },
	{ -0.412999f, 0.5670789f, -0.712638f },
	{ -0.247139f, -0.96898f, -0.000261f },
	{ -0.992874f, -0.119166f, -0.000853f },
	{ -0.670723f, 0.741707f, -0.000945f },
	{ -0.9387079f, 0.344714f, -0.000938f },
	{ -0.975917f, 0.218144f, -0.00081f },
	{ -0.8244269f, 0.565968f, -0.000199f },
	{ -0.123739f, -0.969474f, 0.211683f },
	{ -0.496294f, -0.118342f, 0.860051f },
	{ -0.332193f, 0.74795f, 0.5746469f },
	{ -0.471534f, 0.351209f, 0.808893f },
	{ -0.487135f, 0.217934f, 0.845698f },
	{ -0.412453f, 0.56816f, 0.712093f },
	{ 0.1242f, -0.9693559f, 0.211953f },
	{ 0.497019f, -0.118709f, 0.8595819f },
	{ 0.334206f, 0.745811f, 0.576257f },
	{ 0.472925f, 0.348147f, 0.809404f },
	{ 0.487182f, 0.21814f, 0.845617f },
	{ 0.412999f, 0.5670789f, 0.712638f }
};

NJS_MODEL_SADX O_HW_Bell_AD = { vertex_0018E3B8, normal_0018E574, LengthOfArray<Sint32>(vertex_0018E3B8), meshlist_0018E388, matlist_0018E054, LengthOfArray<Uint16>(meshlist_0018E388), LengthOfArray<Uint16>(matlist_0018E054), { 0, -26.33838f, 0.000001f }, 35.33129f, NULL };

//NJS_OBJECT O_HW_Bell_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018E730, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0018E78C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFF71 }, 6, 101, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018E7A0[] = {
	0x8000u | 5, 1, 13, 0, 2, 12,
	3, 1, 12, 0
};

Sint16 poly_0018E7B4[] = {
	9, 4, 10, 5,
	12, 1, 9, 4,
	13, 2, 6, 3,
	11, 3, 12, 2,
	8, 4, 13, 1,
	7, 5, 8, 4,
	6, 3, 7, 5,
	10, 5, 11, 3,
	10, 7, 9, 8,
	10, 11, 7, 6,
	11, 12, 6, 13,
	13, 12, 8, 9
};

NJS_TEX uv_0018E814[] = {
	{ 255, 216 },
	{ 192, 221 },
	{ 255, 0 },
	{ 128, 216 },
	{ 64, 221 },
	{ 0, 216 },
	{ 64, 221 },
	{ 0 }
};

NJS_TEX uv_0018E834[] = {
	{ 24, 232 },
	{ 0, 232 },
	{ 64, 242 },
	{ 0, 255 },
	{ 64, 221 },
	{ 0, 216 },
	{ 24, 232 },
	{ 0, 232 },
	{ 192, 221 },
	{ 128, 216 },
	{ 152, 232 },
	{ 128, 232 },
	{ 103, 232 },
	{ 128, 232 },
	{ 64, 221 },
	{ 128, 216 },
	{ 231, 232 },
	{ 255, 232 },
	{ 192, 221 },
	{ 255, 216 },
	{ 192, 242 },
	{ 255, 255 },
	{ 231, 232 },
	{ 255, 232 },
	{ 152, 232 },
	{ 128, 232 },
	{ 192, 242 },
	{ 255, 255 },
	{ 64, 242 },
	{ 255, 255 },
	{ 103, 232 },
	{ 128, 232 },
	{ 318, 242 },
	{ 192, 242 },
	{ 278, 232 },
	{ 231, 232 },
	{ 318, 242 },
	{ 103, 232 },
	{ 192, 242 },
	{ 152, 232 },
	{ 103, 232 },
	{ 318, 221 },
	{ 152, 232 },
	{ 192, 221 },
	{ 192, 221 },
	{ 318, 221 },
	{ 231, 232 },
	{ 278, 232 }
};

NJS_MESHSET_SADX meshlist_0018E8F4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0018E7A0, NULL, NULL, NULL, uv_0018E814, NULL },
	{ NJD_MESHSET_4 | 0, 12, poly_0018E7B4, NULL, NULL, NULL, uv_0018E834, NULL }
};

NJS_VECTOR vertex_0018E924[] = {
	{ 0 },
	{ 2.094577f, -62.20064f, 0 },
	{ -2.094577f, -62.20064f, 0 },
	{ -6.147235f, -66.93088f, 0 },
	{ 6.147235f, -66.93088f, 0 },
	{ 0, -73.25162f, 0 },
	{ -2.812785f, -66.93088f, 1.904375f },
	{ -0.00006f, -69.68098f, 1.904375f },
	{ 2.812786f, -66.93088f, 1.904375f },
	{ 2.812786f, -66.93088f, -1.904375f },
	{ -0.00007f, -69.68098f, -1.904375f },
	{ -2.812786f, -66.93088f, -1.904375f },
	{ 0, -63.74085f, -1.422524f },
	{ -0.00008f, -63.74063f, 1.422495f }
};

NJS_VECTOR normal_0018E9CC[] = {
	{ -0.00038f, 1, 0.000116f },
	{ 0.9473889f, 0.320085f, 0.000001f },
	{ -0.9473889f, 0.320085f, -0.00001f },
	{ -0.9980029f, -0.06316999f, -0.00003f },
	{ 0.9980029f, -0.06316999f, -0.00003f },
	{ 0.000001f, -1, 0 },
	{ 0.092951f, -0.015258f, 0.995554f },
	{ 0, 0.092763f, 0.995688f },
	{ -0.09294599f, -0.015263f, 0.995554f },
	{ -0.092947f, -0.015264f, -0.995554f },
	{ 0, 0.092763f, -0.995688f },
	{ 0.09295499f, -0.015259f, -0.995553f },
	{ 0.000005f, -0.247239f, -0.968955f },
	{ 0.000005f, -0.247191f, 0.968967f }
};

NJS_MODEL_SADX O_HWBell_STICK_AD = { vertex_0018E924, normal_0018E9CC, LengthOfArray<Sint32>(vertex_0018E924), meshlist_0018E8F4, matlist_0018E78C, LengthOfArray<Uint16>(meshlist_0018E8F4), LengthOfArray<Uint16>(matlist_0018E78C), { 0, -36.62581f, 0 }, 36.67529f, NULL };

//NJS_OBJECT O_HWBell_STICK_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018EA74, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017D4DC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 31, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D4F0[] = {
	0x8000u | 14, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};

NJS_TEX uv_0017D510[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 300, 255 },
	{ 300, 7 },
	{ 605, 255 },
	{ 605, 7 },
	{ 892, 255 },
	{ 892, 7 },
	{ 1194, 255 },
	{ 1194, 7 },
	{ 1498, 255 },
	{ 1498, 7 },
	{ 1785, 255 },
	{ 1785, 7 }
};

NJS_MESHSET_SADX meshlist_0017D548[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_0017D4F0, NULL, NULL, NULL, uv_0017D510, NULL }
};

NJS_VECTOR vertex_0017D560[] = {
	{ 1.321263f, 0.000002f, 0 },
	{ 0.960984f, 1.106168f, 0 },
	{ 0.6606309f, 0.000002f, -1.144247f },
	{ 0.480492f, 1.106168f, -0.832236f },
	{ -0.6606309f, 0.000002f, -1.144247f },
	{ -0.480492f, 1.106168f, -0.832236f },
	{ -1.321263f, 0.000002f, 0 },
	{ -0.960984f, 1.106168f, 0 },
	{ -0.6606309f, 0.000002f, 1.144247f },
	{ -0.480492f, 1.106168f, 0.8322369f },
	{ 0.660632f, 0.000002f, 1.144247f },
	{ 0.480492f, 1.106168f, 0.832236f }
};

NJS_VECTOR normal_0017D5F0[] = {
	{ 0.950838f, 0.309688f, 0 },
	{ 0.950838f, 0.309688f, 0 },
	{ 0.475419f, 0.309688f, -0.82345f },
	{ 0.475419f, 0.309688f, -0.82345f },
	{ -0.475419f, 0.309688f, -0.82345f },
	{ -0.475419f, 0.309688f, -0.82345f },
	{ -0.950838f, 0.309688f, 0 },
	{ -0.950838f, 0.309688f, 0 },
	{ -0.475419f, 0.309688f, 0.82345f },
	{ -0.475419f, 0.309688f, 0.82345f },
	{ 0.475419f, 0.309688f, 0.82345f },
	{ 0.475419f, 0.309688f, 0.82345f }
};

NJS_MODEL_SADX attach_0017D680 = { vertex_0017D560, normal_0017D5F0, LengthOfArray<Sint32>(vertex_0017D560), meshlist_0017D548, matlist_0017D4DC, LengthOfArray<Uint16>(meshlist_0017D548), LengthOfArray<Uint16>(matlist_0017D4DC), { 0, 0.553085f, 0 }, 1.915883f, NULL };

NJS_OBJECT object_0017D6A8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_0017D680, 0, 0, 0, 0, 0, 0, 0.996479f, 1.043931f, 0.996479f, NULL, NULL };

NJS_MATERIAL matlist_0017D6DC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 13, 155, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 13, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 13, 59, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D718[] = {
	0x8000u | 10, 1, 2, 3, 6, 7, 4, 5, 0, 1, 2,
	0x8000u | 6, 28, 29, 27, 30, 26, 31,
	14, 29, 23, 28, 24, 27, 25, 26, 20, 31, 21, 30, 22, 29, 23,
	4, 2, 6, 0, 4,
	4, 1, 5, 3, 7
};

Sint16 poly_0017D76E[] = {
	0x8000u | 6, 49, 47, 46, 44, 54, 48,
	0x8000u | 6, 47, 49, 50, 52, 53, 55,
	0x8000u | 6, 54, 48, 51, 45, 55, 53
};

Sint16 poly_0017D798[] = {
	0x8000u | 14, 18, 19, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,
	0x8000u | 12, 42, 43, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41
};

NJS_TEX uv_0017D7D0[] = {
	{ 247, 255 },
	{ 0, 131 },
	{ 247, 131 },
	{ 0, 7 },
	{ 247, 7 },
	{ 0, 131 },
	{ 247, 131 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 131 },
	{ 58, 255 },
	{ 90, 255 },
	{ 90, 255 },
	{ 156, 255 },
	{ 156, 255 },
	{ 188, 255 },
	{ 90, 7 },
	{ 0, 255 },
	{ 58, 7 },
	{ 61, 255 },
	{ 90, 7 },
	{ 185, 255 },
	{ 156, 7 },
	{ 247, 255 },
	{ 188, 7 },
	{ 185, 255 },
	{ 156, 7 },
	{ 61, 255 },
	{ 90, 7 },
	{ 0, 255 },
	{ 0, 131 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 131 },
	{ 0, 255 },
	{ 0, 131 },
	{ 0, 131 },
	{ 0, 7 }
};

NJS_TEX uv_0017D868[] = {
	{ 247, 7 },
	{ 247, 254 },
	{ 123, 7 },
	{ 123, 254 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 123, 254 },
	{ 123, 7 },
	{ 247, 254 },
	{ 247, 7 },
	{ 247, 7 },
	{ 247, 254 },
	{ 123, 7 },
	{ 123, 254 },
	{ 0, 7 },
	{ 0, 255 }
};

NJS_TEX uv_0017D8B0[] = {
	{ 0, 255 },
	{ 0, 3 },
	{ 86, 255 },
	{ 86, 3 },
	{ 173, 255 },
	{ 173, 3 },
	{ 255, 255 },
	{ 255, 3 },
	{ 340, 255 },
	{ 340, 3 },
	{ 428, 255 },
	{ 428, 3 },
	{ 510, 255 },
	{ 510, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 86, 255 },
	{ 86, 3 },
	{ 173, 255 },
	{ 173, 3 },
	{ 255, 255 },
	{ 255, 3 },
	{ 340, 255 },
	{ 340, 3 },
	{ 428, 255 },
	{ 428, 3 }
};

NJS_MESHSET_SADX meshlist_0017D918[] = {
	{ NJD_MESHSET_TRIMESH | 0, 5, poly_0017D718, NULL, NULL, NULL, uv_0017D7D0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 3, poly_0017D76E, NULL, NULL, NULL, uv_0017D868, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0017D798, NULL, NULL, NULL, uv_0017D8B0, NULL }
};

NJS_VECTOR vertex_0017D960[] = {
	{ 0, 5.75393f, -2.240909f },
	{ 0, 5.75393f, 2.240909f },
	{ -0.848528f, 6.602458f, -2.240909f },
	{ -0.848528f, 6.602458f, 2.240909f },
	{ 0.848528f, 6.602458f, -2.240909f },
	{ 0.848528f, 6.602458f, 2.240909f },
	{ 0, 7.450986f, -2.240909f },
	{ 0, 7.450986f, 2.240909f },
	{ 1.14f, 5.152459f, 0 },
	{ 1.14f, 8.192935f, 0 },
	{ 0.57f, 5.152459f, -0.987269f },
	{ 0.57f, 8.192935f, -0.987269f },
	{ -0.57f, 5.152459f, -0.987269f },
	{ -0.57f, 8.192935f, -0.987269f },
	{ -1.14f, 5.152459f, 0 },
	{ -1.14f, 8.192935f, 0 },
	{ -0.57f, 5.152459f, 0.987269f },
	{ -0.57f, 8.192935f, 0.987269f },
	{ 0.57f, 5.152459f, 0.987269f },
	{ 0.57f, 8.192935f, 0.987269f },
	{ 1.0032f, 8.092935f, 0 },
	{ 0.5016f, 8.092935f, -0.8687969f },
	{ -0.5016f, 8.092935f, -0.868796f },
	{ -1.0032f, 8.092935f, 0 },
	{ -0.5016f, 8.092935f, 0.8687969f },
	{ 0.5016f, 8.092935f, 0.868796f },
	{ 0.264812f, 8.997697f, 0.458668f },
	{ -0.264812f, 8.997697f, 0.458668f },
	{ -0.529624f, 8.997697f, 0 },
	{ -0.264812f, 8.997697f, -0.458668f },
	{ 0.264812f, 8.997697f, -0.458668f },
	{ 0.529624f, 8.997697f, 0 },
	{ 1.14f, 6.602457f, -1.690909f },
	{ 1.14f, 6.602457f, 1.690909f },
	{ 0.57f, 7.589726f, -1.690909f },
	{ 0.57f, 7.589726f, 1.690909f },
	{ -0.57f, 7.589726f, -1.690909f },
	{ -0.57f, 7.589725f, 1.690909f },
	{ -1.14f, 6.602457f, -1.690909f },
	{ -1.14f, 6.602457f, 1.690909f },
	{ -0.57f, 5.615188f, -1.690909f },
	{ -0.57f, 5.615188f, 1.690909f },
	{ 0.57f, 5.615188f, -1.690909f },
	{ 0.57f, 5.615188f, 1.690909f },
	{ 0.9576f, 1.154763f, 0 },
	{ -0.4788f, 1.154763f, 0.8293059f },
	{ 1.10808f, 5.252459f, 0 },
	{ 0.4788f, 1.154763f, -0.8293059f },
	{ 0.4788f, 1.154763f, 0.8293059f },
	{ 0.55404f, 5.252459f, -0.948963f },
	{ -0.4788f, 1.154763f, -0.8293059f },
	{ -0.55404f, 5.252459f, 0.948963f },
	{ -0.55404f, 5.252459f, -0.948963f },
	{ -0.9576f, 1.154763f, 0 },
	{ 0.55404f, 5.252459f, 0.948963f },
	{ -1.10808f, 5.252459f, 0 }
};

NJS_VECTOR normal_0017DC00[] = {
	{ 0, -0.816497f, -0.57735f },
	{ 0, -0.816497f, 0.57735f },
	{ -0.816497f, 0, -0.57735f },
	{ -0.816497f, 0, 0.57735f },
	{ 0.816497f, 0, -0.57735f },
	{ 0.816497f, 0, 0.57735f },
	{ 0, 0.816497f, -0.57735f },
	{ 0, 0.816497f, 0.57735f },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0, -0.866025f },
	{ 0.5f, 0, -0.866025f },
	{ -0.5f, 0, -0.866025f },
	{ -0.5f, 0, -0.866025f },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.5f, 0, 0.866026f },
	{ 0.5f, 0, 0.866025f },
	{ 0.5f, 0, 0.866025f },
	{ 0.885971f, 0.46374f, 0 },
	{ 0.442986f, 0.46374f, -0.767274f },
	{ -0.442986f, 0.46374f, -0.767274f },
	{ -0.885971f, 0.46374f, 0 },
	{ -0.442985f, 0.46374f, 0.767274f },
	{ 0.442986f, 0.46374f, 0.767274f },
	{ 0.310974f, 0.783058f, 0.538623f },
	{ -0.310974f, 0.783058f, 0.538623f },
	{ -0.621949f, 0.783058f, 0 },
	{ -0.310974f, 0.783058f, -0.538623f },
	{ 0.310974f, 0.783058f, -0.538623f },
	{ 0.621949f, 0.783058f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.5f, 0.866026f, 0 },
	{ 0.5f, 0.866026f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.866025f, -0.5f, 0 },
	{ -0.866025f, -0.5f, 0 },
	{ 0.866026f, -0.5f, 0 },
	{ 0.866026f, -0.5f, 0 },
	{ 0.999352f, -0.035999f, -0.00011f },
	{ -0.498217f, -0.034447f, 0.866368f },
	{ 0.999352f, -0.035999f, -0.00011f },
	{ 0.498217f, -0.034447f, -0.866368f },
	{ 0.498196f, -0.035144f, 0.866352f },
	{ 0.498956f, -0.034448f, -0.8659419f },
	{ -0.498196f, -0.035144f, -0.866352f },
	{ -0.498956f, -0.034448f, 0.865943f },
	{ -0.498935f, -0.035146f, -0.865927f },
	{ -0.999352f, -0.035999f, 0.000011f },
	{ 0.498935f, -0.035146f, 0.865927f },
	{ -0.999352f, -0.035999f, 0.000011f }
};

NJS_MODEL_SADX attach_0017DEA0 = { vertex_0017D960, normal_0017DC00, LengthOfArray<Sint32>(vertex_0017D960), meshlist_0017D918, matlist_0017D6DC, LengthOfArray<Uint16>(meshlist_0017D918), LengthOfArray<Uint16>(matlist_0017D6DC), { 0, 5.07623f, 0 }, 4.798996f, NULL };

NJS_OBJECT O_HYDBASS_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG, &attach_0017DEA0, 0, 0, 0, 0, 0, 0, 1.1f, 1.05f, 1.1f, &object_0017D6A8, NULL };

NJS_MATERIAL matlist_0018C208[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 137, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 137, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 142, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 140, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 30, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 138, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 143, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 137, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 141, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 139, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xB2B2B2B2 }, { 0xFFFFFFFF }, 11, 136, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018C2E4[] = {
	4, 3, 2, 1, 0,
	4, 7, 3, 5, 1,
	4, 6, 7, 4, 5,
	4, 2, 6, 0, 4
};

Sint16 poly_0018C30C[] = {
	4, 7, 6, 3, 2
};

Sint16 poly_0018C316[] = {
	4, 9, 11, 8, 10,
	4, 51, 50, 49, 48,
	4, 78, 79, 77, 76
};

Sint16 poly_0018C334[] = {
	4, 32, 34, 27, 29,
	4, 24, 22, 23, 20,
	4, 35, 33, 21, 31,
	4, 30, 25, 26, 28
};

Sint16 poly_0018C35C[] = {
	4, 19, 30, 15, 26,
	4, 17, 29, 13, 34,
	4, 18, 35, 14, 21,
	4, 16, 24, 12, 23,
	4, 12, 32, 16, 27,
	4, 14, 20, 18, 22,
	4, 15, 31, 19, 33,
	4, 13, 28, 17, 25,
	4, 73, 70, 62, 67,
	4, 69, 75, 60, 64,
	4, 72, 71, 63, 61,
	4, 68, 74, 66, 65,
	4, 87, 88, 83, 101,
	4, 85, 93, 81, 102,
	4, 86, 91, 82, 99,
	4, 81, 100, 85, 94,
	4, 82, 98, 86, 92,
	4, 84, 90, 80, 97,
	4, 83, 96, 87, 89,
	4, 80, 103, 84, 95
};

Sint16 poly_0018C424[] = {
	4, 38, 52, 39, 54,
	4, 39, 54, 43, 58,
	4, 43, 58, 42, 56,
	4, 42, 56, 38, 52
};

Sint16 poly_0018C44C[] = {
	4, 51, 49, 47, 45,
	4, 49, 48, 45, 44,
	4, 48, 50, 44, 46,
	4, 50, 51, 46, 47
};

Sint16 poly_0018C474[] = {
	4, 46, 47, 44, 45
};

Sint16 poly_0018C47E[] = {
	4, 111, 109, 55, 53,
	4, 59, 57, 112, 110,
	4, 113, 115, 106, 104,
	4, 108, 114, 105, 107
};

Sint16 poly_0018C4A6[] = {
	4, 40, 56, 41, 58,
	4, 41, 58, 37, 54,
	4, 37, 54, 36, 52,
	4, 36, 52, 40, 56
};

Sint16 poly_0018C4CE[] = {
	4, 62, 64, 73, 75,
	4, 60, 61, 69, 71,
	4, 66, 67, 68, 70,
	4, 63, 65, 72, 74
};

NJS_TEX uv_0018C4F8[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 191 },
	{ 0, 191 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 191 },
	{ 0, 191 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 191 },
	{ 0, 191 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 191 },
	{ 0, 191 }
};

NJS_TEX uv_0018C538[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 }
};

NJS_TEX uv_0018C548[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 510, 255 },
	{ 510, -255 }
};

NJS_TEX uv_0018C578[] = {
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 7 },
	{ 0, 7 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 }
};

NJS_TEX uv_0018C5B8[] = {
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 }
};

NJS_TEX uv_0018C6F8[] = {
	{ 0, 7 },
	{ 0, 255 },
	{ 510, 7 },
	{ 510, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 510, 7 },
	{ 510, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 510, 7 },
	{ 510, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 510, 7 },
	{ 510, 255 }
};

NJS_TEX uv_0018C738[] = {
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 7 },
	{ 510, 7 },
	{ 0, 255 },
	{ 510, 255 }
};

NJS_TEX uv_0018C778[] = {
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 3 },
	{ 0, 3 },
	{ 251, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0018C7B8[] = {
	{ 510, 255 },
	{ 510, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 510, 255 },
	{ 510, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 510, 255 },
	{ 510, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 510, 255 },
	{ 510, 7 },
	{ 0, 255 },
	{ 0, 7 }
};

NJS_TEX uv_0018C7F8[] = {
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 3 },
	{ 251, 3 },
	{ 0, 255 },
	{ 251, 255 }
};

NJS_MESHSET_SADX meshlist_0018C838[] = {
	{ NJD_MESHSET_TRIMESH | 0, 4, poly_0018C2E4, NULL, NULL, NULL, uv_0018C4F8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_0018C30C, NULL, NULL, NULL, uv_0018C538, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, poly_0018C316, NULL, NULL, NULL, uv_0018C548, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 4, poly_0018C334, NULL, NULL, NULL, uv_0018C578, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 20, poly_0018C35C, NULL, NULL, NULL, uv_0018C5B8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 4, poly_0018C424, NULL, NULL, NULL, uv_0018C6F8, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 4, poly_0018C44C, NULL, NULL, NULL, uv_0018C738, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_0018C474, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 4, poly_0018C47E, NULL, NULL, NULL, uv_0018C778, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 4, poly_0018C4A6, NULL, NULL, NULL, uv_0018C7B8, NULL },
	{ NJD_MESHSET_TRIMESH | 10, 4, poly_0018C4CE, NULL, NULL, NULL, uv_0018C7F8, NULL }
};

NJS_VECTOR vertex_0018C940[] = {
	{ -16.5f, 0, -16.7f },
	{ -16.5f, 0, 16.7f },
	{ -16, 0.5f, -16.1f },
	{ -16, 0.5f, 16.1f },
	{ 16.5f, 0, -16.7f },
	{ 16.5f, 0, 16.7f },
	{ 16, 0.5f, -16.1f },
	{ 16, 0.5f, 16.1f },
	{ -4.25f, 15.29999f, -4.180002f },
	{ -4.25f, 15.29999f, 4.281003f },
	{ 4.25f, 15.29999f, -4.180002f },
	{ 4.269001f, 15.29999f, 4.283006f },
	{ -5.5f, 12.29998f, -5.450001f },
	{ -5.5f, 12.29998f, 5.55f },
	{ 5.5f, 12.29998f, -5.450001f },
	{ 5.5f, 12.29998f, 5.55f },
	{ -4.25f, 15.29999f, -4.180001f },
	{ -4.25f, 15.29999f, 4.280004f },
	{ 4.25f, 15.29999f, -4.180001f },
	{ 4.269001f, 15.29999f, 4.283005f },
	{ 4.225f, 12.29998f, -5.450001f },
	{ 5.5f, 12.29998f, -4.275001f },
	{ 3.374361f, 15.30049f, -4.181485f },
	{ -4.325f, 12.29998f, -5.450001f },
	{ -3.474f, 15.301f, -4.18f },
	{ -3.478504f, 15.30007f, 4.279946f },
	{ 4.225f, 12.29998f, 5.55f },
	{ -4.251073f, 15.29968f, -3.207928f },
	{ -4.325f, 12.29998f, 5.55f },
	{ -4.251999f, 15.3f, 3.417473f },
	{ 3.374233f, 15.30024f, 4.282491f },
	{ 5.5f, 12.29998f, 4.275001f },
	{ -5.5f, 12.29998f, -4.275001f },
	{ 4.272f, 15.3f, 3.422473f },
	{ -5.5f, 12.29998f, 4.275001f },
	{ 4.257182f, 15.30042f, -3.207789f },
	{ -6.5f, 0.5f, -6.55f },
	{ -6.5f, 0.5f, 6.55f },
	{ -5.5f, 12.3f, -5.450001f },
	{ -5.5f, 12.3f, 5.55f },
	{ 6.5f, 0.5f, -6.55f },
	{ 6.5f, 0.5f, 6.55f },
	{ 5.5f, 12.3f, -5.450001f },
	{ 5.5f, 12.3f, 5.55f },
	{ -5.5f, 54.17998f, -5.451002f },
	{ -5.5f, 54.17998f, 5.550001f },
	{ 5.5f, 54.17998f, -5.451002f },
	{ 5.5f, 54.17998f, 5.550001f },
	{ -5.895002f, 55.47998f, -5.890002f },
	{ -5.85f, 55.47998f, 5.900001f },
	{ 5.899002f, 55.47998f, -5.890002f },
	{ 5.85f, 55.47998f, 5.900001f },
	{ -6, 5.9f, -6 },
	{ 4.5f, 45, 4.062501f },
	{ -6, 5.9f, 6.05f },
	{ 4.5f, 45, -3.922502f },
	{ 6, 5.9f, -6 },
	{ -4, 45, -4.410002f },
	{ 6, 5.9f, 6.05f },
	{ 4, 45, -4.410002f },
	{ 3.65f, 44.99998f, -2.857501f },
	{ 3.65f, 44.99998f, 3.067501f },
	{ -3.075f, 44.99998f, -3.620001f },
	{ 2.975f, 44.99998f, 3.630001f },
	{ 2.975f, 44.99998f, -3.620001f },
	{ -3.075f, 44.99998f, 3.630001f },
	{ -3.65f, 44.99998f, 3.067501f },
	{ -3.65f, 44.99998f, -2.857501f },
	{ -4.25f, 15.29999f, 3.4175f },
	{ 4.25709f, 15.30018f, -3.207995f },
	{ -4.25f, 15.29999f, -3.207501f },
	{ 4.272f, 15.29999f, 3.425501f },
	{ 3.374999f, 15.29999f, 4.283002f },
	{ -3.478f, 15.29999f, -4.180001f },
	{ -3.477999f, 15.29999f, 4.280002f },
	{ 3.375f, 15.29999f, -4.183001f },
	{ 4.5f, 45, 4.550001f },
	{ -4.5f, 45, 4.550001f },
	{ -4.5f, 45, -4.410002f },
	{ 4.5f, 45, -4.410002f },
	{ -4.65f, 45, -4.560001f },
	{ -4.65f, 45, 4.660001f },
	{ 4.65f, 45, -4.560001f },
	{ 4.65f, 45, 4.660001f },
	{ -5.4f, 54.18f, -5.360003f },
	{ -5.4f, 54.18f, 5.450001f },
	{ 5.4f, 54.18f, -5.360003f },
	{ 5.4f, 54.18f, 5.450001f },
	{ 4.3125f, 54.18f, 5.050001f },
	{ 5, 54.18f, 4.359376f },
	{ -4.3125f, 54.18f, -4.960002f },
	{ 5, 54.18f, -4.269377f },
	{ 4.3125f, 54.18f, -4.960002f },
	{ -5, 54.18f, 4.359376f },
	{ -4.3125f, 54.18f, 5.050001f },
	{ -5, 54.18f, -4.269377f },
	{ 4.5f, 45, 4.062501f },
	{ -4, 45, -4.410002f },
	{ 4, 45, -4.410002f },
	{ 4.5f, 45, -3.922502f },
	{ -4, 45, 4.550001f },
	{ 4, 45, 4.550001f },
	{ -4.5f, 45, 4.062501f },
	{ -4.5f, 45, -3.922502f },
	{ -4.5f, 45, -3.922502f },
	{ 4, 45, 4.550001f },
	{ -4.5f, 45, 4.062501f },
	{ -4, 45, 4.550001f },
	{ 4.3125f, 54.18f, 5.050001f },
	{ 5, 54.18f, 4.359376f },
	{ -4.3125f, 54.18f, -4.960001f },
	{ 5, 54.18f, -4.269377f },
	{ 4.316501f, 54.18f, -4.964003f },
	{ -5, 54.18f, 4.359376f },
	{ -4.3125f, 54.18f, 5.050001f },
	{ -5, 54.18f, -4.269377f }
};

NJS_VECTOR normal_0018CEB0[] = {
	{ -0.3733f, 0.841626f, -0.390272f },
	{ -0.3733f, 0.841626f, 0.390272f },
	{ -0.305424f, 0.915975f, -0.260203f },
	{ -0.305424f, 0.915975f, 0.260203f },
	{ 0.3733f, 0.841626f, -0.390272f },
	{ 0.3733f, 0.841626f, 0.390272f },
	{ 0.305424f, 0.915975f, -0.260203f },
	{ 0.305424f, 0.915975f, 0.260203f },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ -0.60704f, 0.510682f, -0.608857f },
	{ -0.606785f, 0.5106829f, 0.60911f },
	{ 0.606194f, 0.510685f, -0.609696f },
	{ 0.607262f, 0.507387f, 0.611385f },
	{ -0.60926f, 0.510671f, -0.606645f },
	{ -0.609148f, 0.510671f, 0.606757f },
	{ 0.608348f, 0.510676f, -0.607555f },
	{ 0.611534f, 0.5073479f, 0.607144f },
	{ 0.000391f, 0.38995f, -0.920836f },
	{ 0.9230649f, 0.384637f, -0.002257f },
	{ 0.00026f, 0.389893f, -0.92086f },
	{ -0.000149f, 0.389843f, -0.920882f },
	{ -0.000129f, 0.389816f, -0.920893f },
	{ -0.0008599999f, 0.389423f, 0.921059f },
	{ -0.000165f, 0.389051f, 0.921216f },
	{ -0.9231099f, 0.384536f, -0.000201f },
	{ -0.00059f, 0.389538f, 0.92101f },
	{ -0.9230779f, 0.384613f, 0.000324f },
	{ -0.000163f, 0.389072f, 0.921207f },
	{ 0.924457f, 0.381286f, 0.000385f },
	{ -0.9230779f, 0.384612f, -0.00027f },
	{ 0.924264f, 0.381755f, 0.000026f },
	{ -0.923041f, 0.384701f, 0.000477f },
	{ 0.923301f, 0.384073f, -0.001799f },
	{ -0.698635f, 0.136228f, -0.7023889f },
	{ -0.701121f, 0.129837f, 0.701121f },
	{ -0.704273f, 0.115222f, -0.700516f },
	{ -0.70283f, 0.109817f, 0.70283f },
	{ 0.698635f, 0.136228f, -0.7023889f },
	{ 0.701121f, 0.129837f, 0.701121f },
	{ 0.704273f, 0.115222f, -0.700516f },
	{ 0.70283f, 0.109817f, 0.70283f },
	{ -0.496525f, -0.724603f, -0.477927f },
	{ -0.49688f, -0.710758f, 0.497929f },
	{ 0.486712f, -0.733963f, -0.473718f },
	{ 0.487417f, -0.720488f, 0.493276f },
	{ -0.6356969f, 0.43295f, -0.639096f },
	{ -0.633539f, 0.442908f, 0.634398f },
	{ 0.638403f, 0.417649f, -0.646538f },
	{ 0.635707f, 0.427385f, 0.642821f },
	{ -0.70187f, 0.126325f, -0.701014f },
	{ 0.99852f, -0.054386f, 0 },
	{ -0.701965f, 0.120378f, 0.701965f },
	{ 0.99852f, -0.054386f, 0 },
	{ 0.70187f, 0.126325f, -0.701014f },
	{ -0.00024f, -0.060231f, -0.998184f },
	{ 0.701965f, 0.120378f, 0.701965f },
	{ -0.00024f, -0.060231f, -0.998184f },
	{ 0.933844f, 0.023301f, -0.35692f },
	{ 0.914045f, 0.025053f, 0.404839f },
	{ -0.438791f, 0.022892f, -0.898298f },
	{ 0.35777f, 0.025342f, 0.933466f },
	{ 0.406517f, 0.022965f, -0.913355f },
	{ -0.39463f, 0.024359f, 0.918517f },
	{ -0.929186f, 0.023119f, 0.368889f },
	{ -0.946097f, 0.022445f, -0.323105f },
	{ -0.928593f, 0.023124f, 0.37038f },
	{ 0.9332359f, 0.023307f, -0.358508f },
	{ -0.945479f, 0.022451f, -0.324908f },
	{ 0.913527f, 0.02506f, 0.406005f },
	{ 0.359799f, 0.025352f, 0.932685f },
	{ -0.440737f, 0.0229f, -0.897344f },
	{ -0.396424f, 0.024361f, 0.917744f },
	{ 0.40866f, 0.022977f, -0.912398f },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.70468f, -0.118535f, -0.699554f },
	{ -0.716067f, -0.117712f, 0.688035f },
	{ 0.70468f, -0.118535f, -0.699554f },
	{ 0.716067f, -0.117712f, 0.688035f },
	{ -0.701453f, -0.118553f, -0.702787f },
	{ -0.711623f, -0.117744f, 0.692624f },
	{ 0.701453f, -0.118553f, -0.702787f },
	{ 0.711623f, -0.117744f, 0.692624f },
	{ -0.281145f, -0.059458f, 0.957822f },
	{ 0.949574f, -0.050956f, -0.309376f },
	{ 0.301274f, -0.058328f, -0.9517519f },
	{ 0.951646f, -0.051354f, 0.302875f },
	{ -0.301274f, -0.058328f, -0.9517519f },
	{ -0.949574f, -0.050956f, -0.309376f },
	{ 0.281145f, -0.059458f, 0.957822f },
	{ -0.951646f, -0.051354f, 0.302875f },
	{ 0.949574f, -0.050956f, -0.309376f },
	{ 0.301274f, -0.058328f, -0.9517519f },
	{ -0.301274f, -0.058328f, -0.9517519f },
	{ 0.951646f, -0.051354f, 0.302875f },
	{ 0.281145f, -0.059458f, 0.957822f },
	{ -0.281145f, -0.059458f, 0.957822f },
	{ -0.949574f, -0.050956f, -0.309376f },
	{ -0.951646f, -0.051354f, 0.302875f },
	{ -0.99852f, -0.054386f, 0 },
	{ 0, -0.054386f, 0.99852f },
	{ -0.99852f, -0.054386f, 0 },
	{ 0, -0.054386f, 0.99852f },
	{ 0, -0.054386f, 0.99852f },
	{ 0.99852f, -0.054386f, 0 },
	{ -0.00024f, -0.060231f, -0.998185f },
	{ 0.99852f, -0.054386f, 0 },
	{ -0.00024f, -0.060231f, -0.998184f },
	{ -0.99852f, -0.054386f, 0 },
	{ 0, -0.054386f, 0.99852f },
	{ -0.99852f, -0.054386f, 0 }
};

NJS_MODEL_SADX O_Tokei_AD = { vertex_0018C940, normal_0018CEB0, LengthOfArray<Sint32>(vertex_0018C940), meshlist_0018C838, matlist_0018C208, LengthOfArray<Uint16>(meshlist_0018C838), LengthOfArray<Uint16>(matlist_0018C208), { 0, 27.73999f, -0.00002f }, 32.37896f, NULL };

//NJS_OBJECT object_0018D448 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D420, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0018D47C[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 155, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018D490[] = {
	0, 2, 4,
	2, 0, 5,
	3, 0, 4,
	0, 3, 5,
	2, 1, 4,
	1, 2, 5,
	1, 3, 4,
	3, 1, 5
};

Sint16 poly_0018D4C0[] = {
	6, 8, 11, 10,
	10, 9, 11, 7
};

NJS_TEX uv_0018D4D0[] = {
	{ 1, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 1, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 1, 254 },
	{ 1, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 1, 254 },
	{ 1, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 1, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 125, 9 },
	{ 247, 254 },
	{ 1, 254 }
};

NJS_TEX uv_0018D530[] = {
	{ 245, 254 },
	{ 0, 254 },
	{ 245, 9 },
	{ 0, 9 },
	{ 245, 9 },
	{ 245, 254 },
	{ 0, 9 },
	{ 0, 254 }
};

NJS_MESHSET_SADX meshlist_0018D550[] = {
	{ NJD_MESHSET_3 | 0, 8, poly_0018D490, NULL, NULL, NULL, uv_0018D4D0, NULL },
	{ NJD_MESHSET_4 | 0, 2, poly_0018D4C0, NULL, NULL, NULL, uv_0018D530, NULL }
};

NJS_VECTOR vertex_0018D580[] = {
	{ 1.60564f, -24.35294f, -0.013632f },
	{ -1.60564f, -24.35294f, -0.013632f },
	{ 0, -20.71015f, -0.013632f },
	{ 0, -27.99573f, -0.013632f },
	{ 0, -24.35294f, 1.592009f },
	{ 0, -24.35294f, -1.619271f },
	{ -0.2401f, -21.65038f, -0.30814f },
	{ -0.2401f, -21.65038f, 0.28686f },
	{ -0.2401f, -0.005992f, -0.3095f },
	{ -0.2401f, -0.005992f, 0.2855f },
	{ 0.3542f, -0.005992f, -0.012f },
	{ 0.3542f, -21.65038f, -0.01064f }
};

NJS_VECTOR normal_0018D610[] = {
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, 1, 0 },
	{ 0, -1, 0 },
	{ 0, 0, 1 },
	{ 0, 0, -1 },
	{ 0.447635f, -0.00056f, -0.8942159f },
	{ 0.447635f, 0.000056f, 0.8942159f },
	{ 0.447635f, -0.00056f, -0.8942159f },
	{ 0.447635f, 0.000056f, 0.8942159f },
	{ 1, 0, -0.00036f },
	{ 1, 0, 0.000036f }
};

NJS_MODEL_SADX O_Tokei_STICK_AD = { vertex_0018D580, normal_0018D610, LengthOfArray<Sint32>(vertex_0018D580), meshlist_0018D550, matlist_0018D47C, LengthOfArray<Uint16>(meshlist_0018D550), LengthOfArray<Uint16>(matlist_0018D47C), { 0, -14.00086f, -0.013631f }, 14.08668f, NULL };

//NJS_OBJECT object_0018D6C8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018D6A0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017CE68[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 13, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 14, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017CEA4[] = {
	9, 12, 10, 13,
	0, 3, 1, 4,
	15, 0, 16, 1,
	6, 9, 7, 10,
	13, 12, 16, 15,
	7, 4, 6, 3
};

Sint16 poly_0017CED4[] = {
	1, 4, 2, 5,
	13, 16, 14, 17,
	16, 1, 17, 2,
	7, 10, 8, 11,
	4, 7, 5, 8,
	10, 13, 11, 14
};

Sint16 poly_0017CF04[] = {
	8, 11, 17, 14,
	17, 2, 8, 5
};

NJS_TEX uv_0017CF14[] = {
	{ 508, 255 },
	{ 765, 255 },
	{ 508, 0 },
	{ 765, 0 },
	{ 1276, 255 },
	{ 1525, 255 },
	{ 1276, 0 },
	{ 1525, 0 },
	{ 1020, 255 },
	{ 1276, 255 },
	{ 1020, 0 },
	{ 1276, 0 },
	{ 252, 255 },
	{ 508, 255 },
	{ 252, 0 },
	{ 508, 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 1020, 0 },
	{ 1020, 255 },
	{ 252, 0 },
	{ -3, 0 },
	{ 252, 255 },
	{ -3, 255 }
};

NJS_TEX uv_0017CF74[] = {
	{ 1279, 255 },
	{ 1528, 255 },
	{ 1279, 0 },
	{ 1525, 0 },
	{ 767, 255 },
	{ 1022, 255 },
	{ 764, 0 },
	{ 1025, 0 },
	{ 1022, 255 },
	{ 1279, 255 },
	{ 1025, 0 },
	{ 1279, 0 },
	{ 254, 255 },
	{ 510, 255 },
	{ 256, 0 },
	{ 510, 0 },
	{ -1, 255 },
	{ 254, 255 },
	{ -3, 0 },
	{ 256, 0 },
	{ 510, 255 },
	{ 767, 255 },
	{ 510, 0 },
	{ 764, 0 }
};

NJS_TEX uv_0017CFD4[] = {
	{ 55, 254 },
	{ 0, 143 },
	{ 167, 31 },
	{ 55, 31 },
	{ 167, 31 },
	{ 223, 143 },
	{ 55, 254 },
	{ 167, 254 }
};

NJS_MESHSET_SADX meshlist_0017CFF4[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0017CEA4, NULL, NULL, NULL, uv_0017CF14, NULL },
	{ NJD_MESHSET_4 | 1, 6, poly_0017CED4, NULL, NULL, NULL, uv_0017CF74, NULL },
	{ NJD_MESHSET_4 | 2, 2, poly_0017CF04, NULL, NULL, NULL, uv_0017CFD4, NULL }
};

NJS_VECTOR vertex_0017D03C[] = {
	{ 3.154139f, 6.10507f, 0 },
	{ 3.154139f, 6.598001f, 0 },
	{ 0.418704f, 7.615767f, 0 },
	{ 1.577069f, 6.10507f, -2.731563f },
	{ 1.577069f, 6.598001f, -2.731563f },
	{ 0.209352f, 7.615767f, -0.355767f },
	{ -1.57707f, 6.10507f, -2.731563f },
	{ -1.57707f, 6.598001f, -2.731563f },
	{ -0.209352f, 7.615767f, -0.355767f },
	{ -3.154139f, 6.10507f, 0 },
	{ -3.154139f, 6.598001f, 0 },
	{ -0.418704f, 7.615767f, 0 },
	{ -1.577068f, 6.10507f, 2.731563f },
	{ -1.577068f, 6.598001f, 2.731563f },
	{ -0.209352f, 7.615767f, 0.355767f },
	{ 1.57707f, 6.10507f, 2.731563f },
	{ 1.57707f, 6.598001f, 2.731563f },
	{ 0.209352f, 7.615767f, 0.355767f }
};

NJS_VECTOR normal_0017D114[] = {
	{ 1, 0, 0 },
	{ 0.795777f, 0.605589f, 0 },
	{ 0.233969f, 0.972244f, 0 },
	{ 0.5f, 0, -0.866026f },
	{ 0.39787f, 0.605662f, -0.68911f },
	{ 0.116973f, 0.972254f, -0.202581f },
	{ -0.5f, 0, -0.866025f },
	{ -0.39787f, 0.605662f, -0.68911f },
	{ -0.087589f, 0.984539f, -0.151693f },
	{ -1, 0, 0 },
	{ -0.795777f, 0.605589f, 0 },
	{ -0.233969f, 0.972244f, 0 },
	{ -0.5f, 0, 0.866026f },
	{ -0.39787f, 0.605662f, 0.68911f },
	{ -0.116973f, 0.972254f, 0.202581f },
	{ 0.5f, 0, 0.866025f },
	{ 0.39787f, 0.605662f, 0.68911f },
	{ 0.087589f, 0.984539f, 0.151693f }
};

NJS_MODEL_SADX attach_0017D1EC = { vertex_0017D03C, normal_0017D114, LengthOfArray<Sint32>(vertex_0017D03C), meshlist_0017CFF4, matlist_0017CE68, LengthOfArray<Uint16>(meshlist_0017CFF4), LengthOfArray<Uint16>(matlist_0017CE68), { 0, 6.860419f, 0 }, 4.172533f, NULL };

NJS_OBJECT object_0017D214 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0017D1EC, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0017D248[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 11, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 12, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0017D270[] = {
	6, 8, 7, 9,
	2, 4, 3, 5,
	0, 2, 1, 3,
	8, 10, 9, 11,
	10, 0, 11, 1,
	4, 6, 5, 7
};

Sint16 poly_0017D2A0[] = {
	10, 8, 4, 6,
	4, 2, 10, 0
};

NJS_TEX uv_0017D2B0[] = {
	{ -320, 255 },
	{ -192, 255 },
	{ -320, 0 },
	{ -192, 0 },
	{ -576, 255 },
	{ -448, 255 },
	{ -576, 0 },
	{ -448, 0 },
	{ -704, 255 },
	{ -576, 255 },
	{ -704, 0 },
	{ -576, 0 },
	{ -192, 255 },
	{ -64, 255 },
	{ -192, 0 },
	{ -64, 0 },
	{ -64, 255 },
	{ 60, 255 },
	{ -64, 0 },
	{ 60, 0 },
	{ -448, 255 },
	{ -320, 255 },
	{ -448, 0 },
	{ -320, 0 }
};

NJS_TEX uv_0017D310[] = {
	{ 167, 31 },
	{ 55, 31 },
	{ 55, 254 },
	{ 0, 143 },
	{ 55, 254 },
	{ 167, 254 },
	{ 167, 31 },
	{ 223, 143 }
};

NJS_MESHSET_SADX meshlist_0017D330[] = {
	{ NJD_MESHSET_4 | 0, 6, poly_0017D270, NULL, NULL, NULL, uv_0017D2B0, NULL },
	{ NJD_MESHSET_4 | 1, 2, poly_0017D2A0, NULL, NULL, NULL, uv_0017D310, NULL }
};

NJS_VECTOR vertex_0017D360[] = {
	{ 1.947f, -0.006406f, 0 },
	{ 2.97891f, 6.447492f, 0 },
	{ 0.9735f, -0.006406f, -1.686152f },
	{ 1.489454f, 6.447492f, -2.579811f },
	{ -0.9735f, -0.006406f, -1.686151f },
	{ -1.489455f, 6.447492f, -2.579811f },
	{ -1.947f, -0.006406f, 0 },
	{ -2.97891f, 6.447492f, 0 },
	{ -0.9735f, -0.006406f, 1.686152f },
	{ -1.489454f, 6.447492f, 2.579811f },
	{ 0.9735f, -0.006406f, 1.686151f },
	{ 1.489456f, 6.447492f, 2.579811f }
};

NJS_VECTOR normal_0017D3F0[] = {
	{ 0.802786f, -0.596268f, 0 },
	{ 0.987458f, -0.157884f, 0 },
	{ 0.401393f, -0.596268f, -0.695233f },
	{ 0.493729f, -0.157884f, -0.855163f },
	{ -0.301116f, -0.798322f, -0.521547f },
	{ -0.493729f, -0.157884f, -0.855163f },
	{ -0.802786f, -0.596268f, 0 },
	{ -0.987458f, -0.157884f, 0 },
	{ -0.401393f, -0.596268f, 0.695233f },
	{ -0.493729f, -0.157884f, 0.855164f },
	{ 0.301116f, -0.798322f, 0.521547f },
	{ 0.493729f, -0.157884f, 0.855163f }
};

NJS_MODEL_SADX O_BAKETU_AD = { vertex_0017D360, normal_0017D3F0, LengthOfArray<Sint32>(vertex_0017D360), meshlist_0017D330, matlist_0017D248, LengthOfArray<Uint16>(meshlist_0017D330), LengthOfArray<Uint16>(matlist_0017D248), { 0, 3.220543f, 0 }, 4.131419f, NULL };

//NJS_OBJECT O_BAKETU_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0017D480, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0017D214, NULL };

NJS_MATERIAL matlist_0016A28C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 103, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 104, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0016A2B4[] = {
	4, 2, 3, 1, 0,
	4, 5, 2, 4, 1,
	4, 7, 5, 6, 4,
	4, 3, 7, 0, 6,
	4, 1, 0, 4, 6,
	4, 5, 7, 2, 3,
	4, 10, 11, 9, 8,
	4, 15, 13, 14, 12,
	4, 9, 8, 33, 32,
	4, 14, 12, 35, 34,
	6, 35, 34, 30, 28, 31, 29,
	6, 33, 32, 24, 25, 27, 26,
	4, 17, 16, 20, 22,
	4, 21, 23, 18, 19,
	4, 19, 23, 16, 22,
	4, 23, 21, 22, 20,
	4, 21, 18, 20, 17,
	4, 18, 19, 17, 16
};

Sint16 poly_0016A370[] = {
	4, 13, 10, 12, 9,
	4, 11, 15, 8, 14,
	4, 12, 9, 34, 33,
	4, 8, 14, 32, 35,
	4, 32, 35, 25, 30,
	4, 31, 26, 30, 25,
	4, 34, 33, 28, 24,
	4, 27, 29, 24, 28
};

NJS_TEX uv_0016A3C0[] = {
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 0, -255 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -4845 },
	{ 0, -4845 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, -4845 },
	{ 247, -4845 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -4845 },
	{ 0, -4845 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, -4845 },
	{ 247, -4845 },
	{ 0, 255 },
	{ 247, 255 },
	{ 0, -4845 },
	{ 247, -4845 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -4845 },
	{ 0, -4845 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 },
	{ 247, -255 },
	{ 247, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_0016A4F0[] = {
	{ 0, -4845 },
	{ 510, -4845 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -4845 },
	{ 0, -4845 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, -4845 },
	{ 510, -4845 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, -4845 },
	{ 0, -4845 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -4845 },
	{ 0, -4845 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, -4845 },
	{ 510, -4845 },
	{ 0, -4845 },
	{ 510, -4845 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, -4845 },
	{ 0, -4845 }
};

NJS_MESHSET_SADX meshlist_0016A570[] = {
	{ NJD_MESHSET_TRIMESH | 0, 18, poly_0016A2B4, NULL, NULL, NULL, uv_0016A3C0, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 8, poly_0016A370, NULL, NULL, NULL, uv_0016A4F0, NULL }
};

NJS_VECTOR vertex_0016A5A0[] = {
	{ -8, 0, -30 },
	{ -11, 0, -25 },
	{ -11, 10, -25 },
	{ -8, 5.999999f, -30 },
	{ 11, 0, -25 },
	{ 11, 10, -25 },
	{ 8, 0, -30 },
	{ 8, 5.999999f, -30 },
	{ -7.5f, 27.04142f, 107.5001f },
	{ -7.5f, 32.14448f, 107.5001f },
	{ -7.5f, 5.103545f, -25 },
	{ -7.5f, 0.000458f, -25 },
	{ 7.5f, 32.14448f, 107.5001f },
	{ 7.5f, 5.103545f, -25 },
	{ 7.5f, 27.04142f, 107.5001f },
	{ 7.5f, 0.000458f, -25 },
	{ 8, 109.3f, 520.0005f },
	{ 11, 105.3f, 515.0005f },
	{ 11, 115.3f, 515.0005f },
	{ 8, 115.3f, 520.0005f },
	{ -11, 105.3f, 515.0005f },
	{ -11, 115.3f, 515.0005f },
	{ -8, 109.3f, 520.0005f },
	{ -8, 115.3f, 520.0005f },
	{ -7.500001f, 88.2672f, 382.5003f },
	{ -7.5f, 83.16412f, 382.5003f },
	{ -7.500001f, 110.205f, 515.0004f },
	{ -7.500001f, 115.3081f, 515.0004f },
	{ 7.5f, 88.2672f, 382.5003f },
	{ 7.499999f, 115.3081f, 515.0004f },
	{ 7.5f, 83.16412f, 382.5003f },
	{ 7.499999f, 110.205f, 515.0004f },
	{ -7.5f, 55.10277f, 245.0002f },
	{ -7.5f, 60.20583f, 245.0002f },
	{ 7.5f, 60.20583f, 245.0002f },
	{ 7.5f, 55.10277f, 245.0002f }
};

NJS_VECTOR normal_0016A750[] = {
	{ -0.389953f, -0.6112159f, -0.688732f },
	{ -0.72438f, -0.554131f, 0.410137f },
	{ -0.655979f, 0.697863f, 0.287538f },
	{ -0.401875f, 0.338481f, -0.850839f },
	{ 0.72438f, -0.554131f, 0.410137f },
	{ 0.655979f, 0.697863f, 0.287538f },
	{ 0.389953f, -0.6112159f, -0.688732f },
	{ 0.401875f, 0.338481f, -0.850839f },
	{ -0.7071069f, -0.692826f, 0.141394f },
	{ -0.7071069f, 0.692826f, -0.141394f },
	{ -0.7483349f, 0.649925f, -0.132638f },
	{ -0.657153f, -0.738534f, 0.150722f },
	{ 0.7071069f, 0.692826f, -0.141394f },
	{ 0.7483349f, 0.649925f, -0.132638f },
	{ 0.7071069f, -0.692826f, 0.141394f },
	{ 0.657153f, -0.738534f, 0.150722f },
	{ 0.401875f, -0.338481f, 0.850839f },
	{ 0.655979f, -0.697863f, -0.287539f },
	{ 0.72438f, 0.554131f, -0.410137f },
	{ 0.389953f, 0.6112159f, 0.688732f },
	{ -0.655979f, -0.697863f, -0.287538f },
	{ -0.72438f, 0.554131f, -0.410137f },
	{ -0.401875f, -0.338481f, 0.850839f },
	{ -0.389953f, 0.6112159f, 0.688732f },
	{ -0.7071069f, 0.692826f, -0.141394f },
	{ -0.7071069f, -0.692826f, 0.141394f },
	{ -0.7483349f, -0.649925f, 0.132638f },
	{ -0.657153f, 0.738534f, -0.150722f },
	{ 0.7071069f, 0.692826f, -0.141394f },
	{ 0.657153f, 0.738534f, -0.150722f },
	{ 0.7071069f, -0.692826f, 0.141394f },
	{ 0.7483349f, -0.649925f, 0.132638f },
	{ -0.7071069f, -0.692826f, 0.141394f },
	{ -0.7071069f, 0.692826f, -0.141394f },
	{ 0.7071069f, 0.692826f, -0.141394f },
	{ 0.7071069f, -0.692826f, 0.141394f }
};

NJS_MODEL_SADX attach_0016A900 = { vertex_0016A5A0, normal_0016A750, LengthOfArray<Sint32>(vertex_0016A5A0), meshlist_0016A570, matlist_0016A28C, LengthOfArray<Uint16>(meshlist_0016A570), LengthOfArray<Uint16>(matlist_0016A28C), { 0, 57.65405f, 245.0003f }, 280.9789f, NULL };

NJS_OBJECT O_CRANE_PATH_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0016A900, 0, 0, 30, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00184D2C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 160, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 160, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	//{ { 0x4CB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 143, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 157, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 143, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 160, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x4CB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00184DF4[] = {
	31, 30, 33, 32,
	31, 29, 30, 28,
	26, 27, 24, 25,
	21, 26, 19, 24,
	29, 23, 28, 22,
	20, 21, 18, 19,
	25, 27, 34, 35,
	23, 20, 22, 18,
	85, 84, 87, 86,
	85, 83, 84, 82,
	80, 81, 78, 79,
	75, 80, 73, 78,
	83, 77, 82, 76,
	74, 75, 72, 73,
	79, 81, 88, 89,
	77, 74, 76, 72
};

Sint16 poly_00184E74[] = {
	18, 19, 7, 9,
	21, 20, 8, 6,
	22, 18, 5, 7,
	20, 23, 6, 4,
	24, 25, 11, 13,
	27, 26, 12, 10,
	28, 22, 3, 5,
	23, 29, 4, 2,
	26, 21, 10, 8,
	19, 24, 9, 11,
	30, 28, 1, 3,
	29, 31, 2, 0,
	35, 27, 15, 12,
	32, 30, 16, 1,
	31, 33, 0, 17,
	25, 34, 13, 14,
	72, 73, 61, 63,
	75, 74, 62, 60,
	76, 72, 59, 61,
	74, 77, 60, 58,
	78, 79, 65, 67,
	81, 80, 66, 64,
	82, 76, 57, 59,
	77, 83, 58, 56,
	80, 75, 64, 62,
	73, 78, 63, 65,
	84, 82, 55, 57,
	83, 85, 56, 54,
	89, 81, 69, 66,
	86, 84, 70, 55,
	85, 87, 54, 71,
	79, 88, 67, 68
};

Sint16 poly_00184F74[] = {
	45, 46, 36, 37,
	46, 47, 37, 38,
	47, 48, 38, 39,
	48, 49, 39, 40,
	49, 50, 40, 41,
	50, 51, 41, 42,
	51, 52, 42, 43,
	52, 53, 43, 44
};

Sint16 poly_00184FB4[] = {
	90, 91, 93, 92,
	91, 90, 95, 94,
	97, 108, 98, 111,
	108, 97, 112, 101
};

Sint16 poly_00184FD4[] = {
	96, 97, 99, 98,
	97, 96, 101, 100,
	91, 105, 92, 106,
	105, 91, 107, 95
};

Sint16 poly_00184FF4[] = {
	102, 90, 103, 93,
	90, 102, 94, 104,
	108, 109, 111, 110,
	109, 108, 113, 112
};

Sint16 poly_00185014[] = {
	105, 96, 106, 99,
	96, 105, 100, 107
};

Sint16 poly_00185024[] = {
	114, 115, 117, 116,
	115, 114, 119, 118,
	126, 127, 129, 128,
	127, 126, 131, 130
};

Sint16 poly_00185044[] = {
	102, 127, 104, 131,
	127, 102, 128, 103,
	109, 114, 110, 117,
	114, 109, 118, 113
};

Sint16 poly_00185064[] = {
	121, 126, 122, 129,
	126, 121, 130, 125,
	115, 120, 116, 123,
	120, 115, 124, 119
};

NJS_TEX uv_00185084[] = {
	{ 0, 132 },
	{ 510, 132 },
	{ 0, 255 },
	{ 510, 255 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 255 },
	{ 510, 132 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 132 },
	{ 510, 255 },
	{ 510, 132 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 510, 132 },
	{ 0, 132 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 132 },
	{ 0, 132 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 255 },
	{ 0, 132 },
	{ 0, 255 },
	{ 510, 132 },
	{ 510, 255 },
	{ 0, 132 },
	{ 0, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 0, 132 },
	{ 510, 132 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 }
};

NJS_TEX uv_00185184[] = {
	{ 251, 3 },
	{ 168, 3 },
	{ 251, 255 },
	{ 168, 255 },
	{ 168, 3 },
	{ 83, 3 },
	{ 168, 255 },
	{ 83, 255 },
	{ 83, 3 },
	{ 22, 3 },
	{ 83, 255 },
	{ 22, 255 },
	{ 22, 3 },
	{ 0, 3 },
	{ 22, 255 },
	{ 0, 255 },
	{ 0, 3 },
	{ 22, 3 },
	{ 0, 255 },
	{ 22, 255 },
	{ 22, 3 },
	{ 83, 3 },
	{ 22, 255 },
	{ 83, 255 },
	{ 83, 3 },
	{ 168, 3 },
	{ 83, 255 },
	{ 168, 255 },
	{ 168, 3 },
	{ 251, 3 },
	{ 168, 255 },
	{ 251, 255 }
};

NJS_TEX uv_00185204[] = {
	{ 2040, 7 },
	{ 2040, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 2040, 255 },
	{ 2040, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 2040, 255 },
	{ 2040, 7 },
	{ 2040, 7 },
	{ 2040, 255 },
	{ 0, 7 },
	{ 0, 255 }
};

NJS_TEX uv_00185244[] = {
	{ 0, -7395 },
	{ 247, -7395 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -7395 },
	{ 0, -7395 },
	{ 247, 255 },
	{ 0, 255 },
	{ 247, -7395 },
	{ 0, -7395 },
	{ 0, -7395 },
	{ 247, -7395 },
	{ 0, 255 },
	{ 247, 255 }
};

NJS_TEX uv_00185284[] = {
	{ 15300, 255 },
	{ 15300, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 0, 7 },
	{ 0, 255 },
	{ 15300, 7 },
	{ 15300, 255 },
	{ 15300, 7 },
	{ 15300, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 15300, 255 },
	{ 15300, 7 }
};

NJS_TEX uv_001852C4[] = {
	{ 0, 255 },
	{ 0, -255 },
	{ 2040, 255 },
	{ 2040, -255 },
	{ 2040, -255 },
	{ 2040, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_001852E4[] = {
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -7395 },
	{ 0, -7395 },
	{ 0, -7395 },
	{ 239, -7395 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -7395 },
	{ 239, -7395 },
	{ 0, 255 },
	{ 239, 255 },
	{ 239, 255 },
	{ 0, 255 },
	{ 239, -7395 },
	{ 0, -7395 }
};

NJS_TEX uv_00185324[] = {
	{ 0, -7395 },
	{ 251, -7395 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, -7395 },
	{ 0, -7395 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, -7395 },
	{ 251, -7395 },
	{ 251, -7395 },
	{ 0, -7395 },
	{ 251, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00185364[] = {
	{ 0, -3570 },
	{ 251, -3570 },
	{ 0, 255 },
	{ 251, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, -3570 },
	{ 0, -3570 },
	{ 251, -3570 },
	{ 0, -3570 },
	{ 251, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, -3570 },
	{ 251, -3570 }
};

NJS_MESHSET_SADX meshlist_001853A4[] = {
	{ NJD_MESHSET_4 | 0, 16, poly_00184DF4, NULL, NULL, NULL, uv_00185084, NULL },
	{ NJD_MESHSET_4 | 1, 32, poly_00184E74, NULL, NULL, NULL, NULL, NULL },
	//{ NJD_MESHSET_4 | 2, 8, poly_00184F74, NULL, NULL, NULL, uv_00185184, NULL },
	{ NJD_MESHSET_4 | 2, 4, poly_00184FB4, NULL, NULL, NULL, uv_00185204, NULL },
	{ NJD_MESHSET_4 | 3, 4, poly_00184FD4, NULL, NULL, NULL, uv_00185244, NULL },
	{ NJD_MESHSET_4 | 4, 4, poly_00184FF4, NULL, NULL, NULL, uv_00185284, NULL },
	{ NJD_MESHSET_4 | 5, 2, poly_00185014, NULL, NULL, NULL, uv_001852C4, NULL },
	{ NJD_MESHSET_4 | 6, 4, poly_00185024, NULL, NULL, NULL, uv_001852E4, NULL },
	{ NJD_MESHSET_4 | 7, 4, poly_00185044, NULL, NULL, NULL, uv_00185324, NULL },
	{ NJD_MESHSET_4 | 8, 4, poly_00185064, NULL, NULL, NULL, uv_00185364, NULL },
	{ NJD_MESHSET_4 | 9, 8, poly_00184F74, NULL, NULL, NULL, uv_00185184, NULL }
};

NJS_VECTOR vertex_00185494[] = {
	{ -12, 17.43417f, -220 },
	{ -12.5f, 17.5f, -250 },
	{ -10.37703f, 23.49118f, -220 },
	{ -10.82532f, 23.75f, -250 },
	{ -5.991179f, 27.87703f, -220 },
	{ -6.250002f, 28.32532f, -250 },
	{ 0.000002f, 29.48236f, -220 },
	{ -0.00002f, 30, -250 },
	{ 5.991183f, 27.87703f, -220 },
	{ 6.249998f, 28.32532f, -250 },
	{ 10.37703f, 23.49118f, -220 },
	{ 10.82531f, 23.75f, -250 },
	{ 12, 17.43417f, -220 },
	{ 12.5f, 17.5f, -250 },
	{ 12.5f, 11.5f, -250 },
	{ 12, 11.5f, -220 },
	{ -12.5f, 11.5f, -250 },
	{ -12, 11.5f, -220 },
	{ -0.00002f, 30, -250 },
	{ 6.249998f, 28.32532f, -250 },
	{ 0.000002f, 30, -220 },
	{ 6.250002f, 28.32532f, -220 },
	{ -6.250002f, 28.32532f, -250 },
	{ -6.249998f, 28.32532f, -220 },
	{ 10.82531f, 23.75f, -250 },
	{ 12.5f, 17.5f, -250 },
	{ 10.82532f, 23.75f, -220 },
	{ 12.5f, 17.5f, -220 },
	{ -10.82532f, 23.75f, -250 },
	{ -10.82531f, 23.75f, -220 },
	{ -12.5f, 17.5f, -250 },
	{ -12.5f, 17.5f, -220 },
	{ -12.5f, 11.5f, -250 },
	{ -12.5f, 11.5f, -220 },
	{ 12.5f, 11.5f, -250 },
	{ 12.5f, 11.5f, -220 },
	{ -12, 11.5f, -220 },
	{ -12, 17.43417f, -220 },
	{ -10.37703f, 23.49118f, -220 },
	{ -5.991182f, 27.87703f, -220 },
	{ -0.00001f, 29.48236f, -220 },
	{ 5.991179f, 27.87703f, -220 },
	{ 10.37703f, 23.49118f, -220 },
	{ 12, 17.43417f, -220 },
	{ 12, 11.5f, -220 },
	{ -12, 11.5f, -30 },
	{ -12, 17.43417f, -30 },
	{ -10.37703f, 23.49118f, -30 },
	{ -5.991182f, 27.87703f, -30 },
	{ -0.00001f, 29.48236f, -30 },
	{ 5.991179f, 27.87703f, -30 },
	{ 10.37703f, 23.49118f, -30 },
	{ 12, 17.43417f, -30 },
	{ 12, 11.5f, -30 },
	{ 12, 17.43417f, -30 },
	{ 12.5f, 17.5f, 0 },
	{ 10.37703f, 23.49118f, -30 },
	{ 10.82531f, 23.75f, 0 },
	{ 5.991179f, 27.87703f, -30 },
	{ 6.249999f, 28.32532f, 0 },
	{ -0.00001f, 29.48236f, -30 },
	{ -0.00001f, 30, 0 },
	{ -5.991182f, 27.87703f, -30 },
	{ -6.250001f, 28.32532f, 0 },
	{ -10.37703f, 23.49118f, -30 },
	{ -10.82532f, 23.75f, 0 },
	{ -12, 17.43417f, -30 },
	{ -12.5f, 17.5f, 0 },
	{ -12.5f, 11.5f, 0 },
	{ -12, 11.5f, -30 },
	{ 12.5f, 11.5f, 0 },
	{ 12, 11.5f, -30 },
	{ -0.00001f, 30, 0 },
	{ -6.250001f, 28.32532f, 0 },
	{ -0.00001f, 30, -30 },
	{ -6.250001f, 28.32532f, -30 },
	{ 6.249999f, 28.32532f, 0 },
	{ 6.249999f, 28.32532f, -30 },
	{ -10.82532f, 23.75f, 0 },
	{ -12.5f, 17.5f, 0 },
	{ -10.82532f, 23.75f, -30 },
	{ -12.5f, 17.5f, -30 },
	{ 10.82531f, 23.75f, 0 },
	{ 10.82531f, 23.75f, -30 },
	{ 12.5f, 17.5f, 0 },
	{ 12.5f, 17.5f, -30 },
	{ 12.5f, 11.5f, 0 },
	{ 12.5f, 11.5f, -30 },
	{ -12.5f, 11.5f, 0 },
	{ -12.5f, 11.5f, -30 },
	{ -12.5f, 11.5f, -125 },
	{ -12.5f, 1.5f, -125 },
	{ -12.5f, 1.5f, 0.000015f },
	{ -12.5f, 11.5f, 0.000015f },
	{ -12.5f, 11.5f, -250 },
	{ -12.5f, 1.5f, -250 },
	{ 11, 0, -125 },
	{ 12.5f, 1.5f, -125 },
	{ 12.5f, 1.5f, 0.000015f },
	{ 11, 0, 0.000015f },
	{ 11, 0, -250 },
	{ 12.5f, 1.5f, -250 },
	{ -11, 11.5f, -125 },
	{ -11, 11.5f, 0.000015f },
	{ -11, 11.5f, -250 },
	{ -11, 0, -125 },
	{ -11, 0, 0.000015f },
	{ -11, 0, -250 },
	{ 12.5f, 11.5f, -125 },
	{ 11, 11.5f, -125 },
	{ 11, 11.5f, 0.000015f },
	{ 12.5f, 11.5f, 0.000015f },
	{ 12.5f, 11.5f, -250 },
	{ 11, 11.5f, -250 },
	{ 11, 9.5f, -125 },
	{ 9.499997f, 9.5f, -125 },
	{ 9.499997f, 9.5f, 0.000015f },
	{ 11, 9.5f, 0.000015f },
	{ 11, 9.5f, -250 },
	{ 9.499997f, 9.5f, -250 },
	{ 8.999997f, 1.5f, -125 },
	{ -9.000002f, 1.5f, -125 },
	{ -9.000002f, 1.5f, 0.000015f },
	{ 8.999997f, 1.5f, 0.000015f },
	{ 8.999997f, 1.5f, -250 },
	{ -9.000002f, 1.5f, -250 },
	{ -9.500002f, 9.5f, -125 },
	{ -11, 9.5f, -125 },
	{ -11, 9.5f, 0.000015f },
	{ -9.500002f, 9.5f, 0.000015f },
	{ -9.500002f, 9.5f, -250 },
	{ -11, 9.5f, -250 }
};

NJS_VECTOR normal_00185AC4[] = {
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0, 0.757162f, 0.653227f },
	{ 0.378581f, 0.655722f, 0.653227f },
	{ -0.5f, 0.866025f, 0 },
	{ -0.378581f, 0.655722f, 0.653227f },
	{ 0.866025f, 0.5f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 0.655722f, 0.378581f, 0.653227f },
	{ 0.727973f, 0.09583899f, 0.678874f },
	{ -0.866025f, 0.5f, 0 },
	{ -0.655722f, 0.378581f, 0.653227f },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.727973f, 0.09583899f, 0.678874f },
	{ -1, 0, 0 },
	{ -0.707106f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.707106f, 0, 0.7071069f },
	{ -1, 0, 0 },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.866025f, 0.5f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ 0, 1, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0.866025f, 0.5f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.866025f, 0.5f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ 0, 1, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0.866025f, 0.5f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 1, 0, 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ 0, 0.757162f, -0.653227f },
	{ -0.378581f, 0.655722f, -0.653227f },
	{ 0.5f, 0.866025f, 0 },
	{ 0.378581f, 0.655722f, -0.653227f },
	{ -0.866025f, 0.5f, 0 },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.655722f, 0.378581f, -0.653227f },
	{ -0.727973f, 0.09583899f, -0.678874f },
	{ 0.866025f, 0.5f, 0 },
	{ 0.655722f, 0.378581f, -0.653227f },
	{ 0.9914449f, 0.130526f, 0 },
	{ 0.727973f, 0.09583899f, -0.678874f },
	{ 1, 0, 0 },
	{ 0.707106f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.707106f, 0, -0.7071069f },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.684698f, 0.728827f, 0 },
	{ -0.684698f, 0.728827f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.684698f, 0.728827f, 0 },
	{ -0.998053f, 0.062378f, 0 },
	{ 0.998053f, 0.062378f, 0 },
	{ 0.998053f, 0.062378f, 0 },
	{ -0.998053f, 0.062378f, 0 },
	{ -0.998053f, 0.062378f, 0 },
	{ 0.998053f, 0.062378f, 0 },
	{ 0.684698f, 0.728827f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.684698f, 0.728827f, 0 },
	{ 0.684698f, 0.728827f, 0 },
	{ 0.7071069f, 0.7071069f, 0 }
};

NJS_MODEL_SADX attach_001860F4 = { vertex_00185494, normal_00185AC4, LengthOfArray<Sint32>(vertex_00185494), meshlist_001853A4, matlist_00184D2C, LengthOfArray<Uint16>(meshlist_001853A4), LengthOfArray<Uint16>(matlist_00184D2C), { 0, 15, -125 }, 125.8968f, NULL };

NJS_OBJECT O_ESCALATOR_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001860F4, 0.000001f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001879FC[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00187A10[] = {
	0, 1, 3, 2,
	1, 0, 5, 4
};

NJS_TEX uv_00187A20[] = {
	{ 2550, -9945 },
	{ 0, -9945 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 2550, 255 },
	{ 0, -9945 },
	{ 2550, -9945 }
};

NJS_MESHSET_SADX meshlist_00187A40[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_00187A10, NULL, NULL, NULL, uv_00187A20, NULL }
};

NJS_VECTOR vertex_00187A58[] = {
	{ 9, 1.5f, -175 },
	{ -9, 1.5f, -175 },
	{ -9, 1.5f, 0 },
	{ 9, 1.5f, 0 },
	{ 9, 1.5f, -350 },
	{ -9, 1.5f, -350 }
};

NJS_VECTOR normal_00187AA0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX O_ESCALATOR_CONVEY_AD = { vertex_00187A58, normal_00187AA0, LengthOfArray<Sint32>(vertex_00187A58), meshlist_00187A40, matlist_001879FC, LengthOfArray<Uint16>(meshlist_00187A40), LengthOfArray<Uint16>(matlist_001879FC), { 0, 1.5f, -175 }, 175.2313f, NULL };

//NJS_OBJECT O_ESCALATOR_CONVEY_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00187AE8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_00186150[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 38, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186164[] = {
	1, 0, 5, 4,
	0, 1, 3, 2
};

NJS_TEX uv_00186174[] = {
	{ 0, -7395 },
	{ 2550, -7395 },
	{ 0, 255 },
	{ 2550, 255 },
	{ 2550, 255 },
	{ 0, 255 },
	{ 2550, -7395 },
	{ 0, -7395 }
};

NJS_MESHSET_SADX meshlist_00186194[] = {
	{ NJD_MESHSET_4 | 0, 2, poly_00186164, NULL, NULL, NULL, uv_00186174, NULL }
};

NJS_VECTOR vertex_001861AC[] = {
	{ 8.999997f, 1.5f, -125 },
	{ -9.000002f, 1.5f, -125 },
	{ -9.000002f, 1.5f, 0.000015f },
	{ 8.999997f, 1.5f, 0.000015f },
	{ 8.999997f, 1.5f, -250 },
	{ -9.000002f, 1.5f, -250 }
};

NJS_VECTOR normal_001861F4[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX O_ESCALATOR_CONVEY2_AD = { vertex_001861AC, normal_001861F4, LengthOfArray<Sint32>(vertex_001861AC), meshlist_00186194, matlist_00186150, LengthOfArray<Uint16>(meshlist_00186194), LengthOfArray<Uint16>(matlist_00186150), { -0.00002f, 1.5f, -125 }, 125.3236f, NULL };

//NJS_OBJECT O_ESCALATOR_CONVEY2_AD = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_0018623C, 0.000001f, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0018646C[] = {
	//{ { 0x4CB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 160, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 39, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 143, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 40, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 143, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 62, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, 157, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x4CB2B2B2 }, { 0xFFFFFFFF }, 11, 18, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00186520[] = {
	135, 138, 137, 140,
	138, 135, 139, 136,
	132, 135, 134, 137,
	135, 132, 136, 133,
	129, 132, 131, 134,
	132, 129, 133, 130,
	126, 129, 128, 131,
	129, 126, 130, 127,
	123, 126, 125, 128,
	126, 123, 127, 124,
	120, 123, 122, 125,
	123, 120, 124, 121,
	114, 120, 118, 122,
	120, 114, 121, 117,
	115, 114, 119, 118,
	114, 115, 117, 116
};

Sint16 poly_001865A0[] = {
	103, 112, 91, 92,
	109, 111, 78, 95,
	110, 108, 94, 79,
	113, 105, 93, 90,
	107, 109, 80, 78,
	108, 106, 79, 81,
	97, 102, 87, 89,
	104, 99, 88, 86,
	101, 107, 82, 80,
	106, 100, 81, 83,
	105, 104, 90, 88,
	102, 103, 89, 91,
	98, 101, 84, 82,
	100, 96, 83, 85,
	99, 98, 86, 84,
	96, 97, 85, 87,
	67, 76, 55, 56,
	73, 75, 42, 59,
	74, 72, 58, 43,
	77, 69, 57, 54,
	71, 73, 44, 42,
	72, 70, 43, 45,
	61, 66, 51, 53,
	68, 63, 52, 50,
	65, 71, 46, 44,
	70, 64, 45, 47,
	69, 68, 54, 52,
	66, 67, 53, 55,
	62, 65, 48, 46,
	64, 60, 47, 49,
	63, 62, 50, 48,
	60, 61, 49, 51
};

Sint16 poly_001866A0[] = {
	101, 98, 100, 96,
	103, 105, 112, 113,
	98, 99, 96, 97,
	107, 101, 106, 100,
	99, 104, 97, 102,
	104, 105, 102, 103,
	109, 107, 108, 106,
	109, 108, 111, 110,
	65, 62, 64, 60,
	67, 69, 76, 77,
	62, 63, 60, 61,
	71, 65, 70, 64,
	63, 68, 61, 66,
	68, 69, 66, 67,
	73, 71, 72, 70,
	73, 72, 75, 74,
	12, 37, 14, 41,
	37, 12, 38, 13,
	24, 19, 28, 23,
	19, 24, 20, 27
};

Sint16 poly_00186740[] = {
	30, 25, 34, 29,
	25, 30, 26, 33,
	36, 31, 40, 35,
	31, 36, 32, 39
};

Sint16 poly_00186760[] = {
	18, 7, 22, 11,
	7, 18, 8, 21,
	0, 1, 3, 2,
	1, 0, 5, 4
};

Sint16 poly_00186780[] = {
	37, 36, 41, 40,
	36, 37, 39, 38,
	25, 24, 29, 28,
	24, 25, 27, 26
};

Sint16 poly_001867A0[] = {
	6, 15, 10, 17,
	15, 6, 16, 9
};

Sint16 poly_001867B0[] = {
	15, 1, 17, 5,
	1, 15, 2, 16,
	6, 7, 9, 8,
	7, 6, 11, 10
};

Sint16 poly_001867D0[] = {
	19, 18, 23, 22,
	18, 19, 21, 20,
	12, 0, 13, 3,
	0, 12, 4, 14
};

NJS_TEX uv_001867F0[] = {
	{ 168, 3 },
	{ 251, 3 },
	{ 168, 254 },
	{ 251, 254 },
	{ 251, 255 },
	{ 168, 255 },
	{ 251, 3 },
	{ 168, 3 },
	{ 83, 3 },
	{ 168, 3 },
	{ 83, 254 },
	{ 168, 254 },
	{ 168, 255 },
	{ 83, 255 },
	{ 168, 3 },
	{ 83, 3 },
	{ 22, 3 },
	{ 83, 3 },
	{ 22, 254 },
	{ 83, 254 },
	{ 83, 255 },
	{ 22, 255 },
	{ 83, 3 },
	{ 22, 3 },
	{ 0, 3 },
	{ 22, 3 },
	{ 0, 254 },
	{ 22, 254 },
	{ 22, 255 },
	{ 0, 255 },
	{ 22, 3 },
	{ 0, 3 },
	{ 22, 3 },
	{ 0, 3 },
	{ 22, 254 },
	{ 0, 254 },
	{ 0, 255 },
	{ 22, 255 },
	{ 0, 3 },
	{ 22, 3 },
	{ 83, 3 },
	{ 22, 3 },
	{ 83, 254 },
	{ 22, 254 },
	{ 22, 255 },
	{ 83, 255 },
	{ 22, 3 },
	{ 83, 3 },
	{ 168, 3 },
	{ 83, 3 },
	{ 168, 254 },
	{ 83, 254 },
	{ 83, 255 },
	{ 168, 255 },
	{ 83, 3 },
	{ 168, 3 },
	{ 251, 3 },
	{ 168, 3 },
	{ 251, 254 },
	{ 168, 254 },
	{ 168, 255 },
	{ 251, 255 },
	{ 168, 3 },
	{ 251, 3 }
};

NJS_TEX uv_001868F0[] = {
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 0, 132 },
	{ 510, 132 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 255 },
	{ 510, 132 },
	{ 0, 255 },
	{ 0, 132 },
	{ 510, 132 },
	{ 510, 255 },
	{ 0, 132 },
	{ 0, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 0, 132 },
	{ 510, 255 },
	{ 0, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 0, 132 },
	{ 510, 132 },
	{ 0, 255 },
	{ 510, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 255 },
	{ 510, 132 },
	{ 0, 255 },
	{ 0, 132 },
	{ 510, 132 },
	{ 510, 255 },
	{ 0, 132 },
	{ 0, 255 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 510, 3 },
	{ 0, 132 },
	{ 0, 3 },
	{ 510, 132 },
	{ 0, 132 },
	{ 510, 255 },
	{ 0, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 10200, 3 },
	{ 10200, 255 },
	{ 10200, 255 },
	{ 10200, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 0, 255 },
	{ 0, 3 },
	{ 10200, 255 },
	{ 10200, 3 },
	{ 10200, 3 },
	{ 10200, 255 },
	{ 0, 3 },
	{ 0, 255 }
};

NJS_TEX uv_00186A30[] = {
	{ 0, 255 },
	{ 251, 255 },
	{ 0, -4845 },
	{ 251, -4845 },
	{ 251, -4845 },
	{ 0, -4845 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, 255 },
	{ 0, 255 },
	{ 251, -4845 },
	{ 0, -4845 },
	{ 0, -4845 },
	{ 251, -4845 },
	{ 0, 255 },
	{ 251, 255 }
};

NJS_TEX uv_00186A70[] = {
	{ 0, 7 },
	{ 0, 255 },
	{ 4080, 7 },
	{ 4080, 255 },
	{ 4080, 255 },
	{ 4080, 7 },
	{ 0, 255 },
	{ 0, 7 },
	{ 0, 7 },
	{ 0, 255 },
	{ 4080, 7 },
	{ 4080, 255 },
	{ 4080, 255 },
	{ 4080, 7 },
	{ 0, 255 },
	{ 0, 7 }
};

NJS_TEX uv_00186AB0[] = {
	{ 239, -9945 },
	{ 0, -9945 },
	{ 239, 255 },
	{ 0, 255 },
	{ 0, -9945 },
	{ 239, -9945 },
	{ 0, 255 },
	{ 239, 255 },
	{ 0, -9945 },
	{ 239, -9945 },
	{ 0, 255 },
	{ 239, 255 },
	{ 239, -9945 },
	{ 0, -9945 },
	{ 239, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00186AF0[] = {
	{ 0, -255 },
	{ 0, 255 },
	{ 4080, -255 },
	{ 4080, 255 },
	{ 0, 255 },
	{ 0, -255 },
	{ 4080, 255 },
	{ 4080, -255 }
};

NJS_TEX uv_00186B10[] = {
	{ 0, -7395 },
	{ 247, -7395 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, -7395 },
	{ 0, -7395 },
	{ 247, 255 },
	{ 0, 255 },
	{ 0, -7395 },
	{ 247, -7395 },
	{ 0, 255 },
	{ 247, 255 },
	{ 247, -7395 },
	{ 0, -7395 },
	{ 247, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00186B50[] = {
	{ 0, 255 },
	{ 0, 7 },
	{ 20400, 255 },
	{ 20400, 7 },
	{ 20400, 7 },
	{ 20400, 255 },
	{ 0, 7 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0, 7 },
	{ 20400, 255 },
	{ 20400, 7 },
	{ 20400, 7 },
	{ 20400, 255 },
	{ 0, 7 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_00186B90[] = {
	//{ NJD_MESHSET_4 | 0, 16, poly_00186520, NULL, NULL, NULL, uv_001867F0, NULL },
	{ NJD_MESHSET_4 | 0, 32, poly_001865A0, NULL, NULL, NULL, NULL, NULL },
	{ NJD_MESHSET_4 | 1, 20, poly_001866A0, NULL, NULL, NULL, uv_001868F0, NULL },
	{ NJD_MESHSET_4 | 2, 4, poly_00186740, NULL, NULL, NULL, uv_00186A30, NULL },
	{ NJD_MESHSET_4 | 3, 4, poly_00186760, NULL, NULL, NULL, uv_00186A70, NULL },
	{ NJD_MESHSET_4 | 4, 4, poly_00186780, NULL, NULL, NULL, uv_00186AB0, NULL },
	{ NJD_MESHSET_4 | 5, 2, poly_001867A0, NULL, NULL, NULL, uv_00186AF0, NULL },
	{ NJD_MESHSET_4 | 6, 4, poly_001867B0, NULL, NULL, NULL, uv_00186B10, NULL },
	{ NJD_MESHSET_4 | 7, 4, poly_001867D0, NULL, NULL, NULL, uv_00186B50, NULL },
	{ NJD_MESHSET_4 | 8, 16, poly_00186520, NULL, NULL, NULL, uv_001867F0, NULL }
};

NJS_VECTOR vertex_00186C68[] = {
	{ -12.5f, 11.5f, -175 },
	{ -12.5f, 1.5f, -175 },
	{ -12.5f, 1.5f, 0 },
	{ -12.5f, 11.5f, 0 },
	{ -12.5f, 11.5f, -350 },
	{ -12.5f, 1.5f, -350 },
	{ 11, 0, -175 },
	{ 12.5f, 1.5f, -175 },
	{ 12.5f, 1.5f, 0 },
	{ 11, 0, 0 },
	{ 11, 0, -350 },
	{ 12.5f, 1.5f, -350 },
	{ -11, 11.5f, -175 },
	{ -11, 11.5f, 0 },
	{ -11, 11.5f, -350 },
	{ -11, 0, -175 },
	{ -11, 0, 0 },
	{ -11, 0, -350 },
	{ 12.5f, 11.5f, -175 },
	{ 11, 11.5f, -175 },
	{ 11, 11.5f, 0 },
	{ 12.5f, 11.5f, 0 },
	{ 12.5f, 11.5f, -350 },
	{ 11, 11.5f, -350 },
	{ 11, 9.5f, -175 },
	{ 9.5f, 9.5f, -175 },
	{ 9.5f, 9.5f, 0 },
	{ 11, 9.5f, 0 },
	{ 11, 9.5f, -350 },
	{ 9.5f, 9.5f, -350 },
	{ 9, 1.5f, -175 },
	{ -9, 1.5f, -175 },
	{ -9, 1.5f, 0 },
	{ 9, 1.5f, 0 },
	{ 9, 1.5f, -350 },
	{ -9, 1.5f, -350 },
	{ -9.5f, 9.5f, -175 },
	{ -11, 9.5f, -175 },
	{ -11, 9.5f, 0 },
	{ -9.5f, 9.5f, 0 },
	{ -9.5f, 9.5f, -350 },
	{ -11, 9.5f, -350 },
	{ -12, 17.43417f, -320 },
	{ -12.5f, 17.5f, -350 },
	{ -10.37703f, 23.49118f, -320 },
	{ -10.82532f, 23.75f, -350 },
	{ -5.991177f, 27.87703f, -320 },
	{ -6.25f, 28.32532f, -350 },
	{ 0.000004f, 29.48236f, -320 },
	{ 0, 30, -350 },
	{ 5.991184f, 27.87703f, -320 },
	{ 6.25f, 28.32532f, -350 },
	{ 10.37703f, 23.49118f, -320 },
	{ 10.82532f, 23.75f, -350 },
	{ 12, 17.43417f, -320 },
	{ 12.5f, 17.5f, -350 },
	{ 12.5f, 11.5f, -350 },
	{ 12, 11.5f, -320 },
	{ -12.5f, 11.5f, -350 },
	{ -12, 11.5f, -320 },
	{ 0, 30, -350 },
	{ 6.25f, 28.32532f, -350 },
	{ 0.000004f, 30, -320 },
	{ 6.250004f, 28.32532f, -320 },
	{ -6.25f, 28.32532f, -350 },
	{ -6.249996f, 28.32532f, -320 },
	{ 10.82532f, 23.75f, -350 },
	{ 12.5f, 17.5f, -350 },
	{ 10.82532f, 23.75f, -320 },
	{ 12.5f, 17.5f, -320 },
	{ -10.82532f, 23.75f, -350 },
	{ -10.82531f, 23.75f, -320 },
	{ -12.5f, 17.5f, -350 },
	{ -12.5f, 17.5f, -320 },
	{ -12.5f, 11.5f, -350 },
	{ -12.5f, 11.5f, -320 },
	{ 12.5f, 11.5f, -350 },
	{ 12.5f, 11.5f, -320 },
	{ 12, 17.43417f, -30.00001f },
	{ 12.5f, 17.5f, -0.00015f },
	{ 10.37703f, 23.49118f, -30.00001f },
	{ 10.82532f, 23.75f, -0.00015f },
	{ 5.99118f, 27.87703f, -30.00001f },
	{ 6.25f, 28.32532f, -0.00015f },
	{ 0, 29.48236f, -30.00001f },
	{ 0, 30, -0.00015f },
	{ -5.99118f, 27.87703f, -30.00001f },
	{ -6.25f, 28.32532f, -0.00015f },
	{ -10.37703f, 23.49118f, -30.00001f },
	{ -10.82532f, 23.75f, -0.00015f },
	{ -12, 17.43417f, -30.00001f },
	{ -12.5f, 17.5f, -0.00015f },
	{ -12.5f, 11.5f, -0.00015f },
	{ -12, 11.5f, -30.00001f },
	{ 12.5f, 11.5f, -0.00015f },
	{ 12, 11.5f, -30.00001f },
	{ 0, 30, -0.00015f },
	{ -6.25f, 28.32532f, -0.00015f },
	{ 0, 30, -30.00001f },
	{ -6.25f, 28.32532f, -30.00001f },
	{ 6.25f, 28.32532f, -0.00015f },
	{ 6.25f, 28.32532f, -30.00001f },
	{ -10.82532f, 23.75f, -0.00015f },
	{ -12.5f, 17.5f, -0.00015f },
	{ -10.82532f, 23.75f, -30.00001f },
	{ -12.5f, 17.5f, -30.00001f },
	{ 10.82532f, 23.75f, -0.00015f },
	{ 10.82532f, 23.75f, -30.00001f },
	{ 12.5f, 17.5f, -0.00015f },
	{ 12.5f, 17.5f, -30.00001f },
	{ 12.5f, 11.5f, -0.00015f },
	{ 12.5f, 11.5f, -30.00001f },
	{ -12.5f, 11.5f, -0.00015f },
	{ -12.5f, 11.5f, -30.00001f },
	{ -12, 17.43417f, -175 },
	{ -12, 11.5f, -175 },
	{ -12, 11.5f, -30.00001f },
	{ -12, 17.43417f, -30.00001f },
	{ -12, 17.43417f, -320 },
	{ -12, 11.5f, -320 },
	{ -10.37703f, 23.49118f, -175 },
	{ -10.37703f, 23.49118f, -30.00001f },
	{ -10.37703f, 23.49118f, -320 },
	{ -5.99118f, 27.87703f, -175 },
	{ -5.99118f, 27.87703f, -30.00001f },
	{ -5.99118f, 27.87703f, -320 },
	{ 0, 29.48236f, -175 },
	{ 0, 29.48236f, -30.00001f },
	{ 0, 29.48236f, -320 },
	{ 5.99118f, 27.87703f, -175 },
	{ 5.99118f, 27.87703f, -30.00001f },
	{ 5.99118f, 27.87703f, -320 },
	{ 10.37703f, 23.49118f, -175 },
	{ 10.37703f, 23.49118f, -30.00001f },
	{ 10.37703f, 23.49118f, -320 },
	{ 12, 17.43417f, -175 },
	{ 12, 17.43417f, -30.00001f },
	{ 12, 17.43417f, -320 },
	{ 12, 11.5f, -175 },
	{ 12, 11.5f, -30.00001f },
	{ 12, 11.5f, -320 }
};

NJS_VECTOR normal_00187304[] = {
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.92388f, -0.382683f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.382683f, -0.92388f, 0 },
	{ 0.92388f, -0.382683f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ -0.382683f, -0.92388f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.684698f, 0.728827f, 0 },
	{ -0.684698f, 0.728827f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.7071069f, 0.7071069f, 0 },
	{ -0.684698f, 0.728827f, 0 },
	{ -0.998053f, 0.062378f, 0 },
	{ 0.998053f, 0.062378f, 0 },
	{ 0.998053f, 0.062378f, 0 },
	{ -0.998053f, 0.062378f, 0 },
	{ -0.998053f, 0.062378f, 0 },
	{ 0.998053f, 0.062378f, 0 },
	{ 0.684698f, 0.728827f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.684698f, 0.728827f, 0 },
	{ 0.684698f, 0.728827f, 0 },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0 },
	{ 0, 0, 1 },
	{ 0, 1, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0, 0.757162f, 0.653227f },
	{ 0.378581f, 0.655722f, 0.653227f },
	{ -0.5f, 0.866025f, 0 },
	{ -0.378581f, 0.655722f, 0.653227f },
	{ 0.866025f, 0.5f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 0.655722f, 0.378581f, 0.653227f },
	{ 0.727973f, 0.09583899f, 0.678874f },
	{ -0.866025f, 0.5f, 0 },
	{ -0.655722f, 0.378581f, 0.653227f },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.727973f, 0.09583899f, 0.678874f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, 0.7071069f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ 0, 0.757162f, -0.653227f },
	{ -0.378581f, 0.655722f, -0.653227f },
	{ 0.5f, 0.866025f, 0 },
	{ 0.378581f, 0.655722f, -0.653227f },
	{ -0.866025f, 0.5f, 0 },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.655722f, 0.378581f, -0.653227f },
	{ -0.727973f, 0.09583899f, -0.678874f },
	{ 0.866025f, 0.5f, 0 },
	{ 0.655722f, 0.378581f, -0.653227f },
	{ 0.9914449f, 0.130526f, 0 },
	{ 0.727973f, 0.09583899f, -0.678874f },
	{ 1, 0, 0 },
	{ 0.7071069f, 0, -0.7071069f },
	{ -1, 0, 0 },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.9914449f, 0.130526f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.9914449f, 0.130526f, 0 },
	{ -0.9914449f, 0.130526f, 0 },
	{ -1, 0, 0 },
	{ -0.866025f, 0.5f, 0 },
	{ -0.866025f, 0.5f, 0 },
	{ -0.866025f, 0.5f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ -0.5f, 0.866025f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0.5f, 0.866025f, 0 },
	{ 0.866025f, 0.5f, 0 },
	{ 0.866025f, 0.5f, 0 },
	{ 0.866025f, 0.5f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 0.9914449f, 0.130526f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 }
};

NJS_MODEL_SADX attach_001879A0 = { vertex_00186C68, normal_00187304, LengthOfArray<Sint32>(vertex_00186C68), meshlist_00186B90, matlist_0018646C, LengthOfArray<Uint16>(meshlist_00186B90), LengthOfArray<Uint16>(matlist_0018646C), { 0.000002f, 15, -175 }, 175.6417f, NULL };

NJS_OBJECT O_ESCALATOR2_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001879A0, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_0018B028[] = {
	{ { 0xFFB2B22B }, { 0x00000000 }, 0, 61, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_0018B03C[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0018B044[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0018B054[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0018B03C, NULL, NULL, NULL, uv_0018B044, NULL }
};

NJS_VECTOR vertex_0018B06C[] = {
	{ -13.29365f, 0, -0.00002f },
	{ -14.0873f, -15.3f, -0.00002f },
	{ 13.29365f, 0, -0.00002f },
	{ 14.0873f, -15.3f, -0.00002f }
};

NJS_VECTOR normal_0018B09C[] = {
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_0018B0CC = { vertex_0018B06C, normal_0018B09C, LengthOfArray<Sint32>(vertex_0018B06C), meshlist_0018B054, matlist_0018B028, LengthOfArray<Uint16>(meshlist_0018B054), LengthOfArray<Uint16>(matlist_0018B028), { 0, -7.649999f, -0.00002f }, 9.579953f, NULL };

NJS_OBJECT object_0018B0F4 = { NJD_EVAL_BREAK, &attach_0018B0CC, 15.5f, 54.37043f, 8.937354f, 0x2111, 0, 0, 0.63f, 0.65f, 1, NULL, NULL };

NJS_MATERIAL matlist_0018B128[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 61, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_0018B13C[] = {
	0, 1, 2, 3
};

NJS_TEX uv_0018B144[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0018B154[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0018B13C, NULL, NULL, NULL, uv_0018B144, NULL }
};

NJS_VECTOR vertex_0018B16C[] = {
	{ -13, 0, 0 },
	{ -14, -14.92047f, 0.776262f },
	{ 13, 0, 0 },
	{ 14, -14.92047f, 0.776262f }
};

NJS_VECTOR normal_0018B19C[] = {
	{ 0, 0.051956f, 0.9986489f },
	{ 0, 0.051956f, 0.9986489f },
	{ 0, 0.051956f, 0.9986489f },
	{ 0, 0.051956f, 0.9986489f }
};

NJS_MODEL_SADX attach_0018B1CC = { vertex_0018B16C, normal_0018B19C, LengthOfArray<Sint32>(vertex_0018B16C), meshlist_0018B154, matlist_0018B128, LengthOfArray<Uint16>(meshlist_0018B154), LengthOfArray<Uint16>(matlist_0018B128), { 0, -7.460236f, 0.388131f }, 14.6151f, NULL };

NJS_OBJECT object_0018B1F4 = { NJD_EVAL_BREAK, &attach_0018B1CC, -9.700001f, 58.22042f, 8.907354f, 0x159E, 0, 0, 1, 1.2f, 1, NULL, &object_0018B0F4 };

NJS_MATERIAL matlist_0018B228[] = {
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 27, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 24, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 65, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 24, NJD_D_100 | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 47, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0x00000000 }, 0, 46, NJD_D_100 | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_0018B2A0[] = {
	20, 21, 23,
	25, 24, 22,
	28, 29, 27,
	33, 32, 26
};

Sint16 poly_0018B2B8[] = {
	34, 35, 66, 67,
	23, 21, 22, 25,
	22, 24, 23, 20,
	27, 29, 26, 33,
	26, 32, 27, 28,
	56, 57, 58, 59,
	57, 61, 59, 63,
	61, 60, 63, 62,
	60, 56, 62, 58,
	58, 59, 62, 63,
	66, 67, 64, 65,
	67, 35, 65, 31,
	35, 34, 31, 30,
	34, 66, 30, 64
};

Sint16 poly_0018B328[] = {
	0, 2, 1, 3,
	4, 6, 5, 7,
	8, 10, 9, 11,
	12, 14, 13, 15,
	16, 18, 17, 19
};

Sint16 poly_0018B350[] = {
	24, 25, 20, 21,
	32, 33, 28, 29
};

Sint16 poly_0018B360[] = {
	39, 38, 40, 36,
	37, 41, 39, 38,
	41, 37, 36, 40,
	45, 44, 42, 46,
	43, 47, 45, 44,
	47, 43, 46, 42
};

Sint16 poly_0018B390[] = {
	48, 50, 49, 51
};

Sint16 poly_0018B398[] = {
	52, 54, 53, 55
};

NJS_TEX uv_0018B3A0[] = {
	{ 253, 253 },
	{ 253, -253 },
	{ 0, -17 },
	{ 0, -17 },
	{ 253, 253 },
	{ 253, -253 },
	{ 253, 253 },
	{ 253, -253 },
	{ 0, -17 },
	{ 253, 253 },
	{ 253, -253 },
	{ 0, -17 }
};

NJS_TEX uv_0018B3D0[] = {
	{ 46, 63 },
	{ 46, -564 },
	{ 206, 59 },
	{ 207, -570 },
	{ 0, 255 },
	{ 253, 253 },
	{ 0, -255 },
	{ 253, -253 },
	{ 0, 255 },
	{ 253, 253 },
	{ 0, -255 },
	{ 253, -253 },
	{ 0, 255 },
	{ 253, 253 },
	{ 0, -255 },
	{ 253, -253 },
	{ 0, 255 },
	{ 253, 253 },
	{ 0, -255 },
	{ 253, -253 },
	{ 48, -767 },
	{ 206, -765 },
	{ 48, 252 },
	{ 206, 252 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, 255 },
	{ 48, -767 },
	{ 206, -765 },
	{ 48, 252 },
	{ 206, 252 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, 255 },
	{ 0, 255 },
	{ 46, 63 },
	{ 46, -564 },
	{ 206, 59 },
	{ 207, -570 },
	{ 48, -767 },
	{ 206, -765 },
	{ 48, 252 },
	{ 206, 252 },
	{ 0, -765 },
	{ 255, -765 },
	{ 0, 255 },
	{ 255, 255 },
	{ 48, -767 },
	{ 206, -765 },
	{ 48, 252 },
	{ 206, 252 },
	{ 255, -765 },
	{ 0, -765 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_0018B4B0[] = {
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

NJS_TEX uv_0018B500[] = {
	{ 0, -253 },
	{ 255, -253 },
	{ 1, 252 },
	{ 254, 252 },
	{ 254, 252 },
	{ 1, 252 },
	{ 255, -253 },
	{ 0, -253 }
};

NJS_TEX uv_0018B520[] = {
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, 255 },
	{ 255, -765 },
	{ 255, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

NJS_TEX uv_0018B580[] = {
	{ 0, 254 },
	{ 254, 254 },
	{ 0 },
	{ 254, 0 }
};

NJS_TEX uv_0018B590[] = {
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_MESHSET_SADX meshlist_0018B5A0[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_0018B2A0, NULL, NULL, NULL, uv_0018B3A0, NULL },
	{ NJD_MESHSET_4 | 0, 14, poly_0018B2B8, NULL, NULL, NULL, uv_0018B3D0, NULL },
	{ NJD_MESHSET_4 | 1, 5, poly_0018B328, NULL, NULL, NULL, uv_0018B4B0, NULL },
	{ NJD_MESHSET_4 | 2, 2, poly_0018B350, NULL, NULL, NULL, uv_0018B500, NULL },
	{ NJD_MESHSET_4 | 3, 6, poly_0018B360, NULL, NULL, NULL, uv_0018B520, NULL },
	{ NJD_MESHSET_4 | 4, 1, poly_0018B390, NULL, NULL, NULL, uv_0018B580, NULL },
	{ NJD_MESHSET_4 | 5, 1, poly_0018B398, NULL, NULL, NULL, uv_0018B590, NULL }
};

NJS_VECTOR vertex_0018B648[] = {
	{ 21.5f, 53.49998f, 2.2f },
	{ 21.5f, 55.09998f, 8.899998f },
	{ 22.5f, 53.49998f, 2.2f },
	{ 22.5f, 55.09998f, 8.899998f },
	{ 8.5f, 53.49998f, 2.2f },
	{ 8.5f, 55.09998f, 8.899998f },
	{ 9.5f, 53.49998f, 2.2f },
	{ 9.5f, 55.09998f, 8.899998f },
	{ -10.5f, 56.99998f, 2.2f },
	{ -10.5f, 58.59998f, 8.899998f },
	{ -9.5f, 56.99998f, 2.2f },
	{ -9.5f, 58.59998f, 8.899998f },
	{ -20.5f, 56.99998f, 2.2f },
	{ -20.5f, 58.59998f, 8.899998f },
	{ -19.5f, 56.99998f, 2.2f },
	{ -19.5f, 58.59998f, 8.899998f },
	{ -0.5f, 56.99998f, 2.2f },
	{ -0.5f, 58.59998f, 8.899998f },
	{ 0.5f, 56.99998f, 2.2f },
	{ 0.5f, 58.59998f, 8.899998f },
	{ 7.5f, 54.76958f, 8.471203f },
	{ 7.5f, 54.22235f, 9.97471f },
	{ 23.5f, 55.46986f, 9.471007f },
	{ 7.5f, 55.46986f, 9.471007f },
	{ 23.5f, 54.76958f, 8.471203f },
	{ 23.5f, 54.22235f, 9.97471f },
	{ 3, 58.96985f, 9.471007f },
	{ -22.5f, 58.96985f, 9.471007f },
	{ -22.5f, 58.26957f, 8.471203f },
	{ -22.5f, 57.72234f, 9.97471f },
	{ 32, 0.000004f, -1.499999f },
	{ 32, 0.000004f, 2.000001f },
	{ 3, 58.26957f, 8.471203f },
	{ 3, 57.72234f, 9.97471f },
	{ 32, 54.5f, -1.499999f },
	{ 32, 54.5f, 2.000001f },
	{ 32, 47.25f, -0.9f },
	{ -32, 46.5f, 0.5f },
	{ 32, 48, 0.5f },
	{ -32, 48, 0.5f },
	{ -32, 47.25f, -0.9f },
	{ 32, 46.5f, 0.5f },
	{ -32, 52.75f, -0.2f },
	{ -32, 52, 1.2f },
	{ 32, 53.5f, 1.2f },
	{ -32, 53.5f, 1.2f },
	{ 32, 52.75f, -0.2f },
	{ 32, 52, 1.2f },
	{ 6.5f, 45, 0.9f },
	{ 6.5f, 53.5f, 2 },
	{ 24.5f, 45, 0.9f },
	{ 24.5f, 53.5f, 2 },
	{ -23.5f, 40, -0.099999f },
	{ -23.5f, 57, 2.1f },
	{ 4, 40, -0.099999f },
	{ 4, 57, 2.1f },
	{ -36, 0.000004f, -1.5f },
	{ -36, 0.000004f, 2 },
	{ -36, 54.5f, -1.5f },
	{ -36, 54.5f, 2 },
	{ -32, 0.000004f, -1.5f },
	{ -32, 0.000004f, 2 },
	{ -32, 54.5f, -1.5f },
	{ -32, 54.5f, 2 },
	{ 36, 0.000004f, -1.5f },
	{ 36, 0.000004f, 2 },
	{ 36, 54.5f, -1.5f },
	{ 36, 54.5f, 2 }
};

NJS_VECTOR normal_0018B978[] = {
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ 0, -0.97265f, 0.232274f },
	{ -0.7346039f, -0.088608f, -0.672685f },
	{ -0.775667f, -0.438479f, 0.453957f },
	{ 0.626299f, 0.74747f, 0.221445f },
	{ -0.626299f, 0.74747f, 0.221445f },
	{ 0.7346039f, -0.088608f, -0.672685f },
	{ 0.775667f, -0.438479f, 0.453957f },
	{ 0.626299f, 0.74747f, 0.221445f },
	{ -0.626299f, 0.74747f, 0.221445f },
	{ -0.7346039f, -0.088608f, -0.672685f },
	{ -0.775667f, -0.438479f, 0.453957f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.7346039f, -0.088608f, -0.672685f },
	{ 0.775667f, -0.438479f, 0.453957f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0, 0, -1 },
	{ 0, -0.857969f, 0.513702f },
	{ 0, 0.857969f, 0.513702f },
	{ 0, 0.857969f, 0.513702f },
	{ 0, 0, -1 },
	{ 0, -0.857969f, 0.513702f },
	{ 0, 0, -1 },
	{ 0, -0.857969f, 0.513702f },
	{ 0, 0.857969f, 0.513702f },
	{ 0, 0.857969f, 0.513702f },
	{ 0, 0, -1 },
	{ 0, -0.857969f, 0.513702f },
	{ 0, -0.128342f, 0.99173f },
	{ 0, -0.128342f, 0.99173f },
	{ 0, -0.128342f, 0.99173f },
	{ 0, -0.128342f, 0.99173f },
	{ 0, -0.128341f, 0.99173f },
	{ 0, -0.128341f, 0.99173f },
	{ 0, -0.128341f, 0.99173f },
	{ 0, -0.128341f, 0.99173f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_0018BCA8 = { vertex_0018B648, normal_0018B978, LengthOfArray<Sint32>(vertex_0018B648), meshlist_0018B5A0, matlist_0018B228, LengthOfArray<Uint16>(meshlist_0018B5A0), LengthOfArray<Uint16>(matlist_0018B228), { 0, 29.48492f, 4.237355f }, 36.45432f, NULL };

NJS_OBJECT O_GG_AD = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_0018BCA8, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_0018B1F4, NULL };

