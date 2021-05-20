/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;
/* Structure forward decls */
typedef struct l_struct_OC__iobuf l_struct_OC__iobuf;

/* Structure contents */
struct l_struct_OC__iobuf {
   char *field0;
  unsigned int field1;
   char *field2;
  unsigned int field3;
  unsigned int field4;
  unsigned int field5;
  unsigned int field6;
   char *field7;
};


/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
signed int main(void);
void lstm_kernel(bool , signed int ,  char ,  char , signed int *, signed short *);


/* Global Variable Definitions and Initialization */
static  char aesl_internal__OC_str[11] = "weight.txt";
static  char aesl_internal__OC_str1[2] = "r";
static  char aesl_internal__OC_str2[3] = "%d";
static  char aesl_internal__OC_str3[10] = "input.txt";
static  char aesl_internal__OC_str4[11] = "output.txt";
static  char aesl_internal_str6[21] = " ****************** ";
static  char aesl_internal__OC_str6[4] = "%d\n";
static  char aesl_internal_str[30] = "[Info] Finish weight loading.";
static  char aesl_internal_str2[18] = "   Test Passed!  ";
static  char aesl_internal_str3[18] = " *************** ";
static  char aesl_internal_str5[21] = "  Test NOT Passed!  ";


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

signed int main(void) {
  static  unsigned long long aesl_llvm_cbe_file_name_count = 0;
   char llvm_cbe_file_name[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_weight_count = 0;
  signed int llvm_cbe_weight[17024];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_input_count = 0;
  signed int llvm_cbe_input[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_expect_output_count = 0;
  signed int llvm_cbe_expect_output[100];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_out_count = 0;
  signed short llvm_cbe_out;    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
   char *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
   char *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge13_count = 0;
  unsigned int llvm_cbe_storemerge13;
  unsigned int llvm_cbe_storemerge13__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned long long llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  signed int *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  unsigned int llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond16_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
   char *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge112_count = 0;
  unsigned int llvm_cbe_storemerge112;
  unsigned int llvm_cbe_storemerge112__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  unsigned long long llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  signed int *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  unsigned int llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond15_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  unsigned int llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
   char *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  l_struct_OC__iobuf *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge211_count = 0;
  unsigned int llvm_cbe_storemerge211;
  unsigned int llvm_cbe_storemerge211__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  unsigned long long llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  signed int *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  unsigned int llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  unsigned int llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond14_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  signed int *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts_count = 0;
  unsigned int llvm_cbe_puts;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge310_count = 0;
  unsigned int llvm_cbe_storemerge310;
  unsigned int llvm_cbe_storemerge310__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  bool llvm_cbe_tmp__22;
  bool llvm_cbe_tmp__22__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  unsigned long long llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  signed int *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned short llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  unsigned int llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  unsigned short llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  signed int *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  unsigned short llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe__2e__count = 0;
  bool llvm_cbe__2e_;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts4_count = 0;
  unsigned int llvm_cbe_puts4;
  static  unsigned long long aesl_llvm_cbe_puts5_count = 0;
  unsigned int llvm_cbe_puts5;
  static  unsigned long long aesl_llvm_cbe_puts6_count = 0;
  unsigned int llvm_cbe_puts6;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_puts7_count = 0;
  unsigned int llvm_cbe_puts7;
  static  unsigned long long aesl_llvm_cbe_puts8_count = 0;
  unsigned int llvm_cbe_puts8;
  static  unsigned long long aesl_llvm_cbe_puts9_count = 0;
  unsigned int llvm_cbe_puts9;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;

  CODE_FOR_MAIN();
const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @main\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [100 x i8]* %%file_name, i64 0, i64 0, !dbg !5 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_7_count);
  llvm_cbe_tmp__1 = ( char *)(&llvm_cbe_file_name[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = call i8* @memcpy(i8* %%1, i8* getelementptr inbounds ([11 x i8]* @aesl_internal_.str, i64 0, i64 0), i64 11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_8_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])), 11ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",11ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__2);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !5 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_9_count);
  llvm_cbe_tmp__3 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__3);
}
  llvm_cbe_storemerge13__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__35;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__35:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge13 = phi i32 [ 0, %%0 ], [ %%8, %%4  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge13_count);
  llvm_cbe_storemerge13 = (unsigned int )llvm_cbe_storemerge13__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge13 = 0x%X",llvm_cbe_storemerge13);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = sext i32 %%storemerge13 to i64, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__4 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge13);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [17024 x i32]* %%weight, i64 0, i64 %%5, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__5 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__4))
