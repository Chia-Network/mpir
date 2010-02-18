/* Generated by tuneup.c, 2009-10-08, gcc 4.3 */

#define MUL_KARATSUBA_THRESHOLD          24
#define MUL_TOOM3_THRESHOLD              67
#define MUL_TOOM4_THRESHOLD             354
#define MUL_TOOM7_THRESHOLD             507
#define MUL_TOOM8H_THRESHOLD            517

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          35
#define SQR_TOOM3_THRESHOLD             117
#define SQR_TOOM4_THRESHOLD             400
#define SQR_TOOM7_THRESHOLD             500 
#define SQR_TOOM8_THRESHOLD             650

#define MULLOW_BASECASE_THRESHOLD         5
#define MULLOW_DC_THRESHOLD              33
#define MULLOW_MUL_THRESHOLD           6647

#define MULHIGH_BASECASE_THRESHOLD       13
#define MULHIGH_DC_THRESHOLD             17
#define MULHIGH_MUL_THRESHOLD          6647

#define MULMOD_2EXPM1_THRESHOLD          18

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 60
#define POWM_THRESHOLD                  138
#define FAC_UI_THRESHOLD              14087

#define GCD_ACCEL_THRESHOLD              58
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD            MP_SIZE_T_MAX  /* never */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 5
#define MOD_1_2_THRESHOLD                10
#define MOD_1_3_THRESHOLD                29
#define DIVREM_HENSEL_QR_1_THRESHOLD      7
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      6
#define DIVREM_EUCLID_HENSEL_THRESHOLD      8

#define ROOTREM_THRESHOLD                 7 

#define GET_STR_DC_THRESHOLD              3
#define GET_STR_PRECOMPUTE_THRESHOLD      7
#define SET_STR_THRESHOLD              4385

#define MUL_FFT_TABLE  { 432, 992, 2240, 2816, 7168, 28672, 114688, 327680, 0 }
#define MUL_FFT_MODF_THRESHOLD          432
#define MUL_FFT_THRESHOLD              4864

#define SQR_FFT_TABLE  { 432, 928, 2240, 2816, 7168, 28672, 114688, 327680, 0 }
#define SQR_FFT_MODF_THRESHOLD          432
#define SQR_FFT_THRESHOLD              4864

/* Tuneup completed successfully, took 33 seconds */

#define MUL_FFT_TABLE2 {{1, 3}, {205, 4}, {377, 5}, {386, 4}, {404, 5}, {831, 6}, {850, 5}, {869, 6}, {2009, 7}, {2053, 6}, {2191, 7}, {2727, 8}, {2849, 7}, {3109, 8}, {3393, 7}, {3468, 8}, {5478, 9}, {5721, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {11976, 8}, {12239, 9}, {13939, 10}, {15535, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {31772, 9}, {32468, 10}, {36184, 9}, {36977, 10}, {40326, 9}, {41210, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {86099, 11}, {98051, 10}, {102394, 11}, {114110, 12}, {127165, 11}, {164920, 12}, {175995, 11}, {179849, 12}, {196129, 11}, {228243, 12}, {233241, 13}, {254354, 12}, {259924, 11}, {277377, 12}, {456509, 13}, {519871, 12}, {659749, 13}, {784582, 11}, {819320, 12}, {933036, 13}, {953467, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFTM_TABLE2 {{1, 4}, {344, 5}, {360, 4}, {377, 5}, {743, 6}, {777, 5}, {813, 6}, {1476, 7}, {1543, 6}, {1612, 7}, {4039, 8}, {4128, 7}, {4312, 8}, {5478, 9}, {5721, 8}, {6518, 9}, {6661, 8}, {6957, 9}, {13939, 10}, {15535, 9}, {16944, 10}, {17696, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {23970, 9}, {24495, 10}, {27898, 11}, {31091, 10}, {36184, 11}, {39461, 10}, {43979, 11}, {47962, 10}, {52305, 11}, {55819, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {67840, 11}, {72397, 10}, {73983, 11}, {80681, 10}, {82448, 11}, {89912, 12}, {95949, 11}, {114110, 12}, {127165, 11}, {147989, 12}, {161386, 11}, {172223, 12}, {175995, 11}, {179849, 12}, {196129, 11}, {204813, 12}, {228243, 13}, {254354, 12}, {329862, 13}, {392279, 12}, {456509, 13}, {466506, 14}, {508731, 13}, {519871, 12}, {554776, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_TABLE2 {{1, 4}, {377, 5}, {386, 4}, {404, 5}, {813, 6}, {2009, 7}, {2053, 6}, {2144, 7}, {2727, 8}, {2849, 7}, {3109, 8}, {3393, 7}, {3468, 8}, {6957, 9}, {7756, 8}, {8460, 9}, {8836, 8}, {9030, 9}, {9850, 8}, {10066, 9}, {11976, 8}, {12239, 9}, {13939, 10}, {15535, 9}, {15876, 8}, {16224, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {20596, 9}, {21047, 10}, {23970, 9}, {26142, 10}, {27898, 9}, {28509, 10}, {29134, 11}, {31091, 10}, {31772, 9}, {32468, 10}, {44943, 11}, {47962, 10}, {57042, 11}, {62207, 12}, {63570, 10}, {73983, 11}, {80681, 10}, {84254, 11}, {114110, 12}, {127165, 11}, {164920, 12}, {196129, 11}, {213882, 12}, {218566, 13}, {254354, 12}, {259924, 11}, {277377, 12}, {456509, 13}, {519871, 12}, {659749, 13}, {784582, 14}, {MP_SIZE_T_MAX,0}}

