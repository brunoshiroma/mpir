/* Generated by tuneup.c, 2009-04-11, gcc 4.2 */

#define MUL_KARATSUBA_THRESHOLD          28
#define MUL_TOOM3_THRESHOLD              85
#define MUL_TOOM4_THRESHOLD             442
#define MUL_TOOM7_THRESHOLD             454

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          32
#define SQR_TOOM3_THRESHOLD             117

#define MULLOW_BASECASE_THRESHOLD         6
#define MULLOW_DC_THRESHOLD              28
#define MULLOW_MUL_N_THRESHOLD          303

#define DIV_SB_PREINV_THRESHOLD           0  /* always */
#define DIV_DC_THRESHOLD                 64
#define POWM_THRESHOLD                  162

#define GCD_ACCEL_THRESHOLD             110
#define GCDEXT_THRESHOLD                  0  /* always */
#define JACOBI_BASE_METHOD                1

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               0
#define USE_PREINV_MOD_1                  1
#define DIVREM_2_THRESHOLD                0  /* always */
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */

#define GET_STR_DC_THRESHOLD              6
#define GET_STR_PRECOMPUTE_THRESHOLD      7
#define SET_STR_THRESHOLD              7059

#define MUL_FFT_TABLE  { 464, 928, 3008, 3328, 7168, 28672, 0 }
#define MUL_FFT_MODF_THRESHOLD          480
#define MUL_FFT_THRESHOLD              6656

#define SQR_FFT_TABLE  { 464, 928, 2880, 3328, 7168, 28672, 0 }
#define SQR_FFT_MODF_THRESHOLD          424
#define SQR_FFT_THRESHOLD              2688

/* Tuneup completed successfully, took 1026 seconds */