#ifdef AESL_BC_SIM
 % 17024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__4));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%3, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32* %%6) nounwind, !dbg !6 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_33_count);
  fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__3, ( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (signed int *)llvm_cbe_tmp__5);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__6);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = add nsw i32 %%storemerge13, 1, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_34_count);
  llvm_cbe_tmp__7 = (unsigned int )((unsigned int )(llvm_cbe_storemerge13&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__7&4294967295ull)));
  if (((llvm_cbe_tmp__7&4294967295U) == (17024u&4294967295U))) {
    goto llvm_cbe_tmp__36;
  } else {
    llvm_cbe_storemerge13__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__7;   /* for PHI node */
    goto llvm_cbe_tmp__35;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__36:
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = call i8* @memcpy(i8* %%1, i8* getelementptr inbounds ([10 x i8]* @aesl_internal_.str3, i64 0, i64 0), i64 10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_50_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 10
#endif
])), 10ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",10ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__9 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__9);
}
  llvm_cbe_storemerge112__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__37;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__37:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge112 = phi i32 [ 0, %%9 ], [ %%16, %%12  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge112_count);
  llvm_cbe_storemerge112 = (unsigned int )llvm_cbe_storemerge112__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge112 = 0x%X",llvm_cbe_storemerge112);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__13);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%storemerge112 to i64, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_73_count);
  llvm_cbe_tmp__10 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge112);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [100 x i32]* %%input, i64 0, i64 %%13, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__11 = (signed int *)(&llvm_cbe_input[(((signed long long )llvm_cbe_tmp__10))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__10));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%11, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32* %%14) nounwind, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_75_count);
  fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__9, ( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (signed int *)llvm_cbe_tmp__11);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__12);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = add nsw i32 %%storemerge112, 1, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__13 = (unsigned int )((unsigned int )(llvm_cbe_storemerge112&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__13&4294967295ull)));
  if (((llvm_cbe_tmp__13&4294967295U) == (100u&4294967295U))) {
    goto llvm_cbe_tmp__38;
  } else {
    llvm_cbe_storemerge112__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__13;   /* for PHI node */
    goto llvm_cbe_tmp__37;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__38:
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = call i32 @fclose(%%struct._iobuf* %%11) nounwind, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_92_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__14);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = call i8* @memcpy(i8* %%1, i8* getelementptr inbounds ([11 x i8]* @aesl_internal_.str4, i64 0, i64 0), i64 11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_93_count);
  ( char *)memcpy(( char *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str4[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 11
#endif
])), 11ull);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%I64X",11ull);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__15);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = call %%struct._iobuf* @fopen(i8* %%1, i8* getelementptr inbounds ([2 x i8]* @aesl_internal_.str1, i64 0, i64 0)) nounwind, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__16 = (l_struct_OC__iobuf *)aesl_fopen(( char *)llvm_cbe_tmp__1, ( char *)((&aesl_internal__OC_str1[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 2
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__16);
}
  llvm_cbe_storemerge211__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__39;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__39:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge211 = phi i32 [ 0, %%17 ], [ %%25, %%21  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge211_count);
  llvm_cbe_storemerge211 = (unsigned int )llvm_cbe_storemerge211__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge211 = 0x%X",llvm_cbe_storemerge211);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__20);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = sext i32 %%storemerge211 to i64, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_116_count);
  llvm_cbe_tmp__17 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge211);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__17);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [100 x i32]* %%expect_output, i64 0, i64 %%22, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_117_count);
  llvm_cbe_tmp__18 = (signed int *)(&llvm_cbe_expect_output[(((signed long long )llvm_cbe_tmp__17))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__17));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = call i32 (%%struct._iobuf*, i8*, ...)* @fscanf(%%struct._iobuf* %%20, i8* getelementptr inbounds ([3 x i8]* @aesl_internal_.str2, i64 0, i64 0), i32* %%23) nounwind, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_118_count);
  fscanf((l_struct_OC__iobuf *)llvm_cbe_tmp__16, ( char *)((&aesl_internal__OC_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 3
#endif
])), (signed int *)llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__19);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add nsw i32 %%storemerge211, 1, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__20 = (unsigned int )((unsigned int )(llvm_cbe_storemerge211&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__20&4294967295ull)));
  if (((llvm_cbe_tmp__20&4294967295U) == (100u&4294967295U))) {
    goto llvm_cbe_tmp__40;
  } else {
    llvm_cbe_storemerge211__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__20;   /* for PHI node */
    goto llvm_cbe_tmp__39;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__40:
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [17024 x i32]* %%weight, i64 0, i64 0, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_144_count);
  llvm_cbe_tmp__21 = (signed int *)(&llvm_cbe_weight[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 17024
#endif
]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  call void @lstm_kernel(i1 zeroext true, i32 0, i8 zeroext 0, i8 zeroext 0, i32* %%27, i16* %%out) nounwind, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_145_count);
  lstm_kernel(1, 0u, ((unsigned char )0), ((unsigned char )0), (signed int *)llvm_cbe_tmp__21, (signed short *)(&llvm_cbe_out));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",1);