#define SQR_FFTM_TABLE2 {{1, 4}, {344, 5}, {360, 4}, {377, 5}, {743, 6}, {777, 5}, {813, 6}, {1476, 7}, {1543, 6}, {1612, 7}, {3784, 8}, {3867, 7}, {4039, 8}, {5478, 9}, {5721, 8}, {6518, 9}, {6661, 8}, {6957, 9}, {13939, 10}, {15535, 9}, {16944, 10}, {17696, 9}, {18084, 10}, {19722, 9}, {20154, 10}, {23970, 9}, {24495, 10}, {27898, 11}, {31091, 10}, {31772, 9}, {32468, 10}, {36184, 11}, {39461, 10}, {44943, 11}, {47962, 10}, {52305, 11}, {55819, 10}, {57042, 11}, {58292, 12}, {59569, 13}, {62207, 12}, {63570, 10}, {67840, 11}, {72397, 10}, {73983, 11}, {89912, 12}, {95949, 11}, {114110, 12}, {127165, 11}, {147989, 12}, {161386, 11}, {172223, 12}, {228243, 13}, {254354, 12}, {329862, 13}, {392279, 12}, {456509, 13}, {466506, 14}, {508731, 13}, {519871, 12}, {554776, 13}, {913042, 14}, {MP_SIZE_T_MAX,0}}

#define MUL_FFT_FULL_TABLE2 {{16, 1}, {1092, 2}, {1116, 1}, {1696, 2}, {1734, 1}, {1811, 2}, {1851, 1}, {2066, 4}, {2112, 6}, {2256, 5}, {2306, 4}, {2409, 1}, {2462, 3}, {2572, 4}, {2746, 2}, {2932, 1}, {2997, 4}, {3063, 2}, {3271, 1}, {3343, 4}, {3417, 2}, {3648, 4}, {3728, 1}, {3894, 2}, {4068, 1}, {4344, 2}, {4440, 5}, {4638, 4}, {4844, 1}, {4951, 3}, {5171, 2}, {5285, 1}, {5401, 4}, {5520, 2}, {5765, 1}, {5892, 2}, {6022, 4}, {6154, 1}, {6427, 2}, {6568, 1}, {6712, 4}, {6859, 1}, {7010, 4}, {7482, 1}, {7814, 4}, {7986, 6}, {8161, 2}, {8523, 1}, {8710, 2}, {8901, 5}, {9296, 1}, {9922, 3}, {10363, 2}, {10590, 1}, {10822, 2}, {11550, 1}, {11803, 4}, {12327, 1}, {12873, 2}, {13155, 1}, {14040, 4}, {14348, 2}, {14663, 4}, {14985, 1}, {15993, 2}, {17824, 1}, {18215, 3}, {18614, 4}, {19022, 1}, {20300, 3}, {20745, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {25769, 3}, {26911, 1}, {28104, 4}, {29992, 1}, {32007, 2}, {35670, 1}, {36452, 4}, {38901, 1}, {40624, 3}, {41514, 1}, {44303, 2}, {45274, 1}, {47280, 4}, {50456, 1}, {52691, 3}, {53845, 1}, {62664, 2}, {64037, 1}, {65440, 2}, {71365, 1}, {72928, 4}, {79530, 1}, {81272, 3}, {83052, 1}, {84871, 3}, {86730, 1}, {88630, 2}, {94582, 4}, {96654, 2}, {98771, 4}, {100934, 1}, {105404, 2}, {107713, 1}, {114947, 4}, {122667, 1}, {130905, 2}, {133772, 1}, {136702, 2}, {142755, 1}, {145881, 4}, {149076, 6}, {152341, 4}, {155677, 1}, {162570, 3}, {166130, 1}, {169768, 3}, {173486, 1}, {177285, 2}, {197567, 4}, {206315, 3}, {215450, 6}, {220168, 5}, {224990, 1}, {229917, 2}, {234952, 1}, {261830, 2}, {267564, 5}, {273423, 8}, {285530, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {403812, 7}, {412655, 10}, {430925, 6}, {450005, 5}, {469929, 4}, {490736, 1}, {523686, 2}, {583592, 5}, {596372, 6}, {609431, 4}, {650350, 3}, {694016, 1}, {724743, 2}, {773404, 1}, {MP_SIZE_T_MAX,0}}

