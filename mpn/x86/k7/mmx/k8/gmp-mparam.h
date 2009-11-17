/* Generated by tuneup.c, 2009-10-08, gcc 4.3 */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD              97
#define MUL_TOOM4_THRESHOLD             254
#define MUL_TOOM7_THRESHOLD             339

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          46
#define SQR_TOOM3_THRESHOLD              89
#define SQR_TOOM4_THRESHOLD              89
#define SQR_TOOM7_THRESHOLD             171

#define MULLOW_BASECASE_THRESHOLD        10
#define MULLOW_DC_THRESHOLD              17
#define MULLOW_MUL_THRESHOLD           9970

#define MULHIGH_BASECASE_THRESHOLD       25
#define MULHIGH_DC_THRESHOLD             25
#define MULHIGH_MUL_THRESHOLD          9970

#define MULMOD_2EXPM1_THRESHOLD          22

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 92
#define POWM_THRESHOLD                  146
#define FAC_UI_THRESHOLD               4891

#define GCD_ACCEL_THRESHOLD              64
#define GCDEXT_THRESHOLD                 37
#define JACOBI_BASE_METHOD                1

#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1  /* native */
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always (native) */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                67
#define MOD_1_2_THRESHOLD               193
#define MOD_1_3_THRESHOLD               422
#define DIVREM_HENSEL_QR_1_THRESHOLD      6
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD      3
#define DIVREM_EUCLID_HENSEL_THRESHOLD     66

#define ROOTREM_THRESHOLD                11

#define GET_STR_DC_THRESHOLD             22
#define GET_STR_PRECOMPUTE_THRESHOLD     34
#define SET_STR_THRESHOLD              3296

#define MUL_FFT_TABLE  { 400, 1184, 1408, 3584, 14336, 57344, 163840, 917504, 0 }
#define MUL_FFT_MODF_THRESHOLD          400
#define MUL_FFT_THRESHOLD             11264

#define SQR_FFT_TABLE  { 368, 928, 1408, 3584, 10240, 57344, 163840, 655360, 0 }
#define SQR_FFT_MODF_THRESHOLD          328
#define SQR_FFT_THRESHOLD              5632

/* Tuneup completed successfully, took 69 seconds */