printf("\nArgument  = 0x%X",0u);
printf("\nArgument  = 0x%X",((unsigned char )0));
printf("\nArgument  = 0x%X",((unsigned char )0));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts = call i32 @puts(i8* getelementptr inbounds ([30 x i8]* @aesl_internal_str, i64 0, i64 0)), !dbg !11 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts_count);
  puts(( char *)((&aesl_internal_str[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 30
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts = 0x%X",llvm_cbe_puts);
}
  llvm_cbe_storemerge310__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__22__PHI_TEMPORARY = (bool )1;   /* for PHI node */
  goto llvm_cbe_tmp__41;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__41:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge310 = phi i32 [ 0, %%26 ], [ %%41, %%28  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_storemerge310_count);
  llvm_cbe_storemerge310 = (unsigned int )llvm_cbe_storemerge310__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge310 = 0x%X",llvm_cbe_storemerge310);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__33);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = phi i1 [ true, %%26 ], [ %%., %%28  for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_170_count);
  llvm_cbe_tmp__22 = (bool )((llvm_cbe_tmp__22__PHI_TEMPORARY)&1);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__22);
printf("\n = 0x%X",1);
printf("\n. = 0x%X",llvm_cbe__2e_);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = sext i32 %%storemerge310 to i64, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_171_count);
  llvm_cbe_tmp__23 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge310);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__23);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [100 x i32]* %%input, i64 0, i64 %%30, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_172_count);
  llvm_cbe_tmp__24 = (signed int *)(&llvm_cbe_input[(((signed long long )llvm_cbe_tmp__23))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__23) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'input' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = load i32* %%31, align 4, !dbg !8 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_173_count);
  llvm_cbe_tmp__25 = (unsigned int )*llvm_cbe_tmp__24;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__25);