#define SQR_FFT_FULL_TABLE2 {{16, 2}, {1022, 1}, {1045, 2}, {1068, 1}, {1092, 2}, {1116, 1}, {1696, 2}, {1734, 1}, {1811, 2}, {1851, 1}, {1934, 2}, {2021, 1}, {2066, 4}, {2112, 6}, {2256, 5}, {2306, 4}, {2357, 5}, {2409, 1}, {2462, 3}, {2572, 1}, {2746, 2}, {2932, 1}, {2997, 4}, {3063, 1}, {3131, 2}, {3271, 1}, {3343, 4}, {3417, 2}, {3648, 4}, {3728, 1}, {3894, 2}, {4068, 1}, {4158, 2}, {4440, 5}, {4638, 4}, {4844, 1}, {4951, 3}, {5171, 2}, {5285, 1}, {5401, 4}, {5520, 2}, {5765, 1}, {5892, 2}, {6022, 4}, {6154, 1}, {6427, 2}, {6568, 1}, {6712, 4}, {6859, 1}, {7010, 4}, {7482, 1}, {7814, 4}, {7986, 6}, {8161, 2}, {8523, 4}, {8710, 2}, {8901, 5}, {9296, 1}, {9922, 3}, {10363, 2}, {10590, 1}, {10822, 2}, {11550, 1}, {11803, 4}, {12327, 1}, {12873, 2}, {13155, 3}, {13444, 1}, {14040, 4}, {14348, 2}, {14663, 4}, {14985, 1}, {15993, 2}, {17824, 1}, {18215, 3}, {18614, 1}, {20300, 3}, {20745, 1}, {23628, 2}, {24146, 4}, {24675, 1}, {25769, 3}, {26911, 1}, {28104, 4}, {29992, 1}, {32007, 2}, {35670, 1}, {36452, 4}, {38901, 1}, {40624, 3}, {41514, 1}, {44303, 2}, {45274, 1}, {47280, 4}, {50456, 1}, {52691, 3}, {53845, 1}, {57462, 2}, {58721, 4}, {61321, 3}, {62664, 6}, {65440, 2}, {66873, 5}, {68338, 2}, {71365, 1}, {72928, 3}, {74525, 4}, {77825, 1}, {81272, 3}, {83052, 1}, {84871, 3}, {86730, 1}, {88630, 2}, {90571, 1}, {94582, 4}, {96654, 2}, {98771, 4}, {100934, 1}, {105404, 2}, {107713, 1}, {114947, 4}, {122667, 1}, {130905, 2}, {142755, 1}, {145881, 4}, {149076, 6}, {152341, 3}, {155677, 1}, {162570, 3}, {166130, 1}, {169768, 3}, {173486, 2}, {197567, 4}, {201894, 3}, {215450, 1}, {224990, 2}, {240097, 1}, {261830, 2}, {267564, 5}, {273423, 7}, {279411, 9}, {291783, 7}, {298173, 6}, {304703, 4}, {325163, 3}, {346997, 2}, {395159, 4}, {403812, 7}, {412655, 10}, {430925, 6}, {450005, 5}, {469929, 1}, {523686, 2}, {583592, 5}, {596372, 6}, {609431, 4}, {650350, 3}, {694016, 2}, {790340, 1}, {MP_SIZE_T_MAX,0}}