if (AESL_DEBUG_TRACE)
printf("\n  call void @lstm_kernel(i1 zeroext false, i32 %%32, i8 zeroext 1, i8 zeroext 15, i32* %%27, i16* %%out) nounwind, !dbg !10 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_176_count);
  lstm_kernel(0, llvm_cbe_tmp__25, ((unsigned char )1), ((unsigned char )15), (signed int *)llvm_cbe_tmp__21, (signed short *)(&llvm_cbe_out));
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",0);
printf("\nArgument  = 0x%X",llvm_cbe_tmp__25);
printf("\nArgument  = 0x%X",((unsigned char )1));
printf("\nArgument  = 0x%X",((unsigned char )15));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = load i16* %%out, align 2, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__26 = (unsigned short )*(&llvm_cbe_out);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i16 %%33 to i32, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__27 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([4 x i8]* @aesl_internal_.str6, i64 0, i64 0), i32 %%34) nounwind, !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_185_count);
  printf(( char *)((&aesl_internal__OC_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
])), llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = 0x%X",llvm_cbe_tmp__27);
printf("\nReturn  = 0x%X",llvm_cbe_tmp__28);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = load i16* %%out, align 2, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__29 = (unsigned short )*(&llvm_cbe_out);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__29);
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = getelementptr inbounds [100 x i32]* %%expect_output, i64 0, i64 %%30, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_193_count);
  llvm_cbe_tmp__30 = (signed int *)(&llvm_cbe_expect_output[(((signed long long )llvm_cbe_tmp__23))
#ifdef AESL_BC_SIM
 % 100
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__23));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__23) < 100)) fprintf(stderr, "%s:%d: warning: Read access out of array 'expect_output' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = load i32* %%37, align 4, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__31 = (unsigned int )*llvm_cbe_tmp__30;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = trunc i32 %%38 to i16, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_195_count);
  llvm_cbe_tmp__32 = (unsigned short )((unsigned short )llvm_cbe_tmp__31&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__32);
if (AESL_DEBUG_TRACE)
printf("\n  %%. = and i1 %%40, %%29, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe__2e__count);
  llvm_cbe__2e_ = (bool )((((llvm_cbe_tmp__29&65535U) == (llvm_cbe_tmp__32&65535U)) & llvm_cbe_tmp__22)&1);
if (AESL_DEBUG_TRACE)
printf("\n. = 0x%X\n", llvm_cbe__2e_);
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = add nsw i32 %%storemerge310, 1, !dbg !9 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_197_count);
  llvm_cbe_tmp__33 = (unsigned int )((unsigned int )(llvm_cbe_storemerge310&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__33&4294967295ull)));
  if (((llvm_cbe_tmp__33&4294967295U) == (100u&4294967295U))) {
    goto llvm_cbe_tmp__42;
  } else {
    llvm_cbe_storemerge310__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__33;   /* for PHI node */
    llvm_cbe_tmp__22__PHI_TEMPORARY = (bool )llvm_cbe__2e_;   /* for PHI node */
    goto llvm_cbe_tmp__41;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__42:
  if (llvm_cbe__2e_) {
    goto llvm_cbe_tmp__43;
  } else {
    goto llvm_cbe_tmp__44;
  }

llvm_cbe_tmp__43:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts4 = call i32 @puts(i8* getelementptr inbounds ([18 x i8]* @aesl_internal_str3, i64 0, i64 0)), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts4_count);
  puts(( char *)((&aesl_internal_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 18
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts4 = 0x%X",llvm_cbe_puts4);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts5 = call i32 @puts(i8* getelementptr inbounds ([18 x i8]* @aesl_internal_str2, i64 0, i64 0)), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts5_count);
  puts(( char *)((&aesl_internal_str2[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 18
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts5 = 0x%X",llvm_cbe_puts5);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts6 = call i32 @puts(i8* getelementptr inbounds ([18 x i8]* @aesl_internal_str3, i64 0, i64 0)), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts6_count);
  puts(( char *)((&aesl_internal_str3[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 18
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts6 = 0x%X",llvm_cbe_puts6);
}
  goto llvm_cbe_tmp__45;

llvm_cbe_tmp__44:
if (AESL_DEBUG_TRACE)
printf("\n  %%puts7 = call i32 @puts(i8* getelementptr inbounds ([21 x i8]* @aesl_internal_str6, i64 0, i64 0)), !dbg !12 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts7_count);
  puts(( char *)((&aesl_internal_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 21
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts7 = 0x%X",llvm_cbe_puts7);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts8 = call i32 @puts(i8* getelementptr inbounds ([21 x i8]* @aesl_internal_str5, i64 0, i64 0)), !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts8_count);
  puts(( char *)((&aesl_internal_str5[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 21
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts8 = 0x%X",llvm_cbe_puts8);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%puts9 = call i32 @puts(i8* getelementptr inbounds ([21 x i8]* @aesl_internal_str6, i64 0, i64 0)), !dbg !13 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_puts9_count);
  puts(( char *)((&aesl_internal_str6[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 21
#endif
])));
if (AESL_DEBUG_TRACE) {
printf("\nReturn puts9 = 0x%X",llvm_cbe_puts9);
}
  goto llvm_cbe_tmp__45;

llvm_cbe_tmp__45:
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = call i32 @fclose(%%struct._iobuf* %%20) nounwind, !dbg !7 for 0x%I64xth hint within @main  --> \n", ++aesl_llvm_cbe_216_count);
  fclose((l_struct_OC__iobuf *)llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE) {
printf("\nReturn  = 0x%X",llvm_cbe_tmp__34);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @main}\n");
  return 0u;
}

