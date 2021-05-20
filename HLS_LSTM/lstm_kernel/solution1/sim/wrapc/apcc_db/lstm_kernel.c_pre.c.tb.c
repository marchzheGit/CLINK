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

/* External Global Variable Declarations */

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
void lstm_kernel(bool llvm_cbe_mode, signed int llvm_cbe_sampleinput,  char llvm_cbe_scale_fac,  char llvm_cbe_scale_mul, signed int *llvm_cbe_weight, signed short *llvm_cbe_lstm_out);


/* Global Variable Definitions and Initialization */
static signed short aesl_internal_lstm_kernel_OC_lut_sigmoid[1024] = { ((unsigned short )2048), ((unsigned short )2056), ((unsigned short )2064), ((unsigned short )2072), ((unsigned short )2080), ((unsigned short )2088), ((unsigned short )2096), ((unsigned short )2104), ((unsigned short )2112), ((unsigned short )2120), ((unsigned short )2128), ((unsigned short )2136), ((unsigned short )2144), ((unsigned short )2152), ((unsigned short )2160), ((unsigned short )2168), ((unsigned short )2176), ((unsigned short )2184), ((unsigned short )2192), ((unsigned short )2200), ((unsigned short )2208), ((unsigned short )2216), ((unsigned short )2224), ((unsigned short )2232), ((unsigned short )2239), ((unsigned short )2247), ((unsigned short )2255), ((unsigned short )2263), ((unsigned short )2271), ((unsigned short )2279), ((unsigned short )2287), ((unsigned short )2295), ((unsigned short )2303), ((unsigned short )2311), ((unsigned short )2318), ((unsigned short )2326), ((unsigned short )2334), ((unsigned short )2342), ((unsigned short )2350), ((unsigned short )2358), ((unsigned short )2365), ((unsigned short )2373), ((unsigned short )2381), ((unsigned short )2389), ((unsigned short )2397), ((unsigned short )2404), ((unsigned short )2412), ((unsigned short )2420), ((unsigned short )2428), ((unsigned short )2435), ((unsigned short )2443), ((unsigned short )2451), ((unsigned short )2458), ((unsigned short )2466), ((unsigned short )2474), ((unsigned short )2481), ((unsigned short )2489), ((unsigned short )2497), ((unsigned short )2504), ((unsigned short )2512), ((unsigned short )2519), ((unsigned short )2527), ((unsigned short )2535), ((unsigned short )2542), ((unsigned short )2550), ((unsigned short )2557), ((unsigned short )2565), ((unsigned short )2572), ((unsigned short )2580), ((unsigned short )2587), ((unsigned short )2594), ((unsigned short )2602), ((unsigned short )2609), ((unsigned short )2617), ((unsigned short )2624), ((unsigned short )2631), ((unsigned short )2639), ((unsigned short )2646), ((unsigned short )2653), ((unsigned short )2661), ((unsigned short )2668), ((unsigned short )2675), ((unsigned short )2682), ((unsigned short )2690), ((unsigned short )2697), ((unsigned short )2704), ((unsigned short )2711), ((unsigned short )2718), ((unsigned short )2726), ((unsigned short )2733), ((unsigned short )2740), ((unsigned short )2747), ((unsigned short )2754), ((unsigned short )2761), ((unsigned short )2768), ((unsigned short )2775), ((unsigned short )2782), ((unsigned short )2789), ((unsigned short )2796), ((unsigned short )2803), ((unsigned short )2810), ((unsigned short )2817), ((unsigned short )2823), ((unsigned short )2830), ((unsigned short )2837), ((unsigned short )2844), ((unsigned short )2851), ((unsigned short )2857), ((unsigned short )2864), ((unsigned short )2871), ((unsigned short )2878), ((unsigned short )2884), ((unsigned short )2891), ((unsigned short )2898), ((unsigned short )2904), ((unsigned short )2911), ((unsigned short )2917), ((unsigned short )2924), ((unsigned short )2930), ((unsigned short )2937), ((unsigned short )2943), ((unsigned short )2950), ((unsigned short )2956), ((unsigned short )2963), ((unsigned short )2969), ((unsigned short )2975), ((unsigned short )2982), ((unsigned short )2988), ((unsigned short )2994), ((unsigned short )3001), ((unsigned short )3007), ((unsigned short )3013), ((unsigned short )3019), ((unsigned short )3026), ((unsigned short )3032), ((unsigned short )3038), ((unsigned short )3044), ((unsigned short )3050), ((unsigned short )3056), ((unsigned short )3062), ((unsigned short )3068), ((unsigned short )3074), ((unsigned short )3080), ((unsigned short )3086), ((unsigned short )3092), ((unsigned short )3098), ((unsigned short )3104), ((unsigned short )3110), ((unsigned short )3116), ((unsigned short )3121), ((unsigned short )3127), ((unsigned short )3133), ((unsigned short )3139), ((unsigned short )3144), ((unsigned short )3150), ((unsigned short )3156), ((unsigned short )3161), ((unsigned short )3167), ((unsigned short )3173), ((unsigned short )3178), ((unsigned short )3184), ((unsigned short )3189), ((unsigned short )3195), ((unsigned short )3200), ((unsigned short )3206), ((unsigned short )3211), ((unsigned short )3217), ((unsigned short )3222), ((unsigned short )3227), ((unsigned short )3233), ((unsigned short )3238), ((unsigned short )3243), ((unsigned short )3249), ((unsigned short )3254), ((unsigned short )3259), ((unsigned short )3264), ((unsigned short )3269), ((unsigned short )3275), ((unsigned short )3280), ((unsigned short )3285), ((unsigned short )3290), ((unsigned short )3295), ((unsigned short )3300), ((unsigned short )3305), ((unsigned short )3310), ((unsigned short )3315), ((unsigned short )3320), ((unsigned short )3325), ((unsigned short )3330), ((unsigned short )3334), ((unsigned short )3339), ((unsigned short )3344), ((unsigned short )3349), ((unsigned short )3354), ((unsigned short )3358), ((unsigned short )3363), ((unsigned short )3368), ((unsigned short )3372), ((unsigned short )3377), ((unsigned short )3382), ((unsigned short )3386), ((unsigned short )3391), ((unsigned short )3395), ((unsigned short )3400), ((unsigned short )3404), ((unsigned short )3409), ((unsigned short )3413), ((unsigned short )3418), ((unsigned short )3422), ((unsigned short )3427), ((unsigned short )3431), ((unsigned short )3435), ((unsigned short )3440), ((unsigned short )3444), ((unsigned short )3448), ((unsigned short )3452), ((unsigned short )3457), ((unsigned short )3461), ((unsigned short )3465), ((unsigned short )3469), ((unsigned short )3473), ((unsigned short )3477), ((unsigned short )3481), ((unsigned short )3486), ((unsigned short )3490), ((unsigned short )3494), ((unsigned short )3498), ((unsigned short )3502), ((unsigned short )3506), ((unsigned short )3510), ((unsigned short )3513), ((unsigned short )3517), ((unsigned short )3521), ((unsigned short )3525), ((unsigned short )3529), ((unsigned short )3533), ((unsigned short )3536), ((unsigned short )3540), ((unsigned short )3544), ((unsigned short )3548), ((unsigned short )3551), ((unsigned short )3555), ((unsigned short )3559), ((unsigned short )3562), ((unsigned short )3566), ((unsigned short )3570), ((unsigned short )3573), ((unsigned short )3577), ((unsigned short )3580), ((unsigned short )3584), ((unsigned short )3587), ((unsigned short )3591), ((unsigned short )3594), ((unsigned short )3598), ((unsigned short )3601), ((unsigned short )3604), ((unsigned short )3608), ((unsigned short )3611), ((unsigned short )3614), ((unsigned short )3618), ((unsigned short )3621), ((unsigned short )3624), ((unsigned short )3628), ((unsigned short )3631), ((unsigned short )3634), ((unsigned short )3637), ((unsigned short )3640), ((unsigned short )3644), ((unsigned short )3647), ((unsigned short )3650), ((unsigned short )3653), ((unsigned short )3656), ((unsigned short )3659), ((unsigned short )3662), ((unsigned short )3665), ((unsigned short )3668), ((unsigned short )3671), ((unsigned short )3674), ((unsigned short )3677), ((unsigned short )3680), ((unsigned short )3683), ((unsigned short )3686), ((unsigned short )3689), ((unsigned short )3691), ((unsigned short )3694), ((unsigned short )3697), ((unsigned short )3700), ((unsigned short )3703), ((unsigned short )3705), ((unsigned short )3708), ((unsigned short )3711), ((unsigned short )3714), ((unsigned short )3716), ((unsigned short )3719), ((unsigned short )3722), ((unsigned short )3724), ((unsigned short )3727), ((unsigned short )3730), ((unsigned short )3732), ((unsigned short )3735), ((unsigned short )3737), ((unsigned short )3740), ((unsigned short )3742), ((unsigned short )3745), ((unsigned short )3747), ((unsigned short )3750), ((unsigned short )3752), ((unsigned short )3755), ((unsigned short )3757), ((unsigned short )3760), ((unsigned short )3762), ((unsigned short )3764), ((unsigned short )3767), ((unsigned short )3769), ((unsigned short )3772), ((unsigned short )3774), ((unsigned short )3776), ((unsigned short )3778), ((unsigned short )3781), ((unsigned short )3783), ((unsigned short )3785), ((unsigned short )3788), ((unsigned short )3790), ((unsigned short )3792), ((unsigned short )3794), ((unsigned short )3796), ((unsigned short )3798), ((unsigned short )3801), ((unsigned short )3803), ((unsigned short )3805), ((unsigned short )3807), ((unsigned short )3809), ((unsigned short )3811), ((unsigned short )3813), ((unsigned short )3815), ((unsigned short )3817), ((unsigned short )3819), ((unsigned short )3821), ((unsigned short )3823), ((unsigned short )3825), ((unsigned short )3827), ((unsigned short )3829), ((unsigned short )3831), ((unsigned short )3833), ((unsigned short )3835), ((unsigned short )3837), ((unsigned short )3839), ((unsigned short )3841), ((unsigned short )3843), ((unsigned short )3844), ((unsigned short )3846), ((unsigned short )3848), ((unsigned short )3850), ((unsigned short )3852), ((unsigned short )3853), ((unsigned short )3855), ((unsigned short )3857), ((unsigned short )3859), ((unsigned short )3861), ((unsigned short )3862), ((unsigned short )3864), ((unsigned short )3866), ((unsigned short )3867), ((unsigned short )3869), ((unsigned short )3871), ((unsigned short )3872), ((unsigned short )3874), ((unsigned short )3876), ((unsigned short )3877), ((unsigned short )3879), ((unsigned short )3880), ((unsigned short )3882), ((unsigned short )3884), ((unsigned short )3885), ((unsigned short )3887), ((unsigned short )3888), ((unsigned short )3890), ((unsigned short )3891), ((unsigned short )3893), ((unsigned short )3894), ((unsigned short )3896), ((unsigned short )3897), ((unsigned short )3899), ((unsigned short )3900), ((unsigned short )3902), ((unsigned short )3903), ((unsigned short )3905), ((unsigned short )3906), ((unsigned short )3907), ((unsigned short )3909), ((unsigned short )3910), ((unsigned short )3912), ((unsigned short )3913), ((unsigned short )3914), ((unsigned short )3916), ((unsigned short )3917), ((unsigned short )3918), ((unsigned short )3920), ((unsigned short )3921), ((unsigned short )3922), ((unsigned short )3924), ((unsigned short )3925), ((unsigned short )3926), ((unsigned short )3927), ((unsigned short )3929), ((unsigned short )3930), ((unsigned short )3931), ((unsigned short )3932), ((unsigned short )3934), ((unsigned short )3935), ((unsigned short )3936), ((unsigned short )3937), ((unsigned short )3938), ((unsigned short )3940), ((unsigned short )3941), ((unsigned short )3942), ((unsigned short )3943), ((unsigned short )3944), ((unsigned short )3945), ((unsigned short )3947), ((unsigned short )3948), ((unsigned short )3949), ((unsigned short )3950), ((unsigned short )3951), ((unsigned short )3952), ((unsigned short )3953), ((unsigned short )3954), ((unsigned short )3955), ((unsigned short )3956), ((unsigned short )3957), ((unsigned short )3958), ((unsigned short )3959), ((unsigned short )3960), ((unsigned short )3961), ((unsigned short )3963), ((unsigned short )3964), ((unsigned short )3965), ((unsigned short )3966), ((unsigned short )3966), ((unsigned short )3967), ((unsigned short )3968), ((unsigned short )3969), ((unsigned short )3970), ((unsigned short )3971), ((unsigned short )3972), ((unsigned short )3973), ((unsigned short )3974), ((unsigned short )3975), ((unsigned short )3976), ((unsigned short )3977), ((unsigned short )3978), ((unsigned short )3979), ((unsigned short )3980), ((unsigned short )3980), ((unsigned short )3981), ((unsigned short )3982), ((unsigned short )3983), ((unsigned short )3984), ((unsigned short )3985), ((unsigned short )3986), ((unsigned short )3986), ((unsigned short )3987), ((unsigned short )3988), ((unsigned short )3989), ((unsigned short )3990), ((unsigned short )3990), ((unsigned short )3991), ((unsigned short )3992), ((unsigned short )3993), ((unsigned short )3994), ((unsigned short )3994), ((unsigned short )3995), ((unsigned short )3996), ((unsigned short )3997), ((unsigned short )3997), ((unsigned short )3998), ((unsigned short )3999), ((unsigned short )4000), ((unsigned short )4000), ((unsigned short )4001), ((unsigned short )4002), ((unsigned short )4003), ((unsigned short )4003), ((unsigned short )4004), ((unsigned short )4005), ((unsigned short )4005), ((unsigned short )4006), ((unsigned short )4007), ((unsigned short )4007), ((unsigned short )4008), ((unsigned short )4009), ((unsigned short )4009), ((unsigned short )4010), ((unsigned short )4011), ((unsigned short )4011), ((unsigned short )4012), ((unsigned short )4013), ((unsigned short )4013), ((unsigned short )4014), ((unsigned short )4015), ((unsigned short )4015), ((unsigned short )4016), ((unsigned short )4016), ((unsigned short )4017), ((unsigned short )4018), ((unsigned short )4018), ((unsigned short )4019), ((unsigned short )4019), ((unsigned short )4020), ((unsigned short )4021), ((unsigned short )4021), ((unsigned short )4022), ((unsigned short )4022), ((unsigned short )4023), ((unsigned short )4023), ((unsigned short )4024), ((unsigned short )4025), ((unsigned short )4025), ((unsigned short )4026), ((unsigned short )4026), ((unsigned short )4027), ((unsigned short )4027), ((unsigned short )4028), ((unsigned short )4028), ((unsigned short )4029), ((unsigned short )4029), ((unsigned short )4030), ((unsigned short )4030), ((unsigned short )4031), ((unsigned short )4031), ((unsigned short )4032), ((unsigned short )4032), ((unsigned short )4033), ((unsigned short )4033), ((unsigned short )4034), ((unsigned short )4034), ((unsigned short )4035), ((unsigned short )4035), ((unsigned short )4036), ((unsigned short )4036), ((unsigned short )4037), ((unsigned short )4037), ((unsigned short )4038), ((unsigned short )4038), ((unsigned short )4038), ((unsigned short )4039), ((unsigned short )4039), ((unsigned short )4040), ((unsigned short )4040), ((unsigned short )4041), ((unsigned short )4041), ((unsigned short )4041), ((unsigned short )4042), ((unsigned short )4042), ((unsigned short )4043), ((unsigned short )4043), ((unsigned short )4043), ((unsigned short )4044), ((unsigned short )4044), ((unsigned short )4045), ((unsigned short )4045), ((unsigned short )4045), ((unsigned short )4046), ((unsigned short )4046), ((unsigned short )4047), ((unsigned short )4047), ((unsigned short )4047), ((unsigned short )4048), ((unsigned short )4048), ((unsigned short )4048), ((unsigned short )4049), ((unsigned short )4049), ((unsigned short )4050), ((unsigned short )4050), ((unsigned short )4050), ((unsigned short )4051), ((unsigned short )4051), ((unsigned short )4051), ((unsigned short )4052), ((unsigned short )4052), ((unsigned short )4052), ((unsigned short )4053), ((unsigned short )4053), ((unsigned short )4053), ((unsigned short )4054), ((unsigned short )4054), ((unsigned short )4054), ((unsigned short )4055), ((unsigned short )4055), ((unsigned short )4055), ((unsigned short )4056), ((unsigned short )4056), ((unsigned short )4056), ((unsigned short )4057), ((unsigned short )4057), ((unsigned short )4057), ((unsigned short )4057), ((unsigned short )4058), ((unsigned short )4058), ((unsigned short )4058), ((unsigned short )4059), ((unsigned short )4059), ((unsigned short )4059), ((unsigned short )4059), ((unsigned short )4060), ((unsigned short )4060), ((unsigned short )4060), ((unsigned short )4061), ((unsigned short )4061), ((unsigned short )4061), ((unsigned short )4061), ((unsigned short )4062), ((unsigned short )4062), ((unsigned short )4062), ((unsigned short )4062), ((unsigned short )4063), ((unsigned short )4063), ((unsigned short )4063), ((unsigned short )4063), ((unsigned short )4064), ((unsigned short )4064), ((unsigned short )4064), ((unsigned short )4064), ((unsigned short )4065), ((unsigned short )4065), ((unsigned short )4065), ((unsigned short )4065), ((unsigned short )4066), ((unsigned short )4066), ((unsigned short )4066), ((unsigned short )4066), ((unsigned short )4067), ((unsigned short )4067), ((unsigned short )4067), ((unsigned short )4067), ((unsigned short )4068), ((unsigned short )4068), ((unsigned short )4068), ((unsigned short )4068), ((unsigned short )4068), ((unsigned short )4069), ((unsigned short )4069), ((unsigned short )4069), ((unsigned short )4069), ((unsigned short )4069), ((unsigned short )4070), ((unsigned short )4070), ((unsigned short )4070), ((unsigned short )4070), ((unsigned short )4070), ((unsigned short )4071), ((unsigned short )4071), ((unsigned short )4071), ((unsigned short )4071), ((unsigned short )4071), ((unsigned short )4072), ((unsigned short )4072), ((unsigned short )4072), ((unsigned short )4072), ((unsigned short )4072), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095) };
static signed short aesl_internal_lstm_kernel_OC_lut_tanh[1024] = { ((unsigned short )0), ((unsigned short )32), ((unsigned short )64), ((unsigned short )96), ((unsigned short )128), ((unsigned short )160), ((unsigned short )192), ((unsigned short )224), ((unsigned short )256), ((unsigned short )288), ((unsigned short )319), ((unsigned short )351), ((unsigned short )383), ((unsigned short )415), ((unsigned short )446), ((unsigned short )478), ((unsigned short )509), ((unsigned short )541), ((unsigned short )572), ((unsigned short )604), ((unsigned short )635), ((unsigned short )666), ((unsigned short )697), ((unsigned short )728), ((unsigned short )759), ((unsigned short )790), ((unsigned short )821), ((unsigned short )851), ((unsigned short )882), ((unsigned short )912), ((unsigned short )943), ((unsigned short )973), ((unsigned short )1003), ((unsigned short )1033), ((unsigned short )1063), ((unsigned short )1093), ((unsigned short )1123), ((unsigned short )1152), ((unsigned short )1181), ((unsigned short )1211), ((unsigned short )1240), ((unsigned short )1269), ((unsigned short )1298), ((unsigned short )1326), ((unsigned short )1355), ((unsigned short )1383), ((unsigned short )1412), ((unsigned short )1440), ((unsigned short )1468), ((unsigned short )1496), ((unsigned short )1523), ((unsigned short )1551), ((unsigned short )1578), ((unsigned short )1605), ((unsigned short )1632), ((unsigned short )1659), ((unsigned short )1686), ((unsigned short )1712), ((unsigned short )1739), ((unsigned short )1765), ((unsigned short )1791), ((unsigned short )1817), ((unsigned short )1842), ((unsigned short )1868), ((unsigned short )1893), ((unsigned short )1918), ((unsigned short )1943), ((unsigned short )1968), ((unsigned short )1992), ((unsigned short )2016), ((unsigned short )2041), ((unsigned short )2064), ((unsigned short )2088), ((unsigned short )2112), ((unsigned short )2135), ((unsigned short )2158), ((unsigned short )2181), ((unsigned short )2204), ((unsigned short )2227), ((unsigned short )2249), ((unsigned short )2272), ((unsigned short )2294), ((unsigned short )2316), ((unsigned short )2337), ((unsigned short )2359), ((unsigned short )2380), ((unsigned short )2401), ((unsigned short )2422), ((unsigned short )2443), ((unsigned short )2463), ((unsigned short )2484), ((unsigned short )2504), ((unsigned short )2524), ((unsigned short )2543), ((unsigned short )2563), ((unsigned short )2582), ((unsigned short )2602), ((unsigned short )2621), ((unsigned short )2639), ((unsigned short )2658), ((unsigned short )2676), ((unsigned short )2695), ((unsigned short )2713), ((unsigned short )2731), ((unsigned short )2748), ((unsigned short )2766), ((unsigned short )2783), ((unsigned short )2800), ((unsigned short )2817), ((unsigned short )2834), ((unsigned short )2851), ((unsigned short )2867), ((unsigned short )2883), ((unsigned short )2899), ((unsigned short )2915), ((unsigned short )2931), ((unsigned short )2946), ((unsigned short )2962), ((unsigned short )2977), ((unsigned short )2992), ((unsigned short )3007), ((unsigned short )3021), ((unsigned short )3036), ((unsigned short )3050), ((unsigned short )3064), ((unsigned short )3078), ((unsigned short )3092), ((unsigned short )3106), ((unsigned short )3119), ((unsigned short )3133), ((unsigned short )3146), ((unsigned short )3159), ((unsigned short )3172), ((unsigned short )3185), ((unsigned short )3197), ((unsigned short )3210), ((unsigned short )3222), ((unsigned short )3234), ((unsigned short )3246), ((unsigned short )3258), ((unsigned short )3270), ((unsigned short )3281), ((unsigned short )3293), ((unsigned short )3304), ((unsigned short )3315), ((unsigned short )3326), ((unsigned short )3337), ((unsigned short )3347), ((unsigned short )3358), ((unsigned short )3368), ((unsigned short )3379), ((unsigned short )3389), ((unsigned short )3399), ((unsigned short )3409), ((unsigned short )3419), ((unsigned short )3428), ((unsigned short )3438), ((unsigned short )3447), ((unsigned short )3456), ((unsigned short )3466), ((unsigned short )3475), ((unsigned short )3483), ((unsigned short )3492), ((unsigned short )3501), ((unsigned short )3510), ((unsigned short )3518), ((unsigned short )3526), ((unsigned short )3535), ((unsigned short )3543), ((unsigned short )3551), ((unsigned short )3559), ((unsigned short )3566), ((unsigned short )3574), ((unsigned short )3582), ((unsigned short )3589), ((unsigned short )3596), ((unsigned short )3604), ((unsigned short )3611), ((unsigned short )3618), ((unsigned short )3625), ((unsigned short )3632), ((unsigned short )3639), ((unsigned short )3645), ((unsigned short )3652), ((unsigned short )3659), ((unsigned short )3665), ((unsigned short )3671), ((unsigned short )3678), ((unsigned short )3684), ((unsigned short )3690), ((unsigned short )3696), ((unsigned short )3702), ((unsigned short )3707), ((unsigned short )3713), ((unsigned short )3719), ((unsigned short )3724), ((unsigned short )3730), ((unsigned short )3735), ((unsigned short )3741), ((unsigned short )3746), ((unsigned short )3751), ((unsigned short )3756), ((unsigned short )3761), ((unsigned short )3766), ((unsigned short )3771), ((unsigned short )3776), ((unsigned short )3781), ((unsigned short )3786), ((unsigned short )3790), ((unsigned short )3795), ((unsigned short )3799), ((unsigned short )3804), ((unsigned short )3808), ((unsigned short )3812), ((unsigned short )3817), ((unsigned short )3821), ((unsigned short )3825), ((unsigned short )3829), ((unsigned short )3833), ((unsigned short )3837), ((unsigned short )3841), ((unsigned short )3845), ((unsigned short )3848), ((unsigned short )3852), ((unsigned short )3856), ((unsigned short )3859), ((unsigned short )3863), ((unsigned short )3867), ((unsigned short )3870), ((unsigned short )3873), ((unsigned short )3877), ((unsigned short )3880), ((unsigned short )3883), ((unsigned short )3887), ((unsigned short )3890), ((unsigned short )3893), ((unsigned short )3896), ((unsigned short )3899), ((unsigned short )3902), ((unsigned short )3905), ((unsigned short )3908), ((unsigned short )3911), ((unsigned short )3913), ((unsigned short )3916), ((unsigned short )3919), ((unsigned short )3922), ((unsigned short )3924), ((unsigned short )3927), ((unsigned short )3929), ((unsigned short )3932), ((unsigned short )3934), ((unsigned short )3937), ((unsigned short )3939), ((unsigned short )3942), ((unsigned short )3944), ((unsigned short )3946), ((unsigned short )3949), ((unsigned short )3951), ((unsigned short )3953), ((unsigned short )3955), ((unsigned short )3957), ((unsigned short )3960), ((unsigned short )3962), ((unsigned short )3964), ((unsigned short )3966), ((unsigned short )3968), ((unsigned short )3970), ((unsigned short )3972), ((unsigned short )3973), ((unsigned short )3975), ((unsigned short )3977), ((unsigned short )3979), ((unsigned short )3981), ((unsigned short )3983), ((unsigned short )3984), ((unsigned short )3986), ((unsigned short )3988), ((unsigned short )3989), ((unsigned short )3991), ((unsigned short )3993), ((unsigned short )3994), ((unsigned short )3996), ((unsigned short )3997), ((unsigned short )3999), ((unsigned short )4000), ((unsigned short )4002), ((unsigned short )4003), ((unsigned short )4005), ((unsigned short )4006), ((unsigned short )4007), ((unsigned short )4009), ((unsigned short )4010), ((unsigned short )4011), ((unsigned short )4013), ((unsigned short )4014), ((unsigned short )4015), ((unsigned short )4016), ((unsigned short )4018), ((unsigned short )4019), ((unsigned short )4020), ((unsigned short )4021), ((unsigned short )4022), ((unsigned short )4024), ((unsigned short )4025), ((unsigned short )4026), ((unsigned short )4027), ((unsigned short )4028), ((unsigned short )4029), ((unsigned short )4030), ((unsigned short )4031), ((unsigned short )4032), ((unsigned short )4033), ((unsigned short )4034), ((unsigned short )4035), ((unsigned short )4036), ((unsigned short )4037), ((unsigned short )4038), ((unsigned short )4039), ((unsigned short )4039), ((unsigned short )4040), ((unsigned short )4041), ((unsigned short )4042), ((unsigned short )4043), ((unsigned short )4044), ((unsigned short )4044), ((unsigned short )4045), ((unsigned short )4046), ((unsigned short )4047), ((unsigned short )4048), ((unsigned short )4048), ((unsigned short )4049), ((unsigned short )4050), ((unsigned short )4050), ((unsigned short )4051), ((unsigned short )4052), ((unsigned short )4053), ((unsigned short )4053), ((unsigned short )4054), ((unsigned short )4055), ((unsigned short )4055), ((unsigned short )4056), ((unsigned short )4056), ((unsigned short )4057), ((unsigned short )4058), ((unsigned short )4058), ((unsigned short )4059), ((unsigned short )4059), ((unsigned short )4060), ((unsigned short )4061), ((unsigned short )4061), ((unsigned short )4062), ((unsigned short )4062), ((unsigned short )4063), ((unsigned short )4063), ((unsigned short )4064), ((unsigned short )4064), ((unsigned short )4065), ((unsigned short )4065), ((unsigned short )4066), ((unsigned short )4066), ((unsigned short )4067), ((unsigned short )4067), ((unsigned short )4067), ((unsigned short )4068), ((unsigned short )4068), ((unsigned short )4069), ((unsigned short )4069), ((unsigned short )4070), ((unsigned short )4070), ((unsigned short )4070), ((unsigned short )4071), ((unsigned short )4071), ((unsigned short )4072), ((unsigned short )4072), ((unsigned short )4072), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4073), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4074), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4075), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4076), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4077), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4078), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4079), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4080), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4081), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4082), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4083), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4084), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4085), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4086), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4087), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4088), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4089), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4090), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4091), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4092), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4093), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4094), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4095), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096), ((unsigned short )4096) };
static signed short aesl_internal_lstm_kernel_OC_h_state[64];
static signed short aesl_internal_lstm_kernel_OC_c_state[64];
static signed short aesl_internal_lstm_kernel_OC_weight_l[264][64];


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

void lstm_kernel(bool llvm_cbe_mode, signed int llvm_cbe_sampleinput,  char llvm_cbe_scale_fac,  char llvm_cbe_scale_mul, signed int *llvm_cbe_weight, signed short *llvm_cbe_lstm_out) {
  static  unsigned long long aesl_llvm_cbe_lstm_state_count = 0;
  signed short llvm_cbe_lstm_state[64][4];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_storemerge1259_count = 0;
  unsigned int llvm_cbe_storemerge1259;
  unsigned int llvm_cbe_storemerge1259__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  unsigned long long llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  signed int *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  unsigned int llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  unsigned short llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  signed short *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  unsigned int llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  unsigned long long llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  unsigned int llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  unsigned short llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  signed short *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  unsigned int llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  unsigned long long llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  signed int *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  unsigned int llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  unsigned short llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  signed short *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  unsigned int llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  unsigned long long llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  signed int *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  unsigned int llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  unsigned short llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  signed short *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  unsigned int llvm_cbe_tmp__24;
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
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_exitcond74_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1357_count = 0;
  unsigned int llvm_cbe_storemerge1357;
  unsigned int llvm_cbe_storemerge1357__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
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
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;
  static  unsigned long long aesl_llvm_cbe_281_count = 0;
  unsigned int llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_282_count = 0;
  unsigned int llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_283_count = 0;
  unsigned int llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_284_count = 0;
  unsigned long long llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_285_count = 0;
  unsigned int llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_286_count = 0;
  unsigned int llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_287_count = 0;
  unsigned long long llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_288_count = 0;
  unsigned int llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_289_count = 0;
  unsigned int llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_290_count = 0;
  unsigned long long llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_291_count = 0;
  unsigned int llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_292_count = 0;
  unsigned int llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_293_count = 0;
  unsigned long long llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_294_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1555_count = 0;
  unsigned int llvm_cbe_storemerge1555;
  unsigned int llvm_cbe_storemerge1555__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_295_count = 0;
  unsigned int llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_296_count = 0;
  unsigned int llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_297_count = 0;
  unsigned long long llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_298_count = 0;
  signed int *llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_299_count = 0;
  unsigned int llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_300_count = 0;
  unsigned short llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_301_count = 0;
  unsigned long long llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_302_count = 0;
  signed short *llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_303_count = 0;
  static  unsigned long long aesl_llvm_cbe_304_count = 0;
  unsigned int llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_305_count = 0;
  unsigned long long llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_306_count = 0;
  signed int *llvm_cbe_tmp__48;
  static  unsigned long long aesl_llvm_cbe_307_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_308_count = 0;
  unsigned short llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_309_count = 0;
  signed short *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_310_count = 0;
  static  unsigned long long aesl_llvm_cbe_311_count = 0;
  unsigned int llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_312_count = 0;
  unsigned long long llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_313_count = 0;
  signed int *llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_314_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_315_count = 0;
  unsigned short llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_316_count = 0;
  signed short *llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_317_count = 0;
  static  unsigned long long aesl_llvm_cbe_318_count = 0;
  unsigned int llvm_cbe_tmp__58;
  static  unsigned long long aesl_llvm_cbe_319_count = 0;
  unsigned long long llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_320_count = 0;
  signed int *llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_321_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_322_count = 0;
  unsigned short llvm_cbe_tmp__62;
  static  unsigned long long aesl_llvm_cbe_323_count = 0;
  signed short *llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_324_count = 0;
  static  unsigned long long aesl_llvm_cbe_325_count = 0;
  unsigned int llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_326_count = 0;
  static  unsigned long long aesl_llvm_cbe_327_count = 0;
  static  unsigned long long aesl_llvm_cbe_328_count = 0;
  static  unsigned long long aesl_llvm_cbe_329_count = 0;
  static  unsigned long long aesl_llvm_cbe_330_count = 0;
  static  unsigned long long aesl_llvm_cbe_331_count = 0;
  static  unsigned long long aesl_llvm_cbe_332_count = 0;
  static  unsigned long long aesl_llvm_cbe_333_count = 0;
  static  unsigned long long aesl_llvm_cbe_334_count = 0;
  static  unsigned long long aesl_llvm_cbe_335_count = 0;
  static  unsigned long long aesl_llvm_cbe_336_count = 0;
  static  unsigned long long aesl_llvm_cbe_337_count = 0;
  static  unsigned long long aesl_llvm_cbe_338_count = 0;
  static  unsigned long long aesl_llvm_cbe_339_count = 0;
  static  unsigned long long aesl_llvm_cbe_340_count = 0;
  static  unsigned long long aesl_llvm_cbe_341_count = 0;
  static  unsigned long long aesl_llvm_cbe_342_count = 0;
  static  unsigned long long aesl_llvm_cbe_343_count = 0;
  static  unsigned long long aesl_llvm_cbe_344_count = 0;
  static  unsigned long long aesl_llvm_cbe_345_count = 0;
  static  unsigned long long aesl_llvm_cbe_346_count = 0;
  static  unsigned long long aesl_llvm_cbe_347_count = 0;
  static  unsigned long long aesl_llvm_cbe_348_count = 0;
  static  unsigned long long aesl_llvm_cbe_349_count = 0;
  static  unsigned long long aesl_llvm_cbe_350_count = 0;
  static  unsigned long long aesl_llvm_cbe_351_count = 0;
  static  unsigned long long aesl_llvm_cbe_352_count = 0;
  static  unsigned long long aesl_llvm_cbe_353_count = 0;
  static  unsigned long long aesl_llvm_cbe_354_count = 0;
  static  unsigned long long aesl_llvm_cbe_355_count = 0;
  static  unsigned long long aesl_llvm_cbe_356_count = 0;
  static  unsigned long long aesl_llvm_cbe_357_count = 0;
  static  unsigned long long aesl_llvm_cbe_358_count = 0;
  static  unsigned long long aesl_llvm_cbe_359_count = 0;
  static  unsigned long long aesl_llvm_cbe_360_count = 0;
  static  unsigned long long aesl_llvm_cbe_361_count = 0;
  static  unsigned long long aesl_llvm_cbe_362_count = 0;
  static  unsigned long long aesl_llvm_cbe_363_count = 0;
  static  unsigned long long aesl_llvm_cbe_364_count = 0;
  static  unsigned long long aesl_llvm_cbe_365_count = 0;
  static  unsigned long long aesl_llvm_cbe_366_count = 0;
  static  unsigned long long aesl_llvm_cbe_367_count = 0;
  static  unsigned long long aesl_llvm_cbe_368_count = 0;
  static  unsigned long long aesl_llvm_cbe_369_count = 0;
  static  unsigned long long aesl_llvm_cbe_370_count = 0;
  static  unsigned long long aesl_llvm_cbe_371_count = 0;
  static  unsigned long long aesl_llvm_cbe_372_count = 0;
  static  unsigned long long aesl_llvm_cbe_373_count = 0;
  static  unsigned long long aesl_llvm_cbe_374_count = 0;
  static  unsigned long long aesl_llvm_cbe_375_count = 0;
  static  unsigned long long aesl_llvm_cbe_376_count = 0;
  static  unsigned long long aesl_llvm_cbe_377_count = 0;
  static  unsigned long long aesl_llvm_cbe_378_count = 0;
  static  unsigned long long aesl_llvm_cbe_379_count = 0;
  static  unsigned long long aesl_llvm_cbe_380_count = 0;
  static  unsigned long long aesl_llvm_cbe_381_count = 0;
  static  unsigned long long aesl_llvm_cbe_382_count = 0;
  static  unsigned long long aesl_llvm_cbe_383_count = 0;
  static  unsigned long long aesl_llvm_cbe_384_count = 0;
  static  unsigned long long aesl_llvm_cbe_385_count = 0;
  static  unsigned long long aesl_llvm_cbe_386_count = 0;
  static  unsigned long long aesl_llvm_cbe_387_count = 0;
  static  unsigned long long aesl_llvm_cbe_388_count = 0;
  static  unsigned long long aesl_llvm_cbe_389_count = 0;
  static  unsigned long long aesl_llvm_cbe_390_count = 0;
  static  unsigned long long aesl_llvm_cbe_391_count = 0;
  static  unsigned long long aesl_llvm_cbe_392_count = 0;
  static  unsigned long long aesl_llvm_cbe_393_count = 0;
  static  unsigned long long aesl_llvm_cbe_394_count = 0;
  static  unsigned long long aesl_llvm_cbe_395_count = 0;
  static  unsigned long long aesl_llvm_cbe_396_count = 0;
  static  unsigned long long aesl_llvm_cbe_397_count = 0;
  static  unsigned long long aesl_llvm_cbe_398_count = 0;
  static  unsigned long long aesl_llvm_cbe_399_count = 0;
  static  unsigned long long aesl_llvm_cbe_400_count = 0;
  static  unsigned long long aesl_llvm_cbe_401_count = 0;
  static  unsigned long long aesl_llvm_cbe_402_count = 0;
  static  unsigned long long aesl_llvm_cbe_403_count = 0;
  static  unsigned long long aesl_llvm_cbe_404_count = 0;
  static  unsigned long long aesl_llvm_cbe_405_count = 0;
  static  unsigned long long aesl_llvm_cbe_406_count = 0;
  static  unsigned long long aesl_llvm_cbe_407_count = 0;
  static  unsigned long long aesl_llvm_cbe_408_count = 0;
  static  unsigned long long aesl_llvm_cbe_409_count = 0;
  static  unsigned long long aesl_llvm_cbe_410_count = 0;
  static  unsigned long long aesl_llvm_cbe_411_count = 0;
  static  unsigned long long aesl_llvm_cbe_412_count = 0;
  static  unsigned long long aesl_llvm_cbe_413_count = 0;
  static  unsigned long long aesl_llvm_cbe_414_count = 0;
  static  unsigned long long aesl_llvm_cbe_415_count = 0;
  static  unsigned long long aesl_llvm_cbe_416_count = 0;
  static  unsigned long long aesl_llvm_cbe_417_count = 0;
  static  unsigned long long aesl_llvm_cbe_418_count = 0;
  static  unsigned long long aesl_llvm_cbe_419_count = 0;
  static  unsigned long long aesl_llvm_cbe_420_count = 0;
  static  unsigned long long aesl_llvm_cbe_421_count = 0;
  static  unsigned long long aesl_llvm_cbe_422_count = 0;
  static  unsigned long long aesl_llvm_cbe_423_count = 0;
  static  unsigned long long aesl_llvm_cbe_424_count = 0;
  static  unsigned long long aesl_llvm_cbe_425_count = 0;
  static  unsigned long long aesl_llvm_cbe_426_count = 0;
  static  unsigned long long aesl_llvm_cbe_427_count = 0;
  static  unsigned long long aesl_llvm_cbe_428_count = 0;
  static  unsigned long long aesl_llvm_cbe_429_count = 0;
  static  unsigned long long aesl_llvm_cbe_430_count = 0;
  static  unsigned long long aesl_llvm_cbe_431_count = 0;
  static  unsigned long long aesl_llvm_cbe_432_count = 0;
  static  unsigned long long aesl_llvm_cbe_433_count = 0;
  static  unsigned long long aesl_llvm_cbe_434_count = 0;
  static  unsigned long long aesl_llvm_cbe_435_count = 0;
  static  unsigned long long aesl_llvm_cbe_436_count = 0;
  static  unsigned long long aesl_llvm_cbe_437_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond72_count = 0;
  static  unsigned long long aesl_llvm_cbe_438_count = 0;
  static  unsigned long long aesl_llvm_cbe_439_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_440_count = 0;
  static  unsigned long long aesl_llvm_cbe_441_count = 0;
  static  unsigned long long aesl_llvm_cbe_442_count = 0;
  static  unsigned long long aesl_llvm_cbe_443_count = 0;
  static  unsigned long long aesl_llvm_cbe_444_count = 0;
  static  unsigned long long aesl_llvm_cbe_445_count = 0;
  static  unsigned long long aesl_llvm_cbe_446_count = 0;
  static  unsigned long long aesl_llvm_cbe_447_count = 0;
  static  unsigned long long aesl_llvm_cbe_448_count = 0;
  static  unsigned long long aesl_llvm_cbe_449_count = 0;
  static  unsigned long long aesl_llvm_cbe_450_count = 0;
  static  unsigned long long aesl_llvm_cbe_451_count = 0;
  static  unsigned long long aesl_llvm_cbe_452_count = 0;
  static  unsigned long long aesl_llvm_cbe_453_count = 0;
  static  unsigned long long aesl_llvm_cbe_454_count = 0;
  static  unsigned long long aesl_llvm_cbe_455_count = 0;
  static  unsigned long long aesl_llvm_cbe_456_count = 0;
  static  unsigned long long aesl_llvm_cbe_457_count = 0;
  static  unsigned long long aesl_llvm_cbe_458_count = 0;
  static  unsigned long long aesl_llvm_cbe_459_count = 0;
  static  unsigned long long aesl_llvm_cbe_460_count = 0;
  static  unsigned long long aesl_llvm_cbe_461_count = 0;
  static  unsigned long long aesl_llvm_cbe_462_count = 0;
  static  unsigned long long aesl_llvm_cbe_463_count = 0;
  static  unsigned long long aesl_llvm_cbe_464_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond73_count = 0;
  static  unsigned long long aesl_llvm_cbe_465_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1453_count = 0;
  unsigned int llvm_cbe_storemerge1453;
  unsigned int llvm_cbe_storemerge1453__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_466_count = 0;
  unsigned int llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_467_count = 0;
  unsigned long long llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_468_count = 0;
  signed int *llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_469_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_470_count = 0;
  unsigned short llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_471_count = 0;
  unsigned long long llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_472_count = 0;
  signed short *llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_473_count = 0;
  static  unsigned long long aesl_llvm_cbe_474_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_475_count = 0;
  unsigned long long llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_476_count = 0;
  signed int *llvm_cbe_tmp__75;
  static  unsigned long long aesl_llvm_cbe_477_count = 0;
  unsigned int llvm_cbe_tmp__76;
  static  unsigned long long aesl_llvm_cbe_478_count = 0;
  unsigned short llvm_cbe_tmp__77;
  static  unsigned long long aesl_llvm_cbe_479_count = 0;
  signed short *llvm_cbe_tmp__78;
  static  unsigned long long aesl_llvm_cbe_480_count = 0;
  static  unsigned long long aesl_llvm_cbe_481_count = 0;
  unsigned int llvm_cbe_tmp__79;
  static  unsigned long long aesl_llvm_cbe_482_count = 0;
  unsigned long long llvm_cbe_tmp__80;
  static  unsigned long long aesl_llvm_cbe_483_count = 0;
  signed int *llvm_cbe_tmp__81;
  static  unsigned long long aesl_llvm_cbe_484_count = 0;
  unsigned int llvm_cbe_tmp__82;
  static  unsigned long long aesl_llvm_cbe_485_count = 0;
  unsigned short llvm_cbe_tmp__83;
  static  unsigned long long aesl_llvm_cbe_486_count = 0;
  signed short *llvm_cbe_tmp__84;
  static  unsigned long long aesl_llvm_cbe_487_count = 0;
  static  unsigned long long aesl_llvm_cbe_488_count = 0;
  unsigned int llvm_cbe_tmp__85;
  static  unsigned long long aesl_llvm_cbe_489_count = 0;
  unsigned long long llvm_cbe_tmp__86;
  static  unsigned long long aesl_llvm_cbe_490_count = 0;
  signed int *llvm_cbe_tmp__87;
  static  unsigned long long aesl_llvm_cbe_491_count = 0;
  unsigned int llvm_cbe_tmp__88;
  static  unsigned long long aesl_llvm_cbe_492_count = 0;
  unsigned short llvm_cbe_tmp__89;
  static  unsigned long long aesl_llvm_cbe_493_count = 0;
  signed short *llvm_cbe_tmp__90;
  static  unsigned long long aesl_llvm_cbe_494_count = 0;
  static  unsigned long long aesl_llvm_cbe_495_count = 0;
  unsigned int llvm_cbe_tmp__91;
  static  unsigned long long aesl_llvm_cbe_496_count = 0;
  static  unsigned long long aesl_llvm_cbe_497_count = 0;
  static  unsigned long long aesl_llvm_cbe_498_count = 0;
  static  unsigned long long aesl_llvm_cbe_499_count = 0;
  static  unsigned long long aesl_llvm_cbe_500_count = 0;
  static  unsigned long long aesl_llvm_cbe_501_count = 0;
  static  unsigned long long aesl_llvm_cbe_502_count = 0;
  static  unsigned long long aesl_llvm_cbe_503_count = 0;
  static  unsigned long long aesl_llvm_cbe_504_count = 0;
  static  unsigned long long aesl_llvm_cbe_505_count = 0;
  static  unsigned long long aesl_llvm_cbe_506_count = 0;
  static  unsigned long long aesl_llvm_cbe_507_count = 0;
  static  unsigned long long aesl_llvm_cbe_508_count = 0;
  static  unsigned long long aesl_llvm_cbe_509_count = 0;
  static  unsigned long long aesl_llvm_cbe_510_count = 0;
  static  unsigned long long aesl_llvm_cbe_511_count = 0;
  static  unsigned long long aesl_llvm_cbe_512_count = 0;
  static  unsigned long long aesl_llvm_cbe_513_count = 0;
  static  unsigned long long aesl_llvm_cbe_514_count = 0;
  static  unsigned long long aesl_llvm_cbe_515_count = 0;
  static  unsigned long long aesl_llvm_cbe_516_count = 0;
  static  unsigned long long aesl_llvm_cbe_517_count = 0;
  static  unsigned long long aesl_llvm_cbe_518_count = 0;
  static  unsigned long long aesl_llvm_cbe_519_count = 0;
  static  unsigned long long aesl_llvm_cbe_520_count = 0;
  static  unsigned long long aesl_llvm_cbe_521_count = 0;
  static  unsigned long long aesl_llvm_cbe_522_count = 0;
  static  unsigned long long aesl_llvm_cbe_523_count = 0;
  static  unsigned long long aesl_llvm_cbe_524_count = 0;
  static  unsigned long long aesl_llvm_cbe_525_count = 0;
  static  unsigned long long aesl_llvm_cbe_526_count = 0;
  static  unsigned long long aesl_llvm_cbe_527_count = 0;
  static  unsigned long long aesl_llvm_cbe_528_count = 0;
  static  unsigned long long aesl_llvm_cbe_529_count = 0;
  static  unsigned long long aesl_llvm_cbe_530_count = 0;
  static  unsigned long long aesl_llvm_cbe_531_count = 0;
  static  unsigned long long aesl_llvm_cbe_532_count = 0;
  static  unsigned long long aesl_llvm_cbe_533_count = 0;
  static  unsigned long long aesl_llvm_cbe_534_count = 0;
  static  unsigned long long aesl_llvm_cbe_535_count = 0;
  static  unsigned long long aesl_llvm_cbe_536_count = 0;
  static  unsigned long long aesl_llvm_cbe_537_count = 0;
  static  unsigned long long aesl_llvm_cbe_538_count = 0;
  static  unsigned long long aesl_llvm_cbe_539_count = 0;
  static  unsigned long long aesl_llvm_cbe_540_count = 0;
  static  unsigned long long aesl_llvm_cbe_541_count = 0;
  static  unsigned long long aesl_llvm_cbe_542_count = 0;
  static  unsigned long long aesl_llvm_cbe_543_count = 0;
  static  unsigned long long aesl_llvm_cbe_544_count = 0;
  static  unsigned long long aesl_llvm_cbe_545_count = 0;
  static  unsigned long long aesl_llvm_cbe_546_count = 0;
  static  unsigned long long aesl_llvm_cbe_547_count = 0;
  static  unsigned long long aesl_llvm_cbe_548_count = 0;
  static  unsigned long long aesl_llvm_cbe_549_count = 0;
  static  unsigned long long aesl_llvm_cbe_550_count = 0;
  static  unsigned long long aesl_llvm_cbe_551_count = 0;
  static  unsigned long long aesl_llvm_cbe_552_count = 0;
  static  unsigned long long aesl_llvm_cbe_553_count = 0;
  static  unsigned long long aesl_llvm_cbe_554_count = 0;
  static  unsigned long long aesl_llvm_cbe_555_count = 0;
  static  unsigned long long aesl_llvm_cbe_556_count = 0;
  static  unsigned long long aesl_llvm_cbe_557_count = 0;
  static  unsigned long long aesl_llvm_cbe_558_count = 0;
  static  unsigned long long aesl_llvm_cbe_559_count = 0;
  static  unsigned long long aesl_llvm_cbe_560_count = 0;
  static  unsigned long long aesl_llvm_cbe_561_count = 0;
  static  unsigned long long aesl_llvm_cbe_562_count = 0;
  static  unsigned long long aesl_llvm_cbe_563_count = 0;
  static  unsigned long long aesl_llvm_cbe_564_count = 0;
  static  unsigned long long aesl_llvm_cbe_565_count = 0;
  static  unsigned long long aesl_llvm_cbe_566_count = 0;
  static  unsigned long long aesl_llvm_cbe_567_count = 0;
  static  unsigned long long aesl_llvm_cbe_568_count = 0;
  static  unsigned long long aesl_llvm_cbe_569_count = 0;
  static  unsigned long long aesl_llvm_cbe_570_count = 0;
  static  unsigned long long aesl_llvm_cbe_571_count = 0;
  static  unsigned long long aesl_llvm_cbe_572_count = 0;
  static  unsigned long long aesl_llvm_cbe_573_count = 0;
  static  unsigned long long aesl_llvm_cbe_574_count = 0;
  static  unsigned long long aesl_llvm_cbe_575_count = 0;
  static  unsigned long long aesl_llvm_cbe_576_count = 0;
  static  unsigned long long aesl_llvm_cbe_577_count = 0;
  static  unsigned long long aesl_llvm_cbe_578_count = 0;
  static  unsigned long long aesl_llvm_cbe_579_count = 0;
  static  unsigned long long aesl_llvm_cbe_580_count = 0;
  static  unsigned long long aesl_llvm_cbe_581_count = 0;
  static  unsigned long long aesl_llvm_cbe_582_count = 0;
  static  unsigned long long aesl_llvm_cbe_583_count = 0;
  static  unsigned long long aesl_llvm_cbe_584_count = 0;
  static  unsigned long long aesl_llvm_cbe_585_count = 0;
  static  unsigned long long aesl_llvm_cbe_586_count = 0;
  static  unsigned long long aesl_llvm_cbe_587_count = 0;
  static  unsigned long long aesl_llvm_cbe_588_count = 0;
  static  unsigned long long aesl_llvm_cbe_589_count = 0;
  static  unsigned long long aesl_llvm_cbe_590_count = 0;
  static  unsigned long long aesl_llvm_cbe_591_count = 0;
  static  unsigned long long aesl_llvm_cbe_592_count = 0;
  static  unsigned long long aesl_llvm_cbe_593_count = 0;
  static  unsigned long long aesl_llvm_cbe_594_count = 0;
  static  unsigned long long aesl_llvm_cbe_595_count = 0;
  static  unsigned long long aesl_llvm_cbe_596_count = 0;
  static  unsigned long long aesl_llvm_cbe_597_count = 0;
  static  unsigned long long aesl_llvm_cbe_598_count = 0;
  static  unsigned long long aesl_llvm_cbe_599_count = 0;
  static  unsigned long long aesl_llvm_cbe_600_count = 0;
  static  unsigned long long aesl_llvm_cbe_601_count = 0;
  static  unsigned long long aesl_llvm_cbe_602_count = 0;
  static  unsigned long long aesl_llvm_cbe_603_count = 0;
  static  unsigned long long aesl_llvm_cbe_604_count = 0;
  static  unsigned long long aesl_llvm_cbe_605_count = 0;
  static  unsigned long long aesl_llvm_cbe_606_count = 0;
  static  unsigned long long aesl_llvm_cbe_607_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond71_count = 0;
  static  unsigned long long aesl_llvm_cbe_608_count = 0;
  static  unsigned long long aesl_llvm_cbe_609_count = 0;
  unsigned int llvm_cbe_tmp__92;
  static  unsigned long long aesl_llvm_cbe_610_count = 0;
  unsigned int llvm_cbe_tmp__93;
  static  unsigned long long aesl_llvm_cbe_611_count = 0;
  unsigned int llvm_cbe_tmp__94;
  static  unsigned long long aesl_llvm_cbe_612_count = 0;
  static  unsigned long long aesl_llvm_cbe_613_count = 0;
  unsigned int llvm_cbe_tmp__95;
  static  unsigned long long aesl_llvm_cbe_614_count = 0;
  unsigned int llvm_cbe_tmp__96;
  static  unsigned long long aesl_llvm_cbe_615_count = 0;
  unsigned int llvm_cbe_tmp__97;
  static  unsigned long long aesl_llvm_cbe_616_count = 0;
  static  unsigned long long aesl_llvm_cbe_617_count = 0;
  unsigned int llvm_cbe_tmp__98;
  static  unsigned long long aesl_llvm_cbe_618_count = 0;
  unsigned int llvm_cbe_tmp__99;
  static  unsigned long long aesl_llvm_cbe_619_count = 0;
  unsigned int llvm_cbe_tmp__100;
  static  unsigned long long aesl_llvm_cbe_620_count = 0;
  unsigned short llvm_cbe_tmp__101;
  static  unsigned long long aesl_llvm_cbe_621_count = 0;
  static  unsigned long long aesl_llvm_cbe_622_count = 0;
  static  unsigned long long aesl_llvm_cbe_623_count = 0;
  static  unsigned long long aesl_llvm_cbe_624_count = 0;
  static  unsigned long long aesl_llvm_cbe_625_count = 0;
  static  unsigned long long aesl_llvm_cbe_626_count = 0;
  static  unsigned long long aesl_llvm_cbe_627_count = 0;
  static  unsigned long long aesl_llvm_cbe_628_count = 0;
  static  unsigned long long aesl_llvm_cbe_629_count = 0;
  static  unsigned long long aesl_llvm_cbe_630_count = 0;
  static  unsigned long long aesl_llvm_cbe_631_count = 0;
  static  unsigned long long aesl_llvm_cbe_632_count = 0;
  static  unsigned long long aesl_llvm_cbe_633_count = 0;
  static  unsigned long long aesl_llvm_cbe_634_count = 0;
  static  unsigned long long aesl_llvm_cbe_635_count = 0;
  static  unsigned long long aesl_llvm_cbe_636_count = 0;
  static  unsigned long long aesl_llvm_cbe_637_count = 0;
  static  unsigned long long aesl_llvm_cbe_638_count = 0;
  static  unsigned long long aesl_llvm_cbe_639_count = 0;
  static  unsigned long long aesl_llvm_cbe_640_count = 0;
  static  unsigned long long aesl_llvm_cbe_641_count = 0;
  static  unsigned long long aesl_llvm_cbe_642_count = 0;
  static  unsigned long long aesl_llvm_cbe_643_count = 0;
  static  unsigned long long aesl_llvm_cbe_644_count = 0;
  static  unsigned long long aesl_llvm_cbe_645_count = 0;
  static  unsigned long long aesl_llvm_cbe_646_count = 0;
  static  unsigned long long aesl_llvm_cbe_647_count = 0;
  static  unsigned long long aesl_llvm_cbe_648_count = 0;
  unsigned int llvm_cbe_tmp__102;
  static  unsigned long long aesl_llvm_cbe_649_count = 0;
  static  unsigned long long aesl_llvm_cbe_650_count = 0;
  static  unsigned long long aesl_llvm_cbe_651_count = 0;
  static  unsigned long long aesl_llvm_cbe_652_count = 0;
  static  unsigned long long aesl_llvm_cbe_653_count = 0;
  static  unsigned long long aesl_llvm_cbe_654_count = 0;
  static  unsigned long long aesl_llvm_cbe_655_count = 0;
  static  unsigned long long aesl_llvm_cbe_656_count = 0;
  static  unsigned long long aesl_llvm_cbe_657_count = 0;
  static  unsigned long long aesl_llvm_cbe_658_count = 0;
  static  unsigned long long aesl_llvm_cbe_659_count = 0;
  static  unsigned long long aesl_llvm_cbe_660_count = 0;
  static  unsigned long long aesl_llvm_cbe_661_count = 0;
  static  unsigned long long aesl_llvm_cbe_662_count = 0;
  static  unsigned long long aesl_llvm_cbe_663_count = 0;
  static  unsigned long long aesl_llvm_cbe_664_count = 0;
  static  unsigned long long aesl_llvm_cbe_665_count = 0;
  static  unsigned long long aesl_llvm_cbe_666_count = 0;
  static  unsigned long long aesl_llvm_cbe_667_count = 0;
  static  unsigned long long aesl_llvm_cbe_668_count = 0;
  static  unsigned long long aesl_llvm_cbe_669_count = 0;
  static  unsigned long long aesl_llvm_cbe_670_count = 0;
  static  unsigned long long aesl_llvm_cbe_671_count = 0;
  static  unsigned long long aesl_llvm_cbe_672_count = 0;
  static  unsigned long long aesl_llvm_cbe_673_count = 0;
  static  unsigned long long aesl_llvm_cbe_674_count = 0;
  static  unsigned long long aesl_llvm_cbe_675_count = 0;
  static  unsigned long long aesl_llvm_cbe_676_count = 0;
  static  unsigned long long aesl_llvm_cbe_677_count = 0;
  static  unsigned long long aesl_llvm_cbe_678_count = 0;
  static  unsigned long long aesl_llvm_cbe_679_count = 0;
  static  unsigned long long aesl_llvm_cbe_680_count = 0;
  static  unsigned long long aesl_llvm_cbe_681_count = 0;
  static  unsigned long long aesl_llvm_cbe_682_count = 0;
  static  unsigned long long aesl_llvm_cbe_683_count = 0;
  static  unsigned long long aesl_llvm_cbe_684_count = 0;
  static  unsigned long long aesl_llvm_cbe_685_count = 0;
  static  unsigned long long aesl_llvm_cbe_686_count = 0;
  static  unsigned long long aesl_llvm_cbe_687_count = 0;
  static  unsigned long long aesl_llvm_cbe_688_count = 0;
  static  unsigned long long aesl_llvm_cbe_689_count = 0;
  static  unsigned long long aesl_llvm_cbe_690_count = 0;
  static  unsigned long long aesl_llvm_cbe_691_count = 0;
  static  unsigned long long aesl_llvm_cbe_692_count = 0;
  static  unsigned long long aesl_llvm_cbe_693_count = 0;
  static  unsigned long long aesl_llvm_cbe_694_count = 0;
  static  unsigned long long aesl_llvm_cbe_695_count = 0;
  static  unsigned long long aesl_llvm_cbe_696_count = 0;
  static  unsigned long long aesl_llvm_cbe_697_count = 0;
  static  unsigned long long aesl_llvm_cbe_698_count = 0;
  static  unsigned long long aesl_llvm_cbe_699_count = 0;
  static  unsigned long long aesl_llvm_cbe_700_count = 0;
  static  unsigned long long aesl_llvm_cbe_701_count = 0;
  static  unsigned long long aesl_llvm_cbe_702_count = 0;
  static  unsigned long long aesl_llvm_cbe_703_count = 0;
  static  unsigned long long aesl_llvm_cbe_704_count = 0;
  static  unsigned long long aesl_llvm_cbe_705_count = 0;
  static  unsigned long long aesl_llvm_cbe_706_count = 0;
  static  unsigned long long aesl_llvm_cbe_707_count = 0;
  static  unsigned long long aesl_llvm_cbe_708_count = 0;
  static  unsigned long long aesl_llvm_cbe_709_count = 0;
  static  unsigned long long aesl_llvm_cbe_710_count = 0;
  static  unsigned long long aesl_llvm_cbe_711_count = 0;
  static  unsigned long long aesl_llvm_cbe_712_count = 0;
  static  unsigned long long aesl_llvm_cbe_713_count = 0;
  static  unsigned long long aesl_llvm_cbe_714_count = 0;
  static  unsigned long long aesl_llvm_cbe_715_count = 0;
  static  unsigned long long aesl_llvm_cbe_716_count = 0;
  static  unsigned long long aesl_llvm_cbe_717_count = 0;
  static  unsigned long long aesl_llvm_cbe_718_count = 0;
  static  unsigned long long aesl_llvm_cbe_719_count = 0;
  static  unsigned long long aesl_llvm_cbe_720_count = 0;
  static  unsigned long long aesl_llvm_cbe_721_count = 0;
  static  unsigned long long aesl_llvm_cbe_722_count = 0;
  static  unsigned long long aesl_llvm_cbe_723_count = 0;
  static  unsigned long long aesl_llvm_cbe_724_count = 0;
  static  unsigned long long aesl_llvm_cbe_725_count = 0;
  static  unsigned long long aesl_llvm_cbe_726_count = 0;
  static  unsigned long long aesl_llvm_cbe_727_count = 0;
  static  unsigned long long aesl_llvm_cbe_728_count = 0;
  static  unsigned long long aesl_llvm_cbe_729_count = 0;
  static  unsigned long long aesl_llvm_cbe_730_count = 0;
  static  unsigned long long aesl_llvm_cbe_731_count = 0;
  static  unsigned long long aesl_llvm_cbe_732_count = 0;
  static  unsigned long long aesl_llvm_cbe_733_count = 0;
  static  unsigned long long aesl_llvm_cbe_734_count = 0;
  static  unsigned long long aesl_llvm_cbe_735_count = 0;
  static  unsigned long long aesl_llvm_cbe_736_count = 0;
  static  unsigned long long aesl_llvm_cbe_737_count = 0;
  static  unsigned long long aesl_llvm_cbe_738_count = 0;
  static  unsigned long long aesl_llvm_cbe_739_count = 0;
  static  unsigned long long aesl_llvm_cbe_740_count = 0;
  static  unsigned long long aesl_llvm_cbe_741_count = 0;
  static  unsigned long long aesl_llvm_cbe_742_count = 0;
  static  unsigned long long aesl_llvm_cbe_743_count = 0;
  static  unsigned long long aesl_llvm_cbe_744_count = 0;
  static  unsigned long long aesl_llvm_cbe_745_count = 0;
  static  unsigned long long aesl_llvm_cbe_746_count = 0;
  static  unsigned long long aesl_llvm_cbe_747_count = 0;
  static  unsigned long long aesl_llvm_cbe_748_count = 0;
  static  unsigned long long aesl_llvm_cbe_749_count = 0;
  static  unsigned long long aesl_llvm_cbe_750_count = 0;
  static  unsigned long long aesl_llvm_cbe_751_count = 0;
  static  unsigned long long aesl_llvm_cbe_752_count = 0;
  static  unsigned long long aesl_llvm_cbe_753_count = 0;
  static  unsigned long long aesl_llvm_cbe_754_count = 0;
  static  unsigned long long aesl_llvm_cbe_755_count = 0;
  static  unsigned long long aesl_llvm_cbe_756_count = 0;
  static  unsigned long long aesl_llvm_cbe_757_count = 0;
  static  unsigned long long aesl_llvm_cbe_758_count = 0;
  static  unsigned long long aesl_llvm_cbe_759_count = 0;
  static  unsigned long long aesl_llvm_cbe_760_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1150_count = 0;
  unsigned int llvm_cbe_storemerge1150;
  unsigned int llvm_cbe_storemerge1150__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_761_count = 0;
  unsigned long long llvm_cbe_tmp__103;
  static  unsigned long long aesl_llvm_cbe_762_count = 0;
  signed short *llvm_cbe_tmp__104;
  static  unsigned long long aesl_llvm_cbe_763_count = 0;
  unsigned short llvm_cbe_tmp__105;
  static  unsigned long long aesl_llvm_cbe_764_count = 0;
  unsigned int llvm_cbe_tmp__106;
  static  unsigned long long aesl_llvm_cbe_765_count = 0;
  unsigned int llvm_cbe_tmp__107;
  static  unsigned long long aesl_llvm_cbe_766_count = 0;
  unsigned int llvm_cbe_tmp__108;
  static  unsigned long long aesl_llvm_cbe_767_count = 0;
  unsigned short llvm_cbe_tmp__109;
  static  unsigned long long aesl_llvm_cbe_768_count = 0;
  signed short *llvm_cbe_tmp__110;
  static  unsigned long long aesl_llvm_cbe_769_count = 0;
  static  unsigned long long aesl_llvm_cbe_770_count = 0;
  unsigned int llvm_cbe_tmp__111;
  static  unsigned long long aesl_llvm_cbe_771_count = 0;
  static  unsigned long long aesl_llvm_cbe_772_count = 0;
  static  unsigned long long aesl_llvm_cbe_773_count = 0;
  static  unsigned long long aesl_llvm_cbe_774_count = 0;
  static  unsigned long long aesl_llvm_cbe_775_count = 0;
  static  unsigned long long aesl_llvm_cbe_776_count = 0;
  static  unsigned long long aesl_llvm_cbe_777_count = 0;
  static  unsigned long long aesl_llvm_cbe_778_count = 0;
  static  unsigned long long aesl_llvm_cbe_779_count = 0;
  static  unsigned long long aesl_llvm_cbe_780_count = 0;
  static  unsigned long long aesl_llvm_cbe_781_count = 0;
  static  unsigned long long aesl_llvm_cbe_782_count = 0;
  static  unsigned long long aesl_llvm_cbe_783_count = 0;
  static  unsigned long long aesl_llvm_cbe_784_count = 0;
  static  unsigned long long aesl_llvm_cbe_785_count = 0;
  static  unsigned long long aesl_llvm_cbe_786_count = 0;
  static  unsigned long long aesl_llvm_cbe_787_count = 0;
  static  unsigned long long aesl_llvm_cbe_788_count = 0;
  static  unsigned long long aesl_llvm_cbe_789_count = 0;
  static  unsigned long long aesl_llvm_cbe_790_count = 0;
  static  unsigned long long aesl_llvm_cbe_791_count = 0;
  static  unsigned long long aesl_llvm_cbe_792_count = 0;
  static  unsigned long long aesl_llvm_cbe_793_count = 0;
  static  unsigned long long aesl_llvm_cbe_794_count = 0;
  static  unsigned long long aesl_llvm_cbe_795_count = 0;
  static  unsigned long long aesl_llvm_cbe_796_count = 0;
  static  unsigned long long aesl_llvm_cbe_797_count = 0;
  static  unsigned long long aesl_llvm_cbe_798_count = 0;
  static  unsigned long long aesl_llvm_cbe_799_count = 0;
  static  unsigned long long aesl_llvm_cbe_800_count = 0;
  static  unsigned long long aesl_llvm_cbe_801_count = 0;
  static  unsigned long long aesl_llvm_cbe_802_count = 0;
  static  unsigned long long aesl_llvm_cbe_803_count = 0;
  static  unsigned long long aesl_llvm_cbe_804_count = 0;
  static  unsigned long long aesl_llvm_cbe_805_count = 0;
  static  unsigned long long aesl_llvm_cbe_806_count = 0;
  static  unsigned long long aesl_llvm_cbe_807_count = 0;
  static  unsigned long long aesl_llvm_cbe_808_count = 0;
  static  unsigned long long aesl_llvm_cbe_809_count = 0;
  static  unsigned long long aesl_llvm_cbe_810_count = 0;
  static  unsigned long long aesl_llvm_cbe_811_count = 0;
  static  unsigned long long aesl_llvm_cbe_812_count = 0;
  static  unsigned long long aesl_llvm_cbe_813_count = 0;
  static  unsigned long long aesl_llvm_cbe_814_count = 0;
  static  unsigned long long aesl_llvm_cbe_815_count = 0;
  static  unsigned long long aesl_llvm_cbe_816_count = 0;
  static  unsigned long long aesl_llvm_cbe_817_count = 0;
  static  unsigned long long aesl_llvm_cbe_818_count = 0;
  static  unsigned long long aesl_llvm_cbe_819_count = 0;
  static  unsigned long long aesl_llvm_cbe_820_count = 0;
  static  unsigned long long aesl_llvm_cbe_821_count = 0;
  static  unsigned long long aesl_llvm_cbe_822_count = 0;
  static  unsigned long long aesl_llvm_cbe_823_count = 0;
  static  unsigned long long aesl_llvm_cbe_824_count = 0;
  static  unsigned long long aesl_llvm_cbe_825_count = 0;
  static  unsigned long long aesl_llvm_cbe_826_count = 0;
  static  unsigned long long aesl_llvm_cbe_827_count = 0;
  static  unsigned long long aesl_llvm_cbe_828_count = 0;
  static  unsigned long long aesl_llvm_cbe_829_count = 0;
  static  unsigned long long aesl_llvm_cbe_830_count = 0;
  static  unsigned long long aesl_llvm_cbe_831_count = 0;
  static  unsigned long long aesl_llvm_cbe_832_count = 0;
  static  unsigned long long aesl_llvm_cbe_833_count = 0;
  static  unsigned long long aesl_llvm_cbe_834_count = 0;
  static  unsigned long long aesl_llvm_cbe_835_count = 0;
  static  unsigned long long aesl_llvm_cbe_836_count = 0;
  static  unsigned long long aesl_llvm_cbe_837_count = 0;
  static  unsigned long long aesl_llvm_cbe_838_count = 0;
  static  unsigned long long aesl_llvm_cbe_839_count = 0;
  static  unsigned long long aesl_llvm_cbe_840_count = 0;
  static  unsigned long long aesl_llvm_cbe_841_count = 0;
  static  unsigned long long aesl_llvm_cbe_842_count = 0;
  static  unsigned long long aesl_llvm_cbe_843_count = 0;
  static  unsigned long long aesl_llvm_cbe_844_count = 0;
  static  unsigned long long aesl_llvm_cbe_845_count = 0;
  static  unsigned long long aesl_llvm_cbe_846_count = 0;
  static  unsigned long long aesl_llvm_cbe_847_count = 0;
  static  unsigned long long aesl_llvm_cbe_848_count = 0;
  static  unsigned long long aesl_llvm_cbe_849_count = 0;
  static  unsigned long long aesl_llvm_cbe_850_count = 0;
  static  unsigned long long aesl_llvm_cbe_851_count = 0;
  static  unsigned long long aesl_llvm_cbe_852_count = 0;
  static  unsigned long long aesl_llvm_cbe_853_count = 0;
  static  unsigned long long aesl_llvm_cbe_854_count = 0;
  static  unsigned long long aesl_llvm_cbe_855_count = 0;
  static  unsigned long long aesl_llvm_cbe_856_count = 0;
  static  unsigned long long aesl_llvm_cbe_857_count = 0;
  static  unsigned long long aesl_llvm_cbe_858_count = 0;
  static  unsigned long long aesl_llvm_cbe_859_count = 0;
  static  unsigned long long aesl_llvm_cbe_860_count = 0;
  static  unsigned long long aesl_llvm_cbe_861_count = 0;
  static  unsigned long long aesl_llvm_cbe_862_count = 0;
  static  unsigned long long aesl_llvm_cbe_863_count = 0;
  static  unsigned long long aesl_llvm_cbe_864_count = 0;
  static  unsigned long long aesl_llvm_cbe_865_count = 0;
  static  unsigned long long aesl_llvm_cbe_866_count = 0;
  static  unsigned long long aesl_llvm_cbe_867_count = 0;
  static  unsigned long long aesl_llvm_cbe_868_count = 0;
  static  unsigned long long aesl_llvm_cbe_869_count = 0;
  static  unsigned long long aesl_llvm_cbe_870_count = 0;
  static  unsigned long long aesl_llvm_cbe_871_count = 0;
  static  unsigned long long aesl_llvm_cbe_872_count = 0;
  static  unsigned long long aesl_llvm_cbe_873_count = 0;
  static  unsigned long long aesl_llvm_cbe_874_count = 0;
  static  unsigned long long aesl_llvm_cbe_875_count = 0;
  static  unsigned long long aesl_llvm_cbe_876_count = 0;
  static  unsigned long long aesl_llvm_cbe_877_count = 0;
  static  unsigned long long aesl_llvm_cbe_878_count = 0;
  static  unsigned long long aesl_llvm_cbe_879_count = 0;
  static  unsigned long long aesl_llvm_cbe_880_count = 0;
  static  unsigned long long aesl_llvm_cbe_881_count = 0;
  static  unsigned long long aesl_llvm_cbe_882_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond69_count = 0;
  static  unsigned long long aesl_llvm_cbe_883_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge148_count = 0;
  unsigned int llvm_cbe_storemerge148;
  unsigned int llvm_cbe_storemerge148__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_884_count = 0;
  static  unsigned long long aesl_llvm_cbe_885_count = 0;
  static  unsigned long long aesl_llvm_cbe_886_count = 0;
  static  unsigned long long aesl_llvm_cbe_887_count = 0;
  static  unsigned long long aesl_llvm_cbe_888_count = 0;
  static  unsigned long long aesl_llvm_cbe_889_count = 0;
  static  unsigned long long aesl_llvm_cbe_890_count = 0;
  static  unsigned long long aesl_llvm_cbe_891_count = 0;
  static  unsigned long long aesl_llvm_cbe_892_count = 0;
  static  unsigned long long aesl_llvm_cbe_893_count = 0;
  static  unsigned long long aesl_llvm_cbe_894_count = 0;
  static  unsigned long long aesl_llvm_cbe_895_count = 0;
  static  unsigned long long aesl_llvm_cbe_896_count = 0;
  static  unsigned long long aesl_llvm_cbe_897_count = 0;
  static  unsigned long long aesl_llvm_cbe_898_count = 0;
  static  unsigned long long aesl_llvm_cbe_899_count = 0;
  static  unsigned long long aesl_llvm_cbe_900_count = 0;
  static  unsigned long long aesl_llvm_cbe_901_count = 0;
  static  unsigned long long aesl_llvm_cbe_902_count = 0;
  static  unsigned long long aesl_llvm_cbe_903_count = 0;
  static  unsigned long long aesl_llvm_cbe_904_count = 0;
  static  unsigned long long aesl_llvm_cbe_905_count = 0;
  static  unsigned long long aesl_llvm_cbe_906_count = 0;
  static  unsigned long long aesl_llvm_cbe_907_count = 0;
  static  unsigned long long aesl_llvm_cbe_908_count = 0;
  unsigned long long llvm_cbe_tmp__112;
  static  unsigned long long aesl_llvm_cbe_909_count = 0;
  signed short *llvm_cbe_tmp__113;
  static  unsigned long long aesl_llvm_cbe_910_count = 0;
  unsigned short llvm_cbe_tmp__114;
  static  unsigned long long aesl_llvm_cbe_911_count = 0;
  unsigned int llvm_cbe_tmp__115;
  static  unsigned long long aesl_llvm_cbe_912_count = 0;
  unsigned int llvm_cbe_tmp__116;
  static  unsigned long long aesl_llvm_cbe_913_count = 0;
  unsigned int llvm_cbe_tmp__117;
  static  unsigned long long aesl_llvm_cbe_914_count = 0;
  static  unsigned long long aesl_llvm_cbe_915_count = 0;
  static  unsigned long long aesl_llvm_cbe_916_count = 0;
  static  unsigned long long aesl_llvm_cbe_917_count = 0;
  static  unsigned long long aesl_llvm_cbe_918_count = 0;
  static  unsigned long long aesl_llvm_cbe_919_count = 0;
  static  unsigned long long aesl_llvm_cbe_920_count = 0;
  static  unsigned long long aesl_llvm_cbe_921_count = 0;
  static  unsigned long long aesl_llvm_cbe_922_count = 0;
  static  unsigned long long aesl_llvm_cbe_923_count = 0;
  static  unsigned long long aesl_llvm_cbe_924_count = 0;
  static  unsigned long long aesl_llvm_cbe_925_count = 0;
  static  unsigned long long aesl_llvm_cbe_926_count = 0;
  static  unsigned long long aesl_llvm_cbe_927_count = 0;
  static  unsigned long long aesl_llvm_cbe_928_count = 0;
  static  unsigned long long aesl_llvm_cbe_929_count = 0;
  static  unsigned long long aesl_llvm_cbe_930_count = 0;
  static  unsigned long long aesl_llvm_cbe_931_count = 0;
  static  unsigned long long aesl_llvm_cbe_932_count = 0;
  static  unsigned long long aesl_llvm_cbe_933_count = 0;
  static  unsigned long long aesl_llvm_cbe_934_count = 0;
  static  unsigned long long aesl_llvm_cbe_935_count = 0;
  static  unsigned long long aesl_llvm_cbe_936_count = 0;
  static  unsigned long long aesl_llvm_cbe_937_count = 0;
  static  unsigned long long aesl_llvm_cbe_938_count = 0;
  static  unsigned long long aesl_llvm_cbe_939_count = 0;
  static  unsigned long long aesl_llvm_cbe_940_count = 0;
  static  unsigned long long aesl_llvm_cbe_941_count = 0;
  static  unsigned long long aesl_llvm_cbe_942_count = 0;
  static  unsigned long long aesl_llvm_cbe_943_count = 0;
  static  unsigned long long aesl_llvm_cbe_944_count = 0;
  static  unsigned long long aesl_llvm_cbe_945_count = 0;
  static  unsigned long long aesl_llvm_cbe_946_count = 0;
  static  unsigned long long aesl_llvm_cbe_947_count = 0;
  static  unsigned long long aesl_llvm_cbe_948_count = 0;
  static  unsigned long long aesl_llvm_cbe_949_count = 0;
  static  unsigned long long aesl_llvm_cbe_950_count = 0;
  static  unsigned long long aesl_llvm_cbe_951_count = 0;
  static  unsigned long long aesl_llvm_cbe_952_count = 0;
  static  unsigned long long aesl_llvm_cbe_953_count = 0;
  static  unsigned long long aesl_llvm_cbe_954_count = 0;
  static  unsigned long long aesl_llvm_cbe_955_count = 0;
  static  unsigned long long aesl_llvm_cbe_956_count = 0;
  static  unsigned long long aesl_llvm_cbe_957_count = 0;
  static  unsigned long long aesl_llvm_cbe_958_count = 0;
  static  unsigned long long aesl_llvm_cbe_959_count = 0;
  static  unsigned long long aesl_llvm_cbe_960_count = 0;
  static  unsigned long long aesl_llvm_cbe_961_count = 0;
  static  unsigned long long aesl_llvm_cbe_962_count = 0;
  static  unsigned long long aesl_llvm_cbe_963_count = 0;
  static  unsigned long long aesl_llvm_cbe_964_count = 0;
  static  unsigned long long aesl_llvm_cbe_965_count = 0;
  static  unsigned long long aesl_llvm_cbe_966_count = 0;
  static  unsigned long long aesl_llvm_cbe_967_count = 0;
  static  unsigned long long aesl_llvm_cbe_968_count = 0;
  static  unsigned long long aesl_llvm_cbe_969_count = 0;
  static  unsigned long long aesl_llvm_cbe_970_count = 0;
  static  unsigned long long aesl_llvm_cbe_971_count = 0;
  static  unsigned long long aesl_llvm_cbe_972_count = 0;
  static  unsigned long long aesl_llvm_cbe_973_count = 0;
  static  unsigned long long aesl_llvm_cbe_974_count = 0;
  static  unsigned long long aesl_llvm_cbe_975_count = 0;
  static  unsigned long long aesl_llvm_cbe_976_count = 0;
  static  unsigned long long aesl_llvm_cbe_977_count = 0;
  static  unsigned long long aesl_llvm_cbe_978_count = 0;
  static  unsigned long long aesl_llvm_cbe_979_count = 0;
  static  unsigned long long aesl_llvm_cbe_980_count = 0;
  static  unsigned long long aesl_llvm_cbe_981_count = 0;
  static  unsigned long long aesl_llvm_cbe_982_count = 0;
  static  unsigned long long aesl_llvm_cbe_983_count = 0;
  static  unsigned long long aesl_llvm_cbe_984_count = 0;
  static  unsigned long long aesl_llvm_cbe_985_count = 0;
  static  unsigned long long aesl_llvm_cbe_986_count = 0;
  static  unsigned long long aesl_llvm_cbe_987_count = 0;
  static  unsigned long long aesl_llvm_cbe_988_count = 0;
  static  unsigned long long aesl_llvm_cbe_989_count = 0;
  static  unsigned long long aesl_llvm_cbe_990_count = 0;
  static  unsigned long long aesl_llvm_cbe_991_count = 0;
  static  unsigned long long aesl_llvm_cbe_992_count = 0;
  static  unsigned long long aesl_llvm_cbe_993_count = 0;
  static  unsigned long long aesl_llvm_cbe_994_count = 0;
  static  unsigned long long aesl_llvm_cbe_995_count = 0;
  static  unsigned long long aesl_llvm_cbe_996_count = 0;
  static  unsigned long long aesl_llvm_cbe_997_count = 0;
  static  unsigned long long aesl_llvm_cbe_998_count = 0;
  static  unsigned long long aesl_llvm_cbe_999_count = 0;
  static  unsigned long long aesl_llvm_cbe_1000_count = 0;
  static  unsigned long long aesl_llvm_cbe_1001_count = 0;
  static  unsigned long long aesl_llvm_cbe_1002_count = 0;
  static  unsigned long long aesl_llvm_cbe_1003_count = 0;
  static  unsigned long long aesl_llvm_cbe_1004_count = 0;
  static  unsigned long long aesl_llvm_cbe_1005_count = 0;
  static  unsigned long long aesl_llvm_cbe_1006_count = 0;
  static  unsigned long long aesl_llvm_cbe_1007_count = 0;
  static  unsigned long long aesl_llvm_cbe_1008_count = 0;
  static  unsigned long long aesl_llvm_cbe_1009_count = 0;
  static  unsigned long long aesl_llvm_cbe_1010_count = 0;
  static  unsigned long long aesl_llvm_cbe_1011_count = 0;
  static  unsigned long long aesl_llvm_cbe_1012_count = 0;
  static  unsigned long long aesl_llvm_cbe_1013_count = 0;
  static  unsigned long long aesl_llvm_cbe_1014_count = 0;
  static  unsigned long long aesl_llvm_cbe_1015_count = 0;
  static  unsigned long long aesl_llvm_cbe_1016_count = 0;
  static  unsigned long long aesl_llvm_cbe_1017_count = 0;
  static  unsigned long long aesl_llvm_cbe_1018_count = 0;
  static  unsigned long long aesl_llvm_cbe_1019_count = 0;
  static  unsigned long long aesl_llvm_cbe_1020_count = 0;
  static  unsigned long long aesl_llvm_cbe_1021_count = 0;
  static  unsigned long long aesl_llvm_cbe_1022_count = 0;
  static  unsigned long long aesl_llvm_cbe_1023_count = 0;
  static  unsigned long long aesl_llvm_cbe_1024_count = 0;
  static  unsigned long long aesl_llvm_cbe_1025_count = 0;
  unsigned long long llvm_cbe_tmp__118;
  static  unsigned long long aesl_llvm_cbe_1026_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1044_count = 0;
  unsigned int llvm_cbe_storemerge1044;
  unsigned int llvm_cbe_storemerge1044__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1027_count = 0;
  unsigned long long llvm_cbe_tmp__119;
  static  unsigned long long aesl_llvm_cbe_1028_count = 0;
  signed short *llvm_cbe_tmp__120;
  static  unsigned long long aesl_llvm_cbe_1029_count = 0;
  unsigned short llvm_cbe_tmp__121;
  static  unsigned long long aesl_llvm_cbe_1030_count = 0;
  unsigned int llvm_cbe_tmp__122;
  static  unsigned long long aesl_llvm_cbe_1031_count = 0;
  unsigned int llvm_cbe_tmp__123;
  static  unsigned long long aesl_llvm_cbe_1032_count = 0;
  unsigned int llvm_cbe_tmp__124;
  static  unsigned long long aesl_llvm_cbe_1033_count = 0;
  signed short *llvm_cbe_tmp__125;
  static  unsigned long long aesl_llvm_cbe_1034_count = 0;
  unsigned short llvm_cbe_tmp__126;
  static  unsigned long long aesl_llvm_cbe_1035_count = 0;
  unsigned short llvm_cbe_tmp__127;
  static  unsigned long long aesl_llvm_cbe_1036_count = 0;
  unsigned short llvm_cbe_tmp__128;
  static  unsigned long long aesl_llvm_cbe_1037_count = 0;
  static  unsigned long long aesl_llvm_cbe_1038_count = 0;
  unsigned int llvm_cbe_tmp__129;
  static  unsigned long long aesl_llvm_cbe_1039_count = 0;
  static  unsigned long long aesl_llvm_cbe_1040_count = 0;
  static  unsigned long long aesl_llvm_cbe_1041_count = 0;
  static  unsigned long long aesl_llvm_cbe_1042_count = 0;
  static  unsigned long long aesl_llvm_cbe_1043_count = 0;
  static  unsigned long long aesl_llvm_cbe_1044_count = 0;
  static  unsigned long long aesl_llvm_cbe_1045_count = 0;
  static  unsigned long long aesl_llvm_cbe_1046_count = 0;
  static  unsigned long long aesl_llvm_cbe_1047_count = 0;
  static  unsigned long long aesl_llvm_cbe_1048_count = 0;
  static  unsigned long long aesl_llvm_cbe_1049_count = 0;
  static  unsigned long long aesl_llvm_cbe_1050_count = 0;
  static  unsigned long long aesl_llvm_cbe_1051_count = 0;
  static  unsigned long long aesl_llvm_cbe_1052_count = 0;
  static  unsigned long long aesl_llvm_cbe_1053_count = 0;
  static  unsigned long long aesl_llvm_cbe_1054_count = 0;
  static  unsigned long long aesl_llvm_cbe_1055_count = 0;
  static  unsigned long long aesl_llvm_cbe_1056_count = 0;
  static  unsigned long long aesl_llvm_cbe_1057_count = 0;
  static  unsigned long long aesl_llvm_cbe_1058_count = 0;
  static  unsigned long long aesl_llvm_cbe_1059_count = 0;
  static  unsigned long long aesl_llvm_cbe_1060_count = 0;
  static  unsigned long long aesl_llvm_cbe_1061_count = 0;
  static  unsigned long long aesl_llvm_cbe_1062_count = 0;
  static  unsigned long long aesl_llvm_cbe_1063_count = 0;
  static  unsigned long long aesl_llvm_cbe_1064_count = 0;
  static  unsigned long long aesl_llvm_cbe_1065_count = 0;
  static  unsigned long long aesl_llvm_cbe_1066_count = 0;
  static  unsigned long long aesl_llvm_cbe_1067_count = 0;
  static  unsigned long long aesl_llvm_cbe_1068_count = 0;
  static  unsigned long long aesl_llvm_cbe_1069_count = 0;
  static  unsigned long long aesl_llvm_cbe_1070_count = 0;
  static  unsigned long long aesl_llvm_cbe_1071_count = 0;
  static  unsigned long long aesl_llvm_cbe_1072_count = 0;
  static  unsigned long long aesl_llvm_cbe_1073_count = 0;
  static  unsigned long long aesl_llvm_cbe_1074_count = 0;
  static  unsigned long long aesl_llvm_cbe_1075_count = 0;
  static  unsigned long long aesl_llvm_cbe_1076_count = 0;
  static  unsigned long long aesl_llvm_cbe_1077_count = 0;
  static  unsigned long long aesl_llvm_cbe_1078_count = 0;
  static  unsigned long long aesl_llvm_cbe_1079_count = 0;
  static  unsigned long long aesl_llvm_cbe_1080_count = 0;
  static  unsigned long long aesl_llvm_cbe_1081_count = 0;
  static  unsigned long long aesl_llvm_cbe_1082_count = 0;
  static  unsigned long long aesl_llvm_cbe_1083_count = 0;
  static  unsigned long long aesl_llvm_cbe_1084_count = 0;
  static  unsigned long long aesl_llvm_cbe_1085_count = 0;
  static  unsigned long long aesl_llvm_cbe_1086_count = 0;
  static  unsigned long long aesl_llvm_cbe_1087_count = 0;
  static  unsigned long long aesl_llvm_cbe_1088_count = 0;
  static  unsigned long long aesl_llvm_cbe_1089_count = 0;
  static  unsigned long long aesl_llvm_cbe_1090_count = 0;
  static  unsigned long long aesl_llvm_cbe_1091_count = 0;
  static  unsigned long long aesl_llvm_cbe_1092_count = 0;
  static  unsigned long long aesl_llvm_cbe_1093_count = 0;
  static  unsigned long long aesl_llvm_cbe_1094_count = 0;
  static  unsigned long long aesl_llvm_cbe_1095_count = 0;
  static  unsigned long long aesl_llvm_cbe_1096_count = 0;
  static  unsigned long long aesl_llvm_cbe_1097_count = 0;
  static  unsigned long long aesl_llvm_cbe_1098_count = 0;
  static  unsigned long long aesl_llvm_cbe_1099_count = 0;
  static  unsigned long long aesl_llvm_cbe_1100_count = 0;
  static  unsigned long long aesl_llvm_cbe_1101_count = 0;
  static  unsigned long long aesl_llvm_cbe_1102_count = 0;
  static  unsigned long long aesl_llvm_cbe_1103_count = 0;
  static  unsigned long long aesl_llvm_cbe_1104_count = 0;
  static  unsigned long long aesl_llvm_cbe_1105_count = 0;
  static  unsigned long long aesl_llvm_cbe_1106_count = 0;
  static  unsigned long long aesl_llvm_cbe_1107_count = 0;
  static  unsigned long long aesl_llvm_cbe_1108_count = 0;
  static  unsigned long long aesl_llvm_cbe_1109_count = 0;
  static  unsigned long long aesl_llvm_cbe_1110_count = 0;
  static  unsigned long long aesl_llvm_cbe_1111_count = 0;
  static  unsigned long long aesl_llvm_cbe_1112_count = 0;
  static  unsigned long long aesl_llvm_cbe_1113_count = 0;
  static  unsigned long long aesl_llvm_cbe_1114_count = 0;
  static  unsigned long long aesl_llvm_cbe_1115_count = 0;
  static  unsigned long long aesl_llvm_cbe_1116_count = 0;
  static  unsigned long long aesl_llvm_cbe_1117_count = 0;
  static  unsigned long long aesl_llvm_cbe_1118_count = 0;
  static  unsigned long long aesl_llvm_cbe_1119_count = 0;
  static  unsigned long long aesl_llvm_cbe_1120_count = 0;
  static  unsigned long long aesl_llvm_cbe_1121_count = 0;
  static  unsigned long long aesl_llvm_cbe_1122_count = 0;
  static  unsigned long long aesl_llvm_cbe_1123_count = 0;
  static  unsigned long long aesl_llvm_cbe_1124_count = 0;
  static  unsigned long long aesl_llvm_cbe_1125_count = 0;
  static  unsigned long long aesl_llvm_cbe_1126_count = 0;
  static  unsigned long long aesl_llvm_cbe_1127_count = 0;
  static  unsigned long long aesl_llvm_cbe_1128_count = 0;
  static  unsigned long long aesl_llvm_cbe_1129_count = 0;
  static  unsigned long long aesl_llvm_cbe_1130_count = 0;
  static  unsigned long long aesl_llvm_cbe_1131_count = 0;
  static  unsigned long long aesl_llvm_cbe_1132_count = 0;
  static  unsigned long long aesl_llvm_cbe_1133_count = 0;
  static  unsigned long long aesl_llvm_cbe_1134_count = 0;
  static  unsigned long long aesl_llvm_cbe_1135_count = 0;
  static  unsigned long long aesl_llvm_cbe_1136_count = 0;
  static  unsigned long long aesl_llvm_cbe_1137_count = 0;
  static  unsigned long long aesl_llvm_cbe_1138_count = 0;
  static  unsigned long long aesl_llvm_cbe_1139_count = 0;
  static  unsigned long long aesl_llvm_cbe_1140_count = 0;
  static  unsigned long long aesl_llvm_cbe_1141_count = 0;
  static  unsigned long long aesl_llvm_cbe_1142_count = 0;
  static  unsigned long long aesl_llvm_cbe_1143_count = 0;
  static  unsigned long long aesl_llvm_cbe_1144_count = 0;
  static  unsigned long long aesl_llvm_cbe_1145_count = 0;
  static  unsigned long long aesl_llvm_cbe_1146_count = 0;
  static  unsigned long long aesl_llvm_cbe_1147_count = 0;
  static  unsigned long long aesl_llvm_cbe_1148_count = 0;
  static  unsigned long long aesl_llvm_cbe_1149_count = 0;
  static  unsigned long long aesl_llvm_cbe_1150_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond66_count = 0;
  static  unsigned long long aesl_llvm_cbe_1151_count = 0;
  static  unsigned long long aesl_llvm_cbe_1152_count = 0;
  static  unsigned long long aesl_llvm_cbe_1153_count = 0;
  static  unsigned long long aesl_llvm_cbe_1154_count = 0;
  static  unsigned long long aesl_llvm_cbe_1155_count = 0;
  static  unsigned long long aesl_llvm_cbe_1156_count = 0;
  static  unsigned long long aesl_llvm_cbe_1157_count = 0;
  static  unsigned long long aesl_llvm_cbe_1158_count = 0;
  static  unsigned long long aesl_llvm_cbe_1159_count = 0;
  static  unsigned long long aesl_llvm_cbe_1160_count = 0;
  static  unsigned long long aesl_llvm_cbe_1161_count = 0;
  static  unsigned long long aesl_llvm_cbe_1162_count = 0;
  static  unsigned long long aesl_llvm_cbe_1163_count = 0;
  static  unsigned long long aesl_llvm_cbe_1164_count = 0;
  static  unsigned long long aesl_llvm_cbe_1165_count = 0;
  static  unsigned long long aesl_llvm_cbe_1166_count = 0;
  static  unsigned long long aesl_llvm_cbe_1167_count = 0;
  static  unsigned long long aesl_llvm_cbe_1168_count = 0;
  static  unsigned long long aesl_llvm_cbe_1169_count = 0;
  static  unsigned long long aesl_llvm_cbe_1170_count = 0;
  static  unsigned long long aesl_llvm_cbe_1171_count = 0;
  static  unsigned long long aesl_llvm_cbe_1172_count = 0;
  static  unsigned long long aesl_llvm_cbe_1173_count = 0;
  static  unsigned long long aesl_llvm_cbe_1174_count = 0;
  static  unsigned long long aesl_llvm_cbe_1175_count = 0;
  static  unsigned long long aesl_llvm_cbe_1176_count = 0;
  static  unsigned long long aesl_llvm_cbe_1177_count = 0;
  static  unsigned long long aesl_llvm_cbe_1178_count = 0;
  static  unsigned long long aesl_llvm_cbe_1179_count = 0;
  static  unsigned long long aesl_llvm_cbe_1180_count = 0;
  static  unsigned long long aesl_llvm_cbe_1181_count = 0;
  static  unsigned long long aesl_llvm_cbe_1182_count = 0;
  static  unsigned long long aesl_llvm_cbe_1183_count = 0;
  static  unsigned long long aesl_llvm_cbe_1184_count = 0;
  static  unsigned long long aesl_llvm_cbe_1185_count = 0;
  static  unsigned long long aesl_llvm_cbe_1186_count = 0;
  static  unsigned long long aesl_llvm_cbe_1187_count = 0;
  static  unsigned long long aesl_llvm_cbe_1188_count = 0;
  static  unsigned long long aesl_llvm_cbe_1189_count = 0;
  static  unsigned long long aesl_llvm_cbe_1190_count = 0;
  static  unsigned long long aesl_llvm_cbe_1191_count = 0;
  static  unsigned long long aesl_llvm_cbe_1192_count = 0;
  static  unsigned long long aesl_llvm_cbe_1193_count = 0;
  static  unsigned long long aesl_llvm_cbe_1194_count = 0;
  static  unsigned long long aesl_llvm_cbe_1195_count = 0;
  static  unsigned long long aesl_llvm_cbe_1196_count = 0;
  static  unsigned long long aesl_llvm_cbe_1197_count = 0;
  static  unsigned long long aesl_llvm_cbe_1198_count = 0;
  static  unsigned long long aesl_llvm_cbe_1199_count = 0;
  static  unsigned long long aesl_llvm_cbe_1200_count = 0;
  static  unsigned long long aesl_llvm_cbe_1201_count = 0;
  static  unsigned long long aesl_llvm_cbe_1202_count = 0;
  static  unsigned long long aesl_llvm_cbe_1203_count = 0;
  static  unsigned long long aesl_llvm_cbe_1204_count = 0;
  static  unsigned long long aesl_llvm_cbe_1205_count = 0;
  static  unsigned long long aesl_llvm_cbe_1206_count = 0;
  static  unsigned long long aesl_llvm_cbe_1207_count = 0;
  static  unsigned long long aesl_llvm_cbe_1208_count = 0;
  static  unsigned long long aesl_llvm_cbe_1209_count = 0;
  static  unsigned long long aesl_llvm_cbe_1210_count = 0;
  static  unsigned long long aesl_llvm_cbe_1211_count = 0;
  static  unsigned long long aesl_llvm_cbe_1212_count = 0;
  static  unsigned long long aesl_llvm_cbe_1213_count = 0;
  static  unsigned long long aesl_llvm_cbe_1214_count = 0;
  static  unsigned long long aesl_llvm_cbe_1215_count = 0;
  static  unsigned long long aesl_llvm_cbe_1216_count = 0;
  static  unsigned long long aesl_llvm_cbe_1217_count = 0;
  static  unsigned long long aesl_llvm_cbe_1218_count = 0;
  static  unsigned long long aesl_llvm_cbe_1219_count = 0;
  static  unsigned long long aesl_llvm_cbe_1220_count = 0;
  static  unsigned long long aesl_llvm_cbe_1221_count = 0;
  static  unsigned long long aesl_llvm_cbe_1222_count = 0;
  static  unsigned long long aesl_llvm_cbe_1223_count = 0;
  static  unsigned long long aesl_llvm_cbe_1224_count = 0;
  static  unsigned long long aesl_llvm_cbe_1225_count = 0;
  static  unsigned long long aesl_llvm_cbe_1226_count = 0;
  static  unsigned long long aesl_llvm_cbe_1227_count = 0;
  static  unsigned long long aesl_llvm_cbe_1228_count = 0;
  static  unsigned long long aesl_llvm_cbe_1229_count = 0;
  static  unsigned long long aesl_llvm_cbe_1230_count = 0;
  static  unsigned long long aesl_llvm_cbe_1231_count = 0;
  static  unsigned long long aesl_llvm_cbe_1232_count = 0;
  static  unsigned long long aesl_llvm_cbe_1233_count = 0;
  static  unsigned long long aesl_llvm_cbe_1234_count = 0;
  static  unsigned long long aesl_llvm_cbe_1235_count = 0;
  static  unsigned long long aesl_llvm_cbe_1236_count = 0;
  static  unsigned long long aesl_llvm_cbe_1237_count = 0;
  static  unsigned long long aesl_llvm_cbe_1238_count = 0;
  static  unsigned long long aesl_llvm_cbe_1239_count = 0;
  static  unsigned long long aesl_llvm_cbe_1240_count = 0;
  static  unsigned long long aesl_llvm_cbe_1241_count = 0;
  static  unsigned long long aesl_llvm_cbe_1242_count = 0;
  static  unsigned long long aesl_llvm_cbe_1243_count = 0;
  static  unsigned long long aesl_llvm_cbe_1244_count = 0;
  static  unsigned long long aesl_llvm_cbe_1245_count = 0;
  static  unsigned long long aesl_llvm_cbe_1246_count = 0;
  static  unsigned long long aesl_llvm_cbe_1247_count = 0;
  static  unsigned long long aesl_llvm_cbe_1248_count = 0;
  static  unsigned long long aesl_llvm_cbe_1249_count = 0;
  static  unsigned long long aesl_llvm_cbe_1250_count = 0;
  static  unsigned long long aesl_llvm_cbe_1251_count = 0;
  static  unsigned long long aesl_llvm_cbe_1252_count = 0;
  static  unsigned long long aesl_llvm_cbe_1253_count = 0;
  static  unsigned long long aesl_llvm_cbe_1254_count = 0;
  static  unsigned long long aesl_llvm_cbe_1255_count = 0;
  static  unsigned long long aesl_llvm_cbe_1256_count = 0;
  static  unsigned long long aesl_llvm_cbe_1257_count = 0;
  static  unsigned long long aesl_llvm_cbe_1258_count = 0;
  static  unsigned long long aesl_llvm_cbe_1259_count = 0;
  static  unsigned long long aesl_llvm_cbe_1260_count = 0;
  static  unsigned long long aesl_llvm_cbe_1261_count = 0;
  static  unsigned long long aesl_llvm_cbe_1262_count = 0;
  static  unsigned long long aesl_llvm_cbe_1263_count = 0;
  static  unsigned long long aesl_llvm_cbe_1264_count = 0;
  static  unsigned long long aesl_llvm_cbe_1265_count = 0;
  static  unsigned long long aesl_llvm_cbe_1266_count = 0;
  static  unsigned long long aesl_llvm_cbe_1267_count = 0;
  static  unsigned long long aesl_llvm_cbe_1268_count = 0;
  static  unsigned long long aesl_llvm_cbe_1269_count = 0;
  static  unsigned long long aesl_llvm_cbe_1270_count = 0;
  static  unsigned long long aesl_llvm_cbe_1271_count = 0;
  static  unsigned long long aesl_llvm_cbe_1272_count = 0;
  static  unsigned long long aesl_llvm_cbe_1273_count = 0;
  static  unsigned long long aesl_llvm_cbe_1274_count = 0;
  static  unsigned long long aesl_llvm_cbe_1275_count = 0;
  static  unsigned long long aesl_llvm_cbe_1276_count = 0;
  static  unsigned long long aesl_llvm_cbe_1277_count = 0;
  static  unsigned long long aesl_llvm_cbe_1278_count = 0;
  static  unsigned long long aesl_llvm_cbe_1279_count = 0;
  static  unsigned long long aesl_llvm_cbe_1280_count = 0;
  static  unsigned long long aesl_llvm_cbe_1281_count = 0;
  static  unsigned long long aesl_llvm_cbe_1282_count = 0;
  static  unsigned long long aesl_llvm_cbe_1283_count = 0;
  static  unsigned long long aesl_llvm_cbe_1284_count = 0;
  static  unsigned long long aesl_llvm_cbe_1285_count = 0;
  static  unsigned long long aesl_llvm_cbe_1286_count = 0;
  static  unsigned long long aesl_llvm_cbe_1287_count = 0;
  static  unsigned long long aesl_llvm_cbe_1288_count = 0;
  unsigned int llvm_cbe_tmp__130;
  static  unsigned long long aesl_llvm_cbe_1289_count = 0;
  unsigned long long llvm_cbe_tmp__131;
  static  unsigned long long aesl_llvm_cbe_1290_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge840_count = 0;
  unsigned int llvm_cbe_storemerge840;
  unsigned int llvm_cbe_storemerge840__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1291_count = 0;
  unsigned long long llvm_cbe_tmp__132;
  static  unsigned long long aesl_llvm_cbe_1292_count = 0;
  signed short *llvm_cbe_tmp__133;
  static  unsigned long long aesl_llvm_cbe_1293_count = 0;
  unsigned short llvm_cbe_tmp__134;
  static  unsigned long long aesl_llvm_cbe_1294_count = 0;
  signed short *llvm_cbe_tmp__135;
  static  unsigned long long aesl_llvm_cbe_1295_count = 0;
  unsigned short llvm_cbe_tmp__136;
  static  unsigned long long aesl_llvm_cbe_1296_count = 0;
  unsigned short llvm_cbe_tmp__137;
  static  unsigned long long aesl_llvm_cbe_1297_count = 0;
  unsigned int llvm_cbe_tmp__138;
  static  unsigned long long aesl_llvm_cbe_1298_count = 0;
  unsigned int llvm_cbe_tmp__139;
  static  unsigned long long aesl_llvm_cbe_1299_count = 0;
  unsigned short llvm_cbe_tmp__140;
  static  unsigned long long aesl_llvm_cbe_1300_count = 0;
  static  unsigned long long aesl_llvm_cbe_1301_count = 0;
  unsigned int llvm_cbe_tmp__141;
  static  unsigned long long aesl_llvm_cbe_1302_count = 0;
  static  unsigned long long aesl_llvm_cbe_1303_count = 0;
  static  unsigned long long aesl_llvm_cbe_1304_count = 0;
  static  unsigned long long aesl_llvm_cbe_1305_count = 0;
  static  unsigned long long aesl_llvm_cbe_1306_count = 0;
  static  unsigned long long aesl_llvm_cbe_1307_count = 0;
  static  unsigned long long aesl_llvm_cbe_1308_count = 0;
  static  unsigned long long aesl_llvm_cbe_1309_count = 0;
  static  unsigned long long aesl_llvm_cbe_1310_count = 0;
  static  unsigned long long aesl_llvm_cbe_1311_count = 0;
  static  unsigned long long aesl_llvm_cbe_1312_count = 0;
  static  unsigned long long aesl_llvm_cbe_1313_count = 0;
  static  unsigned long long aesl_llvm_cbe_1314_count = 0;
  static  unsigned long long aesl_llvm_cbe_1315_count = 0;
  static  unsigned long long aesl_llvm_cbe_1316_count = 0;
  static  unsigned long long aesl_llvm_cbe_1317_count = 0;
  static  unsigned long long aesl_llvm_cbe_1318_count = 0;
  static  unsigned long long aesl_llvm_cbe_1319_count = 0;
  static  unsigned long long aesl_llvm_cbe_1320_count = 0;
  static  unsigned long long aesl_llvm_cbe_1321_count = 0;
  static  unsigned long long aesl_llvm_cbe_1322_count = 0;
  static  unsigned long long aesl_llvm_cbe_1323_count = 0;
  static  unsigned long long aesl_llvm_cbe_1324_count = 0;
  static  unsigned long long aesl_llvm_cbe_1325_count = 0;
  static  unsigned long long aesl_llvm_cbe_1326_count = 0;
  static  unsigned long long aesl_llvm_cbe_1327_count = 0;
  static  unsigned long long aesl_llvm_cbe_1328_count = 0;
  static  unsigned long long aesl_llvm_cbe_1329_count = 0;
  static  unsigned long long aesl_llvm_cbe_1330_count = 0;
  static  unsigned long long aesl_llvm_cbe_1331_count = 0;
  static  unsigned long long aesl_llvm_cbe_1332_count = 0;
  static  unsigned long long aesl_llvm_cbe_1333_count = 0;
  static  unsigned long long aesl_llvm_cbe_1334_count = 0;
  static  unsigned long long aesl_llvm_cbe_1335_count = 0;
  static  unsigned long long aesl_llvm_cbe_1336_count = 0;
  static  unsigned long long aesl_llvm_cbe_1337_count = 0;
  static  unsigned long long aesl_llvm_cbe_1338_count = 0;
  static  unsigned long long aesl_llvm_cbe_1339_count = 0;
  static  unsigned long long aesl_llvm_cbe_1340_count = 0;
  static  unsigned long long aesl_llvm_cbe_1341_count = 0;
  static  unsigned long long aesl_llvm_cbe_1342_count = 0;
  static  unsigned long long aesl_llvm_cbe_1343_count = 0;
  static  unsigned long long aesl_llvm_cbe_1344_count = 0;
  static  unsigned long long aesl_llvm_cbe_1345_count = 0;
  static  unsigned long long aesl_llvm_cbe_1346_count = 0;
  static  unsigned long long aesl_llvm_cbe_1347_count = 0;
  static  unsigned long long aesl_llvm_cbe_1348_count = 0;
  static  unsigned long long aesl_llvm_cbe_1349_count = 0;
  static  unsigned long long aesl_llvm_cbe_1350_count = 0;
  static  unsigned long long aesl_llvm_cbe_1351_count = 0;
  static  unsigned long long aesl_llvm_cbe_1352_count = 0;
  static  unsigned long long aesl_llvm_cbe_1353_count = 0;
  static  unsigned long long aesl_llvm_cbe_1354_count = 0;
  static  unsigned long long aesl_llvm_cbe_1355_count = 0;
  static  unsigned long long aesl_llvm_cbe_1356_count = 0;
  static  unsigned long long aesl_llvm_cbe_1357_count = 0;
  static  unsigned long long aesl_llvm_cbe_1358_count = 0;
  static  unsigned long long aesl_llvm_cbe_1359_count = 0;
  static  unsigned long long aesl_llvm_cbe_1360_count = 0;
  static  unsigned long long aesl_llvm_cbe_1361_count = 0;
  static  unsigned long long aesl_llvm_cbe_1362_count = 0;
  static  unsigned long long aesl_llvm_cbe_1363_count = 0;
  static  unsigned long long aesl_llvm_cbe_1364_count = 0;
  static  unsigned long long aesl_llvm_cbe_1365_count = 0;
  static  unsigned long long aesl_llvm_cbe_1366_count = 0;
  static  unsigned long long aesl_llvm_cbe_1367_count = 0;
  static  unsigned long long aesl_llvm_cbe_1368_count = 0;
  static  unsigned long long aesl_llvm_cbe_1369_count = 0;
  static  unsigned long long aesl_llvm_cbe_1370_count = 0;
  static  unsigned long long aesl_llvm_cbe_1371_count = 0;
  static  unsigned long long aesl_llvm_cbe_1372_count = 0;
  static  unsigned long long aesl_llvm_cbe_1373_count = 0;
  static  unsigned long long aesl_llvm_cbe_1374_count = 0;
  static  unsigned long long aesl_llvm_cbe_1375_count = 0;
  static  unsigned long long aesl_llvm_cbe_1376_count = 0;
  static  unsigned long long aesl_llvm_cbe_1377_count = 0;
  static  unsigned long long aesl_llvm_cbe_1378_count = 0;
  static  unsigned long long aesl_llvm_cbe_1379_count = 0;
  static  unsigned long long aesl_llvm_cbe_1380_count = 0;
  static  unsigned long long aesl_llvm_cbe_1381_count = 0;
  static  unsigned long long aesl_llvm_cbe_1382_count = 0;
  static  unsigned long long aesl_llvm_cbe_1383_count = 0;
  static  unsigned long long aesl_llvm_cbe_1384_count = 0;
  static  unsigned long long aesl_llvm_cbe_1385_count = 0;
  static  unsigned long long aesl_llvm_cbe_1386_count = 0;
  static  unsigned long long aesl_llvm_cbe_1387_count = 0;
  static  unsigned long long aesl_llvm_cbe_1388_count = 0;
  static  unsigned long long aesl_llvm_cbe_1389_count = 0;
  static  unsigned long long aesl_llvm_cbe_1390_count = 0;
  static  unsigned long long aesl_llvm_cbe_1391_count = 0;
  static  unsigned long long aesl_llvm_cbe_1392_count = 0;
  static  unsigned long long aesl_llvm_cbe_1393_count = 0;
  static  unsigned long long aesl_llvm_cbe_1394_count = 0;
  static  unsigned long long aesl_llvm_cbe_1395_count = 0;
  static  unsigned long long aesl_llvm_cbe_1396_count = 0;
  static  unsigned long long aesl_llvm_cbe_1397_count = 0;
  static  unsigned long long aesl_llvm_cbe_1398_count = 0;
  static  unsigned long long aesl_llvm_cbe_1399_count = 0;
  static  unsigned long long aesl_llvm_cbe_1400_count = 0;
  static  unsigned long long aesl_llvm_cbe_1401_count = 0;
  static  unsigned long long aesl_llvm_cbe_1402_count = 0;
  static  unsigned long long aesl_llvm_cbe_1403_count = 0;
  static  unsigned long long aesl_llvm_cbe_1404_count = 0;
  static  unsigned long long aesl_llvm_cbe_1405_count = 0;
  static  unsigned long long aesl_llvm_cbe_1406_count = 0;
  static  unsigned long long aesl_llvm_cbe_1407_count = 0;
  static  unsigned long long aesl_llvm_cbe_1408_count = 0;
  static  unsigned long long aesl_llvm_cbe_1409_count = 0;
  static  unsigned long long aesl_llvm_cbe_1410_count = 0;
  static  unsigned long long aesl_llvm_cbe_1411_count = 0;
  static  unsigned long long aesl_llvm_cbe_1412_count = 0;
  static  unsigned long long aesl_llvm_cbe_1413_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond64_count = 0;
  static  unsigned long long aesl_llvm_cbe_1414_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge338_count = 0;
  unsigned int llvm_cbe_storemerge338;
  unsigned int llvm_cbe_storemerge338__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1415_count = 0;
  unsigned long long llvm_cbe_tmp__142;
  static  unsigned long long aesl_llvm_cbe_1416_count = 0;
  signed short *llvm_cbe_tmp__143;
  static  unsigned long long aesl_llvm_cbe_1417_count = 0;
  unsigned short llvm_cbe_tmp__144;
  static  unsigned long long aesl_llvm_cbe_1418_count = 0;
  static  unsigned long long aesl_llvm_cbe_1419_count = 0;
  static  unsigned long long aesl_llvm_cbe_1420_count = 0;
  static  unsigned long long aesl_llvm_cbe_1421_count = 0;
  static  unsigned long long aesl_llvm_cbe_1422_count = 0;
  unsigned long long llvm_cbe_tmp__145;
  static  unsigned long long aesl_llvm_cbe_1423_count = 0;
  signed short *llvm_cbe_tmp__146;
  static  unsigned long long aesl_llvm_cbe_1424_count = 0;
  unsigned short llvm_cbe_tmp__147;
  static  unsigned long long aesl_llvm_cbe_1425_count = 0;
  static  unsigned long long aesl_llvm_cbe_1426_count = 0;
  static  unsigned long long aesl_llvm_cbe_1427_count = 0;
  static  unsigned long long aesl_llvm_cbe_1428_count = 0;
  unsigned int llvm_cbe_tmp__148;
  static  unsigned long long aesl_llvm_cbe_1429_count = 0;
  unsigned int llvm_cbe_tmp__149;
  static  unsigned long long aesl_llvm_cbe_1430_count = 0;
  unsigned long long llvm_cbe_tmp__150;
  static  unsigned long long aesl_llvm_cbe_1431_count = 0;
  signed short *llvm_cbe_tmp__151;
  static  unsigned long long aesl_llvm_cbe_1432_count = 0;
  unsigned short llvm_cbe_tmp__152;
  static  unsigned long long aesl_llvm_cbe_1433_count = 0;
  unsigned short llvm_cbe_tmp__153;
  static  unsigned long long aesl_llvm_cbe_1434_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge30_count = 0;
  unsigned short llvm_cbe_storemerge30;
  unsigned short llvm_cbe_storemerge30__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1435_count = 0;
  static  unsigned long long aesl_llvm_cbe_1436_count = 0;
  unsigned int llvm_cbe_tmp__154;
  static  unsigned long long aesl_llvm_cbe_1437_count = 0;
  static  unsigned long long aesl_llvm_cbe_1438_count = 0;
  static  unsigned long long aesl_llvm_cbe_1439_count = 0;
  static  unsigned long long aesl_llvm_cbe_1440_count = 0;
  static  unsigned long long aesl_llvm_cbe_1441_count = 0;
  static  unsigned long long aesl_llvm_cbe_1442_count = 0;
  static  unsigned long long aesl_llvm_cbe_1443_count = 0;
  static  unsigned long long aesl_llvm_cbe_1444_count = 0;
  static  unsigned long long aesl_llvm_cbe_1445_count = 0;
  static  unsigned long long aesl_llvm_cbe_1446_count = 0;
  static  unsigned long long aesl_llvm_cbe_1447_count = 0;
  static  unsigned long long aesl_llvm_cbe_1448_count = 0;
  static  unsigned long long aesl_llvm_cbe_1449_count = 0;
  static  unsigned long long aesl_llvm_cbe_1450_count = 0;
  static  unsigned long long aesl_llvm_cbe_1451_count = 0;
  static  unsigned long long aesl_llvm_cbe_1452_count = 0;
  static  unsigned long long aesl_llvm_cbe_1453_count = 0;
  static  unsigned long long aesl_llvm_cbe_1454_count = 0;
  static  unsigned long long aesl_llvm_cbe_1455_count = 0;
  static  unsigned long long aesl_llvm_cbe_1456_count = 0;
  static  unsigned long long aesl_llvm_cbe_1457_count = 0;
  static  unsigned long long aesl_llvm_cbe_1458_count = 0;
  static  unsigned long long aesl_llvm_cbe_1459_count = 0;
  static  unsigned long long aesl_llvm_cbe_1460_count = 0;
  static  unsigned long long aesl_llvm_cbe_1461_count = 0;
  static  unsigned long long aesl_llvm_cbe_1462_count = 0;
  static  unsigned long long aesl_llvm_cbe_1463_count = 0;
  static  unsigned long long aesl_llvm_cbe_1464_count = 0;
  static  unsigned long long aesl_llvm_cbe_1465_count = 0;
  static  unsigned long long aesl_llvm_cbe_1466_count = 0;
  static  unsigned long long aesl_llvm_cbe_1467_count = 0;
  static  unsigned long long aesl_llvm_cbe_1468_count = 0;
  static  unsigned long long aesl_llvm_cbe_1469_count = 0;
  static  unsigned long long aesl_llvm_cbe_1470_count = 0;
  static  unsigned long long aesl_llvm_cbe_1471_count = 0;
  static  unsigned long long aesl_llvm_cbe_1472_count = 0;
  static  unsigned long long aesl_llvm_cbe_1473_count = 0;
  static  unsigned long long aesl_llvm_cbe_1474_count = 0;
  static  unsigned long long aesl_llvm_cbe_1475_count = 0;
  static  unsigned long long aesl_llvm_cbe_1476_count = 0;
  static  unsigned long long aesl_llvm_cbe_1477_count = 0;
  static  unsigned long long aesl_llvm_cbe_1478_count = 0;
  static  unsigned long long aesl_llvm_cbe_1479_count = 0;
  static  unsigned long long aesl_llvm_cbe_1480_count = 0;
  static  unsigned long long aesl_llvm_cbe_1481_count = 0;
  static  unsigned long long aesl_llvm_cbe_1482_count = 0;
  static  unsigned long long aesl_llvm_cbe_1483_count = 0;
  static  unsigned long long aesl_llvm_cbe_1484_count = 0;
  static  unsigned long long aesl_llvm_cbe_1485_count = 0;
  static  unsigned long long aesl_llvm_cbe_1486_count = 0;
  static  unsigned long long aesl_llvm_cbe_1487_count = 0;
  static  unsigned long long aesl_llvm_cbe_1488_count = 0;
  static  unsigned long long aesl_llvm_cbe_1489_count = 0;
  static  unsigned long long aesl_llvm_cbe_1490_count = 0;
  static  unsigned long long aesl_llvm_cbe_1491_count = 0;
  static  unsigned long long aesl_llvm_cbe_1492_count = 0;
  static  unsigned long long aesl_llvm_cbe_1493_count = 0;
  static  unsigned long long aesl_llvm_cbe_1494_count = 0;
  static  unsigned long long aesl_llvm_cbe_1495_count = 0;
  static  unsigned long long aesl_llvm_cbe_1496_count = 0;
  static  unsigned long long aesl_llvm_cbe_1497_count = 0;
  static  unsigned long long aesl_llvm_cbe_1498_count = 0;
  static  unsigned long long aesl_llvm_cbe_1499_count = 0;
  static  unsigned long long aesl_llvm_cbe_1500_count = 0;
  static  unsigned long long aesl_llvm_cbe_1501_count = 0;
  static  unsigned long long aesl_llvm_cbe_1502_count = 0;
  static  unsigned long long aesl_llvm_cbe_1503_count = 0;
  static  unsigned long long aesl_llvm_cbe_1504_count = 0;
  static  unsigned long long aesl_llvm_cbe_1505_count = 0;
  static  unsigned long long aesl_llvm_cbe_1506_count = 0;
  static  unsigned long long aesl_llvm_cbe_1507_count = 0;
  static  unsigned long long aesl_llvm_cbe_1508_count = 0;
  static  unsigned long long aesl_llvm_cbe_1509_count = 0;
  static  unsigned long long aesl_llvm_cbe_1510_count = 0;
  static  unsigned long long aesl_llvm_cbe_1511_count = 0;
  static  unsigned long long aesl_llvm_cbe_1512_count = 0;
  static  unsigned long long aesl_llvm_cbe_1513_count = 0;
  static  unsigned long long aesl_llvm_cbe_1514_count = 0;
  static  unsigned long long aesl_llvm_cbe_1515_count = 0;
  static  unsigned long long aesl_llvm_cbe_1516_count = 0;
  static  unsigned long long aesl_llvm_cbe_1517_count = 0;
  static  unsigned long long aesl_llvm_cbe_1518_count = 0;
  static  unsigned long long aesl_llvm_cbe_1519_count = 0;
  static  unsigned long long aesl_llvm_cbe_1520_count = 0;
  static  unsigned long long aesl_llvm_cbe_1521_count = 0;
  static  unsigned long long aesl_llvm_cbe_1522_count = 0;
  static  unsigned long long aesl_llvm_cbe_1523_count = 0;
  static  unsigned long long aesl_llvm_cbe_1524_count = 0;
  static  unsigned long long aesl_llvm_cbe_1525_count = 0;
  static  unsigned long long aesl_llvm_cbe_1526_count = 0;
  static  unsigned long long aesl_llvm_cbe_1527_count = 0;
  static  unsigned long long aesl_llvm_cbe_1528_count = 0;
  static  unsigned long long aesl_llvm_cbe_1529_count = 0;
  static  unsigned long long aesl_llvm_cbe_1530_count = 0;
  static  unsigned long long aesl_llvm_cbe_1531_count = 0;
  static  unsigned long long aesl_llvm_cbe_1532_count = 0;
  static  unsigned long long aesl_llvm_cbe_1533_count = 0;
  static  unsigned long long aesl_llvm_cbe_1534_count = 0;
  static  unsigned long long aesl_llvm_cbe_1535_count = 0;
  static  unsigned long long aesl_llvm_cbe_1536_count = 0;
  static  unsigned long long aesl_llvm_cbe_1537_count = 0;
  static  unsigned long long aesl_llvm_cbe_1538_count = 0;
  static  unsigned long long aesl_llvm_cbe_1539_count = 0;
  static  unsigned long long aesl_llvm_cbe_1540_count = 0;
  static  unsigned long long aesl_llvm_cbe_1541_count = 0;
  static  unsigned long long aesl_llvm_cbe_1542_count = 0;
  static  unsigned long long aesl_llvm_cbe_1543_count = 0;
  static  unsigned long long aesl_llvm_cbe_1544_count = 0;
  static  unsigned long long aesl_llvm_cbe_1545_count = 0;
  static  unsigned long long aesl_llvm_cbe_1546_count = 0;
  static  unsigned long long aesl_llvm_cbe_1547_count = 0;
  static  unsigned long long aesl_llvm_cbe_1548_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond63_count = 0;
  static  unsigned long long aesl_llvm_cbe_1549_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge436_count = 0;
  unsigned int llvm_cbe_storemerge436;
  unsigned int llvm_cbe_storemerge436__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1550_count = 0;
  unsigned long long llvm_cbe_tmp__155;
  static  unsigned long long aesl_llvm_cbe_1551_count = 0;
  signed short *llvm_cbe_tmp__156;
  static  unsigned long long aesl_llvm_cbe_1552_count = 0;
  unsigned short llvm_cbe_tmp__157;
  static  unsigned long long aesl_llvm_cbe_1553_count = 0;
  static  unsigned long long aesl_llvm_cbe_1554_count = 0;
  static  unsigned long long aesl_llvm_cbe_1555_count = 0;
  static  unsigned long long aesl_llvm_cbe_1556_count = 0;
  static  unsigned long long aesl_llvm_cbe_1557_count = 0;
  unsigned long long llvm_cbe_tmp__158;
  static  unsigned long long aesl_llvm_cbe_1558_count = 0;
  signed short *llvm_cbe_tmp__159;
  static  unsigned long long aesl_llvm_cbe_1559_count = 0;
  unsigned short llvm_cbe_tmp__160;
  static  unsigned long long aesl_llvm_cbe_1560_count = 0;
  static  unsigned long long aesl_llvm_cbe_1561_count = 0;
  static  unsigned long long aesl_llvm_cbe_1562_count = 0;
  static  unsigned long long aesl_llvm_cbe_1563_count = 0;
  unsigned int llvm_cbe_tmp__161;
  static  unsigned long long aesl_llvm_cbe_1564_count = 0;
  unsigned int llvm_cbe_tmp__162;
  static  unsigned long long aesl_llvm_cbe_1565_count = 0;
  unsigned long long llvm_cbe_tmp__163;
  static  unsigned long long aesl_llvm_cbe_1566_count = 0;
  signed short *llvm_cbe_tmp__164;
  static  unsigned long long aesl_llvm_cbe_1567_count = 0;
  unsigned short llvm_cbe_tmp__165;
  static  unsigned long long aesl_llvm_cbe_1568_count = 0;
  unsigned short llvm_cbe_tmp__166;
  static  unsigned long long aesl_llvm_cbe_1569_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge27_count = 0;
  unsigned short llvm_cbe_storemerge27;
  unsigned short llvm_cbe_storemerge27__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1570_count = 0;
  static  unsigned long long aesl_llvm_cbe_1571_count = 0;
  unsigned int llvm_cbe_tmp__167;
  static  unsigned long long aesl_llvm_cbe_1572_count = 0;
  static  unsigned long long aesl_llvm_cbe_1573_count = 0;
  static  unsigned long long aesl_llvm_cbe_1574_count = 0;
  static  unsigned long long aesl_llvm_cbe_1575_count = 0;
  static  unsigned long long aesl_llvm_cbe_1576_count = 0;
  static  unsigned long long aesl_llvm_cbe_1577_count = 0;
  static  unsigned long long aesl_llvm_cbe_1578_count = 0;
  static  unsigned long long aesl_llvm_cbe_1579_count = 0;
  static  unsigned long long aesl_llvm_cbe_1580_count = 0;
  static  unsigned long long aesl_llvm_cbe_1581_count = 0;
  static  unsigned long long aesl_llvm_cbe_1582_count = 0;
  static  unsigned long long aesl_llvm_cbe_1583_count = 0;
  static  unsigned long long aesl_llvm_cbe_1584_count = 0;
  static  unsigned long long aesl_llvm_cbe_1585_count = 0;
  static  unsigned long long aesl_llvm_cbe_1586_count = 0;
  static  unsigned long long aesl_llvm_cbe_1587_count = 0;
  static  unsigned long long aesl_llvm_cbe_1588_count = 0;
  static  unsigned long long aesl_llvm_cbe_1589_count = 0;
  static  unsigned long long aesl_llvm_cbe_1590_count = 0;
  static  unsigned long long aesl_llvm_cbe_1591_count = 0;
  static  unsigned long long aesl_llvm_cbe_1592_count = 0;
  static  unsigned long long aesl_llvm_cbe_1593_count = 0;
  static  unsigned long long aesl_llvm_cbe_1594_count = 0;
  static  unsigned long long aesl_llvm_cbe_1595_count = 0;
  static  unsigned long long aesl_llvm_cbe_1596_count = 0;
  static  unsigned long long aesl_llvm_cbe_1597_count = 0;
  static  unsigned long long aesl_llvm_cbe_1598_count = 0;
  static  unsigned long long aesl_llvm_cbe_1599_count = 0;
  static  unsigned long long aesl_llvm_cbe_1600_count = 0;
  static  unsigned long long aesl_llvm_cbe_1601_count = 0;
  static  unsigned long long aesl_llvm_cbe_1602_count = 0;
  static  unsigned long long aesl_llvm_cbe_1603_count = 0;
  static  unsigned long long aesl_llvm_cbe_1604_count = 0;
  static  unsigned long long aesl_llvm_cbe_1605_count = 0;
  static  unsigned long long aesl_llvm_cbe_1606_count = 0;
  static  unsigned long long aesl_llvm_cbe_1607_count = 0;
  static  unsigned long long aesl_llvm_cbe_1608_count = 0;
  static  unsigned long long aesl_llvm_cbe_1609_count = 0;
  static  unsigned long long aesl_llvm_cbe_1610_count = 0;
  static  unsigned long long aesl_llvm_cbe_1611_count = 0;
  static  unsigned long long aesl_llvm_cbe_1612_count = 0;
  static  unsigned long long aesl_llvm_cbe_1613_count = 0;
  static  unsigned long long aesl_llvm_cbe_1614_count = 0;
  static  unsigned long long aesl_llvm_cbe_1615_count = 0;
  static  unsigned long long aesl_llvm_cbe_1616_count = 0;
  static  unsigned long long aesl_llvm_cbe_1617_count = 0;
  static  unsigned long long aesl_llvm_cbe_1618_count = 0;
  static  unsigned long long aesl_llvm_cbe_1619_count = 0;
  static  unsigned long long aesl_llvm_cbe_1620_count = 0;
  static  unsigned long long aesl_llvm_cbe_1621_count = 0;
  static  unsigned long long aesl_llvm_cbe_1622_count = 0;
  static  unsigned long long aesl_llvm_cbe_1623_count = 0;
  static  unsigned long long aesl_llvm_cbe_1624_count = 0;
  static  unsigned long long aesl_llvm_cbe_1625_count = 0;
  static  unsigned long long aesl_llvm_cbe_1626_count = 0;
  static  unsigned long long aesl_llvm_cbe_1627_count = 0;
  static  unsigned long long aesl_llvm_cbe_1628_count = 0;
  static  unsigned long long aesl_llvm_cbe_1629_count = 0;
  static  unsigned long long aesl_llvm_cbe_1630_count = 0;
  static  unsigned long long aesl_llvm_cbe_1631_count = 0;
  static  unsigned long long aesl_llvm_cbe_1632_count = 0;
  static  unsigned long long aesl_llvm_cbe_1633_count = 0;
  static  unsigned long long aesl_llvm_cbe_1634_count = 0;
  static  unsigned long long aesl_llvm_cbe_1635_count = 0;
  static  unsigned long long aesl_llvm_cbe_1636_count = 0;
  static  unsigned long long aesl_llvm_cbe_1637_count = 0;
  static  unsigned long long aesl_llvm_cbe_1638_count = 0;
  static  unsigned long long aesl_llvm_cbe_1639_count = 0;
  static  unsigned long long aesl_llvm_cbe_1640_count = 0;
  static  unsigned long long aesl_llvm_cbe_1641_count = 0;
  static  unsigned long long aesl_llvm_cbe_1642_count = 0;
  static  unsigned long long aesl_llvm_cbe_1643_count = 0;
  static  unsigned long long aesl_llvm_cbe_1644_count = 0;
  static  unsigned long long aesl_llvm_cbe_1645_count = 0;
  static  unsigned long long aesl_llvm_cbe_1646_count = 0;
  static  unsigned long long aesl_llvm_cbe_1647_count = 0;
  static  unsigned long long aesl_llvm_cbe_1648_count = 0;
  static  unsigned long long aesl_llvm_cbe_1649_count = 0;
  static  unsigned long long aesl_llvm_cbe_1650_count = 0;
  static  unsigned long long aesl_llvm_cbe_1651_count = 0;
  static  unsigned long long aesl_llvm_cbe_1652_count = 0;
  static  unsigned long long aesl_llvm_cbe_1653_count = 0;
  static  unsigned long long aesl_llvm_cbe_1654_count = 0;
  static  unsigned long long aesl_llvm_cbe_1655_count = 0;
  static  unsigned long long aesl_llvm_cbe_1656_count = 0;
  static  unsigned long long aesl_llvm_cbe_1657_count = 0;
  static  unsigned long long aesl_llvm_cbe_1658_count = 0;
  static  unsigned long long aesl_llvm_cbe_1659_count = 0;
  static  unsigned long long aesl_llvm_cbe_1660_count = 0;
  static  unsigned long long aesl_llvm_cbe_1661_count = 0;
  static  unsigned long long aesl_llvm_cbe_1662_count = 0;
  static  unsigned long long aesl_llvm_cbe_1663_count = 0;
  static  unsigned long long aesl_llvm_cbe_1664_count = 0;
  static  unsigned long long aesl_llvm_cbe_1665_count = 0;
  static  unsigned long long aesl_llvm_cbe_1666_count = 0;
  static  unsigned long long aesl_llvm_cbe_1667_count = 0;
  static  unsigned long long aesl_llvm_cbe_1668_count = 0;
  static  unsigned long long aesl_llvm_cbe_1669_count = 0;
  static  unsigned long long aesl_llvm_cbe_1670_count = 0;
  static  unsigned long long aesl_llvm_cbe_1671_count = 0;
  static  unsigned long long aesl_llvm_cbe_1672_count = 0;
  static  unsigned long long aesl_llvm_cbe_1673_count = 0;
  static  unsigned long long aesl_llvm_cbe_1674_count = 0;
  static  unsigned long long aesl_llvm_cbe_1675_count = 0;
  static  unsigned long long aesl_llvm_cbe_1676_count = 0;
  static  unsigned long long aesl_llvm_cbe_1677_count = 0;
  static  unsigned long long aesl_llvm_cbe_1678_count = 0;
  static  unsigned long long aesl_llvm_cbe_1679_count = 0;
  static  unsigned long long aesl_llvm_cbe_1680_count = 0;
  static  unsigned long long aesl_llvm_cbe_1681_count = 0;
  static  unsigned long long aesl_llvm_cbe_1682_count = 0;
  static  unsigned long long aesl_llvm_cbe_1683_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond62_count = 0;
  static  unsigned long long aesl_llvm_cbe_1684_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge534_count = 0;
  unsigned int llvm_cbe_storemerge534;
  unsigned int llvm_cbe_storemerge534__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1685_count = 0;
  unsigned long long llvm_cbe_tmp__168;
  static  unsigned long long aesl_llvm_cbe_1686_count = 0;
  signed short *llvm_cbe_tmp__169;
  static  unsigned long long aesl_llvm_cbe_1687_count = 0;
  unsigned short llvm_cbe_tmp__170;
  static  unsigned long long aesl_llvm_cbe_1688_count = 0;
  static  unsigned long long aesl_llvm_cbe_1689_count = 0;
  static  unsigned long long aesl_llvm_cbe_1690_count = 0;
  static  unsigned long long aesl_llvm_cbe_1691_count = 0;
  static  unsigned long long aesl_llvm_cbe_1692_count = 0;
  unsigned long long llvm_cbe_tmp__171;
  static  unsigned long long aesl_llvm_cbe_1693_count = 0;
  signed short *llvm_cbe_tmp__172;
  static  unsigned long long aesl_llvm_cbe_1694_count = 0;
  unsigned short llvm_cbe_tmp__173;
  static  unsigned long long aesl_llvm_cbe_1695_count = 0;
  static  unsigned long long aesl_llvm_cbe_1696_count = 0;
  static  unsigned long long aesl_llvm_cbe_1697_count = 0;
  static  unsigned long long aesl_llvm_cbe_1698_count = 0;
  unsigned int llvm_cbe_tmp__174;
  static  unsigned long long aesl_llvm_cbe_1699_count = 0;
  unsigned int llvm_cbe_tmp__175;
  static  unsigned long long aesl_llvm_cbe_1700_count = 0;
  unsigned long long llvm_cbe_tmp__176;
  static  unsigned long long aesl_llvm_cbe_1701_count = 0;
  signed short *llvm_cbe_tmp__177;
  static  unsigned long long aesl_llvm_cbe_1702_count = 0;
  unsigned short llvm_cbe_tmp__178;
  static  unsigned long long aesl_llvm_cbe_1703_count = 0;
  unsigned short llvm_cbe_tmp__179;
  static  unsigned long long aesl_llvm_cbe_1704_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge21_count = 0;
  unsigned short llvm_cbe_storemerge21;
  unsigned short llvm_cbe_storemerge21__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1705_count = 0;
  static  unsigned long long aesl_llvm_cbe_1706_count = 0;
  signed short *llvm_cbe_tmp__180;
  static  unsigned long long aesl_llvm_cbe_1707_count = 0;
  unsigned short llvm_cbe_tmp__181;
  static  unsigned long long aesl_llvm_cbe_1708_count = 0;
  static  unsigned long long aesl_llvm_cbe_1709_count = 0;
  static  unsigned long long aesl_llvm_cbe_1710_count = 0;
  static  unsigned long long aesl_llvm_cbe_1711_count = 0;
  static  unsigned long long aesl_llvm_cbe_1712_count = 0;
  unsigned long long llvm_cbe_tmp__182;
  static  unsigned long long aesl_llvm_cbe_1713_count = 0;
  signed short *llvm_cbe_tmp__183;
  static  unsigned long long aesl_llvm_cbe_1714_count = 0;
  unsigned short llvm_cbe_tmp__184;
  static  unsigned long long aesl_llvm_cbe_1715_count = 0;
  static  unsigned long long aesl_llvm_cbe_1716_count = 0;
  static  unsigned long long aesl_llvm_cbe_1717_count = 0;
  static  unsigned long long aesl_llvm_cbe_1718_count = 0;
  unsigned int llvm_cbe_tmp__185;
  static  unsigned long long aesl_llvm_cbe_1719_count = 0;
  unsigned int llvm_cbe_tmp__186;
  static  unsigned long long aesl_llvm_cbe_1720_count = 0;
  unsigned long long llvm_cbe_tmp__187;
  static  unsigned long long aesl_llvm_cbe_1721_count = 0;
  signed short *llvm_cbe_tmp__188;
  static  unsigned long long aesl_llvm_cbe_1722_count = 0;
  unsigned short llvm_cbe_tmp__189;
  static  unsigned long long aesl_llvm_cbe_1723_count = 0;
  unsigned short llvm_cbe_tmp__190;
  static  unsigned long long aesl_llvm_cbe_1724_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge24_count = 0;
  unsigned short llvm_cbe_storemerge24;
  unsigned short llvm_cbe_storemerge24__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1725_count = 0;
  static  unsigned long long aesl_llvm_cbe_1726_count = 0;
  unsigned int llvm_cbe_tmp__191;
  static  unsigned long long aesl_llvm_cbe_1727_count = 0;
  static  unsigned long long aesl_llvm_cbe_1728_count = 0;
  static  unsigned long long aesl_llvm_cbe_1729_count = 0;
  static  unsigned long long aesl_llvm_cbe_1730_count = 0;
  static  unsigned long long aesl_llvm_cbe_1731_count = 0;
  static  unsigned long long aesl_llvm_cbe_1732_count = 0;
  static  unsigned long long aesl_llvm_cbe_1733_count = 0;
  static  unsigned long long aesl_llvm_cbe_1734_count = 0;
  static  unsigned long long aesl_llvm_cbe_1735_count = 0;
  static  unsigned long long aesl_llvm_cbe_1736_count = 0;
  static  unsigned long long aesl_llvm_cbe_1737_count = 0;
  static  unsigned long long aesl_llvm_cbe_1738_count = 0;
  static  unsigned long long aesl_llvm_cbe_1739_count = 0;
  static  unsigned long long aesl_llvm_cbe_1740_count = 0;
  static  unsigned long long aesl_llvm_cbe_1741_count = 0;
  static  unsigned long long aesl_llvm_cbe_1742_count = 0;
  static  unsigned long long aesl_llvm_cbe_1743_count = 0;
  static  unsigned long long aesl_llvm_cbe_1744_count = 0;
  static  unsigned long long aesl_llvm_cbe_1745_count = 0;
  static  unsigned long long aesl_llvm_cbe_1746_count = 0;
  static  unsigned long long aesl_llvm_cbe_1747_count = 0;
  static  unsigned long long aesl_llvm_cbe_1748_count = 0;
  static  unsigned long long aesl_llvm_cbe_1749_count = 0;
  static  unsigned long long aesl_llvm_cbe_1750_count = 0;
  static  unsigned long long aesl_llvm_cbe_1751_count = 0;
  static  unsigned long long aesl_llvm_cbe_1752_count = 0;
  static  unsigned long long aesl_llvm_cbe_1753_count = 0;
  static  unsigned long long aesl_llvm_cbe_1754_count = 0;
  static  unsigned long long aesl_llvm_cbe_1755_count = 0;
  static  unsigned long long aesl_llvm_cbe_1756_count = 0;
  static  unsigned long long aesl_llvm_cbe_1757_count = 0;
  static  unsigned long long aesl_llvm_cbe_1758_count = 0;
  static  unsigned long long aesl_llvm_cbe_1759_count = 0;
  static  unsigned long long aesl_llvm_cbe_1760_count = 0;
  static  unsigned long long aesl_llvm_cbe_1761_count = 0;
  static  unsigned long long aesl_llvm_cbe_1762_count = 0;
  static  unsigned long long aesl_llvm_cbe_1763_count = 0;
  static  unsigned long long aesl_llvm_cbe_1764_count = 0;
  static  unsigned long long aesl_llvm_cbe_1765_count = 0;
  static  unsigned long long aesl_llvm_cbe_1766_count = 0;
  static  unsigned long long aesl_llvm_cbe_1767_count = 0;
  static  unsigned long long aesl_llvm_cbe_1768_count = 0;
  static  unsigned long long aesl_llvm_cbe_1769_count = 0;
  static  unsigned long long aesl_llvm_cbe_1770_count = 0;
  static  unsigned long long aesl_llvm_cbe_1771_count = 0;
  static  unsigned long long aesl_llvm_cbe_1772_count = 0;
  static  unsigned long long aesl_llvm_cbe_1773_count = 0;
  static  unsigned long long aesl_llvm_cbe_1774_count = 0;
  static  unsigned long long aesl_llvm_cbe_1775_count = 0;
  static  unsigned long long aesl_llvm_cbe_1776_count = 0;
  static  unsigned long long aesl_llvm_cbe_1777_count = 0;
  static  unsigned long long aesl_llvm_cbe_1778_count = 0;
  static  unsigned long long aesl_llvm_cbe_1779_count = 0;
  static  unsigned long long aesl_llvm_cbe_1780_count = 0;
  static  unsigned long long aesl_llvm_cbe_1781_count = 0;
  static  unsigned long long aesl_llvm_cbe_1782_count = 0;
  static  unsigned long long aesl_llvm_cbe_1783_count = 0;
  static  unsigned long long aesl_llvm_cbe_1784_count = 0;
  static  unsigned long long aesl_llvm_cbe_1785_count = 0;
  static  unsigned long long aesl_llvm_cbe_1786_count = 0;
  static  unsigned long long aesl_llvm_cbe_1787_count = 0;
  static  unsigned long long aesl_llvm_cbe_1788_count = 0;
  static  unsigned long long aesl_llvm_cbe_1789_count = 0;
  static  unsigned long long aesl_llvm_cbe_1790_count = 0;
  static  unsigned long long aesl_llvm_cbe_1791_count = 0;
  static  unsigned long long aesl_llvm_cbe_1792_count = 0;
  static  unsigned long long aesl_llvm_cbe_1793_count = 0;
  static  unsigned long long aesl_llvm_cbe_1794_count = 0;
  static  unsigned long long aesl_llvm_cbe_1795_count = 0;
  static  unsigned long long aesl_llvm_cbe_1796_count = 0;
  static  unsigned long long aesl_llvm_cbe_1797_count = 0;
  static  unsigned long long aesl_llvm_cbe_1798_count = 0;
  static  unsigned long long aesl_llvm_cbe_1799_count = 0;
  static  unsigned long long aesl_llvm_cbe_1800_count = 0;
  static  unsigned long long aesl_llvm_cbe_1801_count = 0;
  static  unsigned long long aesl_llvm_cbe_1802_count = 0;
  static  unsigned long long aesl_llvm_cbe_1803_count = 0;
  static  unsigned long long aesl_llvm_cbe_1804_count = 0;
  static  unsigned long long aesl_llvm_cbe_1805_count = 0;
  static  unsigned long long aesl_llvm_cbe_1806_count = 0;
  static  unsigned long long aesl_llvm_cbe_1807_count = 0;
  static  unsigned long long aesl_llvm_cbe_1808_count = 0;
  static  unsigned long long aesl_llvm_cbe_1809_count = 0;
  static  unsigned long long aesl_llvm_cbe_1810_count = 0;
  static  unsigned long long aesl_llvm_cbe_1811_count = 0;
  static  unsigned long long aesl_llvm_cbe_1812_count = 0;
  static  unsigned long long aesl_llvm_cbe_1813_count = 0;
  static  unsigned long long aesl_llvm_cbe_1814_count = 0;
  static  unsigned long long aesl_llvm_cbe_1815_count = 0;
  static  unsigned long long aesl_llvm_cbe_1816_count = 0;
  static  unsigned long long aesl_llvm_cbe_1817_count = 0;
  static  unsigned long long aesl_llvm_cbe_1818_count = 0;
  static  unsigned long long aesl_llvm_cbe_1819_count = 0;
  static  unsigned long long aesl_llvm_cbe_1820_count = 0;
  static  unsigned long long aesl_llvm_cbe_1821_count = 0;
  static  unsigned long long aesl_llvm_cbe_1822_count = 0;
  static  unsigned long long aesl_llvm_cbe_1823_count = 0;
  static  unsigned long long aesl_llvm_cbe_1824_count = 0;
  static  unsigned long long aesl_llvm_cbe_1825_count = 0;
  static  unsigned long long aesl_llvm_cbe_1826_count = 0;
  static  unsigned long long aesl_llvm_cbe_1827_count = 0;
  static  unsigned long long aesl_llvm_cbe_1828_count = 0;
  static  unsigned long long aesl_llvm_cbe_1829_count = 0;
  static  unsigned long long aesl_llvm_cbe_1830_count = 0;
  static  unsigned long long aesl_llvm_cbe_1831_count = 0;
  static  unsigned long long aesl_llvm_cbe_1832_count = 0;
  static  unsigned long long aesl_llvm_cbe_1833_count = 0;
  static  unsigned long long aesl_llvm_cbe_1834_count = 0;
  static  unsigned long long aesl_llvm_cbe_1835_count = 0;
  static  unsigned long long aesl_llvm_cbe_1836_count = 0;
  static  unsigned long long aesl_llvm_cbe_1837_count = 0;
  static  unsigned long long aesl_llvm_cbe_1838_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond61_count = 0;
  static  unsigned long long aesl_llvm_cbe_1839_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge632_count = 0;
  unsigned int llvm_cbe_storemerge632;
  unsigned int llvm_cbe_storemerge632__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1840_count = 0;
  unsigned long long llvm_cbe_tmp__192;
  static  unsigned long long aesl_llvm_cbe_1841_count = 0;
  signed short *llvm_cbe_tmp__193;
  static  unsigned long long aesl_llvm_cbe_1842_count = 0;
  unsigned short llvm_cbe_tmp__194;
  static  unsigned long long aesl_llvm_cbe_1843_count = 0;
  unsigned int llvm_cbe_tmp__195;
  static  unsigned long long aesl_llvm_cbe_1844_count = 0;
  signed short *llvm_cbe_tmp__196;
  static  unsigned long long aesl_llvm_cbe_1845_count = 0;
  unsigned short llvm_cbe_tmp__197;
  static  unsigned long long aesl_llvm_cbe_1846_count = 0;
  unsigned int llvm_cbe_tmp__198;
  static  unsigned long long aesl_llvm_cbe_1847_count = 0;
  unsigned int llvm_cbe_tmp__199;
  static  unsigned long long aesl_llvm_cbe_1848_count = 0;
  unsigned int llvm_cbe_tmp__200;
  static  unsigned long long aesl_llvm_cbe_1849_count = 0;
  signed short *llvm_cbe_tmp__201;
  static  unsigned long long aesl_llvm_cbe_1850_count = 0;
  unsigned short llvm_cbe_tmp__202;
  static  unsigned long long aesl_llvm_cbe_1851_count = 0;
  unsigned int llvm_cbe_tmp__203;
  static  unsigned long long aesl_llvm_cbe_1852_count = 0;
  signed short *llvm_cbe_tmp__204;
  static  unsigned long long aesl_llvm_cbe_1853_count = 0;
  unsigned short llvm_cbe_tmp__205;
  static  unsigned long long aesl_llvm_cbe_1854_count = 0;
  unsigned int llvm_cbe_tmp__206;
  static  unsigned long long aesl_llvm_cbe_1855_count = 0;
  unsigned int llvm_cbe_tmp__207;
  static  unsigned long long aesl_llvm_cbe_1856_count = 0;
  unsigned int llvm_cbe_tmp__208;
  static  unsigned long long aesl_llvm_cbe_1857_count = 0;
  unsigned int llvm_cbe_tmp__209;
  static  unsigned long long aesl_llvm_cbe_1858_count = 0;
  unsigned int llvm_cbe_tmp__210;
  static  unsigned long long aesl_llvm_cbe_1859_count = 0;
  unsigned short llvm_cbe_tmp__211;
  static  unsigned long long aesl_llvm_cbe_1860_count = 0;
  static  unsigned long long aesl_llvm_cbe_1861_count = 0;
  unsigned int llvm_cbe_tmp__212;
  static  unsigned long long aesl_llvm_cbe_1862_count = 0;
  unsigned int llvm_cbe_tmp__213;
  static  unsigned long long aesl_llvm_cbe_1863_count = 0;
  unsigned short llvm_cbe_tmp__214;
  static  unsigned long long aesl_llvm_cbe_1864_count = 0;
  signed short *llvm_cbe_tmp__215;
  static  unsigned long long aesl_llvm_cbe_1865_count = 0;
  static  unsigned long long aesl_llvm_cbe_1866_count = 0;
  static  unsigned long long aesl_llvm_cbe_1867_count = 0;
  static  unsigned long long aesl_llvm_cbe_1868_count = 0;
  static  unsigned long long aesl_llvm_cbe_1869_count = 0;
  static  unsigned long long aesl_llvm_cbe_1870_count = 0;
  unsigned long long llvm_cbe_tmp__216;
  static  unsigned long long aesl_llvm_cbe_1871_count = 0;
  signed short *llvm_cbe_tmp__217;
  static  unsigned long long aesl_llvm_cbe_1872_count = 0;
  unsigned short llvm_cbe_tmp__218;
  static  unsigned long long aesl_llvm_cbe_1873_count = 0;
  static  unsigned long long aesl_llvm_cbe_1874_count = 0;
  static  unsigned long long aesl_llvm_cbe_1875_count = 0;
  static  unsigned long long aesl_llvm_cbe_1876_count = 0;
  unsigned int llvm_cbe_tmp__219;
  static  unsigned long long aesl_llvm_cbe_1877_count = 0;
  unsigned int llvm_cbe_tmp__220;
  static  unsigned long long aesl_llvm_cbe_1878_count = 0;
  unsigned long long llvm_cbe_tmp__221;
  static  unsigned long long aesl_llvm_cbe_1879_count = 0;
  signed short *llvm_cbe_tmp__222;
  static  unsigned long long aesl_llvm_cbe_1880_count = 0;
  unsigned short llvm_cbe_tmp__223;
  static  unsigned long long aesl_llvm_cbe_1881_count = 0;
  unsigned short llvm_cbe_tmp__224;
  static  unsigned long long aesl_llvm_cbe_1882_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge18_count = 0;
  unsigned short llvm_cbe_storemerge18;
  unsigned short llvm_cbe_storemerge18__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_1883_count = 0;
  unsigned int llvm_cbe_tmp__225;
  static  unsigned long long aesl_llvm_cbe_1884_count = 0;
  signed short *llvm_cbe_tmp__226;
  static  unsigned long long aesl_llvm_cbe_1885_count = 0;
  unsigned short llvm_cbe_tmp__227;
  static  unsigned long long aesl_llvm_cbe_1886_count = 0;
  unsigned int llvm_cbe_tmp__228;
  static  unsigned long long aesl_llvm_cbe_1887_count = 0;
  unsigned int llvm_cbe_tmp__229;
  static  unsigned long long aesl_llvm_cbe_1888_count = 0;
  unsigned int llvm_cbe_tmp__230;
  static  unsigned long long aesl_llvm_cbe_1889_count = 0;
  unsigned short llvm_cbe_tmp__231;
  static  unsigned long long aesl_llvm_cbe_1890_count = 0;
  static  unsigned long long aesl_llvm_cbe_1891_count = 0;
  unsigned int llvm_cbe_tmp__232;
  static  unsigned long long aesl_llvm_cbe_1892_count = 0;
  static  unsigned long long aesl_llvm_cbe_1893_count = 0;
  static  unsigned long long aesl_llvm_cbe_1894_count = 0;
  static  unsigned long long aesl_llvm_cbe_1895_count = 0;
  static  unsigned long long aesl_llvm_cbe_1896_count = 0;
  static  unsigned long long aesl_llvm_cbe_1897_count = 0;
  static  unsigned long long aesl_llvm_cbe_1898_count = 0;
  static  unsigned long long aesl_llvm_cbe_1899_count = 0;
  static  unsigned long long aesl_llvm_cbe_1900_count = 0;
  static  unsigned long long aesl_llvm_cbe_1901_count = 0;
  static  unsigned long long aesl_llvm_cbe_1902_count = 0;
  static  unsigned long long aesl_llvm_cbe_1903_count = 0;
  static  unsigned long long aesl_llvm_cbe_1904_count = 0;
  static  unsigned long long aesl_llvm_cbe_1905_count = 0;
  static  unsigned long long aesl_llvm_cbe_1906_count = 0;
  static  unsigned long long aesl_llvm_cbe_1907_count = 0;
  static  unsigned long long aesl_llvm_cbe_1908_count = 0;
  static  unsigned long long aesl_llvm_cbe_1909_count = 0;
  static  unsigned long long aesl_llvm_cbe_1910_count = 0;
  static  unsigned long long aesl_llvm_cbe_1911_count = 0;
  static  unsigned long long aesl_llvm_cbe_1912_count = 0;
  static  unsigned long long aesl_llvm_cbe_1913_count = 0;
  static  unsigned long long aesl_llvm_cbe_1914_count = 0;
  static  unsigned long long aesl_llvm_cbe_1915_count = 0;
  static  unsigned long long aesl_llvm_cbe_1916_count = 0;
  static  unsigned long long aesl_llvm_cbe_1917_count = 0;
  static  unsigned long long aesl_llvm_cbe_1918_count = 0;
  static  unsigned long long aesl_llvm_cbe_1919_count = 0;
  static  unsigned long long aesl_llvm_cbe_1920_count = 0;
  static  unsigned long long aesl_llvm_cbe_1921_count = 0;
  static  unsigned long long aesl_llvm_cbe_1922_count = 0;
  static  unsigned long long aesl_llvm_cbe_1923_count = 0;
  static  unsigned long long aesl_llvm_cbe_1924_count = 0;
  static  unsigned long long aesl_llvm_cbe_1925_count = 0;
  static  unsigned long long aesl_llvm_cbe_1926_count = 0;
  static  unsigned long long aesl_llvm_cbe_1927_count = 0;
  static  unsigned long long aesl_llvm_cbe_1928_count = 0;
  static  unsigned long long aesl_llvm_cbe_1929_count = 0;
  static  unsigned long long aesl_llvm_cbe_1930_count = 0;
  static  unsigned long long aesl_llvm_cbe_1931_count = 0;
  static  unsigned long long aesl_llvm_cbe_1932_count = 0;
  static  unsigned long long aesl_llvm_cbe_1933_count = 0;
  static  unsigned long long aesl_llvm_cbe_1934_count = 0;
  static  unsigned long long aesl_llvm_cbe_1935_count = 0;
  static  unsigned long long aesl_llvm_cbe_1936_count = 0;
  static  unsigned long long aesl_llvm_cbe_1937_count = 0;
  static  unsigned long long aesl_llvm_cbe_1938_count = 0;
  static  unsigned long long aesl_llvm_cbe_1939_count = 0;
  static  unsigned long long aesl_llvm_cbe_1940_count = 0;
  static  unsigned long long aesl_llvm_cbe_1941_count = 0;
  static  unsigned long long aesl_llvm_cbe_1942_count = 0;
  static  unsigned long long aesl_llvm_cbe_1943_count = 0;
  static  unsigned long long aesl_llvm_cbe_1944_count = 0;
  static  unsigned long long aesl_llvm_cbe_1945_count = 0;
  static  unsigned long long aesl_llvm_cbe_1946_count = 0;
  static  unsigned long long aesl_llvm_cbe_1947_count = 0;
  static  unsigned long long aesl_llvm_cbe_1948_count = 0;
  static  unsigned long long aesl_llvm_cbe_1949_count = 0;
  static  unsigned long long aesl_llvm_cbe_1950_count = 0;
  static  unsigned long long aesl_llvm_cbe_1951_count = 0;
  static  unsigned long long aesl_llvm_cbe_1952_count = 0;
  static  unsigned long long aesl_llvm_cbe_1953_count = 0;
  static  unsigned long long aesl_llvm_cbe_1954_count = 0;
  static  unsigned long long aesl_llvm_cbe_1955_count = 0;
  static  unsigned long long aesl_llvm_cbe_1956_count = 0;
  static  unsigned long long aesl_llvm_cbe_1957_count = 0;
  static  unsigned long long aesl_llvm_cbe_1958_count = 0;
  static  unsigned long long aesl_llvm_cbe_1959_count = 0;
  static  unsigned long long aesl_llvm_cbe_1960_count = 0;
  static  unsigned long long aesl_llvm_cbe_1961_count = 0;
  static  unsigned long long aesl_llvm_cbe_1962_count = 0;
  static  unsigned long long aesl_llvm_cbe_1963_count = 0;
  static  unsigned long long aesl_llvm_cbe_1964_count = 0;
  static  unsigned long long aesl_llvm_cbe_1965_count = 0;
  static  unsigned long long aesl_llvm_cbe_1966_count = 0;
  static  unsigned long long aesl_llvm_cbe_1967_count = 0;
  static  unsigned long long aesl_llvm_cbe_1968_count = 0;
  static  unsigned long long aesl_llvm_cbe_1969_count = 0;
  static  unsigned long long aesl_llvm_cbe_1970_count = 0;
  static  unsigned long long aesl_llvm_cbe_1971_count = 0;
  static  unsigned long long aesl_llvm_cbe_1972_count = 0;
  static  unsigned long long aesl_llvm_cbe_1973_count = 0;
  static  unsigned long long aesl_llvm_cbe_1974_count = 0;
  static  unsigned long long aesl_llvm_cbe_1975_count = 0;
  static  unsigned long long aesl_llvm_cbe_1976_count = 0;
  static  unsigned long long aesl_llvm_cbe_1977_count = 0;
  static  unsigned long long aesl_llvm_cbe_1978_count = 0;
  static  unsigned long long aesl_llvm_cbe_1979_count = 0;
  static  unsigned long long aesl_llvm_cbe_1980_count = 0;
  static  unsigned long long aesl_llvm_cbe_1981_count = 0;
  static  unsigned long long aesl_llvm_cbe_1982_count = 0;
  static  unsigned long long aesl_llvm_cbe_1983_count = 0;
  static  unsigned long long aesl_llvm_cbe_1984_count = 0;
  static  unsigned long long aesl_llvm_cbe_1985_count = 0;
  static  unsigned long long aesl_llvm_cbe_1986_count = 0;
  static  unsigned long long aesl_llvm_cbe_1987_count = 0;
  static  unsigned long long aesl_llvm_cbe_1988_count = 0;
  static  unsigned long long aesl_llvm_cbe_1989_count = 0;
  static  unsigned long long aesl_llvm_cbe_1990_count = 0;
  static  unsigned long long aesl_llvm_cbe_1991_count = 0;
  static  unsigned long long aesl_llvm_cbe_1992_count = 0;
  static  unsigned long long aesl_llvm_cbe_1993_count = 0;
  static  unsigned long long aesl_llvm_cbe_1994_count = 0;
  static  unsigned long long aesl_llvm_cbe_1995_count = 0;
  static  unsigned long long aesl_llvm_cbe_1996_count = 0;
  static  unsigned long long aesl_llvm_cbe_1997_count = 0;
  static  unsigned long long aesl_llvm_cbe_1998_count = 0;
  static  unsigned long long aesl_llvm_cbe_1999_count = 0;
  static  unsigned long long aesl_llvm_cbe_2000_count = 0;
  static  unsigned long long aesl_llvm_cbe_2001_count = 0;
  static  unsigned long long aesl_llvm_cbe_2002_count = 0;
  static  unsigned long long aesl_llvm_cbe_2003_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond60_count = 0;
  static  unsigned long long aesl_llvm_cbe_2004_count = 0;
  static  unsigned long long aesl_llvm_cbe_2005_count = 0;
  signed int *llvm_cbe_tmp__233;
  static  unsigned long long aesl_llvm_cbe_2006_count = 0;
  unsigned int llvm_cbe_tmp__234;
  static  unsigned long long aesl_llvm_cbe_2007_count = 0;
  unsigned short llvm_cbe_tmp__235;
  static  unsigned long long aesl_llvm_cbe_2008_count = 0;
  static  unsigned long long aesl_llvm_cbe_2009_count = 0;
  static  unsigned long long aesl_llvm_cbe_2010_count = 0;
  static  unsigned long long aesl_llvm_cbe_2011_count = 0;
  static  unsigned long long aesl_llvm_cbe_2012_count = 0;
  static  unsigned long long aesl_llvm_cbe_2013_count = 0;
  static  unsigned long long aesl_llvm_cbe_2014_count = 0;
  static  unsigned long long aesl_llvm_cbe_2015_count = 0;
  static  unsigned long long aesl_llvm_cbe_2016_count = 0;
  static  unsigned long long aesl_llvm_cbe_2017_count = 0;
  static  unsigned long long aesl_llvm_cbe_2018_count = 0;
  static  unsigned long long aesl_llvm_cbe_2019_count = 0;
  static  unsigned long long aesl_llvm_cbe_2020_count = 0;
  static  unsigned long long aesl_llvm_cbe_2021_count = 0;
  static  unsigned long long aesl_llvm_cbe_2022_count = 0;
  static  unsigned long long aesl_llvm_cbe_2023_count = 0;
  static  unsigned long long aesl_llvm_cbe_2024_count = 0;
  static  unsigned long long aesl_llvm_cbe_2025_count = 0;
  static  unsigned long long aesl_llvm_cbe_2026_count = 0;
  static  unsigned long long aesl_llvm_cbe_2027_count = 0;
  static  unsigned long long aesl_llvm_cbe_2028_count = 0;
  static  unsigned long long aesl_llvm_cbe_2029_count = 0;
  static  unsigned long long aesl_llvm_cbe_2030_count = 0;
  static  unsigned long long aesl_llvm_cbe_2031_count = 0;
  static  unsigned long long aesl_llvm_cbe_2032_count = 0;
  static  unsigned long long aesl_llvm_cbe_2033_count = 0;
  static  unsigned long long aesl_llvm_cbe_2034_count = 0;
  static  unsigned long long aesl_llvm_cbe_2035_count = 0;
  static  unsigned long long aesl_llvm_cbe_2036_count = 0;
  static  unsigned long long aesl_llvm_cbe_2037_count = 0;
  static  unsigned long long aesl_llvm_cbe_2038_count = 0;
  static  unsigned long long aesl_llvm_cbe_2039_count = 0;
  static  unsigned long long aesl_llvm_cbe_2040_count = 0;
  static  unsigned long long aesl_llvm_cbe_2041_count = 0;
  static  unsigned long long aesl_llvm_cbe_2042_count = 0;
  static  unsigned long long aesl_llvm_cbe_2043_count = 0;
  static  unsigned long long aesl_llvm_cbe_2044_count = 0;
  static  unsigned long long aesl_llvm_cbe_2045_count = 0;
  static  unsigned long long aesl_llvm_cbe_2046_count = 0;
  static  unsigned long long aesl_llvm_cbe_2047_count = 0;
  static  unsigned long long aesl_llvm_cbe_2048_count = 0;
  static  unsigned long long aesl_llvm_cbe_2049_count = 0;
  static  unsigned long long aesl_llvm_cbe_2050_count = 0;
  static  unsigned long long aesl_llvm_cbe_2051_count = 0;
  static  unsigned long long aesl_llvm_cbe_2052_count = 0;
  static  unsigned long long aesl_llvm_cbe_2053_count = 0;
  static  unsigned long long aesl_llvm_cbe_2054_count = 0;
  static  unsigned long long aesl_llvm_cbe_2055_count = 0;
  static  unsigned long long aesl_llvm_cbe_2056_count = 0;
  static  unsigned long long aesl_llvm_cbe_2057_count = 0;
  static  unsigned long long aesl_llvm_cbe_2058_count = 0;
  static  unsigned long long aesl_llvm_cbe_2059_count = 0;
  static  unsigned long long aesl_llvm_cbe_2060_count = 0;
  static  unsigned long long aesl_llvm_cbe_2061_count = 0;
  static  unsigned long long aesl_llvm_cbe_2062_count = 0;
  static  unsigned long long aesl_llvm_cbe_2063_count = 0;
  static  unsigned long long aesl_llvm_cbe_2064_count = 0;
  static  unsigned long long aesl_llvm_cbe_2065_count = 0;
  static  unsigned long long aesl_llvm_cbe_2066_count = 0;
  static  unsigned long long aesl_llvm_cbe_2067_count = 0;
  static  unsigned long long aesl_llvm_cbe_2068_count = 0;
  static  unsigned long long aesl_llvm_cbe_2069_count = 0;
  static  unsigned long long aesl_llvm_cbe_2070_count = 0;
  static  unsigned long long aesl_llvm_cbe_2071_count = 0;
  static  unsigned long long aesl_llvm_cbe_2072_count = 0;
  static  unsigned long long aesl_llvm_cbe_2073_count = 0;
  static  unsigned long long aesl_llvm_cbe_2074_count = 0;
  static  unsigned long long aesl_llvm_cbe_2075_count = 0;
  static  unsigned long long aesl_llvm_cbe_2076_count = 0;
  static  unsigned long long aesl_llvm_cbe_2077_count = 0;
  static  unsigned long long aesl_llvm_cbe_2078_count = 0;
  static  unsigned long long aesl_llvm_cbe_2079_count = 0;
  static  unsigned long long aesl_llvm_cbe_2080_count = 0;
  static  unsigned long long aesl_llvm_cbe_2081_count = 0;
  static  unsigned long long aesl_llvm_cbe_2082_count = 0;
  static  unsigned long long aesl_llvm_cbe_2083_count = 0;
  static  unsigned long long aesl_llvm_cbe_2084_count = 0;
  static  unsigned long long aesl_llvm_cbe_2085_count = 0;
  static  unsigned long long aesl_llvm_cbe_2086_count = 0;
  static  unsigned long long aesl_llvm_cbe_2087_count = 0;
  static  unsigned long long aesl_llvm_cbe_2088_count = 0;
  static  unsigned long long aesl_llvm_cbe_2089_count = 0;
  static  unsigned long long aesl_llvm_cbe_2090_count = 0;
  static  unsigned long long aesl_llvm_cbe_2091_count = 0;
  static  unsigned long long aesl_llvm_cbe_2092_count = 0;
  static  unsigned long long aesl_llvm_cbe_2093_count = 0;
  static  unsigned long long aesl_llvm_cbe_2094_count = 0;
  static  unsigned long long aesl_llvm_cbe_2095_count = 0;
  static  unsigned long long aesl_llvm_cbe_2096_count = 0;
  static  unsigned long long aesl_llvm_cbe_2097_count = 0;
  static  unsigned long long aesl_llvm_cbe_2098_count = 0;
  static  unsigned long long aesl_llvm_cbe_2099_count = 0;
  static  unsigned long long aesl_llvm_cbe_2100_count = 0;
  static  unsigned long long aesl_llvm_cbe_2101_count = 0;
  static  unsigned long long aesl_llvm_cbe_2102_count = 0;
  static  unsigned long long aesl_llvm_cbe_2103_count = 0;
  static  unsigned long long aesl_llvm_cbe_2104_count = 0;
  static  unsigned long long aesl_llvm_cbe_2105_count = 0;
  static  unsigned long long aesl_llvm_cbe_2106_count = 0;
  static  unsigned long long aesl_llvm_cbe_2107_count = 0;
  static  unsigned long long aesl_llvm_cbe_2108_count = 0;
  static  unsigned long long aesl_llvm_cbe_2109_count = 0;
  static  unsigned long long aesl_llvm_cbe_2110_count = 0;
  static  unsigned long long aesl_llvm_cbe_2111_count = 0;
  static  unsigned long long aesl_llvm_cbe_2112_count = 0;
  static  unsigned long long aesl_llvm_cbe_2113_count = 0;
  static  unsigned long long aesl_llvm_cbe_2114_count = 0;
  static  unsigned long long aesl_llvm_cbe_2115_count = 0;
  static  unsigned long long aesl_llvm_cbe_2116_count = 0;
  static  unsigned long long aesl_llvm_cbe_2117_count = 0;
  static  unsigned long long aesl_llvm_cbe_2118_count = 0;
  static  unsigned long long aesl_llvm_cbe_2119_count = 0;
  static  unsigned long long aesl_llvm_cbe_2120_count = 0;
  static  unsigned long long aesl_llvm_cbe_2121_count = 0;
  static  unsigned long long aesl_llvm_cbe_2122_count = 0;
  static  unsigned long long aesl_llvm_cbe_2123_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge731_count = 0;
  unsigned int llvm_cbe_storemerge731;
  unsigned int llvm_cbe_storemerge731__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2124_count = 0;
  unsigned short llvm_cbe_tmp__236;
  unsigned short llvm_cbe_tmp__236__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2125_count = 0;
  unsigned long long llvm_cbe_tmp__237;
  static  unsigned long long aesl_llvm_cbe_2126_count = 0;
  signed short *llvm_cbe_tmp__238;
  static  unsigned long long aesl_llvm_cbe_2127_count = 0;
  unsigned short llvm_cbe_tmp__239;
  static  unsigned long long aesl_llvm_cbe_2128_count = 0;
  unsigned int llvm_cbe_tmp__240;
  static  unsigned long long aesl_llvm_cbe_2129_count = 0;
  unsigned int llvm_cbe_tmp__241;
  static  unsigned long long aesl_llvm_cbe_2130_count = 0;
  unsigned long long llvm_cbe_tmp__242;
  static  unsigned long long aesl_llvm_cbe_2131_count = 0;
  signed int *llvm_cbe_tmp__243;
  static  unsigned long long aesl_llvm_cbe_2132_count = 0;
  unsigned int llvm_cbe_tmp__244;
  static  unsigned long long aesl_llvm_cbe_2133_count = 0;
  unsigned short llvm_cbe_tmp__245;
  static  unsigned long long aesl_llvm_cbe_2134_count = 0;
  unsigned int llvm_cbe_tmp__246;
  static  unsigned long long aesl_llvm_cbe_2135_count = 0;
  unsigned int llvm_cbe_tmp__247;
  static  unsigned long long aesl_llvm_cbe_2136_count = 0;
  unsigned int llvm_cbe_tmp__248;
  static  unsigned long long aesl_llvm_cbe_2137_count = 0;
  unsigned short llvm_cbe_tmp__249;
  static  unsigned long long aesl_llvm_cbe_2138_count = 0;
  unsigned short llvm_cbe_tmp__250;
  static  unsigned long long aesl_llvm_cbe_2139_count = 0;
  static  unsigned long long aesl_llvm_cbe_2140_count = 0;
  static  unsigned long long aesl_llvm_cbe_2141_count = 0;
  static  unsigned long long aesl_llvm_cbe_2142_count = 0;
  unsigned int llvm_cbe_tmp__251;
  static  unsigned long long aesl_llvm_cbe_2143_count = 0;
  static  unsigned long long aesl_llvm_cbe_2144_count = 0;
  static  unsigned long long aesl_llvm_cbe_2145_count = 0;
  static  unsigned long long aesl_llvm_cbe_2146_count = 0;
  static  unsigned long long aesl_llvm_cbe_2147_count = 0;
  static  unsigned long long aesl_llvm_cbe_2148_count = 0;
  static  unsigned long long aesl_llvm_cbe_2149_count = 0;
  static  unsigned long long aesl_llvm_cbe_2150_count = 0;
  static  unsigned long long aesl_llvm_cbe_2151_count = 0;
  static  unsigned long long aesl_llvm_cbe_2152_count = 0;
  static  unsigned long long aesl_llvm_cbe_2153_count = 0;
  static  unsigned long long aesl_llvm_cbe_2154_count = 0;
  static  unsigned long long aesl_llvm_cbe_2155_count = 0;
  static  unsigned long long aesl_llvm_cbe_2156_count = 0;
  static  unsigned long long aesl_llvm_cbe_2157_count = 0;
  static  unsigned long long aesl_llvm_cbe_2158_count = 0;
  static  unsigned long long aesl_llvm_cbe_2159_count = 0;
  static  unsigned long long aesl_llvm_cbe_2160_count = 0;
  static  unsigned long long aesl_llvm_cbe_2161_count = 0;
  static  unsigned long long aesl_llvm_cbe_2162_count = 0;
  static  unsigned long long aesl_llvm_cbe_2163_count = 0;
  static  unsigned long long aesl_llvm_cbe_2164_count = 0;
  static  unsigned long long aesl_llvm_cbe_2165_count = 0;
  static  unsigned long long aesl_llvm_cbe_2166_count = 0;
  static  unsigned long long aesl_llvm_cbe_2167_count = 0;
  static  unsigned long long aesl_llvm_cbe_2168_count = 0;
  static  unsigned long long aesl_llvm_cbe_2169_count = 0;
  static  unsigned long long aesl_llvm_cbe_2170_count = 0;
  static  unsigned long long aesl_llvm_cbe_2171_count = 0;
  static  unsigned long long aesl_llvm_cbe_2172_count = 0;
  static  unsigned long long aesl_llvm_cbe_2173_count = 0;
  static  unsigned long long aesl_llvm_cbe_2174_count = 0;
  static  unsigned long long aesl_llvm_cbe_2175_count = 0;
  static  unsigned long long aesl_llvm_cbe_2176_count = 0;
  static  unsigned long long aesl_llvm_cbe_2177_count = 0;
  static  unsigned long long aesl_llvm_cbe_2178_count = 0;
  static  unsigned long long aesl_llvm_cbe_2179_count = 0;
  static  unsigned long long aesl_llvm_cbe_2180_count = 0;
  static  unsigned long long aesl_llvm_cbe_2181_count = 0;
  static  unsigned long long aesl_llvm_cbe_2182_count = 0;
  static  unsigned long long aesl_llvm_cbe_2183_count = 0;
  static  unsigned long long aesl_llvm_cbe_2184_count = 0;
  static  unsigned long long aesl_llvm_cbe_2185_count = 0;
  static  unsigned long long aesl_llvm_cbe_2186_count = 0;
  static  unsigned long long aesl_llvm_cbe_2187_count = 0;
  static  unsigned long long aesl_llvm_cbe_2188_count = 0;
  static  unsigned long long aesl_llvm_cbe_2189_count = 0;
  static  unsigned long long aesl_llvm_cbe_2190_count = 0;
  static  unsigned long long aesl_llvm_cbe_2191_count = 0;
  static  unsigned long long aesl_llvm_cbe_2192_count = 0;
  static  unsigned long long aesl_llvm_cbe_2193_count = 0;
  static  unsigned long long aesl_llvm_cbe_2194_count = 0;
  static  unsigned long long aesl_llvm_cbe_2195_count = 0;
  static  unsigned long long aesl_llvm_cbe_2196_count = 0;
  static  unsigned long long aesl_llvm_cbe_2197_count = 0;
  static  unsigned long long aesl_llvm_cbe_2198_count = 0;
  static  unsigned long long aesl_llvm_cbe_2199_count = 0;
  static  unsigned long long aesl_llvm_cbe_2200_count = 0;
  static  unsigned long long aesl_llvm_cbe_2201_count = 0;
  static  unsigned long long aesl_llvm_cbe_2202_count = 0;
  static  unsigned long long aesl_llvm_cbe_2203_count = 0;
  static  unsigned long long aesl_llvm_cbe_2204_count = 0;
  static  unsigned long long aesl_llvm_cbe_2205_count = 0;
  static  unsigned long long aesl_llvm_cbe_2206_count = 0;
  static  unsigned long long aesl_llvm_cbe_2207_count = 0;
  static  unsigned long long aesl_llvm_cbe_2208_count = 0;
  static  unsigned long long aesl_llvm_cbe_2209_count = 0;
  static  unsigned long long aesl_llvm_cbe_2210_count = 0;
  static  unsigned long long aesl_llvm_cbe_2211_count = 0;
  static  unsigned long long aesl_llvm_cbe_2212_count = 0;
  static  unsigned long long aesl_llvm_cbe_2213_count = 0;
  static  unsigned long long aesl_llvm_cbe_2214_count = 0;
  static  unsigned long long aesl_llvm_cbe_2215_count = 0;
  static  unsigned long long aesl_llvm_cbe_2216_count = 0;
  static  unsigned long long aesl_llvm_cbe_2217_count = 0;
  static  unsigned long long aesl_llvm_cbe_2218_count = 0;
  static  unsigned long long aesl_llvm_cbe_2219_count = 0;
  static  unsigned long long aesl_llvm_cbe_2220_count = 0;
  static  unsigned long long aesl_llvm_cbe_2221_count = 0;
  static  unsigned long long aesl_llvm_cbe_2222_count = 0;
  static  unsigned long long aesl_llvm_cbe_2223_count = 0;
  static  unsigned long long aesl_llvm_cbe_2224_count = 0;
  static  unsigned long long aesl_llvm_cbe_2225_count = 0;
  static  unsigned long long aesl_llvm_cbe_2226_count = 0;
  static  unsigned long long aesl_llvm_cbe_2227_count = 0;
  static  unsigned long long aesl_llvm_cbe_2228_count = 0;
  static  unsigned long long aesl_llvm_cbe_2229_count = 0;
  static  unsigned long long aesl_llvm_cbe_2230_count = 0;
  static  unsigned long long aesl_llvm_cbe_2231_count = 0;
  static  unsigned long long aesl_llvm_cbe_2232_count = 0;
  static  unsigned long long aesl_llvm_cbe_2233_count = 0;
  static  unsigned long long aesl_llvm_cbe_2234_count = 0;
  static  unsigned long long aesl_llvm_cbe_2235_count = 0;
  static  unsigned long long aesl_llvm_cbe_2236_count = 0;
  static  unsigned long long aesl_llvm_cbe_2237_count = 0;
  static  unsigned long long aesl_llvm_cbe_2238_count = 0;
  static  unsigned long long aesl_llvm_cbe_2239_count = 0;
  static  unsigned long long aesl_llvm_cbe_2240_count = 0;
  static  unsigned long long aesl_llvm_cbe_2241_count = 0;
  static  unsigned long long aesl_llvm_cbe_2242_count = 0;
  static  unsigned long long aesl_llvm_cbe_2243_count = 0;
  static  unsigned long long aesl_llvm_cbe_2244_count = 0;
  static  unsigned long long aesl_llvm_cbe_2245_count = 0;
  static  unsigned long long aesl_llvm_cbe_2246_count = 0;
  static  unsigned long long aesl_llvm_cbe_2247_count = 0;
  static  unsigned long long aesl_llvm_cbe_2248_count = 0;
  static  unsigned long long aesl_llvm_cbe_2249_count = 0;
  static  unsigned long long aesl_llvm_cbe_2250_count = 0;
  static  unsigned long long aesl_llvm_cbe_2251_count = 0;
  static  unsigned long long aesl_llvm_cbe_2252_count = 0;
  static  unsigned long long aesl_llvm_cbe_2253_count = 0;
  static  unsigned long long aesl_llvm_cbe_2254_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_2255_count = 0;
  static  unsigned long long aesl_llvm_cbe_2256_count = 0;
  static  unsigned long long aesl_llvm_cbe_2257_count = 0;
  static  unsigned long long aesl_llvm_cbe_2258_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge840_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge840_2e_1;
  unsigned int llvm_cbe_storemerge840_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2259_count = 0;
  unsigned long long llvm_cbe_tmp__252;
  static  unsigned long long aesl_llvm_cbe_2260_count = 0;
  signed short *llvm_cbe_tmp__253;
  static  unsigned long long aesl_llvm_cbe_2261_count = 0;
  unsigned short llvm_cbe_tmp__254;
  static  unsigned long long aesl_llvm_cbe_2262_count = 0;
  signed short *llvm_cbe_tmp__255;
  static  unsigned long long aesl_llvm_cbe_2263_count = 0;
  unsigned short llvm_cbe_tmp__256;
  static  unsigned long long aesl_llvm_cbe_2264_count = 0;
  unsigned short llvm_cbe_tmp__257;
  static  unsigned long long aesl_llvm_cbe_2265_count = 0;
  unsigned int llvm_cbe_tmp__258;
  static  unsigned long long aesl_llvm_cbe_2266_count = 0;
  unsigned int llvm_cbe_tmp__259;
  static  unsigned long long aesl_llvm_cbe_2267_count = 0;
  unsigned short llvm_cbe_tmp__260;
  static  unsigned long long aesl_llvm_cbe_2268_count = 0;
  static  unsigned long long aesl_llvm_cbe_2269_count = 0;
  unsigned int llvm_cbe_tmp__261;
  static  unsigned long long aesl_llvm_cbe_2270_count = 0;
  static  unsigned long long aesl_llvm_cbe_2271_count = 0;
  static  unsigned long long aesl_llvm_cbe_2272_count = 0;
  static  unsigned long long aesl_llvm_cbe_2273_count = 0;
  static  unsigned long long aesl_llvm_cbe_2274_count = 0;
  static  unsigned long long aesl_llvm_cbe_2275_count = 0;
  static  unsigned long long aesl_llvm_cbe_2276_count = 0;
  static  unsigned long long aesl_llvm_cbe_2277_count = 0;
  static  unsigned long long aesl_llvm_cbe_2278_count = 0;
  static  unsigned long long aesl_llvm_cbe_2279_count = 0;
  static  unsigned long long aesl_llvm_cbe_2280_count = 0;
  static  unsigned long long aesl_llvm_cbe_2281_count = 0;
  static  unsigned long long aesl_llvm_cbe_2282_count = 0;
  static  unsigned long long aesl_llvm_cbe_2283_count = 0;
  static  unsigned long long aesl_llvm_cbe_2284_count = 0;
  static  unsigned long long aesl_llvm_cbe_2285_count = 0;
  static  unsigned long long aesl_llvm_cbe_2286_count = 0;
  static  unsigned long long aesl_llvm_cbe_2287_count = 0;
  static  unsigned long long aesl_llvm_cbe_2288_count = 0;
  static  unsigned long long aesl_llvm_cbe_2289_count = 0;
  static  unsigned long long aesl_llvm_cbe_2290_count = 0;
  static  unsigned long long aesl_llvm_cbe_2291_count = 0;
  static  unsigned long long aesl_llvm_cbe_2292_count = 0;
  static  unsigned long long aesl_llvm_cbe_2293_count = 0;
  static  unsigned long long aesl_llvm_cbe_2294_count = 0;
  static  unsigned long long aesl_llvm_cbe_2295_count = 0;
  static  unsigned long long aesl_llvm_cbe_2296_count = 0;
  static  unsigned long long aesl_llvm_cbe_2297_count = 0;
  static  unsigned long long aesl_llvm_cbe_2298_count = 0;
  static  unsigned long long aesl_llvm_cbe_2299_count = 0;
  static  unsigned long long aesl_llvm_cbe_2300_count = 0;
  static  unsigned long long aesl_llvm_cbe_2301_count = 0;
  static  unsigned long long aesl_llvm_cbe_2302_count = 0;
  static  unsigned long long aesl_llvm_cbe_2303_count = 0;
  static  unsigned long long aesl_llvm_cbe_2304_count = 0;
  static  unsigned long long aesl_llvm_cbe_2305_count = 0;
  static  unsigned long long aesl_llvm_cbe_2306_count = 0;
  static  unsigned long long aesl_llvm_cbe_2307_count = 0;
  static  unsigned long long aesl_llvm_cbe_2308_count = 0;
  static  unsigned long long aesl_llvm_cbe_2309_count = 0;
  static  unsigned long long aesl_llvm_cbe_2310_count = 0;
  static  unsigned long long aesl_llvm_cbe_2311_count = 0;
  static  unsigned long long aesl_llvm_cbe_2312_count = 0;
  static  unsigned long long aesl_llvm_cbe_2313_count = 0;
  static  unsigned long long aesl_llvm_cbe_2314_count = 0;
  static  unsigned long long aesl_llvm_cbe_2315_count = 0;
  static  unsigned long long aesl_llvm_cbe_2316_count = 0;
  static  unsigned long long aesl_llvm_cbe_2317_count = 0;
  static  unsigned long long aesl_llvm_cbe_2318_count = 0;
  static  unsigned long long aesl_llvm_cbe_2319_count = 0;
  static  unsigned long long aesl_llvm_cbe_2320_count = 0;
  static  unsigned long long aesl_llvm_cbe_2321_count = 0;
  static  unsigned long long aesl_llvm_cbe_2322_count = 0;
  static  unsigned long long aesl_llvm_cbe_2323_count = 0;
  static  unsigned long long aesl_llvm_cbe_2324_count = 0;
  static  unsigned long long aesl_llvm_cbe_2325_count = 0;
  static  unsigned long long aesl_llvm_cbe_2326_count = 0;
  static  unsigned long long aesl_llvm_cbe_2327_count = 0;
  static  unsigned long long aesl_llvm_cbe_2328_count = 0;
  static  unsigned long long aesl_llvm_cbe_2329_count = 0;
  static  unsigned long long aesl_llvm_cbe_2330_count = 0;
  static  unsigned long long aesl_llvm_cbe_2331_count = 0;
  static  unsigned long long aesl_llvm_cbe_2332_count = 0;
  static  unsigned long long aesl_llvm_cbe_2333_count = 0;
  static  unsigned long long aesl_llvm_cbe_2334_count = 0;
  static  unsigned long long aesl_llvm_cbe_2335_count = 0;
  static  unsigned long long aesl_llvm_cbe_2336_count = 0;
  static  unsigned long long aesl_llvm_cbe_2337_count = 0;
  static  unsigned long long aesl_llvm_cbe_2338_count = 0;
  static  unsigned long long aesl_llvm_cbe_2339_count = 0;
  static  unsigned long long aesl_llvm_cbe_2340_count = 0;
  static  unsigned long long aesl_llvm_cbe_2341_count = 0;
  static  unsigned long long aesl_llvm_cbe_2342_count = 0;
  static  unsigned long long aesl_llvm_cbe_2343_count = 0;
  static  unsigned long long aesl_llvm_cbe_2344_count = 0;
  static  unsigned long long aesl_llvm_cbe_2345_count = 0;
  static  unsigned long long aesl_llvm_cbe_2346_count = 0;
  static  unsigned long long aesl_llvm_cbe_2347_count = 0;
  static  unsigned long long aesl_llvm_cbe_2348_count = 0;
  static  unsigned long long aesl_llvm_cbe_2349_count = 0;
  static  unsigned long long aesl_llvm_cbe_2350_count = 0;
  static  unsigned long long aesl_llvm_cbe_2351_count = 0;
  static  unsigned long long aesl_llvm_cbe_2352_count = 0;
  static  unsigned long long aesl_llvm_cbe_2353_count = 0;
  static  unsigned long long aesl_llvm_cbe_2354_count = 0;
  static  unsigned long long aesl_llvm_cbe_2355_count = 0;
  static  unsigned long long aesl_llvm_cbe_2356_count = 0;
  static  unsigned long long aesl_llvm_cbe_2357_count = 0;
  static  unsigned long long aesl_llvm_cbe_2358_count = 0;
  static  unsigned long long aesl_llvm_cbe_2359_count = 0;
  static  unsigned long long aesl_llvm_cbe_2360_count = 0;
  static  unsigned long long aesl_llvm_cbe_2361_count = 0;
  static  unsigned long long aesl_llvm_cbe_2362_count = 0;
  static  unsigned long long aesl_llvm_cbe_2363_count = 0;
  static  unsigned long long aesl_llvm_cbe_2364_count = 0;
  static  unsigned long long aesl_llvm_cbe_2365_count = 0;
  static  unsigned long long aesl_llvm_cbe_2366_count = 0;
  static  unsigned long long aesl_llvm_cbe_2367_count = 0;
  static  unsigned long long aesl_llvm_cbe_2368_count = 0;
  static  unsigned long long aesl_llvm_cbe_2369_count = 0;
  static  unsigned long long aesl_llvm_cbe_2370_count = 0;
  static  unsigned long long aesl_llvm_cbe_2371_count = 0;
  static  unsigned long long aesl_llvm_cbe_2372_count = 0;
  static  unsigned long long aesl_llvm_cbe_2373_count = 0;
  static  unsigned long long aesl_llvm_cbe_2374_count = 0;
  static  unsigned long long aesl_llvm_cbe_2375_count = 0;
  static  unsigned long long aesl_llvm_cbe_2376_count = 0;
  static  unsigned long long aesl_llvm_cbe_2377_count = 0;
  static  unsigned long long aesl_llvm_cbe_2378_count = 0;
  static  unsigned long long aesl_llvm_cbe_2379_count = 0;
  static  unsigned long long aesl_llvm_cbe_2380_count = 0;
  static  unsigned long long aesl_llvm_cbe_2381_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond64_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2382_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge840_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge840_2e_2;
  unsigned int llvm_cbe_storemerge840_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2383_count = 0;
  unsigned long long llvm_cbe_tmp__262;
  static  unsigned long long aesl_llvm_cbe_2384_count = 0;
  signed short *llvm_cbe_tmp__263;
  static  unsigned long long aesl_llvm_cbe_2385_count = 0;
  unsigned short llvm_cbe_tmp__264;
  static  unsigned long long aesl_llvm_cbe_2386_count = 0;
  signed short *llvm_cbe_tmp__265;
  static  unsigned long long aesl_llvm_cbe_2387_count = 0;
  unsigned short llvm_cbe_tmp__266;
  static  unsigned long long aesl_llvm_cbe_2388_count = 0;
  unsigned short llvm_cbe_tmp__267;
  static  unsigned long long aesl_llvm_cbe_2389_count = 0;
  unsigned int llvm_cbe_tmp__268;
  static  unsigned long long aesl_llvm_cbe_2390_count = 0;
  unsigned int llvm_cbe_tmp__269;
  static  unsigned long long aesl_llvm_cbe_2391_count = 0;
  unsigned short llvm_cbe_tmp__270;
  static  unsigned long long aesl_llvm_cbe_2392_count = 0;
  static  unsigned long long aesl_llvm_cbe_2393_count = 0;
  unsigned int llvm_cbe_tmp__271;
  static  unsigned long long aesl_llvm_cbe_2394_count = 0;
  static  unsigned long long aesl_llvm_cbe_2395_count = 0;
  static  unsigned long long aesl_llvm_cbe_2396_count = 0;
  static  unsigned long long aesl_llvm_cbe_2397_count = 0;
  static  unsigned long long aesl_llvm_cbe_2398_count = 0;
  static  unsigned long long aesl_llvm_cbe_2399_count = 0;
  static  unsigned long long aesl_llvm_cbe_2400_count = 0;
  static  unsigned long long aesl_llvm_cbe_2401_count = 0;
  static  unsigned long long aesl_llvm_cbe_2402_count = 0;
  static  unsigned long long aesl_llvm_cbe_2403_count = 0;
  static  unsigned long long aesl_llvm_cbe_2404_count = 0;
  static  unsigned long long aesl_llvm_cbe_2405_count = 0;
  static  unsigned long long aesl_llvm_cbe_2406_count = 0;
  static  unsigned long long aesl_llvm_cbe_2407_count = 0;
  static  unsigned long long aesl_llvm_cbe_2408_count = 0;
  static  unsigned long long aesl_llvm_cbe_2409_count = 0;
  static  unsigned long long aesl_llvm_cbe_2410_count = 0;
  static  unsigned long long aesl_llvm_cbe_2411_count = 0;
  static  unsigned long long aesl_llvm_cbe_2412_count = 0;
  static  unsigned long long aesl_llvm_cbe_2413_count = 0;
  static  unsigned long long aesl_llvm_cbe_2414_count = 0;
  static  unsigned long long aesl_llvm_cbe_2415_count = 0;
  static  unsigned long long aesl_llvm_cbe_2416_count = 0;
  static  unsigned long long aesl_llvm_cbe_2417_count = 0;
  static  unsigned long long aesl_llvm_cbe_2418_count = 0;
  static  unsigned long long aesl_llvm_cbe_2419_count = 0;
  static  unsigned long long aesl_llvm_cbe_2420_count = 0;
  static  unsigned long long aesl_llvm_cbe_2421_count = 0;
  static  unsigned long long aesl_llvm_cbe_2422_count = 0;
  static  unsigned long long aesl_llvm_cbe_2423_count = 0;
  static  unsigned long long aesl_llvm_cbe_2424_count = 0;
  static  unsigned long long aesl_llvm_cbe_2425_count = 0;
  static  unsigned long long aesl_llvm_cbe_2426_count = 0;
  static  unsigned long long aesl_llvm_cbe_2427_count = 0;
  static  unsigned long long aesl_llvm_cbe_2428_count = 0;
  static  unsigned long long aesl_llvm_cbe_2429_count = 0;
  static  unsigned long long aesl_llvm_cbe_2430_count = 0;
  static  unsigned long long aesl_llvm_cbe_2431_count = 0;
  static  unsigned long long aesl_llvm_cbe_2432_count = 0;
  static  unsigned long long aesl_llvm_cbe_2433_count = 0;
  static  unsigned long long aesl_llvm_cbe_2434_count = 0;
  static  unsigned long long aesl_llvm_cbe_2435_count = 0;
  static  unsigned long long aesl_llvm_cbe_2436_count = 0;
  static  unsigned long long aesl_llvm_cbe_2437_count = 0;
  static  unsigned long long aesl_llvm_cbe_2438_count = 0;
  static  unsigned long long aesl_llvm_cbe_2439_count = 0;
  static  unsigned long long aesl_llvm_cbe_2440_count = 0;
  static  unsigned long long aesl_llvm_cbe_2441_count = 0;
  static  unsigned long long aesl_llvm_cbe_2442_count = 0;
  static  unsigned long long aesl_llvm_cbe_2443_count = 0;
  static  unsigned long long aesl_llvm_cbe_2444_count = 0;
  static  unsigned long long aesl_llvm_cbe_2445_count = 0;
  static  unsigned long long aesl_llvm_cbe_2446_count = 0;
  static  unsigned long long aesl_llvm_cbe_2447_count = 0;
  static  unsigned long long aesl_llvm_cbe_2448_count = 0;
  static  unsigned long long aesl_llvm_cbe_2449_count = 0;
  static  unsigned long long aesl_llvm_cbe_2450_count = 0;
  static  unsigned long long aesl_llvm_cbe_2451_count = 0;
  static  unsigned long long aesl_llvm_cbe_2452_count = 0;
  static  unsigned long long aesl_llvm_cbe_2453_count = 0;
  static  unsigned long long aesl_llvm_cbe_2454_count = 0;
  static  unsigned long long aesl_llvm_cbe_2455_count = 0;
  static  unsigned long long aesl_llvm_cbe_2456_count = 0;
  static  unsigned long long aesl_llvm_cbe_2457_count = 0;
  static  unsigned long long aesl_llvm_cbe_2458_count = 0;
  static  unsigned long long aesl_llvm_cbe_2459_count = 0;
  static  unsigned long long aesl_llvm_cbe_2460_count = 0;
  static  unsigned long long aesl_llvm_cbe_2461_count = 0;
  static  unsigned long long aesl_llvm_cbe_2462_count = 0;
  static  unsigned long long aesl_llvm_cbe_2463_count = 0;
  static  unsigned long long aesl_llvm_cbe_2464_count = 0;
  static  unsigned long long aesl_llvm_cbe_2465_count = 0;
  static  unsigned long long aesl_llvm_cbe_2466_count = 0;
  static  unsigned long long aesl_llvm_cbe_2467_count = 0;
  static  unsigned long long aesl_llvm_cbe_2468_count = 0;
  static  unsigned long long aesl_llvm_cbe_2469_count = 0;
  static  unsigned long long aesl_llvm_cbe_2470_count = 0;
  static  unsigned long long aesl_llvm_cbe_2471_count = 0;
  static  unsigned long long aesl_llvm_cbe_2472_count = 0;
  static  unsigned long long aesl_llvm_cbe_2473_count = 0;
  static  unsigned long long aesl_llvm_cbe_2474_count = 0;
  static  unsigned long long aesl_llvm_cbe_2475_count = 0;
  static  unsigned long long aesl_llvm_cbe_2476_count = 0;
  static  unsigned long long aesl_llvm_cbe_2477_count = 0;
  static  unsigned long long aesl_llvm_cbe_2478_count = 0;
  static  unsigned long long aesl_llvm_cbe_2479_count = 0;
  static  unsigned long long aesl_llvm_cbe_2480_count = 0;
  static  unsigned long long aesl_llvm_cbe_2481_count = 0;
  static  unsigned long long aesl_llvm_cbe_2482_count = 0;
  static  unsigned long long aesl_llvm_cbe_2483_count = 0;
  static  unsigned long long aesl_llvm_cbe_2484_count = 0;
  static  unsigned long long aesl_llvm_cbe_2485_count = 0;
  static  unsigned long long aesl_llvm_cbe_2486_count = 0;
  static  unsigned long long aesl_llvm_cbe_2487_count = 0;
  static  unsigned long long aesl_llvm_cbe_2488_count = 0;
  static  unsigned long long aesl_llvm_cbe_2489_count = 0;
  static  unsigned long long aesl_llvm_cbe_2490_count = 0;
  static  unsigned long long aesl_llvm_cbe_2491_count = 0;
  static  unsigned long long aesl_llvm_cbe_2492_count = 0;
  static  unsigned long long aesl_llvm_cbe_2493_count = 0;
  static  unsigned long long aesl_llvm_cbe_2494_count = 0;
  static  unsigned long long aesl_llvm_cbe_2495_count = 0;
  static  unsigned long long aesl_llvm_cbe_2496_count = 0;
  static  unsigned long long aesl_llvm_cbe_2497_count = 0;
  static  unsigned long long aesl_llvm_cbe_2498_count = 0;
  static  unsigned long long aesl_llvm_cbe_2499_count = 0;
  static  unsigned long long aesl_llvm_cbe_2500_count = 0;
  static  unsigned long long aesl_llvm_cbe_2501_count = 0;
  static  unsigned long long aesl_llvm_cbe_2502_count = 0;
  static  unsigned long long aesl_llvm_cbe_2503_count = 0;
  static  unsigned long long aesl_llvm_cbe_2504_count = 0;
  static  unsigned long long aesl_llvm_cbe_2505_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond64_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_2506_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge840_2e_3_count = 0;
  unsigned int llvm_cbe_storemerge840_2e_3;
  unsigned int llvm_cbe_storemerge840_2e_3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2507_count = 0;
  unsigned long long llvm_cbe_tmp__272;
  static  unsigned long long aesl_llvm_cbe_2508_count = 0;
  signed short *llvm_cbe_tmp__273;
  static  unsigned long long aesl_llvm_cbe_2509_count = 0;
  unsigned short llvm_cbe_tmp__274;
  static  unsigned long long aesl_llvm_cbe_2510_count = 0;
  signed short *llvm_cbe_tmp__275;
  static  unsigned long long aesl_llvm_cbe_2511_count = 0;
  unsigned short llvm_cbe_tmp__276;
  static  unsigned long long aesl_llvm_cbe_2512_count = 0;
  unsigned short llvm_cbe_tmp__277;
  static  unsigned long long aesl_llvm_cbe_2513_count = 0;
  unsigned int llvm_cbe_tmp__278;
  static  unsigned long long aesl_llvm_cbe_2514_count = 0;
  unsigned int llvm_cbe_tmp__279;
  static  unsigned long long aesl_llvm_cbe_2515_count = 0;
  unsigned short llvm_cbe_tmp__280;
  static  unsigned long long aesl_llvm_cbe_2516_count = 0;
  static  unsigned long long aesl_llvm_cbe_2517_count = 0;
  unsigned int llvm_cbe_tmp__281;
  static  unsigned long long aesl_llvm_cbe_2518_count = 0;
  static  unsigned long long aesl_llvm_cbe_2519_count = 0;
  static  unsigned long long aesl_llvm_cbe_2520_count = 0;
  static  unsigned long long aesl_llvm_cbe_2521_count = 0;
  static  unsigned long long aesl_llvm_cbe_2522_count = 0;
  static  unsigned long long aesl_llvm_cbe_2523_count = 0;
  static  unsigned long long aesl_llvm_cbe_2524_count = 0;
  static  unsigned long long aesl_llvm_cbe_2525_count = 0;
  static  unsigned long long aesl_llvm_cbe_2526_count = 0;
  static  unsigned long long aesl_llvm_cbe_2527_count = 0;
  static  unsigned long long aesl_llvm_cbe_2528_count = 0;
  static  unsigned long long aesl_llvm_cbe_2529_count = 0;
  static  unsigned long long aesl_llvm_cbe_2530_count = 0;
  static  unsigned long long aesl_llvm_cbe_2531_count = 0;
  static  unsigned long long aesl_llvm_cbe_2532_count = 0;
  static  unsigned long long aesl_llvm_cbe_2533_count = 0;
  static  unsigned long long aesl_llvm_cbe_2534_count = 0;
  static  unsigned long long aesl_llvm_cbe_2535_count = 0;
  static  unsigned long long aesl_llvm_cbe_2536_count = 0;
  static  unsigned long long aesl_llvm_cbe_2537_count = 0;
  static  unsigned long long aesl_llvm_cbe_2538_count = 0;
  static  unsigned long long aesl_llvm_cbe_2539_count = 0;
  static  unsigned long long aesl_llvm_cbe_2540_count = 0;
  static  unsigned long long aesl_llvm_cbe_2541_count = 0;
  static  unsigned long long aesl_llvm_cbe_2542_count = 0;
  static  unsigned long long aesl_llvm_cbe_2543_count = 0;
  static  unsigned long long aesl_llvm_cbe_2544_count = 0;
  static  unsigned long long aesl_llvm_cbe_2545_count = 0;
  static  unsigned long long aesl_llvm_cbe_2546_count = 0;
  static  unsigned long long aesl_llvm_cbe_2547_count = 0;
  static  unsigned long long aesl_llvm_cbe_2548_count = 0;
  static  unsigned long long aesl_llvm_cbe_2549_count = 0;
  static  unsigned long long aesl_llvm_cbe_2550_count = 0;
  static  unsigned long long aesl_llvm_cbe_2551_count = 0;
  static  unsigned long long aesl_llvm_cbe_2552_count = 0;
  static  unsigned long long aesl_llvm_cbe_2553_count = 0;
  static  unsigned long long aesl_llvm_cbe_2554_count = 0;
  static  unsigned long long aesl_llvm_cbe_2555_count = 0;
  static  unsigned long long aesl_llvm_cbe_2556_count = 0;
  static  unsigned long long aesl_llvm_cbe_2557_count = 0;
  static  unsigned long long aesl_llvm_cbe_2558_count = 0;
  static  unsigned long long aesl_llvm_cbe_2559_count = 0;
  static  unsigned long long aesl_llvm_cbe_2560_count = 0;
  static  unsigned long long aesl_llvm_cbe_2561_count = 0;
  static  unsigned long long aesl_llvm_cbe_2562_count = 0;
  static  unsigned long long aesl_llvm_cbe_2563_count = 0;
  static  unsigned long long aesl_llvm_cbe_2564_count = 0;
  static  unsigned long long aesl_llvm_cbe_2565_count = 0;
  static  unsigned long long aesl_llvm_cbe_2566_count = 0;
  static  unsigned long long aesl_llvm_cbe_2567_count = 0;
  static  unsigned long long aesl_llvm_cbe_2568_count = 0;
  static  unsigned long long aesl_llvm_cbe_2569_count = 0;
  static  unsigned long long aesl_llvm_cbe_2570_count = 0;
  static  unsigned long long aesl_llvm_cbe_2571_count = 0;
  static  unsigned long long aesl_llvm_cbe_2572_count = 0;
  static  unsigned long long aesl_llvm_cbe_2573_count = 0;
  static  unsigned long long aesl_llvm_cbe_2574_count = 0;
  static  unsigned long long aesl_llvm_cbe_2575_count = 0;
  static  unsigned long long aesl_llvm_cbe_2576_count = 0;
  static  unsigned long long aesl_llvm_cbe_2577_count = 0;
  static  unsigned long long aesl_llvm_cbe_2578_count = 0;
  static  unsigned long long aesl_llvm_cbe_2579_count = 0;
  static  unsigned long long aesl_llvm_cbe_2580_count = 0;
  static  unsigned long long aesl_llvm_cbe_2581_count = 0;
  static  unsigned long long aesl_llvm_cbe_2582_count = 0;
  static  unsigned long long aesl_llvm_cbe_2583_count = 0;
  static  unsigned long long aesl_llvm_cbe_2584_count = 0;
  static  unsigned long long aesl_llvm_cbe_2585_count = 0;
  static  unsigned long long aesl_llvm_cbe_2586_count = 0;
  static  unsigned long long aesl_llvm_cbe_2587_count = 0;
  static  unsigned long long aesl_llvm_cbe_2588_count = 0;
  static  unsigned long long aesl_llvm_cbe_2589_count = 0;
  static  unsigned long long aesl_llvm_cbe_2590_count = 0;
  static  unsigned long long aesl_llvm_cbe_2591_count = 0;
  static  unsigned long long aesl_llvm_cbe_2592_count = 0;
  static  unsigned long long aesl_llvm_cbe_2593_count = 0;
  static  unsigned long long aesl_llvm_cbe_2594_count = 0;
  static  unsigned long long aesl_llvm_cbe_2595_count = 0;
  static  unsigned long long aesl_llvm_cbe_2596_count = 0;
  static  unsigned long long aesl_llvm_cbe_2597_count = 0;
  static  unsigned long long aesl_llvm_cbe_2598_count = 0;
  static  unsigned long long aesl_llvm_cbe_2599_count = 0;
  static  unsigned long long aesl_llvm_cbe_2600_count = 0;
  static  unsigned long long aesl_llvm_cbe_2601_count = 0;
  static  unsigned long long aesl_llvm_cbe_2602_count = 0;
  static  unsigned long long aesl_llvm_cbe_2603_count = 0;
  static  unsigned long long aesl_llvm_cbe_2604_count = 0;
  static  unsigned long long aesl_llvm_cbe_2605_count = 0;
  static  unsigned long long aesl_llvm_cbe_2606_count = 0;
  static  unsigned long long aesl_llvm_cbe_2607_count = 0;
  static  unsigned long long aesl_llvm_cbe_2608_count = 0;
  static  unsigned long long aesl_llvm_cbe_2609_count = 0;
  static  unsigned long long aesl_llvm_cbe_2610_count = 0;
  static  unsigned long long aesl_llvm_cbe_2611_count = 0;
  static  unsigned long long aesl_llvm_cbe_2612_count = 0;
  static  unsigned long long aesl_llvm_cbe_2613_count = 0;
  static  unsigned long long aesl_llvm_cbe_2614_count = 0;
  static  unsigned long long aesl_llvm_cbe_2615_count = 0;
  static  unsigned long long aesl_llvm_cbe_2616_count = 0;
  static  unsigned long long aesl_llvm_cbe_2617_count = 0;
  static  unsigned long long aesl_llvm_cbe_2618_count = 0;
  static  unsigned long long aesl_llvm_cbe_2619_count = 0;
  static  unsigned long long aesl_llvm_cbe_2620_count = 0;
  static  unsigned long long aesl_llvm_cbe_2621_count = 0;
  static  unsigned long long aesl_llvm_cbe_2622_count = 0;
  static  unsigned long long aesl_llvm_cbe_2623_count = 0;
  static  unsigned long long aesl_llvm_cbe_2624_count = 0;
  static  unsigned long long aesl_llvm_cbe_2625_count = 0;
  static  unsigned long long aesl_llvm_cbe_2626_count = 0;
  static  unsigned long long aesl_llvm_cbe_2627_count = 0;
  static  unsigned long long aesl_llvm_cbe_2628_count = 0;
  static  unsigned long long aesl_llvm_cbe_2629_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond64_2e_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_2630_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1044_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge1044_2e_1;
  unsigned int llvm_cbe_storemerge1044_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2631_count = 0;
  unsigned long long llvm_cbe_tmp__282;
  static  unsigned long long aesl_llvm_cbe_2632_count = 0;
  signed short *llvm_cbe_tmp__283;
  static  unsigned long long aesl_llvm_cbe_2633_count = 0;
  unsigned short llvm_cbe_tmp__284;
  static  unsigned long long aesl_llvm_cbe_2634_count = 0;
  unsigned int llvm_cbe_tmp__285;
  static  unsigned long long aesl_llvm_cbe_2635_count = 0;
  unsigned int llvm_cbe_tmp__286;
  static  unsigned long long aesl_llvm_cbe_2636_count = 0;
  unsigned int llvm_cbe_tmp__287;
  static  unsigned long long aesl_llvm_cbe_2637_count = 0;
  signed short *llvm_cbe_tmp__288;
  static  unsigned long long aesl_llvm_cbe_2638_count = 0;
  unsigned short llvm_cbe_tmp__289;
  static  unsigned long long aesl_llvm_cbe_2639_count = 0;
  unsigned short llvm_cbe_tmp__290;
  static  unsigned long long aesl_llvm_cbe_2640_count = 0;
  unsigned short llvm_cbe_tmp__291;
  static  unsigned long long aesl_llvm_cbe_2641_count = 0;
  static  unsigned long long aesl_llvm_cbe_2642_count = 0;
  unsigned int llvm_cbe_tmp__292;
  static  unsigned long long aesl_llvm_cbe_2643_count = 0;
  static  unsigned long long aesl_llvm_cbe_2644_count = 0;
  static  unsigned long long aesl_llvm_cbe_2645_count = 0;
  static  unsigned long long aesl_llvm_cbe_2646_count = 0;
  static  unsigned long long aesl_llvm_cbe_2647_count = 0;
  static  unsigned long long aesl_llvm_cbe_2648_count = 0;
  static  unsigned long long aesl_llvm_cbe_2649_count = 0;
  static  unsigned long long aesl_llvm_cbe_2650_count = 0;
  static  unsigned long long aesl_llvm_cbe_2651_count = 0;
  static  unsigned long long aesl_llvm_cbe_2652_count = 0;
  static  unsigned long long aesl_llvm_cbe_2653_count = 0;
  static  unsigned long long aesl_llvm_cbe_2654_count = 0;
  static  unsigned long long aesl_llvm_cbe_2655_count = 0;
  static  unsigned long long aesl_llvm_cbe_2656_count = 0;
  static  unsigned long long aesl_llvm_cbe_2657_count = 0;
  static  unsigned long long aesl_llvm_cbe_2658_count = 0;
  static  unsigned long long aesl_llvm_cbe_2659_count = 0;
  static  unsigned long long aesl_llvm_cbe_2660_count = 0;
  static  unsigned long long aesl_llvm_cbe_2661_count = 0;
  static  unsigned long long aesl_llvm_cbe_2662_count = 0;
  static  unsigned long long aesl_llvm_cbe_2663_count = 0;
  static  unsigned long long aesl_llvm_cbe_2664_count = 0;
  static  unsigned long long aesl_llvm_cbe_2665_count = 0;
  static  unsigned long long aesl_llvm_cbe_2666_count = 0;
  static  unsigned long long aesl_llvm_cbe_2667_count = 0;
  static  unsigned long long aesl_llvm_cbe_2668_count = 0;
  static  unsigned long long aesl_llvm_cbe_2669_count = 0;
  static  unsigned long long aesl_llvm_cbe_2670_count = 0;
  static  unsigned long long aesl_llvm_cbe_2671_count = 0;
  static  unsigned long long aesl_llvm_cbe_2672_count = 0;
  static  unsigned long long aesl_llvm_cbe_2673_count = 0;
  static  unsigned long long aesl_llvm_cbe_2674_count = 0;
  static  unsigned long long aesl_llvm_cbe_2675_count = 0;
  static  unsigned long long aesl_llvm_cbe_2676_count = 0;
  static  unsigned long long aesl_llvm_cbe_2677_count = 0;
  static  unsigned long long aesl_llvm_cbe_2678_count = 0;
  static  unsigned long long aesl_llvm_cbe_2679_count = 0;
  static  unsigned long long aesl_llvm_cbe_2680_count = 0;
  static  unsigned long long aesl_llvm_cbe_2681_count = 0;
  static  unsigned long long aesl_llvm_cbe_2682_count = 0;
  static  unsigned long long aesl_llvm_cbe_2683_count = 0;
  static  unsigned long long aesl_llvm_cbe_2684_count = 0;
  static  unsigned long long aesl_llvm_cbe_2685_count = 0;
  static  unsigned long long aesl_llvm_cbe_2686_count = 0;
  static  unsigned long long aesl_llvm_cbe_2687_count = 0;
  static  unsigned long long aesl_llvm_cbe_2688_count = 0;
  static  unsigned long long aesl_llvm_cbe_2689_count = 0;
  static  unsigned long long aesl_llvm_cbe_2690_count = 0;
  static  unsigned long long aesl_llvm_cbe_2691_count = 0;
  static  unsigned long long aesl_llvm_cbe_2692_count = 0;
  static  unsigned long long aesl_llvm_cbe_2693_count = 0;
  static  unsigned long long aesl_llvm_cbe_2694_count = 0;
  static  unsigned long long aesl_llvm_cbe_2695_count = 0;
  static  unsigned long long aesl_llvm_cbe_2696_count = 0;
  static  unsigned long long aesl_llvm_cbe_2697_count = 0;
  static  unsigned long long aesl_llvm_cbe_2698_count = 0;
  static  unsigned long long aesl_llvm_cbe_2699_count = 0;
  static  unsigned long long aesl_llvm_cbe_2700_count = 0;
  static  unsigned long long aesl_llvm_cbe_2701_count = 0;
  static  unsigned long long aesl_llvm_cbe_2702_count = 0;
  static  unsigned long long aesl_llvm_cbe_2703_count = 0;
  static  unsigned long long aesl_llvm_cbe_2704_count = 0;
  static  unsigned long long aesl_llvm_cbe_2705_count = 0;
  static  unsigned long long aesl_llvm_cbe_2706_count = 0;
  static  unsigned long long aesl_llvm_cbe_2707_count = 0;
  static  unsigned long long aesl_llvm_cbe_2708_count = 0;
  static  unsigned long long aesl_llvm_cbe_2709_count = 0;
  static  unsigned long long aesl_llvm_cbe_2710_count = 0;
  static  unsigned long long aesl_llvm_cbe_2711_count = 0;
  static  unsigned long long aesl_llvm_cbe_2712_count = 0;
  static  unsigned long long aesl_llvm_cbe_2713_count = 0;
  static  unsigned long long aesl_llvm_cbe_2714_count = 0;
  static  unsigned long long aesl_llvm_cbe_2715_count = 0;
  static  unsigned long long aesl_llvm_cbe_2716_count = 0;
  static  unsigned long long aesl_llvm_cbe_2717_count = 0;
  static  unsigned long long aesl_llvm_cbe_2718_count = 0;
  static  unsigned long long aesl_llvm_cbe_2719_count = 0;
  static  unsigned long long aesl_llvm_cbe_2720_count = 0;
  static  unsigned long long aesl_llvm_cbe_2721_count = 0;
  static  unsigned long long aesl_llvm_cbe_2722_count = 0;
  static  unsigned long long aesl_llvm_cbe_2723_count = 0;
  static  unsigned long long aesl_llvm_cbe_2724_count = 0;
  static  unsigned long long aesl_llvm_cbe_2725_count = 0;
  static  unsigned long long aesl_llvm_cbe_2726_count = 0;
  static  unsigned long long aesl_llvm_cbe_2727_count = 0;
  static  unsigned long long aesl_llvm_cbe_2728_count = 0;
  static  unsigned long long aesl_llvm_cbe_2729_count = 0;
  static  unsigned long long aesl_llvm_cbe_2730_count = 0;
  static  unsigned long long aesl_llvm_cbe_2731_count = 0;
  static  unsigned long long aesl_llvm_cbe_2732_count = 0;
  static  unsigned long long aesl_llvm_cbe_2733_count = 0;
  static  unsigned long long aesl_llvm_cbe_2734_count = 0;
  static  unsigned long long aesl_llvm_cbe_2735_count = 0;
  static  unsigned long long aesl_llvm_cbe_2736_count = 0;
  static  unsigned long long aesl_llvm_cbe_2737_count = 0;
  static  unsigned long long aesl_llvm_cbe_2738_count = 0;
  static  unsigned long long aesl_llvm_cbe_2739_count = 0;
  static  unsigned long long aesl_llvm_cbe_2740_count = 0;
  static  unsigned long long aesl_llvm_cbe_2741_count = 0;
  static  unsigned long long aesl_llvm_cbe_2742_count = 0;
  static  unsigned long long aesl_llvm_cbe_2743_count = 0;
  static  unsigned long long aesl_llvm_cbe_2744_count = 0;
  static  unsigned long long aesl_llvm_cbe_2745_count = 0;
  static  unsigned long long aesl_llvm_cbe_2746_count = 0;
  static  unsigned long long aesl_llvm_cbe_2747_count = 0;
  static  unsigned long long aesl_llvm_cbe_2748_count = 0;
  static  unsigned long long aesl_llvm_cbe_2749_count = 0;
  static  unsigned long long aesl_llvm_cbe_2750_count = 0;
  static  unsigned long long aesl_llvm_cbe_2751_count = 0;
  static  unsigned long long aesl_llvm_cbe_2752_count = 0;
  static  unsigned long long aesl_llvm_cbe_2753_count = 0;
  static  unsigned long long aesl_llvm_cbe_2754_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond66_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2755_count = 0;
  static  unsigned long long aesl_llvm_cbe_2756_count = 0;
  static  unsigned long long aesl_llvm_cbe_2757_count = 0;
  static  unsigned long long aesl_llvm_cbe_2758_count = 0;
  static  unsigned long long aesl_llvm_cbe_2759_count = 0;
  static  unsigned long long aesl_llvm_cbe_2760_count = 0;
  static  unsigned long long aesl_llvm_cbe_2761_count = 0;
  static  unsigned long long aesl_llvm_cbe_2762_count = 0;
  static  unsigned long long aesl_llvm_cbe_2763_count = 0;
  static  unsigned long long aesl_llvm_cbe_2764_count = 0;
  static  unsigned long long aesl_llvm_cbe_2765_count = 0;
  static  unsigned long long aesl_llvm_cbe_2766_count = 0;
  static  unsigned long long aesl_llvm_cbe_2767_count = 0;
  static  unsigned long long aesl_llvm_cbe_2768_count = 0;
  static  unsigned long long aesl_llvm_cbe_2769_count = 0;
  static  unsigned long long aesl_llvm_cbe_2770_count = 0;
  static  unsigned long long aesl_llvm_cbe_2771_count = 0;
  static  unsigned long long aesl_llvm_cbe_2772_count = 0;
  static  unsigned long long aesl_llvm_cbe_2773_count = 0;
  static  unsigned long long aesl_llvm_cbe_2774_count = 0;
  static  unsigned long long aesl_llvm_cbe_2775_count = 0;
  static  unsigned long long aesl_llvm_cbe_2776_count = 0;
  static  unsigned long long aesl_llvm_cbe_2777_count = 0;
  static  unsigned long long aesl_llvm_cbe_2778_count = 0;
  static  unsigned long long aesl_llvm_cbe_2779_count = 0;
  static  unsigned long long aesl_llvm_cbe_2780_count = 0;
  static  unsigned long long aesl_llvm_cbe_2781_count = 0;
  static  unsigned long long aesl_llvm_cbe_2782_count = 0;
  static  unsigned long long aesl_llvm_cbe_2783_count = 0;
  static  unsigned long long aesl_llvm_cbe_2784_count = 0;
  static  unsigned long long aesl_llvm_cbe_2785_count = 0;
  static  unsigned long long aesl_llvm_cbe_2786_count = 0;
  static  unsigned long long aesl_llvm_cbe_2787_count = 0;
  static  unsigned long long aesl_llvm_cbe_2788_count = 0;
  static  unsigned long long aesl_llvm_cbe_2789_count = 0;
  static  unsigned long long aesl_llvm_cbe_2790_count = 0;
  static  unsigned long long aesl_llvm_cbe_2791_count = 0;
  static  unsigned long long aesl_llvm_cbe_2792_count = 0;
  static  unsigned long long aesl_llvm_cbe_2793_count = 0;
  static  unsigned long long aesl_llvm_cbe_2794_count = 0;
  static  unsigned long long aesl_llvm_cbe_2795_count = 0;
  static  unsigned long long aesl_llvm_cbe_2796_count = 0;
  static  unsigned long long aesl_llvm_cbe_2797_count = 0;
  static  unsigned long long aesl_llvm_cbe_2798_count = 0;
  static  unsigned long long aesl_llvm_cbe_2799_count = 0;
  static  unsigned long long aesl_llvm_cbe_2800_count = 0;
  static  unsigned long long aesl_llvm_cbe_2801_count = 0;
  static  unsigned long long aesl_llvm_cbe_2802_count = 0;
  static  unsigned long long aesl_llvm_cbe_2803_count = 0;
  static  unsigned long long aesl_llvm_cbe_2804_count = 0;
  static  unsigned long long aesl_llvm_cbe_2805_count = 0;
  static  unsigned long long aesl_llvm_cbe_2806_count = 0;
  static  unsigned long long aesl_llvm_cbe_2807_count = 0;
  static  unsigned long long aesl_llvm_cbe_2808_count = 0;
  static  unsigned long long aesl_llvm_cbe_2809_count = 0;
  static  unsigned long long aesl_llvm_cbe_2810_count = 0;
  static  unsigned long long aesl_llvm_cbe_2811_count = 0;
  static  unsigned long long aesl_llvm_cbe_2812_count = 0;
  static  unsigned long long aesl_llvm_cbe_2813_count = 0;
  static  unsigned long long aesl_llvm_cbe_2814_count = 0;
  static  unsigned long long aesl_llvm_cbe_2815_count = 0;
  static  unsigned long long aesl_llvm_cbe_2816_count = 0;
  static  unsigned long long aesl_llvm_cbe_2817_count = 0;
  static  unsigned long long aesl_llvm_cbe_2818_count = 0;
  static  unsigned long long aesl_llvm_cbe_2819_count = 0;
  static  unsigned long long aesl_llvm_cbe_2820_count = 0;
  static  unsigned long long aesl_llvm_cbe_2821_count = 0;
  static  unsigned long long aesl_llvm_cbe_2822_count = 0;
  static  unsigned long long aesl_llvm_cbe_2823_count = 0;
  static  unsigned long long aesl_llvm_cbe_2824_count = 0;
  static  unsigned long long aesl_llvm_cbe_2825_count = 0;
  static  unsigned long long aesl_llvm_cbe_2826_count = 0;
  static  unsigned long long aesl_llvm_cbe_2827_count = 0;
  static  unsigned long long aesl_llvm_cbe_2828_count = 0;
  static  unsigned long long aesl_llvm_cbe_2829_count = 0;
  static  unsigned long long aesl_llvm_cbe_2830_count = 0;
  static  unsigned long long aesl_llvm_cbe_2831_count = 0;
  static  unsigned long long aesl_llvm_cbe_2832_count = 0;
  static  unsigned long long aesl_llvm_cbe_2833_count = 0;
  static  unsigned long long aesl_llvm_cbe_2834_count = 0;
  static  unsigned long long aesl_llvm_cbe_2835_count = 0;
  static  unsigned long long aesl_llvm_cbe_2836_count = 0;
  static  unsigned long long aesl_llvm_cbe_2837_count = 0;
  static  unsigned long long aesl_llvm_cbe_2838_count = 0;
  static  unsigned long long aesl_llvm_cbe_2839_count = 0;
  static  unsigned long long aesl_llvm_cbe_2840_count = 0;
  static  unsigned long long aesl_llvm_cbe_2841_count = 0;
  static  unsigned long long aesl_llvm_cbe_2842_count = 0;
  static  unsigned long long aesl_llvm_cbe_2843_count = 0;
  static  unsigned long long aesl_llvm_cbe_2844_count = 0;
  static  unsigned long long aesl_llvm_cbe_2845_count = 0;
  static  unsigned long long aesl_llvm_cbe_2846_count = 0;
  static  unsigned long long aesl_llvm_cbe_2847_count = 0;
  static  unsigned long long aesl_llvm_cbe_2848_count = 0;
  static  unsigned long long aesl_llvm_cbe_2849_count = 0;
  static  unsigned long long aesl_llvm_cbe_2850_count = 0;
  static  unsigned long long aesl_llvm_cbe_2851_count = 0;
  static  unsigned long long aesl_llvm_cbe_2852_count = 0;
  static  unsigned long long aesl_llvm_cbe_2853_count = 0;
  static  unsigned long long aesl_llvm_cbe_2854_count = 0;
  static  unsigned long long aesl_llvm_cbe_2855_count = 0;
  static  unsigned long long aesl_llvm_cbe_2856_count = 0;
  static  unsigned long long aesl_llvm_cbe_2857_count = 0;
  static  unsigned long long aesl_llvm_cbe_2858_count = 0;
  static  unsigned long long aesl_llvm_cbe_2859_count = 0;
  static  unsigned long long aesl_llvm_cbe_2860_count = 0;
  static  unsigned long long aesl_llvm_cbe_2861_count = 0;
  static  unsigned long long aesl_llvm_cbe_2862_count = 0;
  static  unsigned long long aesl_llvm_cbe_2863_count = 0;
  static  unsigned long long aesl_llvm_cbe_2864_count = 0;
  static  unsigned long long aesl_llvm_cbe_2865_count = 0;
  static  unsigned long long aesl_llvm_cbe_2866_count = 0;
  static  unsigned long long aesl_llvm_cbe_2867_count = 0;
  static  unsigned long long aesl_llvm_cbe_2868_count = 0;
  static  unsigned long long aesl_llvm_cbe_2869_count = 0;
  static  unsigned long long aesl_llvm_cbe_2870_count = 0;
  static  unsigned long long aesl_llvm_cbe_2871_count = 0;
  static  unsigned long long aesl_llvm_cbe_2872_count = 0;
  static  unsigned long long aesl_llvm_cbe_2873_count = 0;
  static  unsigned long long aesl_llvm_cbe_2874_count = 0;
  static  unsigned long long aesl_llvm_cbe_2875_count = 0;
  static  unsigned long long aesl_llvm_cbe_2876_count = 0;
  static  unsigned long long aesl_llvm_cbe_2877_count = 0;
  static  unsigned long long aesl_llvm_cbe_2878_count = 0;
  static  unsigned long long aesl_llvm_cbe_2879_count = 0;
  static  unsigned long long aesl_llvm_cbe_2880_count = 0;
  static  unsigned long long aesl_llvm_cbe_2881_count = 0;
  static  unsigned long long aesl_llvm_cbe_2882_count = 0;
  static  unsigned long long aesl_llvm_cbe_2883_count = 0;
  static  unsigned long long aesl_llvm_cbe_2884_count = 0;
  static  unsigned long long aesl_llvm_cbe_2885_count = 0;
  static  unsigned long long aesl_llvm_cbe_2886_count = 0;
  static  unsigned long long aesl_llvm_cbe_2887_count = 0;
  static  unsigned long long aesl_llvm_cbe_2888_count = 0;
  static  unsigned long long aesl_llvm_cbe_2889_count = 0;
  static  unsigned long long aesl_llvm_cbe_2890_count = 0;
  static  unsigned long long aesl_llvm_cbe_2891_count = 0;
  static  unsigned long long aesl_llvm_cbe_2892_count = 0;
  unsigned int llvm_cbe_tmp__293;
  static  unsigned long long aesl_llvm_cbe_2893_count = 0;
  unsigned long long llvm_cbe_tmp__294;
  static  unsigned long long aesl_llvm_cbe_2894_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1044_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge1044_2e_2;
  unsigned int llvm_cbe_storemerge1044_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_2895_count = 0;
  unsigned long long llvm_cbe_tmp__295;
  static  unsigned long long aesl_llvm_cbe_2896_count = 0;
  signed short *llvm_cbe_tmp__296;
  static  unsigned long long aesl_llvm_cbe_2897_count = 0;
  unsigned short llvm_cbe_tmp__297;
  static  unsigned long long aesl_llvm_cbe_2898_count = 0;
  unsigned int llvm_cbe_tmp__298;
  static  unsigned long long aesl_llvm_cbe_2899_count = 0;
  unsigned int llvm_cbe_tmp__299;
  static  unsigned long long aesl_llvm_cbe_2900_count = 0;
  unsigned int llvm_cbe_tmp__300;
  static  unsigned long long aesl_llvm_cbe_2901_count = 0;
  signed short *llvm_cbe_tmp__301;
  static  unsigned long long aesl_llvm_cbe_2902_count = 0;
  unsigned short llvm_cbe_tmp__302;
  static  unsigned long long aesl_llvm_cbe_2903_count = 0;
  unsigned short llvm_cbe_tmp__303;
  static  unsigned long long aesl_llvm_cbe_2904_count = 0;
  unsigned short llvm_cbe_tmp__304;
  static  unsigned long long aesl_llvm_cbe_2905_count = 0;
  static  unsigned long long aesl_llvm_cbe_2906_count = 0;
  unsigned int llvm_cbe_tmp__305;
  static  unsigned long long aesl_llvm_cbe_2907_count = 0;
  static  unsigned long long aesl_llvm_cbe_2908_count = 0;
  static  unsigned long long aesl_llvm_cbe_2909_count = 0;
  static  unsigned long long aesl_llvm_cbe_2910_count = 0;
  static  unsigned long long aesl_llvm_cbe_2911_count = 0;
  static  unsigned long long aesl_llvm_cbe_2912_count = 0;
  static  unsigned long long aesl_llvm_cbe_2913_count = 0;
  static  unsigned long long aesl_llvm_cbe_2914_count = 0;
  static  unsigned long long aesl_llvm_cbe_2915_count = 0;
  static  unsigned long long aesl_llvm_cbe_2916_count = 0;
  static  unsigned long long aesl_llvm_cbe_2917_count = 0;
  static  unsigned long long aesl_llvm_cbe_2918_count = 0;
  static  unsigned long long aesl_llvm_cbe_2919_count = 0;
  static  unsigned long long aesl_llvm_cbe_2920_count = 0;
  static  unsigned long long aesl_llvm_cbe_2921_count = 0;
  static  unsigned long long aesl_llvm_cbe_2922_count = 0;
  static  unsigned long long aesl_llvm_cbe_2923_count = 0;
  static  unsigned long long aesl_llvm_cbe_2924_count = 0;
  static  unsigned long long aesl_llvm_cbe_2925_count = 0;
  static  unsigned long long aesl_llvm_cbe_2926_count = 0;
  static  unsigned long long aesl_llvm_cbe_2927_count = 0;
  static  unsigned long long aesl_llvm_cbe_2928_count = 0;
  static  unsigned long long aesl_llvm_cbe_2929_count = 0;
  static  unsigned long long aesl_llvm_cbe_2930_count = 0;
  static  unsigned long long aesl_llvm_cbe_2931_count = 0;
  static  unsigned long long aesl_llvm_cbe_2932_count = 0;
  static  unsigned long long aesl_llvm_cbe_2933_count = 0;
  static  unsigned long long aesl_llvm_cbe_2934_count = 0;
  static  unsigned long long aesl_llvm_cbe_2935_count = 0;
  static  unsigned long long aesl_llvm_cbe_2936_count = 0;
  static  unsigned long long aesl_llvm_cbe_2937_count = 0;
  static  unsigned long long aesl_llvm_cbe_2938_count = 0;
  static  unsigned long long aesl_llvm_cbe_2939_count = 0;
  static  unsigned long long aesl_llvm_cbe_2940_count = 0;
  static  unsigned long long aesl_llvm_cbe_2941_count = 0;
  static  unsigned long long aesl_llvm_cbe_2942_count = 0;
  static  unsigned long long aesl_llvm_cbe_2943_count = 0;
  static  unsigned long long aesl_llvm_cbe_2944_count = 0;
  static  unsigned long long aesl_llvm_cbe_2945_count = 0;
  static  unsigned long long aesl_llvm_cbe_2946_count = 0;
  static  unsigned long long aesl_llvm_cbe_2947_count = 0;
  static  unsigned long long aesl_llvm_cbe_2948_count = 0;
  static  unsigned long long aesl_llvm_cbe_2949_count = 0;
  static  unsigned long long aesl_llvm_cbe_2950_count = 0;
  static  unsigned long long aesl_llvm_cbe_2951_count = 0;
  static  unsigned long long aesl_llvm_cbe_2952_count = 0;
  static  unsigned long long aesl_llvm_cbe_2953_count = 0;
  static  unsigned long long aesl_llvm_cbe_2954_count = 0;
  static  unsigned long long aesl_llvm_cbe_2955_count = 0;
  static  unsigned long long aesl_llvm_cbe_2956_count = 0;
  static  unsigned long long aesl_llvm_cbe_2957_count = 0;
  static  unsigned long long aesl_llvm_cbe_2958_count = 0;
  static  unsigned long long aesl_llvm_cbe_2959_count = 0;
  static  unsigned long long aesl_llvm_cbe_2960_count = 0;
  static  unsigned long long aesl_llvm_cbe_2961_count = 0;
  static  unsigned long long aesl_llvm_cbe_2962_count = 0;
  static  unsigned long long aesl_llvm_cbe_2963_count = 0;
  static  unsigned long long aesl_llvm_cbe_2964_count = 0;
  static  unsigned long long aesl_llvm_cbe_2965_count = 0;
  static  unsigned long long aesl_llvm_cbe_2966_count = 0;
  static  unsigned long long aesl_llvm_cbe_2967_count = 0;
  static  unsigned long long aesl_llvm_cbe_2968_count = 0;
  static  unsigned long long aesl_llvm_cbe_2969_count = 0;
  static  unsigned long long aesl_llvm_cbe_2970_count = 0;
  static  unsigned long long aesl_llvm_cbe_2971_count = 0;
  static  unsigned long long aesl_llvm_cbe_2972_count = 0;
  static  unsigned long long aesl_llvm_cbe_2973_count = 0;
  static  unsigned long long aesl_llvm_cbe_2974_count = 0;
  static  unsigned long long aesl_llvm_cbe_2975_count = 0;
  static  unsigned long long aesl_llvm_cbe_2976_count = 0;
  static  unsigned long long aesl_llvm_cbe_2977_count = 0;
  static  unsigned long long aesl_llvm_cbe_2978_count = 0;
  static  unsigned long long aesl_llvm_cbe_2979_count = 0;
  static  unsigned long long aesl_llvm_cbe_2980_count = 0;
  static  unsigned long long aesl_llvm_cbe_2981_count = 0;
  static  unsigned long long aesl_llvm_cbe_2982_count = 0;
  static  unsigned long long aesl_llvm_cbe_2983_count = 0;
  static  unsigned long long aesl_llvm_cbe_2984_count = 0;
  static  unsigned long long aesl_llvm_cbe_2985_count = 0;
  static  unsigned long long aesl_llvm_cbe_2986_count = 0;
  static  unsigned long long aesl_llvm_cbe_2987_count = 0;
  static  unsigned long long aesl_llvm_cbe_2988_count = 0;
  static  unsigned long long aesl_llvm_cbe_2989_count = 0;
  static  unsigned long long aesl_llvm_cbe_2990_count = 0;
  static  unsigned long long aesl_llvm_cbe_2991_count = 0;
  static  unsigned long long aesl_llvm_cbe_2992_count = 0;
  static  unsigned long long aesl_llvm_cbe_2993_count = 0;
  static  unsigned long long aesl_llvm_cbe_2994_count = 0;
  static  unsigned long long aesl_llvm_cbe_2995_count = 0;
  static  unsigned long long aesl_llvm_cbe_2996_count = 0;
  static  unsigned long long aesl_llvm_cbe_2997_count = 0;
  static  unsigned long long aesl_llvm_cbe_2998_count = 0;
  static  unsigned long long aesl_llvm_cbe_2999_count = 0;
  static  unsigned long long aesl_llvm_cbe_3000_count = 0;
  static  unsigned long long aesl_llvm_cbe_3001_count = 0;
  static  unsigned long long aesl_llvm_cbe_3002_count = 0;
  static  unsigned long long aesl_llvm_cbe_3003_count = 0;
  static  unsigned long long aesl_llvm_cbe_3004_count = 0;
  static  unsigned long long aesl_llvm_cbe_3005_count = 0;
  static  unsigned long long aesl_llvm_cbe_3006_count = 0;
  static  unsigned long long aesl_llvm_cbe_3007_count = 0;
  static  unsigned long long aesl_llvm_cbe_3008_count = 0;
  static  unsigned long long aesl_llvm_cbe_3009_count = 0;
  static  unsigned long long aesl_llvm_cbe_3010_count = 0;
  static  unsigned long long aesl_llvm_cbe_3011_count = 0;
  static  unsigned long long aesl_llvm_cbe_3012_count = 0;
  static  unsigned long long aesl_llvm_cbe_3013_count = 0;
  static  unsigned long long aesl_llvm_cbe_3014_count = 0;
  static  unsigned long long aesl_llvm_cbe_3015_count = 0;
  static  unsigned long long aesl_llvm_cbe_3016_count = 0;
  static  unsigned long long aesl_llvm_cbe_3017_count = 0;
  static  unsigned long long aesl_llvm_cbe_3018_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond66_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3019_count = 0;
  static  unsigned long long aesl_llvm_cbe_3020_count = 0;
  static  unsigned long long aesl_llvm_cbe_3021_count = 0;
  static  unsigned long long aesl_llvm_cbe_3022_count = 0;
  static  unsigned long long aesl_llvm_cbe_3023_count = 0;
  static  unsigned long long aesl_llvm_cbe_3024_count = 0;
  static  unsigned long long aesl_llvm_cbe_3025_count = 0;
  static  unsigned long long aesl_llvm_cbe_3026_count = 0;
  static  unsigned long long aesl_llvm_cbe_3027_count = 0;
  static  unsigned long long aesl_llvm_cbe_3028_count = 0;
  static  unsigned long long aesl_llvm_cbe_3029_count = 0;
  static  unsigned long long aesl_llvm_cbe_3030_count = 0;
  static  unsigned long long aesl_llvm_cbe_3031_count = 0;
  static  unsigned long long aesl_llvm_cbe_3032_count = 0;
  static  unsigned long long aesl_llvm_cbe_3033_count = 0;
  static  unsigned long long aesl_llvm_cbe_3034_count = 0;
  static  unsigned long long aesl_llvm_cbe_3035_count = 0;
  static  unsigned long long aesl_llvm_cbe_3036_count = 0;
  static  unsigned long long aesl_llvm_cbe_3037_count = 0;
  static  unsigned long long aesl_llvm_cbe_3038_count = 0;
  static  unsigned long long aesl_llvm_cbe_3039_count = 0;
  static  unsigned long long aesl_llvm_cbe_3040_count = 0;
  static  unsigned long long aesl_llvm_cbe_3041_count = 0;
  static  unsigned long long aesl_llvm_cbe_3042_count = 0;
  static  unsigned long long aesl_llvm_cbe_3043_count = 0;
  static  unsigned long long aesl_llvm_cbe_3044_count = 0;
  static  unsigned long long aesl_llvm_cbe_3045_count = 0;
  static  unsigned long long aesl_llvm_cbe_3046_count = 0;
  static  unsigned long long aesl_llvm_cbe_3047_count = 0;
  static  unsigned long long aesl_llvm_cbe_3048_count = 0;
  static  unsigned long long aesl_llvm_cbe_3049_count = 0;
  static  unsigned long long aesl_llvm_cbe_3050_count = 0;
  static  unsigned long long aesl_llvm_cbe_3051_count = 0;
  static  unsigned long long aesl_llvm_cbe_3052_count = 0;
  static  unsigned long long aesl_llvm_cbe_3053_count = 0;
  static  unsigned long long aesl_llvm_cbe_3054_count = 0;
  static  unsigned long long aesl_llvm_cbe_3055_count = 0;
  static  unsigned long long aesl_llvm_cbe_3056_count = 0;
  static  unsigned long long aesl_llvm_cbe_3057_count = 0;
  static  unsigned long long aesl_llvm_cbe_3058_count = 0;
  static  unsigned long long aesl_llvm_cbe_3059_count = 0;
  static  unsigned long long aesl_llvm_cbe_3060_count = 0;
  static  unsigned long long aesl_llvm_cbe_3061_count = 0;
  static  unsigned long long aesl_llvm_cbe_3062_count = 0;
  static  unsigned long long aesl_llvm_cbe_3063_count = 0;
  static  unsigned long long aesl_llvm_cbe_3064_count = 0;
  static  unsigned long long aesl_llvm_cbe_3065_count = 0;
  static  unsigned long long aesl_llvm_cbe_3066_count = 0;
  static  unsigned long long aesl_llvm_cbe_3067_count = 0;
  static  unsigned long long aesl_llvm_cbe_3068_count = 0;
  static  unsigned long long aesl_llvm_cbe_3069_count = 0;
  static  unsigned long long aesl_llvm_cbe_3070_count = 0;
  static  unsigned long long aesl_llvm_cbe_3071_count = 0;
  static  unsigned long long aesl_llvm_cbe_3072_count = 0;
  static  unsigned long long aesl_llvm_cbe_3073_count = 0;
  static  unsigned long long aesl_llvm_cbe_3074_count = 0;
  static  unsigned long long aesl_llvm_cbe_3075_count = 0;
  static  unsigned long long aesl_llvm_cbe_3076_count = 0;
  static  unsigned long long aesl_llvm_cbe_3077_count = 0;
  static  unsigned long long aesl_llvm_cbe_3078_count = 0;
  static  unsigned long long aesl_llvm_cbe_3079_count = 0;
  static  unsigned long long aesl_llvm_cbe_3080_count = 0;
  static  unsigned long long aesl_llvm_cbe_3081_count = 0;
  static  unsigned long long aesl_llvm_cbe_3082_count = 0;
  static  unsigned long long aesl_llvm_cbe_3083_count = 0;
  static  unsigned long long aesl_llvm_cbe_3084_count = 0;
  static  unsigned long long aesl_llvm_cbe_3085_count = 0;
  static  unsigned long long aesl_llvm_cbe_3086_count = 0;
  static  unsigned long long aesl_llvm_cbe_3087_count = 0;
  static  unsigned long long aesl_llvm_cbe_3088_count = 0;
  static  unsigned long long aesl_llvm_cbe_3089_count = 0;
  static  unsigned long long aesl_llvm_cbe_3090_count = 0;
  static  unsigned long long aesl_llvm_cbe_3091_count = 0;
  static  unsigned long long aesl_llvm_cbe_3092_count = 0;
  static  unsigned long long aesl_llvm_cbe_3093_count = 0;
  static  unsigned long long aesl_llvm_cbe_3094_count = 0;
  static  unsigned long long aesl_llvm_cbe_3095_count = 0;
  static  unsigned long long aesl_llvm_cbe_3096_count = 0;
  static  unsigned long long aesl_llvm_cbe_3097_count = 0;
  static  unsigned long long aesl_llvm_cbe_3098_count = 0;
  static  unsigned long long aesl_llvm_cbe_3099_count = 0;
  static  unsigned long long aesl_llvm_cbe_3100_count = 0;
  static  unsigned long long aesl_llvm_cbe_3101_count = 0;
  static  unsigned long long aesl_llvm_cbe_3102_count = 0;
  static  unsigned long long aesl_llvm_cbe_3103_count = 0;
  static  unsigned long long aesl_llvm_cbe_3104_count = 0;
  static  unsigned long long aesl_llvm_cbe_3105_count = 0;
  static  unsigned long long aesl_llvm_cbe_3106_count = 0;
  static  unsigned long long aesl_llvm_cbe_3107_count = 0;
  static  unsigned long long aesl_llvm_cbe_3108_count = 0;
  static  unsigned long long aesl_llvm_cbe_3109_count = 0;
  static  unsigned long long aesl_llvm_cbe_3110_count = 0;
  static  unsigned long long aesl_llvm_cbe_3111_count = 0;
  static  unsigned long long aesl_llvm_cbe_3112_count = 0;
  static  unsigned long long aesl_llvm_cbe_3113_count = 0;
  static  unsigned long long aesl_llvm_cbe_3114_count = 0;
  static  unsigned long long aesl_llvm_cbe_3115_count = 0;
  static  unsigned long long aesl_llvm_cbe_3116_count = 0;
  static  unsigned long long aesl_llvm_cbe_3117_count = 0;
  static  unsigned long long aesl_llvm_cbe_3118_count = 0;
  static  unsigned long long aesl_llvm_cbe_3119_count = 0;
  static  unsigned long long aesl_llvm_cbe_3120_count = 0;
  static  unsigned long long aesl_llvm_cbe_3121_count = 0;
  static  unsigned long long aesl_llvm_cbe_3122_count = 0;
  static  unsigned long long aesl_llvm_cbe_3123_count = 0;
  static  unsigned long long aesl_llvm_cbe_3124_count = 0;
  static  unsigned long long aesl_llvm_cbe_3125_count = 0;
  static  unsigned long long aesl_llvm_cbe_3126_count = 0;
  static  unsigned long long aesl_llvm_cbe_3127_count = 0;
  static  unsigned long long aesl_llvm_cbe_3128_count = 0;
  static  unsigned long long aesl_llvm_cbe_3129_count = 0;
  static  unsigned long long aesl_llvm_cbe_3130_count = 0;
  static  unsigned long long aesl_llvm_cbe_3131_count = 0;
  static  unsigned long long aesl_llvm_cbe_3132_count = 0;
  static  unsigned long long aesl_llvm_cbe_3133_count = 0;
  static  unsigned long long aesl_llvm_cbe_3134_count = 0;
  static  unsigned long long aesl_llvm_cbe_3135_count = 0;
  static  unsigned long long aesl_llvm_cbe_3136_count = 0;
  static  unsigned long long aesl_llvm_cbe_3137_count = 0;
  static  unsigned long long aesl_llvm_cbe_3138_count = 0;
  static  unsigned long long aesl_llvm_cbe_3139_count = 0;
  static  unsigned long long aesl_llvm_cbe_3140_count = 0;
  static  unsigned long long aesl_llvm_cbe_3141_count = 0;
  static  unsigned long long aesl_llvm_cbe_3142_count = 0;
  static  unsigned long long aesl_llvm_cbe_3143_count = 0;
  static  unsigned long long aesl_llvm_cbe_3144_count = 0;
  static  unsigned long long aesl_llvm_cbe_3145_count = 0;
  static  unsigned long long aesl_llvm_cbe_3146_count = 0;
  static  unsigned long long aesl_llvm_cbe_3147_count = 0;
  static  unsigned long long aesl_llvm_cbe_3148_count = 0;
  static  unsigned long long aesl_llvm_cbe_3149_count = 0;
  static  unsigned long long aesl_llvm_cbe_3150_count = 0;
  static  unsigned long long aesl_llvm_cbe_3151_count = 0;
  static  unsigned long long aesl_llvm_cbe_3152_count = 0;
  static  unsigned long long aesl_llvm_cbe_3153_count = 0;
  static  unsigned long long aesl_llvm_cbe_3154_count = 0;
  static  unsigned long long aesl_llvm_cbe_3155_count = 0;
  static  unsigned long long aesl_llvm_cbe_3156_count = 0;
  unsigned int llvm_cbe_tmp__306;
  static  unsigned long long aesl_llvm_cbe_3157_count = 0;
  unsigned long long llvm_cbe_tmp__307;
  static  unsigned long long aesl_llvm_cbe_3158_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1044_2e_3_count = 0;
  unsigned int llvm_cbe_storemerge1044_2e_3;
  unsigned int llvm_cbe_storemerge1044_2e_3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3159_count = 0;
  unsigned long long llvm_cbe_tmp__308;
  static  unsigned long long aesl_llvm_cbe_3160_count = 0;
  signed short *llvm_cbe_tmp__309;
  static  unsigned long long aesl_llvm_cbe_3161_count = 0;
  unsigned short llvm_cbe_tmp__310;
  static  unsigned long long aesl_llvm_cbe_3162_count = 0;
  unsigned int llvm_cbe_tmp__311;
  static  unsigned long long aesl_llvm_cbe_3163_count = 0;
  unsigned int llvm_cbe_tmp__312;
  static  unsigned long long aesl_llvm_cbe_3164_count = 0;
  unsigned int llvm_cbe_tmp__313;
  static  unsigned long long aesl_llvm_cbe_3165_count = 0;
  signed short *llvm_cbe_tmp__314;
  static  unsigned long long aesl_llvm_cbe_3166_count = 0;
  unsigned short llvm_cbe_tmp__315;
  static  unsigned long long aesl_llvm_cbe_3167_count = 0;
  unsigned short llvm_cbe_tmp__316;
  static  unsigned long long aesl_llvm_cbe_3168_count = 0;
  unsigned short llvm_cbe_tmp__317;
  static  unsigned long long aesl_llvm_cbe_3169_count = 0;
  static  unsigned long long aesl_llvm_cbe_3170_count = 0;
  unsigned int llvm_cbe_tmp__318;
  static  unsigned long long aesl_llvm_cbe_3171_count = 0;
  static  unsigned long long aesl_llvm_cbe_3172_count = 0;
  static  unsigned long long aesl_llvm_cbe_3173_count = 0;
  static  unsigned long long aesl_llvm_cbe_3174_count = 0;
  static  unsigned long long aesl_llvm_cbe_3175_count = 0;
  static  unsigned long long aesl_llvm_cbe_3176_count = 0;
  static  unsigned long long aesl_llvm_cbe_3177_count = 0;
  static  unsigned long long aesl_llvm_cbe_3178_count = 0;
  static  unsigned long long aesl_llvm_cbe_3179_count = 0;
  static  unsigned long long aesl_llvm_cbe_3180_count = 0;
  static  unsigned long long aesl_llvm_cbe_3181_count = 0;
  static  unsigned long long aesl_llvm_cbe_3182_count = 0;
  static  unsigned long long aesl_llvm_cbe_3183_count = 0;
  static  unsigned long long aesl_llvm_cbe_3184_count = 0;
  static  unsigned long long aesl_llvm_cbe_3185_count = 0;
  static  unsigned long long aesl_llvm_cbe_3186_count = 0;
  static  unsigned long long aesl_llvm_cbe_3187_count = 0;
  static  unsigned long long aesl_llvm_cbe_3188_count = 0;
  static  unsigned long long aesl_llvm_cbe_3189_count = 0;
  static  unsigned long long aesl_llvm_cbe_3190_count = 0;
  static  unsigned long long aesl_llvm_cbe_3191_count = 0;
  static  unsigned long long aesl_llvm_cbe_3192_count = 0;
  static  unsigned long long aesl_llvm_cbe_3193_count = 0;
  static  unsigned long long aesl_llvm_cbe_3194_count = 0;
  static  unsigned long long aesl_llvm_cbe_3195_count = 0;
  static  unsigned long long aesl_llvm_cbe_3196_count = 0;
  static  unsigned long long aesl_llvm_cbe_3197_count = 0;
  static  unsigned long long aesl_llvm_cbe_3198_count = 0;
  static  unsigned long long aesl_llvm_cbe_3199_count = 0;
  static  unsigned long long aesl_llvm_cbe_3200_count = 0;
  static  unsigned long long aesl_llvm_cbe_3201_count = 0;
  static  unsigned long long aesl_llvm_cbe_3202_count = 0;
  static  unsigned long long aesl_llvm_cbe_3203_count = 0;
  static  unsigned long long aesl_llvm_cbe_3204_count = 0;
  static  unsigned long long aesl_llvm_cbe_3205_count = 0;
  static  unsigned long long aesl_llvm_cbe_3206_count = 0;
  static  unsigned long long aesl_llvm_cbe_3207_count = 0;
  static  unsigned long long aesl_llvm_cbe_3208_count = 0;
  static  unsigned long long aesl_llvm_cbe_3209_count = 0;
  static  unsigned long long aesl_llvm_cbe_3210_count = 0;
  static  unsigned long long aesl_llvm_cbe_3211_count = 0;
  static  unsigned long long aesl_llvm_cbe_3212_count = 0;
  static  unsigned long long aesl_llvm_cbe_3213_count = 0;
  static  unsigned long long aesl_llvm_cbe_3214_count = 0;
  static  unsigned long long aesl_llvm_cbe_3215_count = 0;
  static  unsigned long long aesl_llvm_cbe_3216_count = 0;
  static  unsigned long long aesl_llvm_cbe_3217_count = 0;
  static  unsigned long long aesl_llvm_cbe_3218_count = 0;
  static  unsigned long long aesl_llvm_cbe_3219_count = 0;
  static  unsigned long long aesl_llvm_cbe_3220_count = 0;
  static  unsigned long long aesl_llvm_cbe_3221_count = 0;
  static  unsigned long long aesl_llvm_cbe_3222_count = 0;
  static  unsigned long long aesl_llvm_cbe_3223_count = 0;
  static  unsigned long long aesl_llvm_cbe_3224_count = 0;
  static  unsigned long long aesl_llvm_cbe_3225_count = 0;
  static  unsigned long long aesl_llvm_cbe_3226_count = 0;
  static  unsigned long long aesl_llvm_cbe_3227_count = 0;
  static  unsigned long long aesl_llvm_cbe_3228_count = 0;
  static  unsigned long long aesl_llvm_cbe_3229_count = 0;
  static  unsigned long long aesl_llvm_cbe_3230_count = 0;
  static  unsigned long long aesl_llvm_cbe_3231_count = 0;
  static  unsigned long long aesl_llvm_cbe_3232_count = 0;
  static  unsigned long long aesl_llvm_cbe_3233_count = 0;
  static  unsigned long long aesl_llvm_cbe_3234_count = 0;
  static  unsigned long long aesl_llvm_cbe_3235_count = 0;
  static  unsigned long long aesl_llvm_cbe_3236_count = 0;
  static  unsigned long long aesl_llvm_cbe_3237_count = 0;
  static  unsigned long long aesl_llvm_cbe_3238_count = 0;
  static  unsigned long long aesl_llvm_cbe_3239_count = 0;
  static  unsigned long long aesl_llvm_cbe_3240_count = 0;
  static  unsigned long long aesl_llvm_cbe_3241_count = 0;
  static  unsigned long long aesl_llvm_cbe_3242_count = 0;
  static  unsigned long long aesl_llvm_cbe_3243_count = 0;
  static  unsigned long long aesl_llvm_cbe_3244_count = 0;
  static  unsigned long long aesl_llvm_cbe_3245_count = 0;
  static  unsigned long long aesl_llvm_cbe_3246_count = 0;
  static  unsigned long long aesl_llvm_cbe_3247_count = 0;
  static  unsigned long long aesl_llvm_cbe_3248_count = 0;
  static  unsigned long long aesl_llvm_cbe_3249_count = 0;
  static  unsigned long long aesl_llvm_cbe_3250_count = 0;
  static  unsigned long long aesl_llvm_cbe_3251_count = 0;
  static  unsigned long long aesl_llvm_cbe_3252_count = 0;
  static  unsigned long long aesl_llvm_cbe_3253_count = 0;
  static  unsigned long long aesl_llvm_cbe_3254_count = 0;
  static  unsigned long long aesl_llvm_cbe_3255_count = 0;
  static  unsigned long long aesl_llvm_cbe_3256_count = 0;
  static  unsigned long long aesl_llvm_cbe_3257_count = 0;
  static  unsigned long long aesl_llvm_cbe_3258_count = 0;
  static  unsigned long long aesl_llvm_cbe_3259_count = 0;
  static  unsigned long long aesl_llvm_cbe_3260_count = 0;
  static  unsigned long long aesl_llvm_cbe_3261_count = 0;
  static  unsigned long long aesl_llvm_cbe_3262_count = 0;
  static  unsigned long long aesl_llvm_cbe_3263_count = 0;
  static  unsigned long long aesl_llvm_cbe_3264_count = 0;
  static  unsigned long long aesl_llvm_cbe_3265_count = 0;
  static  unsigned long long aesl_llvm_cbe_3266_count = 0;
  static  unsigned long long aesl_llvm_cbe_3267_count = 0;
  static  unsigned long long aesl_llvm_cbe_3268_count = 0;
  static  unsigned long long aesl_llvm_cbe_3269_count = 0;
  static  unsigned long long aesl_llvm_cbe_3270_count = 0;
  static  unsigned long long aesl_llvm_cbe_3271_count = 0;
  static  unsigned long long aesl_llvm_cbe_3272_count = 0;
  static  unsigned long long aesl_llvm_cbe_3273_count = 0;
  static  unsigned long long aesl_llvm_cbe_3274_count = 0;
  static  unsigned long long aesl_llvm_cbe_3275_count = 0;
  static  unsigned long long aesl_llvm_cbe_3276_count = 0;
  static  unsigned long long aesl_llvm_cbe_3277_count = 0;
  static  unsigned long long aesl_llvm_cbe_3278_count = 0;
  static  unsigned long long aesl_llvm_cbe_3279_count = 0;
  static  unsigned long long aesl_llvm_cbe_3280_count = 0;
  static  unsigned long long aesl_llvm_cbe_3281_count = 0;
  static  unsigned long long aesl_llvm_cbe_3282_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond66_2e_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_3283_count = 0;
  static  unsigned long long aesl_llvm_cbe_3284_count = 0;
  static  unsigned long long aesl_llvm_cbe_3285_count = 0;
  static  unsigned long long aesl_llvm_cbe_3286_count = 0;
  static  unsigned long long aesl_llvm_cbe_3287_count = 0;
  static  unsigned long long aesl_llvm_cbe_3288_count = 0;
  static  unsigned long long aesl_llvm_cbe_3289_count = 0;
  static  unsigned long long aesl_llvm_cbe_3290_count = 0;
  static  unsigned long long aesl_llvm_cbe_3291_count = 0;
  static  unsigned long long aesl_llvm_cbe_3292_count = 0;
  static  unsigned long long aesl_llvm_cbe_3293_count = 0;
  static  unsigned long long aesl_llvm_cbe_3294_count = 0;
  static  unsigned long long aesl_llvm_cbe_3295_count = 0;
  static  unsigned long long aesl_llvm_cbe_3296_count = 0;
  static  unsigned long long aesl_llvm_cbe_3297_count = 0;
  static  unsigned long long aesl_llvm_cbe_3298_count = 0;
  static  unsigned long long aesl_llvm_cbe_3299_count = 0;
  static  unsigned long long aesl_llvm_cbe_3300_count = 0;
  static  unsigned long long aesl_llvm_cbe_3301_count = 0;
  static  unsigned long long aesl_llvm_cbe_3302_count = 0;
  static  unsigned long long aesl_llvm_cbe_3303_count = 0;
  static  unsigned long long aesl_llvm_cbe_3304_count = 0;
  static  unsigned long long aesl_llvm_cbe_3305_count = 0;
  static  unsigned long long aesl_llvm_cbe_3306_count = 0;
  static  unsigned long long aesl_llvm_cbe_3307_count = 0;
  static  unsigned long long aesl_llvm_cbe_3308_count = 0;
  static  unsigned long long aesl_llvm_cbe_3309_count = 0;
  unsigned int llvm_cbe_tmp__319;
  static  unsigned long long aesl_llvm_cbe_3310_count = 0;
  static  unsigned long long aesl_llvm_cbe_3311_count = 0;
  static  unsigned long long aesl_llvm_cbe_3312_count = 0;
  static  unsigned long long aesl_llvm_cbe_3313_count = 0;
  static  unsigned long long aesl_llvm_cbe_3314_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond68_count = 0;
  static  unsigned long long aesl_llvm_cbe_3315_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1150_2e_1_count = 0;
  unsigned int llvm_cbe_storemerge1150_2e_1;
  unsigned int llvm_cbe_storemerge1150_2e_1__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3316_count = 0;
  unsigned long long llvm_cbe_tmp__320;
  static  unsigned long long aesl_llvm_cbe_3317_count = 0;
  signed short *llvm_cbe_tmp__321;
  static  unsigned long long aesl_llvm_cbe_3318_count = 0;
  unsigned short llvm_cbe_tmp__322;
  static  unsigned long long aesl_llvm_cbe_3319_count = 0;
  unsigned int llvm_cbe_tmp__323;
  static  unsigned long long aesl_llvm_cbe_3320_count = 0;
  unsigned int llvm_cbe_tmp__324;
  static  unsigned long long aesl_llvm_cbe_3321_count = 0;
  unsigned int llvm_cbe_tmp__325;
  static  unsigned long long aesl_llvm_cbe_3322_count = 0;
  unsigned short llvm_cbe_tmp__326;
  static  unsigned long long aesl_llvm_cbe_3323_count = 0;
  signed short *llvm_cbe_tmp__327;
  static  unsigned long long aesl_llvm_cbe_3324_count = 0;
  static  unsigned long long aesl_llvm_cbe_3325_count = 0;
  unsigned int llvm_cbe_tmp__328;
  static  unsigned long long aesl_llvm_cbe_3326_count = 0;
  static  unsigned long long aesl_llvm_cbe_3327_count = 0;
  static  unsigned long long aesl_llvm_cbe_3328_count = 0;
  static  unsigned long long aesl_llvm_cbe_3329_count = 0;
  static  unsigned long long aesl_llvm_cbe_3330_count = 0;
  static  unsigned long long aesl_llvm_cbe_3331_count = 0;
  static  unsigned long long aesl_llvm_cbe_3332_count = 0;
  static  unsigned long long aesl_llvm_cbe_3333_count = 0;
  static  unsigned long long aesl_llvm_cbe_3334_count = 0;
  static  unsigned long long aesl_llvm_cbe_3335_count = 0;
  static  unsigned long long aesl_llvm_cbe_3336_count = 0;
  static  unsigned long long aesl_llvm_cbe_3337_count = 0;
  static  unsigned long long aesl_llvm_cbe_3338_count = 0;
  static  unsigned long long aesl_llvm_cbe_3339_count = 0;
  static  unsigned long long aesl_llvm_cbe_3340_count = 0;
  static  unsigned long long aesl_llvm_cbe_3341_count = 0;
  static  unsigned long long aesl_llvm_cbe_3342_count = 0;
  static  unsigned long long aesl_llvm_cbe_3343_count = 0;
  static  unsigned long long aesl_llvm_cbe_3344_count = 0;
  static  unsigned long long aesl_llvm_cbe_3345_count = 0;
  static  unsigned long long aesl_llvm_cbe_3346_count = 0;
  static  unsigned long long aesl_llvm_cbe_3347_count = 0;
  static  unsigned long long aesl_llvm_cbe_3348_count = 0;
  static  unsigned long long aesl_llvm_cbe_3349_count = 0;
  static  unsigned long long aesl_llvm_cbe_3350_count = 0;
  static  unsigned long long aesl_llvm_cbe_3351_count = 0;
  static  unsigned long long aesl_llvm_cbe_3352_count = 0;
  static  unsigned long long aesl_llvm_cbe_3353_count = 0;
  static  unsigned long long aesl_llvm_cbe_3354_count = 0;
  static  unsigned long long aesl_llvm_cbe_3355_count = 0;
  static  unsigned long long aesl_llvm_cbe_3356_count = 0;
  static  unsigned long long aesl_llvm_cbe_3357_count = 0;
  static  unsigned long long aesl_llvm_cbe_3358_count = 0;
  static  unsigned long long aesl_llvm_cbe_3359_count = 0;
  static  unsigned long long aesl_llvm_cbe_3360_count = 0;
  static  unsigned long long aesl_llvm_cbe_3361_count = 0;
  static  unsigned long long aesl_llvm_cbe_3362_count = 0;
  static  unsigned long long aesl_llvm_cbe_3363_count = 0;
  static  unsigned long long aesl_llvm_cbe_3364_count = 0;
  static  unsigned long long aesl_llvm_cbe_3365_count = 0;
  static  unsigned long long aesl_llvm_cbe_3366_count = 0;
  static  unsigned long long aesl_llvm_cbe_3367_count = 0;
  static  unsigned long long aesl_llvm_cbe_3368_count = 0;
  static  unsigned long long aesl_llvm_cbe_3369_count = 0;
  static  unsigned long long aesl_llvm_cbe_3370_count = 0;
  static  unsigned long long aesl_llvm_cbe_3371_count = 0;
  static  unsigned long long aesl_llvm_cbe_3372_count = 0;
  static  unsigned long long aesl_llvm_cbe_3373_count = 0;
  static  unsigned long long aesl_llvm_cbe_3374_count = 0;
  static  unsigned long long aesl_llvm_cbe_3375_count = 0;
  static  unsigned long long aesl_llvm_cbe_3376_count = 0;
  static  unsigned long long aesl_llvm_cbe_3377_count = 0;
  static  unsigned long long aesl_llvm_cbe_3378_count = 0;
  static  unsigned long long aesl_llvm_cbe_3379_count = 0;
  static  unsigned long long aesl_llvm_cbe_3380_count = 0;
  static  unsigned long long aesl_llvm_cbe_3381_count = 0;
  static  unsigned long long aesl_llvm_cbe_3382_count = 0;
  static  unsigned long long aesl_llvm_cbe_3383_count = 0;
  static  unsigned long long aesl_llvm_cbe_3384_count = 0;
  static  unsigned long long aesl_llvm_cbe_3385_count = 0;
  static  unsigned long long aesl_llvm_cbe_3386_count = 0;
  static  unsigned long long aesl_llvm_cbe_3387_count = 0;
  static  unsigned long long aesl_llvm_cbe_3388_count = 0;
  static  unsigned long long aesl_llvm_cbe_3389_count = 0;
  static  unsigned long long aesl_llvm_cbe_3390_count = 0;
  static  unsigned long long aesl_llvm_cbe_3391_count = 0;
  static  unsigned long long aesl_llvm_cbe_3392_count = 0;
  static  unsigned long long aesl_llvm_cbe_3393_count = 0;
  static  unsigned long long aesl_llvm_cbe_3394_count = 0;
  static  unsigned long long aesl_llvm_cbe_3395_count = 0;
  static  unsigned long long aesl_llvm_cbe_3396_count = 0;
  static  unsigned long long aesl_llvm_cbe_3397_count = 0;
  static  unsigned long long aesl_llvm_cbe_3398_count = 0;
  static  unsigned long long aesl_llvm_cbe_3399_count = 0;
  static  unsigned long long aesl_llvm_cbe_3400_count = 0;
  static  unsigned long long aesl_llvm_cbe_3401_count = 0;
  static  unsigned long long aesl_llvm_cbe_3402_count = 0;
  static  unsigned long long aesl_llvm_cbe_3403_count = 0;
  static  unsigned long long aesl_llvm_cbe_3404_count = 0;
  static  unsigned long long aesl_llvm_cbe_3405_count = 0;
  static  unsigned long long aesl_llvm_cbe_3406_count = 0;
  static  unsigned long long aesl_llvm_cbe_3407_count = 0;
  static  unsigned long long aesl_llvm_cbe_3408_count = 0;
  static  unsigned long long aesl_llvm_cbe_3409_count = 0;
  static  unsigned long long aesl_llvm_cbe_3410_count = 0;
  static  unsigned long long aesl_llvm_cbe_3411_count = 0;
  static  unsigned long long aesl_llvm_cbe_3412_count = 0;
  static  unsigned long long aesl_llvm_cbe_3413_count = 0;
  static  unsigned long long aesl_llvm_cbe_3414_count = 0;
  static  unsigned long long aesl_llvm_cbe_3415_count = 0;
  static  unsigned long long aesl_llvm_cbe_3416_count = 0;
  static  unsigned long long aesl_llvm_cbe_3417_count = 0;
  static  unsigned long long aesl_llvm_cbe_3418_count = 0;
  static  unsigned long long aesl_llvm_cbe_3419_count = 0;
  static  unsigned long long aesl_llvm_cbe_3420_count = 0;
  static  unsigned long long aesl_llvm_cbe_3421_count = 0;
  static  unsigned long long aesl_llvm_cbe_3422_count = 0;
  static  unsigned long long aesl_llvm_cbe_3423_count = 0;
  static  unsigned long long aesl_llvm_cbe_3424_count = 0;
  static  unsigned long long aesl_llvm_cbe_3425_count = 0;
  static  unsigned long long aesl_llvm_cbe_3426_count = 0;
  static  unsigned long long aesl_llvm_cbe_3427_count = 0;
  static  unsigned long long aesl_llvm_cbe_3428_count = 0;
  static  unsigned long long aesl_llvm_cbe_3429_count = 0;
  static  unsigned long long aesl_llvm_cbe_3430_count = 0;
  static  unsigned long long aesl_llvm_cbe_3431_count = 0;
  static  unsigned long long aesl_llvm_cbe_3432_count = 0;
  static  unsigned long long aesl_llvm_cbe_3433_count = 0;
  static  unsigned long long aesl_llvm_cbe_3434_count = 0;
  static  unsigned long long aesl_llvm_cbe_3435_count = 0;
  static  unsigned long long aesl_llvm_cbe_3436_count = 0;
  static  unsigned long long aesl_llvm_cbe_3437_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond69_2e_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_3438_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1150_2e_2_count = 0;
  unsigned int llvm_cbe_storemerge1150_2e_2;
  unsigned int llvm_cbe_storemerge1150_2e_2__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3439_count = 0;
  unsigned long long llvm_cbe_tmp__329;
  static  unsigned long long aesl_llvm_cbe_3440_count = 0;
  signed short *llvm_cbe_tmp__330;
  static  unsigned long long aesl_llvm_cbe_3441_count = 0;
  unsigned short llvm_cbe_tmp__331;
  static  unsigned long long aesl_llvm_cbe_3442_count = 0;
  unsigned int llvm_cbe_tmp__332;
  static  unsigned long long aesl_llvm_cbe_3443_count = 0;
  unsigned int llvm_cbe_tmp__333;
  static  unsigned long long aesl_llvm_cbe_3444_count = 0;
  unsigned int llvm_cbe_tmp__334;
  static  unsigned long long aesl_llvm_cbe_3445_count = 0;
  unsigned short llvm_cbe_tmp__335;
  static  unsigned long long aesl_llvm_cbe_3446_count = 0;
  signed short *llvm_cbe_tmp__336;
  static  unsigned long long aesl_llvm_cbe_3447_count = 0;
  static  unsigned long long aesl_llvm_cbe_3448_count = 0;
  unsigned int llvm_cbe_tmp__337;
  static  unsigned long long aesl_llvm_cbe_3449_count = 0;
  static  unsigned long long aesl_llvm_cbe_3450_count = 0;
  static  unsigned long long aesl_llvm_cbe_3451_count = 0;
  static  unsigned long long aesl_llvm_cbe_3452_count = 0;
  static  unsigned long long aesl_llvm_cbe_3453_count = 0;
  static  unsigned long long aesl_llvm_cbe_3454_count = 0;
  static  unsigned long long aesl_llvm_cbe_3455_count = 0;
  static  unsigned long long aesl_llvm_cbe_3456_count = 0;
  static  unsigned long long aesl_llvm_cbe_3457_count = 0;
  static  unsigned long long aesl_llvm_cbe_3458_count = 0;
  static  unsigned long long aesl_llvm_cbe_3459_count = 0;
  static  unsigned long long aesl_llvm_cbe_3460_count = 0;
  static  unsigned long long aesl_llvm_cbe_3461_count = 0;
  static  unsigned long long aesl_llvm_cbe_3462_count = 0;
  static  unsigned long long aesl_llvm_cbe_3463_count = 0;
  static  unsigned long long aesl_llvm_cbe_3464_count = 0;
  static  unsigned long long aesl_llvm_cbe_3465_count = 0;
  static  unsigned long long aesl_llvm_cbe_3466_count = 0;
  static  unsigned long long aesl_llvm_cbe_3467_count = 0;
  static  unsigned long long aesl_llvm_cbe_3468_count = 0;
  static  unsigned long long aesl_llvm_cbe_3469_count = 0;
  static  unsigned long long aesl_llvm_cbe_3470_count = 0;
  static  unsigned long long aesl_llvm_cbe_3471_count = 0;
  static  unsigned long long aesl_llvm_cbe_3472_count = 0;
  static  unsigned long long aesl_llvm_cbe_3473_count = 0;
  static  unsigned long long aesl_llvm_cbe_3474_count = 0;
  static  unsigned long long aesl_llvm_cbe_3475_count = 0;
  static  unsigned long long aesl_llvm_cbe_3476_count = 0;
  static  unsigned long long aesl_llvm_cbe_3477_count = 0;
  static  unsigned long long aesl_llvm_cbe_3478_count = 0;
  static  unsigned long long aesl_llvm_cbe_3479_count = 0;
  static  unsigned long long aesl_llvm_cbe_3480_count = 0;
  static  unsigned long long aesl_llvm_cbe_3481_count = 0;
  static  unsigned long long aesl_llvm_cbe_3482_count = 0;
  static  unsigned long long aesl_llvm_cbe_3483_count = 0;
  static  unsigned long long aesl_llvm_cbe_3484_count = 0;
  static  unsigned long long aesl_llvm_cbe_3485_count = 0;
  static  unsigned long long aesl_llvm_cbe_3486_count = 0;
  static  unsigned long long aesl_llvm_cbe_3487_count = 0;
  static  unsigned long long aesl_llvm_cbe_3488_count = 0;
  static  unsigned long long aesl_llvm_cbe_3489_count = 0;
  static  unsigned long long aesl_llvm_cbe_3490_count = 0;
  static  unsigned long long aesl_llvm_cbe_3491_count = 0;
  static  unsigned long long aesl_llvm_cbe_3492_count = 0;
  static  unsigned long long aesl_llvm_cbe_3493_count = 0;
  static  unsigned long long aesl_llvm_cbe_3494_count = 0;
  static  unsigned long long aesl_llvm_cbe_3495_count = 0;
  static  unsigned long long aesl_llvm_cbe_3496_count = 0;
  static  unsigned long long aesl_llvm_cbe_3497_count = 0;
  static  unsigned long long aesl_llvm_cbe_3498_count = 0;
  static  unsigned long long aesl_llvm_cbe_3499_count = 0;
  static  unsigned long long aesl_llvm_cbe_3500_count = 0;
  static  unsigned long long aesl_llvm_cbe_3501_count = 0;
  static  unsigned long long aesl_llvm_cbe_3502_count = 0;
  static  unsigned long long aesl_llvm_cbe_3503_count = 0;
  static  unsigned long long aesl_llvm_cbe_3504_count = 0;
  static  unsigned long long aesl_llvm_cbe_3505_count = 0;
  static  unsigned long long aesl_llvm_cbe_3506_count = 0;
  static  unsigned long long aesl_llvm_cbe_3507_count = 0;
  static  unsigned long long aesl_llvm_cbe_3508_count = 0;
  static  unsigned long long aesl_llvm_cbe_3509_count = 0;
  static  unsigned long long aesl_llvm_cbe_3510_count = 0;
  static  unsigned long long aesl_llvm_cbe_3511_count = 0;
  static  unsigned long long aesl_llvm_cbe_3512_count = 0;
  static  unsigned long long aesl_llvm_cbe_3513_count = 0;
  static  unsigned long long aesl_llvm_cbe_3514_count = 0;
  static  unsigned long long aesl_llvm_cbe_3515_count = 0;
  static  unsigned long long aesl_llvm_cbe_3516_count = 0;
  static  unsigned long long aesl_llvm_cbe_3517_count = 0;
  static  unsigned long long aesl_llvm_cbe_3518_count = 0;
  static  unsigned long long aesl_llvm_cbe_3519_count = 0;
  static  unsigned long long aesl_llvm_cbe_3520_count = 0;
  static  unsigned long long aesl_llvm_cbe_3521_count = 0;
  static  unsigned long long aesl_llvm_cbe_3522_count = 0;
  static  unsigned long long aesl_llvm_cbe_3523_count = 0;
  static  unsigned long long aesl_llvm_cbe_3524_count = 0;
  static  unsigned long long aesl_llvm_cbe_3525_count = 0;
  static  unsigned long long aesl_llvm_cbe_3526_count = 0;
  static  unsigned long long aesl_llvm_cbe_3527_count = 0;
  static  unsigned long long aesl_llvm_cbe_3528_count = 0;
  static  unsigned long long aesl_llvm_cbe_3529_count = 0;
  static  unsigned long long aesl_llvm_cbe_3530_count = 0;
  static  unsigned long long aesl_llvm_cbe_3531_count = 0;
  static  unsigned long long aesl_llvm_cbe_3532_count = 0;
  static  unsigned long long aesl_llvm_cbe_3533_count = 0;
  static  unsigned long long aesl_llvm_cbe_3534_count = 0;
  static  unsigned long long aesl_llvm_cbe_3535_count = 0;
  static  unsigned long long aesl_llvm_cbe_3536_count = 0;
  static  unsigned long long aesl_llvm_cbe_3537_count = 0;
  static  unsigned long long aesl_llvm_cbe_3538_count = 0;
  static  unsigned long long aesl_llvm_cbe_3539_count = 0;
  static  unsigned long long aesl_llvm_cbe_3540_count = 0;
  static  unsigned long long aesl_llvm_cbe_3541_count = 0;
  static  unsigned long long aesl_llvm_cbe_3542_count = 0;
  static  unsigned long long aesl_llvm_cbe_3543_count = 0;
  static  unsigned long long aesl_llvm_cbe_3544_count = 0;
  static  unsigned long long aesl_llvm_cbe_3545_count = 0;
  static  unsigned long long aesl_llvm_cbe_3546_count = 0;
  static  unsigned long long aesl_llvm_cbe_3547_count = 0;
  static  unsigned long long aesl_llvm_cbe_3548_count = 0;
  static  unsigned long long aesl_llvm_cbe_3549_count = 0;
  static  unsigned long long aesl_llvm_cbe_3550_count = 0;
  static  unsigned long long aesl_llvm_cbe_3551_count = 0;
  static  unsigned long long aesl_llvm_cbe_3552_count = 0;
  static  unsigned long long aesl_llvm_cbe_3553_count = 0;
  static  unsigned long long aesl_llvm_cbe_3554_count = 0;
  static  unsigned long long aesl_llvm_cbe_3555_count = 0;
  static  unsigned long long aesl_llvm_cbe_3556_count = 0;
  static  unsigned long long aesl_llvm_cbe_3557_count = 0;
  static  unsigned long long aesl_llvm_cbe_3558_count = 0;
  static  unsigned long long aesl_llvm_cbe_3559_count = 0;
  static  unsigned long long aesl_llvm_cbe_3560_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond69_2e_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3561_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge1150_2e_3_count = 0;
  unsigned int llvm_cbe_storemerge1150_2e_3;
  unsigned int llvm_cbe_storemerge1150_2e_3__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_3562_count = 0;
  unsigned long long llvm_cbe_tmp__338;
  static  unsigned long long aesl_llvm_cbe_3563_count = 0;
  signed short *llvm_cbe_tmp__339;
  static  unsigned long long aesl_llvm_cbe_3564_count = 0;
  unsigned short llvm_cbe_tmp__340;
  static  unsigned long long aesl_llvm_cbe_3565_count = 0;
  unsigned int llvm_cbe_tmp__341;
  static  unsigned long long aesl_llvm_cbe_3566_count = 0;
  unsigned int llvm_cbe_tmp__342;
  static  unsigned long long aesl_llvm_cbe_3567_count = 0;
  unsigned int llvm_cbe_tmp__343;
  static  unsigned long long aesl_llvm_cbe_3568_count = 0;
  unsigned short llvm_cbe_tmp__344;
  static  unsigned long long aesl_llvm_cbe_3569_count = 0;
  signed short *llvm_cbe_tmp__345;
  static  unsigned long long aesl_llvm_cbe_3570_count = 0;
  static  unsigned long long aesl_llvm_cbe_3571_count = 0;
  unsigned int llvm_cbe_tmp__346;
  static  unsigned long long aesl_llvm_cbe_3572_count = 0;
  static  unsigned long long aesl_llvm_cbe_3573_count = 0;
  static  unsigned long long aesl_llvm_cbe_3574_count = 0;
  static  unsigned long long aesl_llvm_cbe_3575_count = 0;
  static  unsigned long long aesl_llvm_cbe_3576_count = 0;
  static  unsigned long long aesl_llvm_cbe_3577_count = 0;
  static  unsigned long long aesl_llvm_cbe_3578_count = 0;
  static  unsigned long long aesl_llvm_cbe_3579_count = 0;
  static  unsigned long long aesl_llvm_cbe_3580_count = 0;
  static  unsigned long long aesl_llvm_cbe_3581_count = 0;
  static  unsigned long long aesl_llvm_cbe_3582_count = 0;
  static  unsigned long long aesl_llvm_cbe_3583_count = 0;
  static  unsigned long long aesl_llvm_cbe_3584_count = 0;
  static  unsigned long long aesl_llvm_cbe_3585_count = 0;
  static  unsigned long long aesl_llvm_cbe_3586_count = 0;
  static  unsigned long long aesl_llvm_cbe_3587_count = 0;
  static  unsigned long long aesl_llvm_cbe_3588_count = 0;
  static  unsigned long long aesl_llvm_cbe_3589_count = 0;
  static  unsigned long long aesl_llvm_cbe_3590_count = 0;
  static  unsigned long long aesl_llvm_cbe_3591_count = 0;
  static  unsigned long long aesl_llvm_cbe_3592_count = 0;
  static  unsigned long long aesl_llvm_cbe_3593_count = 0;
  static  unsigned long long aesl_llvm_cbe_3594_count = 0;
  static  unsigned long long aesl_llvm_cbe_3595_count = 0;
  static  unsigned long long aesl_llvm_cbe_3596_count = 0;
  static  unsigned long long aesl_llvm_cbe_3597_count = 0;
  static  unsigned long long aesl_llvm_cbe_3598_count = 0;
  static  unsigned long long aesl_llvm_cbe_3599_count = 0;
  static  unsigned long long aesl_llvm_cbe_3600_count = 0;
  static  unsigned long long aesl_llvm_cbe_3601_count = 0;
  static  unsigned long long aesl_llvm_cbe_3602_count = 0;
  static  unsigned long long aesl_llvm_cbe_3603_count = 0;
  static  unsigned long long aesl_llvm_cbe_3604_count = 0;
  static  unsigned long long aesl_llvm_cbe_3605_count = 0;
  static  unsigned long long aesl_llvm_cbe_3606_count = 0;
  static  unsigned long long aesl_llvm_cbe_3607_count = 0;
  static  unsigned long long aesl_llvm_cbe_3608_count = 0;
  static  unsigned long long aesl_llvm_cbe_3609_count = 0;
  static  unsigned long long aesl_llvm_cbe_3610_count = 0;
  static  unsigned long long aesl_llvm_cbe_3611_count = 0;
  static  unsigned long long aesl_llvm_cbe_3612_count = 0;
  static  unsigned long long aesl_llvm_cbe_3613_count = 0;
  static  unsigned long long aesl_llvm_cbe_3614_count = 0;
  static  unsigned long long aesl_llvm_cbe_3615_count = 0;
  static  unsigned long long aesl_llvm_cbe_3616_count = 0;
  static  unsigned long long aesl_llvm_cbe_3617_count = 0;
  static  unsigned long long aesl_llvm_cbe_3618_count = 0;
  static  unsigned long long aesl_llvm_cbe_3619_count = 0;
  static  unsigned long long aesl_llvm_cbe_3620_count = 0;
  static  unsigned long long aesl_llvm_cbe_3621_count = 0;
  static  unsigned long long aesl_llvm_cbe_3622_count = 0;
  static  unsigned long long aesl_llvm_cbe_3623_count = 0;
  static  unsigned long long aesl_llvm_cbe_3624_count = 0;
  static  unsigned long long aesl_llvm_cbe_3625_count = 0;
  static  unsigned long long aesl_llvm_cbe_3626_count = 0;
  static  unsigned long long aesl_llvm_cbe_3627_count = 0;
  static  unsigned long long aesl_llvm_cbe_3628_count = 0;
  static  unsigned long long aesl_llvm_cbe_3629_count = 0;
  static  unsigned long long aesl_llvm_cbe_3630_count = 0;
  static  unsigned long long aesl_llvm_cbe_3631_count = 0;
  static  unsigned long long aesl_llvm_cbe_3632_count = 0;
  static  unsigned long long aesl_llvm_cbe_3633_count = 0;
  static  unsigned long long aesl_llvm_cbe_3634_count = 0;
  static  unsigned long long aesl_llvm_cbe_3635_count = 0;
  static  unsigned long long aesl_llvm_cbe_3636_count = 0;
  static  unsigned long long aesl_llvm_cbe_3637_count = 0;
  static  unsigned long long aesl_llvm_cbe_3638_count = 0;
  static  unsigned long long aesl_llvm_cbe_3639_count = 0;
  static  unsigned long long aesl_llvm_cbe_3640_count = 0;
  static  unsigned long long aesl_llvm_cbe_3641_count = 0;
  static  unsigned long long aesl_llvm_cbe_3642_count = 0;
  static  unsigned long long aesl_llvm_cbe_3643_count = 0;
  static  unsigned long long aesl_llvm_cbe_3644_count = 0;
  static  unsigned long long aesl_llvm_cbe_3645_count = 0;
  static  unsigned long long aesl_llvm_cbe_3646_count = 0;
  static  unsigned long long aesl_llvm_cbe_3647_count = 0;
  static  unsigned long long aesl_llvm_cbe_3648_count = 0;
  static  unsigned long long aesl_llvm_cbe_3649_count = 0;
  static  unsigned long long aesl_llvm_cbe_3650_count = 0;
  static  unsigned long long aesl_llvm_cbe_3651_count = 0;
  static  unsigned long long aesl_llvm_cbe_3652_count = 0;
  static  unsigned long long aesl_llvm_cbe_3653_count = 0;
  static  unsigned long long aesl_llvm_cbe_3654_count = 0;
  static  unsigned long long aesl_llvm_cbe_3655_count = 0;
  static  unsigned long long aesl_llvm_cbe_3656_count = 0;
  static  unsigned long long aesl_llvm_cbe_3657_count = 0;
  static  unsigned long long aesl_llvm_cbe_3658_count = 0;
  static  unsigned long long aesl_llvm_cbe_3659_count = 0;
  static  unsigned long long aesl_llvm_cbe_3660_count = 0;
  static  unsigned long long aesl_llvm_cbe_3661_count = 0;
  static  unsigned long long aesl_llvm_cbe_3662_count = 0;
  static  unsigned long long aesl_llvm_cbe_3663_count = 0;
  static  unsigned long long aesl_llvm_cbe_3664_count = 0;
  static  unsigned long long aesl_llvm_cbe_3665_count = 0;
  static  unsigned long long aesl_llvm_cbe_3666_count = 0;
  static  unsigned long long aesl_llvm_cbe_3667_count = 0;
  static  unsigned long long aesl_llvm_cbe_3668_count = 0;
  static  unsigned long long aesl_llvm_cbe_3669_count = 0;
  static  unsigned long long aesl_llvm_cbe_3670_count = 0;
  static  unsigned long long aesl_llvm_cbe_3671_count = 0;
  static  unsigned long long aesl_llvm_cbe_3672_count = 0;
  static  unsigned long long aesl_llvm_cbe_3673_count = 0;
  static  unsigned long long aesl_llvm_cbe_3674_count = 0;
  static  unsigned long long aesl_llvm_cbe_3675_count = 0;
  static  unsigned long long aesl_llvm_cbe_3676_count = 0;
  static  unsigned long long aesl_llvm_cbe_3677_count = 0;
  static  unsigned long long aesl_llvm_cbe_3678_count = 0;
  static  unsigned long long aesl_llvm_cbe_3679_count = 0;
  static  unsigned long long aesl_llvm_cbe_3680_count = 0;
  static  unsigned long long aesl_llvm_cbe_3681_count = 0;
  static  unsigned long long aesl_llvm_cbe_3682_count = 0;
  static  unsigned long long aesl_llvm_cbe_3683_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond69_2e_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_3684_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @lstm_kernel\n");
  if (llvm_cbe_mode) {
    llvm_cbe_storemerge1259__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader58;
  } else {
    goto llvm_cbe__2e_preheader49;
  }

  do {     /* Syntactic loop '.preheader58' to make GCC happy */
llvm_cbe__2e_preheader58:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1259 = phi i32 [ %%24, %%.preheader58 ], [ 0, %%0  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1259_count);
  llvm_cbe_storemerge1259 = (unsigned int )llvm_cbe_storemerge1259__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1259 = 0x%X",llvm_cbe_storemerge1259);
printf("\n = 0x%X",llvm_cbe_tmp__24);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = sext i32 %%storemerge1259 to i64, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__1 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1259);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__1);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds i32* %%weight, i64 %%1, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_30_count);
  llvm_cbe_tmp__2 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__1))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = load i32* %%2, align 4, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__3 = (unsigned int )*llvm_cbe_tmp__2;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__3);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = trunc i32 %%3 to i16, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_32_count);
  llvm_cbe_tmp__4 = (unsigned short )((unsigned short )llvm_cbe_tmp__3&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 0, i64 %%1, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_33_count);
  llvm_cbe_tmp__5 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__1) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%4, i16* %%5, align 2, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_34_count);
  *llvm_cbe_tmp__5 = llvm_cbe_tmp__4;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__4);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = add nsw i32 %%storemerge1259, 64, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_35_count);
  llvm_cbe_tmp__6 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1259&4294967295ull)) + ((unsigned int )(64u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__6&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = sext i32 %%6 to i64, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_36_count);
  llvm_cbe_tmp__7 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__6);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__7);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds i32* %%weight, i64 %%7, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_37_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__7))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__7));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = load i32* %%8, align 4, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__9 = (unsigned int )*llvm_cbe_tmp__8;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__9);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = trunc i32 %%9 to i16, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_39_count);
  llvm_cbe_tmp__10 = (unsigned short )((unsigned short )llvm_cbe_tmp__9&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 1, i64 %%1, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__11 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__1) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%10, i16* %%11, align 2, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_41_count);
  *llvm_cbe_tmp__11 = llvm_cbe_tmp__10;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__10);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = add nsw i32 %%storemerge1259, 128, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_42_count);
  llvm_cbe_tmp__12 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1259&4294967295ull)) + ((unsigned int )(128u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__12&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = sext i32 %%12 to i64, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_43_count);
  llvm_cbe_tmp__13 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__12);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__13);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds i32* %%weight, i64 %%13, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_44_count);
  llvm_cbe_tmp__14 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__13))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__13));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = load i32* %%14, align 4, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_45_count);
  llvm_cbe_tmp__15 = (unsigned int )*llvm_cbe_tmp__14;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__15);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = trunc i32 %%15 to i16, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_46_count);
  llvm_cbe_tmp__16 = (unsigned short )((unsigned short )llvm_cbe_tmp__15&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 2, i64 %%1, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__17 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__1) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%16, i16* %%17, align 2, !dbg !6 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_48_count);
  *llvm_cbe_tmp__17 = llvm_cbe_tmp__16;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__16);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = add nsw i32 %%storemerge1259, 192, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__18 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1259&4294967295ull)) + ((unsigned int )(192u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__18&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = sext i32 %%18 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_50_count);
  llvm_cbe_tmp__19 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__18);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__19);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds i32* %%weight, i64 %%19, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_51_count);
  llvm_cbe_tmp__20 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__19))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__19));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = load i32* %%20, align 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_52_count);
  llvm_cbe_tmp__21 = (unsigned int )*llvm_cbe_tmp__20;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__21);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = trunc i32 %%21 to i16, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_53_count);
  llvm_cbe_tmp__22 = (unsigned short )((unsigned short )llvm_cbe_tmp__21&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 3, i64 %%1, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_54_count);
  llvm_cbe_tmp__23 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__1))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__1) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%22, i16* %%23, align 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_55_count);
  *llvm_cbe_tmp__23 = llvm_cbe_tmp__22;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__22);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = add nsw i32 %%storemerge1259, 1, !dbg !9 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__24 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1259&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__24&4294967295ull)));
  if (((llvm_cbe_tmp__24&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge1357__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader54;
  } else {
    llvm_cbe_storemerge1259__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__24;   /* for PHI node */
    goto llvm_cbe__2e_preheader58;
  }

  } while (1); /* end of syntactic loop '.preheader58' */
  do {     /* Syntactic loop '.preheader54' to make GCC happy */
llvm_cbe__2e_preheader54:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1357 = phi i32 [ %%67, %%66 ], [ 0, %%.preheader58  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1357_count);
  llvm_cbe_storemerge1357 = (unsigned int )llvm_cbe_storemerge1357__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1357 = 0x%X",llvm_cbe_storemerge1357);
printf("\n = 0x%X",llvm_cbe_tmp__65);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = add i32 %%storemerge1357, 256, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_281_count);
  llvm_cbe_tmp__25 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1357&4294967295ull)) + ((unsigned int )(256u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__25&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = shl nsw i32 %%storemerge1357, 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_282_count);
  llvm_cbe_tmp__26 = (unsigned int )llvm_cbe_storemerge1357 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__26);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = add nsw i32 %%26, 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_283_count);
  llvm_cbe_tmp__27 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__27&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = sext i32 %%27 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_284_count);
  llvm_cbe_tmp__28 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__27);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__28);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = add i32 %%storemerge1357, 4352, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_285_count);
  llvm_cbe_tmp__29 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1357&4294967295ull)) + ((unsigned int )(4352u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__29&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = add nsw i32 %%26, 5, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_286_count);
  llvm_cbe_tmp__30 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__30&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = sext i32 %%30 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_287_count);
  llvm_cbe_tmp__31 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__30);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__31);
if (AESL_DEBUG_TRACE)
printf("\n  %%32 = add i32 %%storemerge1357, 8448, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_288_count);
  llvm_cbe_tmp__32 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1357&4294967295ull)) + ((unsigned int )(8448u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__32&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%33 = add nsw i32 %%26, 6, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_289_count);
  llvm_cbe_tmp__33 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__33&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%34 = sext i32 %%33 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_290_count);
  llvm_cbe_tmp__34 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = add i32 %%storemerge1357, 12544, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_291_count);
  llvm_cbe_tmp__35 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1357&4294967295ull)) + ((unsigned int )(12544u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__35&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add nsw i32 %%26, 7, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_292_count);
  llvm_cbe_tmp__36 = (unsigned int )((unsigned int )(llvm_cbe_tmp__26&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__36&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = sext i32 %%36 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_293_count);
  llvm_cbe_tmp__37 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__36);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__37);
  llvm_cbe_storemerge1555__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__347;

llvm_cbe_tmp__348:
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add nsw i32 %%storemerge1357, 1, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_439_count);
  llvm_cbe_tmp__65 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1357&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__65&4294967295ull)));
  if (((llvm_cbe_tmp__65&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge1453__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader52;
  } else {
    llvm_cbe_storemerge1357__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__65;   /* for PHI node */
    goto llvm_cbe__2e_preheader54;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__347:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1555 = phi i32 [ 0, %%.preheader54 ], [ %%65, %%38  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1555_count);
  llvm_cbe_storemerge1555 = (unsigned int )llvm_cbe_storemerge1555__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1555 = 0x%X",llvm_cbe_storemerge1555);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__64);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = shl nsw i32 %%storemerge1555, 6, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_295_count);
  llvm_cbe_tmp__38 = (unsigned int )llvm_cbe_storemerge1555 << 6u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__38);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = add i32 %%25, %%39, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_296_count);
  llvm_cbe_tmp__39 = (unsigned int )((unsigned int )(llvm_cbe_tmp__25&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__38&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__39&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = sext i32 %%40 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_297_count);
  llvm_cbe_tmp__40 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__39);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = getelementptr inbounds i32* %%weight, i64 %%41, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_298_count);
  llvm_cbe_tmp__41 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__40))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__40));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = load i32* %%42, align 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_299_count);
  llvm_cbe_tmp__42 = (unsigned int )*llvm_cbe_tmp__41;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__42);
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = trunc i32 %%43 to i16, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_300_count);
  llvm_cbe_tmp__43 = (unsigned short )((unsigned short )llvm_cbe_tmp__42&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = sext i32 %%storemerge1555 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_301_count);
  llvm_cbe_tmp__44 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1555);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__44);
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%28, i64 %%45, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_302_count);
  llvm_cbe_tmp__45 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__28))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__44))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__28));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__28) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__44) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%44, i16* %%46, align 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_303_count);
  *llvm_cbe_tmp__45 = llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__43);
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = add i32 %%29, %%39, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_304_count);
  llvm_cbe_tmp__46 = (unsigned int )((unsigned int )(llvm_cbe_tmp__29&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__38&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__46&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = sext i32 %%47 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_305_count);
  llvm_cbe_tmp__47 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__46);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__47);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = getelementptr inbounds i32* %%weight, i64 %%48, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_306_count);
  llvm_cbe_tmp__48 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__47))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__47));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%50 = load i32* %%49, align 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_307_count);
  llvm_cbe_tmp__49 = (unsigned int )*llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__49);
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = trunc i32 %%50 to i16, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_308_count);
  llvm_cbe_tmp__50 = (unsigned short )((unsigned short )llvm_cbe_tmp__49&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%31, i64 %%45, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_309_count);
  llvm_cbe_tmp__51 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__31))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__44))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__31));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__31) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__44) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%51, i16* %%52, align 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_310_count);
  *llvm_cbe_tmp__51 = llvm_cbe_tmp__50;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%53 = add i32 %%32, %%39, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_311_count);
  llvm_cbe_tmp__52 = (unsigned int )((unsigned int )(llvm_cbe_tmp__32&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__38&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__52&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = sext i32 %%53 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_312_count);
  llvm_cbe_tmp__53 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__53);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds i32* %%weight, i64 %%54, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_313_count);
  llvm_cbe_tmp__54 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__53))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__53));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i32* %%55, align 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_314_count);
  llvm_cbe_tmp__55 = (unsigned int )*llvm_cbe_tmp__54;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = trunc i32 %%56 to i16, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_315_count);
  llvm_cbe_tmp__56 = (unsigned short )((unsigned short )llvm_cbe_tmp__55&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%34, i64 %%45, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_316_count);
  llvm_cbe_tmp__57 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__34))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__44))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__34));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__34) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__44) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%57, i16* %%58, align 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_317_count);
  *llvm_cbe_tmp__57 = llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__56);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = add i32 %%35, %%39, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_318_count);
  llvm_cbe_tmp__58 = (unsigned int )((unsigned int )(llvm_cbe_tmp__35&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__38&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__58&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = sext i32 %%59 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_319_count);
  llvm_cbe_tmp__59 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__58);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = getelementptr inbounds i32* %%weight, i64 %%60, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_320_count);
  llvm_cbe_tmp__60 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__59))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__59));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%62 = load i32* %%61, align 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_321_count);
  llvm_cbe_tmp__61 = (unsigned int )*llvm_cbe_tmp__60;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__61);
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = trunc i32 %%62 to i16, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_322_count);
  llvm_cbe_tmp__62 = (unsigned short )((unsigned short )llvm_cbe_tmp__61&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%64 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%37, i64 %%45, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_323_count);
  llvm_cbe_tmp__63 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__37))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__44))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__37));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__44));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__37) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__44) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%63, i16* %%64, align 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_324_count);
  *llvm_cbe_tmp__63 = llvm_cbe_tmp__62;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__62);
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = add nsw i32 %%storemerge1555, 1, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_325_count);
  llvm_cbe_tmp__64 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1555&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__64&4294967295ull)));
  if (((llvm_cbe_tmp__64&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__348;
  } else {
    llvm_cbe_storemerge1555__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__64;   /* for PHI node */
    goto llvm_cbe_tmp__347;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader54' */
  do {     /* Syntactic loop '.preheader52' to make GCC happy */
llvm_cbe__2e_preheader52:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1453 = phi i32 [ %%93, %%.preheader52 ], [ 0, %%66  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1453_count);
  llvm_cbe_storemerge1453 = (unsigned int )llvm_cbe_storemerge1453__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1453 = 0x%X",llvm_cbe_storemerge1453);
printf("\n = 0x%X",llvm_cbe_tmp__91);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%68 = add nsw i32 %%storemerge1453, 16640, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_466_count);
  llvm_cbe_tmp__66 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1453&4294967295ull)) + ((unsigned int )(16640u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__66&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = sext i32 %%68 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_467_count);
  llvm_cbe_tmp__67 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__66);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__67);
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = getelementptr inbounds i32* %%weight, i64 %%69, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_468_count);
  llvm_cbe_tmp__68 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__67))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__67));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = load i32* %%70, align 4, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_469_count);
  llvm_cbe_tmp__69 = (unsigned int )*llvm_cbe_tmp__68;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__69);
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = trunc i32 %%71 to i16, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_470_count);
  llvm_cbe_tmp__70 = (unsigned short )((unsigned short )llvm_cbe_tmp__69&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = sext i32 %%storemerge1453 to i64, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_471_count);
  llvm_cbe_tmp__71 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1453);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__71);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 260, i64 %%73, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_472_count);
  llvm_cbe_tmp__72 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )260ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__71))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__71));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )260ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__71) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%72, i16* %%74, align 2, !dbg !7 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_473_count);
  *llvm_cbe_tmp__72 = llvm_cbe_tmp__70;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = add nsw i32 %%storemerge1453, 16704, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_474_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1453&4294967295ull)) + ((unsigned int )(16704u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = sext i32 %%75 to i64, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_475_count);
  llvm_cbe_tmp__74 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__73);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__74);
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = getelementptr inbounds i32* %%weight, i64 %%76, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_476_count);
  llvm_cbe_tmp__75 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__74))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__74));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = load i32* %%77, align 4, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_477_count);
  llvm_cbe_tmp__76 = (unsigned int )*llvm_cbe_tmp__75;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__76);
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = trunc i32 %%78 to i16, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_478_count);
  llvm_cbe_tmp__77 = (unsigned short )((unsigned short )llvm_cbe_tmp__76&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 261, i64 %%73, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_479_count);
  llvm_cbe_tmp__78 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )261ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__71))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__71));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )261ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__71) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%79, i16* %%80, align 2, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_480_count);
  *llvm_cbe_tmp__78 = llvm_cbe_tmp__77;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__77);
if (AESL_DEBUG_TRACE)
printf("\n  %%81 = add nsw i32 %%storemerge1453, 16768, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_481_count);
  llvm_cbe_tmp__79 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1453&4294967295ull)) + ((unsigned int )(16768u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__79&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = sext i32 %%81 to i64, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_482_count);
  llvm_cbe_tmp__80 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__79);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__80);
if (AESL_DEBUG_TRACE)
printf("\n  %%83 = getelementptr inbounds i32* %%weight, i64 %%82, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_483_count);
  llvm_cbe_tmp__81 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__80))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__80));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%84 = load i32* %%83, align 4, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_484_count);
  llvm_cbe_tmp__82 = (unsigned int )*llvm_cbe_tmp__81;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__82);
if (AESL_DEBUG_TRACE)
printf("\n  %%85 = trunc i32 %%84 to i16, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_485_count);
  llvm_cbe_tmp__83 = (unsigned short )((unsigned short )llvm_cbe_tmp__82&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%86 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 262, i64 %%73, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_486_count);
  llvm_cbe_tmp__84 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )262ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__71))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__71));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )262ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__71) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%85, i16* %%86, align 2, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_487_count);
  *llvm_cbe_tmp__84 = llvm_cbe_tmp__83;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__83);
if (AESL_DEBUG_TRACE)
printf("\n  %%87 = add nsw i32 %%storemerge1453, 16832, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_488_count);
  llvm_cbe_tmp__85 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1453&4294967295ull)) + ((unsigned int )(16832u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__85&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%88 = sext i32 %%87 to i64, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_489_count);
  llvm_cbe_tmp__86 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__85);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__86);
if (AESL_DEBUG_TRACE)
printf("\n  %%89 = getelementptr inbounds i32* %%weight, i64 %%88, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_490_count);
  llvm_cbe_tmp__87 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__86))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__86));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%90 = load i32* %%89, align 4, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_491_count);
  llvm_cbe_tmp__88 = (unsigned int )*llvm_cbe_tmp__87;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__88);
if (AESL_DEBUG_TRACE)
printf("\n  %%91 = trunc i32 %%90 to i16, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_492_count);
  llvm_cbe_tmp__89 = (unsigned short )((unsigned short )llvm_cbe_tmp__88&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%92 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 263, i64 %%73, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_493_count);
  llvm_cbe_tmp__90 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )263ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__71))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__71));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )263ull) < 264 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");
  assert(((signed long long )llvm_cbe_tmp__71) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.weight_l' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%91, i16* %%92, align 2, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_494_count);
  *llvm_cbe_tmp__90 = llvm_cbe_tmp__89;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__89);
if (AESL_DEBUG_TRACE)
printf("\n  %%93 = add nsw i32 %%storemerge1453, 1, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_495_count);
  llvm_cbe_tmp__91 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1453&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__91&4294967295ull)));
  if (((llvm_cbe_tmp__91&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe__2e_loopexit;
  } else {
    llvm_cbe_storemerge1453__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__91;   /* for PHI node */
    goto llvm_cbe__2e_preheader52;
  }

  } while (1); /* end of syntactic loop '.preheader52' */
llvm_cbe__2e_preheader49:
if (AESL_DEBUG_TRACE)
printf("\n  %%94 = zext i8 %%scale_fac to i32, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_609_count);
  llvm_cbe_tmp__92 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_scale_fac&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__92);
if (AESL_DEBUG_TRACE)
printf("\n  %%95 = add nsw i32 %%94, -1, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_610_count);
  llvm_cbe_tmp__93 = (unsigned int )((unsigned int )(llvm_cbe_tmp__92&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__93&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%96 = shl i32 1, %%95, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_611_count);
  llvm_cbe_tmp__94 = (unsigned int )1u << llvm_cbe_tmp__93;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__94);
if (AESL_DEBUG_TRACE)
printf("\n  %%97 = sext i24 %%sampleinput to i32, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_613_count);
  llvm_cbe_tmp__95 = (unsigned int )((signed int )(signed int )(llvm_cbe_sampleinput & (1U << 23U )  ? llvm_cbe_sampleinput | 4278190080U : llvm_cbe_sampleinput & 16777215U));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__95);
if (AESL_DEBUG_TRACE)
printf("\n  %%98 = zext i8 %%scale_mul to i32, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_614_count);
  llvm_cbe_tmp__96 = (unsigned int )((unsigned int )(unsigned char )llvm_cbe_scale_mul&255U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__96);
if (AESL_DEBUG_TRACE)
printf("\n  %%99 = mul nsw i32 %%98, %%97, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_615_count);
  llvm_cbe_tmp__97 = (unsigned int )((unsigned int )(llvm_cbe_tmp__96&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__95&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__97&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%100 = add nsw i32 %%99, %%96, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_617_count);
  llvm_cbe_tmp__98 = (unsigned int )((unsigned int )(llvm_cbe_tmp__97&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__94&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__98&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%101 = add nsw i32 %%94, -12, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_618_count);
  llvm_cbe_tmp__99 = (unsigned int )((unsigned int )(llvm_cbe_tmp__92&4294967295ull)) + ((unsigned int )(4294967284u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__99&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%102 = ashr i32 %%100, %%101, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_619_count);
  llvm_cbe_tmp__100 = (unsigned int )((signed int )(((signed int )llvm_cbe_tmp__98) >> ((signed int )llvm_cbe_tmp__99)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((signed int )llvm_cbe_tmp__100));
if (AESL_DEBUG_TRACE)
printf("\n  %%103 = trunc i32 %%102 to i16, !dbg !5 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_620_count);
  llvm_cbe_tmp__101 = (unsigned short )((unsigned short )llvm_cbe_tmp__100&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n  %%104 = sext i16 %%103 to i32, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_648_count);
  llvm_cbe_tmp__102 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__101);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__102);
  llvm_cbe_storemerge1150__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__349;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__349:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1150 = phi i32 [ 0, %%.preheader49 ], [ %%114, %%105  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1150_count);
  llvm_cbe_storemerge1150 = (unsigned int )llvm_cbe_storemerge1150__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1150 = 0x%X",llvm_cbe_storemerge1150);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__111);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%106 = sext i32 %%storemerge1150 to i64, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_761_count);
  llvm_cbe_tmp__103 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1150);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__103);
if (AESL_DEBUG_TRACE)
printf("\n  %%107 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 0, i64 %%106, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_762_count);
  llvm_cbe_tmp__104 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__103))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__103));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )0ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__103) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%108 = load i16* %%107, align 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_763_count);
  llvm_cbe_tmp__105 = (unsigned short )*llvm_cbe_tmp__104;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n  %%109 = sext i16 %%108 to i32, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_764_count);
  llvm_cbe_tmp__106 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__105);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__106);
if (AESL_DEBUG_TRACE)
printf("\n  %%110 = mul nsw i32 %%109, %%104, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_765_count);
  llvm_cbe_tmp__107 = (unsigned int )((unsigned int )(llvm_cbe_tmp__106&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__102&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__107&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%111 = lshr i32 %%110, 12, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_766_count);
  llvm_cbe_tmp__108 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__107&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__108&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%112 = trunc i32 %%111 to i16, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_767_count);
  llvm_cbe_tmp__109 = (unsigned short )((unsigned short )llvm_cbe_tmp__108&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%113 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%106, i64 0, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_768_count);
  llvm_cbe_tmp__110 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__103))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__103));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__103) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%112, i16* %%113, align 8, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_769_count);
  *llvm_cbe_tmp__110 = llvm_cbe_tmp__109;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__109);
if (AESL_DEBUG_TRACE)
printf("\n  %%114 = add nsw i32 %%storemerge1150, 1, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_770_count);
  llvm_cbe_tmp__111 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1150&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__111&4294967295ull)));
  if (((llvm_cbe_tmp__111&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge1150_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader49_2e_1;
  } else {
    llvm_cbe_storemerge1150__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__111;   /* for PHI node */
    goto llvm_cbe_tmp__349;
  }

  } while (1); /* end of syntactic loop '' */
  do {     /* Syntactic loop '.preheader45' to make GCC happy */
llvm_cbe__2e_preheader45:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge148 = phi i32 [ %%370, %%369 ], [ 0, %%.preheader49.3  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge148_count);
  llvm_cbe_storemerge148 = (unsigned int )llvm_cbe_storemerge148__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge148 = 0x%X",llvm_cbe_storemerge148);
printf("\n = 0x%X",llvm_cbe_tmp__319);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%115 = sext i32 %%storemerge148 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_908_count);
  llvm_cbe_tmp__112 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge148);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__112);
if (AESL_DEBUG_TRACE)
printf("\n  %%116 = getelementptr inbounds [64 x i16]* @aesl_internal_lstm_kernel.h_state, i64 0, i64 %%115, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_909_count);
  llvm_cbe_tmp__113 = (signed short *)(&aesl_internal_lstm_kernel_OC_h_state[(((signed long long )llvm_cbe_tmp__112))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__112));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__112) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.h_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%117 = load i16* %%116, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_910_count);
  llvm_cbe_tmp__114 = (unsigned short )*llvm_cbe_tmp__113;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n  %%118 = sext i16 %%117 to i32, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_911_count);
  llvm_cbe_tmp__115 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__114);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__115);
if (AESL_DEBUG_TRACE)
printf("\n  %%119 = shl i32 %%storemerge148, 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_912_count);
  llvm_cbe_tmp__116 = (unsigned int )llvm_cbe_storemerge148 << 2u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__116);
if (AESL_DEBUG_TRACE)
printf("\n  %%120 = add i32 %%119, 4, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_913_count);
  llvm_cbe_tmp__117 = (unsigned int )((unsigned int )(llvm_cbe_tmp__116&4294967295ull)) + ((unsigned int )(4u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__117&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%121 = sext i32 %%120 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1025_count);
  llvm_cbe_tmp__118 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__117);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__118);
  llvm_cbe_storemerge1044__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__350;

llvm_cbe_tmp__351:
if (AESL_DEBUG_TRACE)
printf("\n  %%370 = add nsw i32 %%storemerge148, 1, !dbg !20 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3309_count);
  llvm_cbe_tmp__319 = (unsigned int )((unsigned int )(llvm_cbe_storemerge148&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__319&4294967295ull)));
  if (((llvm_cbe_tmp__319&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge840__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader41;
  } else {
    llvm_cbe_storemerge148__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__319;   /* for PHI node */
    goto llvm_cbe__2e_preheader45;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__352:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1044.3 = phi i32 [ 0, %%.preheader43.3 ], [ %%368, %%357  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1044_2e_3_count);
  llvm_cbe_storemerge1044_2e_3 = (unsigned int )llvm_cbe_storemerge1044_2e_3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1044.3 = 0x%X",llvm_cbe_storemerge1044_2e_3);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__318);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%358 = sext i32 %%storemerge1044.3 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3159_count);
  llvm_cbe_tmp__308 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1044_2e_3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__308);
if (AESL_DEBUG_TRACE)
printf("\n  %%359 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%356, i64 %%358, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3160_count);
  llvm_cbe_tmp__309 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__307))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__308))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__307));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__308));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__307) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__308) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%360 = load i16* %%359, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3161_count);
  llvm_cbe_tmp__310 = (unsigned short )*llvm_cbe_tmp__309;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n  %%361 = sext i16 %%360 to i32, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3162_count);
  llvm_cbe_tmp__311 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__310);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__311);
if (AESL_DEBUG_TRACE)
printf("\n  %%362 = mul nsw i32 %%361, %%118, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3163_count);
  llvm_cbe_tmp__312 = (unsigned int )((unsigned int )(llvm_cbe_tmp__311&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__115&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__312&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%363 = lshr i32 %%362, 12, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3164_count);
  llvm_cbe_tmp__313 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__312&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__313&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%364 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%358, i64 3, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3165_count);
  llvm_cbe_tmp__314 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__308))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__308));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__308) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%365 = load i16* %%364, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3166_count);
  llvm_cbe_tmp__315 = (unsigned short )*llvm_cbe_tmp__314;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__315);
if (AESL_DEBUG_TRACE)
printf("\n  %%366 = trunc i32 %%363 to i16, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3167_count);
  llvm_cbe_tmp__316 = (unsigned short )((unsigned short )llvm_cbe_tmp__313&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__316);
if (AESL_DEBUG_TRACE)
printf("\n  %%367 = add i16 %%366, %%365, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3168_count);
  llvm_cbe_tmp__317 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__316&65535ull)) + ((unsigned short )(llvm_cbe_tmp__315&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__317&65535ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__308) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%367, i16* %%364, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3169_count);
  *llvm_cbe_tmp__314 = llvm_cbe_tmp__317;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__317);
if (AESL_DEBUG_TRACE)
printf("\n  %%368 = add nsw i32 %%storemerge1044.3, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3170_count);
  llvm_cbe_tmp__318 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1044_2e_3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__318&4294967295ull)));
  if (((llvm_cbe_tmp__318&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__351;
  } else {
    llvm_cbe_storemerge1044_2e_3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__318;   /* for PHI node */
    goto llvm_cbe_tmp__352;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader43_2e_3:
if (AESL_DEBUG_TRACE)
printf("\n  %%355 = add i32 %%119, 7, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3156_count);
  llvm_cbe_tmp__306 = (unsigned int )((unsigned int )(llvm_cbe_tmp__116&4294967295ull)) + ((unsigned int )(7u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__306&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%356 = sext i32 %%355 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3157_count);
  llvm_cbe_tmp__307 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__306);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__307);
  llvm_cbe_storemerge1044_2e_3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__352;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__353:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1044.2 = phi i32 [ 0, %%.preheader43.2 ], [ %%354, %%343  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1044_2e_2_count);
  llvm_cbe_storemerge1044_2e_2 = (unsigned int )llvm_cbe_storemerge1044_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1044.2 = 0x%X",llvm_cbe_storemerge1044_2e_2);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__305);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%344 = sext i32 %%storemerge1044.2 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2895_count);
  llvm_cbe_tmp__295 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1044_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__295);
if (AESL_DEBUG_TRACE)
printf("\n  %%345 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%342, i64 %%344, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2896_count);
  llvm_cbe_tmp__296 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__294))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__295))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__294));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__295));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__294) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__295) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%346 = load i16* %%345, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2897_count);
  llvm_cbe_tmp__297 = (unsigned short )*llvm_cbe_tmp__296;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n  %%347 = sext i16 %%346 to i32, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2898_count);
  llvm_cbe_tmp__298 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__297);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__298);
if (AESL_DEBUG_TRACE)
printf("\n  %%348 = mul nsw i32 %%347, %%118, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2899_count);
  llvm_cbe_tmp__299 = (unsigned int )((unsigned int )(llvm_cbe_tmp__298&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__115&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__299&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%349 = lshr i32 %%348, 12, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2900_count);
  llvm_cbe_tmp__300 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__299&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__300&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%350 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%344, i64 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2901_count);
  llvm_cbe_tmp__301 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__295))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__295));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__295) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%351 = load i16* %%350, align 4, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2902_count);
  llvm_cbe_tmp__302 = (unsigned short )*llvm_cbe_tmp__301;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__302);
if (AESL_DEBUG_TRACE)
printf("\n  %%352 = trunc i32 %%349 to i16, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2903_count);
  llvm_cbe_tmp__303 = (unsigned short )((unsigned short )llvm_cbe_tmp__300&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__303);
if (AESL_DEBUG_TRACE)
printf("\n  %%353 = add i16 %%352, %%351, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2904_count);
  llvm_cbe_tmp__304 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__303&65535ull)) + ((unsigned short )(llvm_cbe_tmp__302&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__304&65535ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__295) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%353, i16* %%350, align 4, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2905_count);
  *llvm_cbe_tmp__301 = llvm_cbe_tmp__304;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__304);
if (AESL_DEBUG_TRACE)
printf("\n  %%354 = add nsw i32 %%storemerge1044.2, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2906_count);
  llvm_cbe_tmp__305 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1044_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__305&4294967295ull)));
  if (((llvm_cbe_tmp__305&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe__2e_preheader43_2e_3;
  } else {
    llvm_cbe_storemerge1044_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__305;   /* for PHI node */
    goto llvm_cbe_tmp__353;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader43_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%341 = add i32 %%119, 6, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2892_count);
  llvm_cbe_tmp__293 = (unsigned int )((unsigned int )(llvm_cbe_tmp__116&4294967295ull)) + ((unsigned int )(6u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__293&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%342 = sext i32 %%341 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2893_count);
  llvm_cbe_tmp__294 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__293);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__294);
  llvm_cbe_storemerge1044_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__353;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__354:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1044.1 = phi i32 [ 0, %%.preheader43.1 ], [ %%340, %%329  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1044_2e_1_count);
  llvm_cbe_storemerge1044_2e_1 = (unsigned int )llvm_cbe_storemerge1044_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1044.1 = 0x%X",llvm_cbe_storemerge1044_2e_1);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__292);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%330 = sext i32 %%storemerge1044.1 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2631_count);
  llvm_cbe_tmp__282 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1044_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__282);
if (AESL_DEBUG_TRACE)
printf("\n  %%331 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%135, i64 %%330, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2632_count);
  llvm_cbe_tmp__283 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__131))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__282))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__131));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__282));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__131) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__282) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%332 = load i16* %%331, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2633_count);
  llvm_cbe_tmp__284 = (unsigned short )*llvm_cbe_tmp__283;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n  %%333 = sext i16 %%332 to i32, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2634_count);
  llvm_cbe_tmp__285 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__284);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__285);
if (AESL_DEBUG_TRACE)
printf("\n  %%334 = mul nsw i32 %%333, %%118, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2635_count);
  llvm_cbe_tmp__286 = (unsigned int )((unsigned int )(llvm_cbe_tmp__285&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__115&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__286&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%335 = lshr i32 %%334, 12, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2636_count);
  llvm_cbe_tmp__287 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__286&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__287&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%336 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%330, i64 1, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2637_count);
  llvm_cbe_tmp__288 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__282))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__282));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__282) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%337 = load i16* %%336, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2638_count);
  llvm_cbe_tmp__289 = (unsigned short )*llvm_cbe_tmp__288;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__289);
if (AESL_DEBUG_TRACE)
printf("\n  %%338 = trunc i32 %%335 to i16, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2639_count);
  llvm_cbe_tmp__290 = (unsigned short )((unsigned short )llvm_cbe_tmp__287&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__290);
if (AESL_DEBUG_TRACE)
printf("\n  %%339 = add i16 %%338, %%337, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2640_count);
  llvm_cbe_tmp__291 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__290&65535ull)) + ((unsigned short )(llvm_cbe_tmp__289&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__291&65535ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__282) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%339, i16* %%336, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2641_count);
  *llvm_cbe_tmp__288 = llvm_cbe_tmp__291;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__291);
if (AESL_DEBUG_TRACE)
printf("\n  %%340 = add nsw i32 %%storemerge1044.1, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2642_count);
  llvm_cbe_tmp__292 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1044_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__292&4294967295ull)));
  if (((llvm_cbe_tmp__292&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe__2e_preheader43_2e_2;
  } else {
    llvm_cbe_storemerge1044_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__292;   /* for PHI node */
    goto llvm_cbe_tmp__354;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe__2e_preheader43_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%134 = add i32 %%119, 5, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1288_count);
  llvm_cbe_tmp__130 = (unsigned int )((unsigned int )(llvm_cbe_tmp__116&4294967295ull)) + ((unsigned int )(5u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__130&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%135 = sext i32 %%134 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1289_count);
  llvm_cbe_tmp__131 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__130);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__131);
  llvm_cbe_storemerge1044_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe_tmp__354;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__350:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1044 = phi i32 [ 0, %%.preheader45 ], [ %%133, %%122  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1044_count);
  llvm_cbe_storemerge1044 = (unsigned int )llvm_cbe_storemerge1044__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1044 = 0x%X",llvm_cbe_storemerge1044);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__129);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%123 = sext i32 %%storemerge1044 to i64, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1027_count);
  llvm_cbe_tmp__119 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1044);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__119);
if (AESL_DEBUG_TRACE)
printf("\n  %%124 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 %%121, i64 %%123, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1028_count);
  llvm_cbe_tmp__120 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )llvm_cbe_tmp__118))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__119))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__118));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__119));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__118) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__119) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%125 = load i16* %%124, align 2, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1029_count);
  llvm_cbe_tmp__121 = (unsigned short )*llvm_cbe_tmp__120;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n  %%126 = sext i16 %%125 to i32, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1030_count);
  llvm_cbe_tmp__122 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__121);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__122);
if (AESL_DEBUG_TRACE)
printf("\n  %%127 = mul nsw i32 %%126, %%118, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1031_count);
  llvm_cbe_tmp__123 = (unsigned int )((unsigned int )(llvm_cbe_tmp__122&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__115&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__123&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%128 = lshr i32 %%127, 12, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1032_count);
  llvm_cbe_tmp__124 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__123&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__124&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%129 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%123, i64 0, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1033_count);
  llvm_cbe_tmp__125 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__119))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__119));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__119) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%130 = load i16* %%129, align 8, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1034_count);
  llvm_cbe_tmp__126 = (unsigned short )*llvm_cbe_tmp__125;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__126);
if (AESL_DEBUG_TRACE)
printf("\n  %%131 = trunc i32 %%128 to i16, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1035_count);
  llvm_cbe_tmp__127 = (unsigned short )((unsigned short )llvm_cbe_tmp__124&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__127);
if (AESL_DEBUG_TRACE)
printf("\n  %%132 = add i16 %%131, %%130, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1036_count);
  llvm_cbe_tmp__128 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__127&65535ull)) + ((unsigned short )(llvm_cbe_tmp__126&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__128&65535ull)));

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__119) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%132, i16* %%129, align 8, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1037_count);
  *llvm_cbe_tmp__125 = llvm_cbe_tmp__128;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__128);
if (AESL_DEBUG_TRACE)
printf("\n  %%133 = add nsw i32 %%storemerge1044, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1038_count);
  llvm_cbe_tmp__129 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1044&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__129&4294967295ull)));
  if (((llvm_cbe_tmp__129&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe__2e_preheader43_2e_1;
  } else {
    llvm_cbe_storemerge1044__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__129;   /* for PHI node */
    goto llvm_cbe_tmp__350;
  }

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.preheader45' */
  do {     /* Syntactic loop '.preheader41' to make GCC happy */
llvm_cbe__2e_preheader41:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge840 = phi i32 [ %%145, %%.preheader41 ], [ 0, %%369  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge840_count);
  llvm_cbe_storemerge840 = (unsigned int )llvm_cbe_storemerge840__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge840 = 0x%X",llvm_cbe_storemerge840);
printf("\n = 0x%X",llvm_cbe_tmp__141);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%136 = sext i32 %%storemerge840 to i64, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1291_count);
  llvm_cbe_tmp__132 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge840);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__132);
if (AESL_DEBUG_TRACE)
printf("\n  %%137 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 260, i64 %%136, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1292_count);
  llvm_cbe_tmp__133 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )260ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__132))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__132));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )260ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__132) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%138 = load i16* %%137, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1293_count);
  llvm_cbe_tmp__134 = (unsigned short )*llvm_cbe_tmp__133;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__134);
if (AESL_DEBUG_TRACE)
printf("\n  %%139 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%136, i64 0, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1294_count);
  llvm_cbe_tmp__135 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__132))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__132));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__132) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%140 = load i16* %%139, align 8, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1295_count);
  llvm_cbe_tmp__136 = (unsigned short )*llvm_cbe_tmp__135;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__136);
if (AESL_DEBUG_TRACE)
printf("\n  %%141 = add i16 %%140, %%138, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1296_count);
  llvm_cbe_tmp__137 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__136&65535ull)) + ((unsigned short )(llvm_cbe_tmp__134&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__137&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%142 = sext i16 %%141 to i32, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1297_count);
  llvm_cbe_tmp__138 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__137);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__138);
if (AESL_DEBUG_TRACE)
printf("\n  %%143 = lshr i32 %%142, 5, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1298_count);
  llvm_cbe_tmp__139 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__138&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__139&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%144 = trunc i32 %%143 to i16, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1299_count);
  llvm_cbe_tmp__140 = (unsigned short )((unsigned short )llvm_cbe_tmp__139&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__140);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__132) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%144, i16* %%139, align 8, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1300_count);
  *llvm_cbe_tmp__135 = llvm_cbe_tmp__140;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__140);
if (AESL_DEBUG_TRACE)
printf("\n  %%145 = add nsw i32 %%storemerge840, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1301_count);
  llvm_cbe_tmp__141 = (unsigned int )((unsigned int )(llvm_cbe_storemerge840&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__141&4294967295ull)));
  if (((llvm_cbe_tmp__141&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge840_2e_1__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader39_2e_1;
  } else {
    llvm_cbe_storemerge840__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__141;   /* for PHI node */
    goto llvm_cbe__2e_preheader41;
  }

  } while (1); /* end of syntactic loop '.preheader41' */
  do {     /* Syntactic loop '.preheader37' to make GCC happy */
llvm_cbe__2e_preheader37:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge338 = phi i32 [ %%166, %%165 ], [ 0, %%.preheader39.3  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge338_count);
  llvm_cbe_storemerge338 = (unsigned int )llvm_cbe_storemerge338__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge338 = 0x%X",llvm_cbe_storemerge338);
printf("\n = 0x%X",llvm_cbe_tmp__154);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%146 = sext i32 %%storemerge338 to i64, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1415_count);
  llvm_cbe_tmp__142 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge338);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__142);
if (AESL_DEBUG_TRACE)
printf("\n  %%147 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%146, i64 0, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1416_count);
  llvm_cbe_tmp__143 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__142))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__142));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__142) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%148 = load i16* %%147, align 8, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1417_count);
  llvm_cbe_tmp__144 = (unsigned short )*llvm_cbe_tmp__143;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__144);
  if ((((signed short )llvm_cbe_tmp__144) > ((signed short )((unsigned short )1023)))) {
    llvm_cbe_storemerge30__PHI_TEMPORARY = (unsigned short )((unsigned short )4095);   /* for PHI node */
    goto llvm_cbe_tmp__355;
  } else {
    goto llvm_cbe_tmp__356;
  }

llvm_cbe_tmp__355:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge30 = phi i16 [ 4095, %%.preheader37 ], [ %%155, %%152 ], [ %%164, %%158 ], [ 1, %%156  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge30_count);
  llvm_cbe_storemerge30 = (unsigned short )llvm_cbe_storemerge30__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge30 = 0x%X",llvm_cbe_storemerge30);
printf("\n = 0x%X",((unsigned short )4095));
printf("\n = 0x%X",llvm_cbe_tmp__147);
printf("\n = 0x%X",llvm_cbe_tmp__153);
printf("\n = 0x%X",((unsigned short )1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__142) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )0ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%storemerge30, i16* %%147, align 8, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1435_count);
  *llvm_cbe_tmp__143 = llvm_cbe_storemerge30;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge30 = 0x%X\n", llvm_cbe_storemerge30);
if (AESL_DEBUG_TRACE)
printf("\n  %%166 = add nsw i32 %%storemerge338, 1, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1436_count);
  llvm_cbe_tmp__154 = (unsigned int )((unsigned int )(llvm_cbe_storemerge338&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__154&4294967295ull)));
  if (((llvm_cbe_tmp__154&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge436__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader35;
  } else {
    llvm_cbe_storemerge338__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__154;   /* for PHI node */
    goto llvm_cbe__2e_preheader37;
  }

llvm_cbe_tmp__357:
if (AESL_DEBUG_TRACE)
printf("\n  %%153 = sext i16 %%148 to i64, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1422_count);
  llvm_cbe_tmp__145 = (unsigned long long )((signed long long )(signed short )llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__145);
if (AESL_DEBUG_TRACE)
printf("\n  %%154 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_sigmoid, i64 0, i64 %%153, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1423_count);
  llvm_cbe_tmp__146 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_sigmoid[(((signed long long )llvm_cbe_tmp__145))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__145));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__145) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_sigmoid' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%155 = load i16* %%154, align 2, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1424_count);
  llvm_cbe_tmp__147 = (unsigned short )*llvm_cbe_tmp__146;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__147);
  llvm_cbe_storemerge30__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__147;   /* for PHI node */
  goto llvm_cbe_tmp__355;

llvm_cbe_tmp__356:
  if ((((signed short )llvm_cbe_tmp__144) > ((signed short )((unsigned short )-1)))) {
    goto llvm_cbe_tmp__357;
  } else {
    goto llvm_cbe_tmp__358;
  }

llvm_cbe_tmp__358:
  if ((((signed short )llvm_cbe_tmp__144) > ((signed short )((unsigned short )-1024)))) {
    goto llvm_cbe_tmp__359;
  } else {
    llvm_cbe_storemerge30__PHI_TEMPORARY = (unsigned short )((unsigned short )1);   /* for PHI node */
    goto llvm_cbe_tmp__355;
  }

llvm_cbe_tmp__359:
if (AESL_DEBUG_TRACE)
printf("\n  %%159 = sext i16 %%148 to i32, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1428_count);
  llvm_cbe_tmp__148 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__144);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n  %%160 = sub nsw i32 0, %%159, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1429_count);
  llvm_cbe_tmp__149 = (unsigned int )-(llvm_cbe_tmp__148);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__149&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%161 = sext i32 %%160 to i64, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1430_count);
  llvm_cbe_tmp__150 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__149);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__150);
if (AESL_DEBUG_TRACE)
printf("\n  %%162 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_sigmoid, i64 0, i64 %%161, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1431_count);
  llvm_cbe_tmp__151 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_sigmoid[(((signed long long )llvm_cbe_tmp__150))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__150));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__150) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_sigmoid' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%163 = load i16* %%162, align 2, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1432_count);
  llvm_cbe_tmp__152 = (unsigned short )*llvm_cbe_tmp__151;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__152);
if (AESL_DEBUG_TRACE)
printf("\n  %%164 = sub i16 4096, %%163, !dbg !13 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1433_count);
  llvm_cbe_tmp__153 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )4096)&65535ull)) - ((unsigned short )(llvm_cbe_tmp__152&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__153&65535ull)));
  llvm_cbe_storemerge30__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__153;   /* for PHI node */
  goto llvm_cbe_tmp__355;

  } while (1); /* end of syntactic loop '.preheader37' */
  do {     /* Syntactic loop '.preheader35' to make GCC happy */
llvm_cbe__2e_preheader35:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge436 = phi i32 [ %%187, %%186 ], [ 0, %%165  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge436_count);
  llvm_cbe_storemerge436 = (unsigned int )llvm_cbe_storemerge436__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge436 = 0x%X",llvm_cbe_storemerge436);
printf("\n = 0x%X",llvm_cbe_tmp__167);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%167 = sext i32 %%storemerge436 to i64, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1550_count);
  llvm_cbe_tmp__155 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge436);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__155);
if (AESL_DEBUG_TRACE)
printf("\n  %%168 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%167, i64 1, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1551_count);
  llvm_cbe_tmp__156 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__155))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__155));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__155) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%169 = load i16* %%168, align 2, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1552_count);
  llvm_cbe_tmp__157 = (unsigned short )*llvm_cbe_tmp__156;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__157);
  if ((((signed short )llvm_cbe_tmp__157) > ((signed short )((unsigned short )1023)))) {
    llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned short )((unsigned short )4095);   /* for PHI node */
    goto llvm_cbe_tmp__360;
  } else {
    goto llvm_cbe_tmp__361;
  }

llvm_cbe_tmp__360:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge27 = phi i16 [ 4095, %%.preheader35 ], [ %%176, %%173 ], [ %%185, %%179 ], [ 1, %%177  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge27_count);
  llvm_cbe_storemerge27 = (unsigned short )llvm_cbe_storemerge27__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge27 = 0x%X",llvm_cbe_storemerge27);
printf("\n = 0x%X",((unsigned short )4095));
printf("\n = 0x%X",llvm_cbe_tmp__160);
printf("\n = 0x%X",llvm_cbe_tmp__166);
printf("\n = 0x%X",((unsigned short )1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__155) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%storemerge27, i16* %%168, align 2, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1570_count);
  *llvm_cbe_tmp__156 = llvm_cbe_storemerge27;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge27 = 0x%X\n", llvm_cbe_storemerge27);
if (AESL_DEBUG_TRACE)
printf("\n  %%187 = add nsw i32 %%storemerge436, 1, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1571_count);
  llvm_cbe_tmp__167 = (unsigned int )((unsigned int )(llvm_cbe_storemerge436&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__167&4294967295ull)));
  if (((llvm_cbe_tmp__167&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge534__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader33;
  } else {
    llvm_cbe_storemerge436__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__167;   /* for PHI node */
    goto llvm_cbe__2e_preheader35;
  }

llvm_cbe_tmp__362:
if (AESL_DEBUG_TRACE)
printf("\n  %%174 = sext i16 %%169 to i64, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1557_count);
  llvm_cbe_tmp__158 = (unsigned long long )((signed long long )(signed short )llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__158);
if (AESL_DEBUG_TRACE)
printf("\n  %%175 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_sigmoid, i64 0, i64 %%174, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1558_count);
  llvm_cbe_tmp__159 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_sigmoid[(((signed long long )llvm_cbe_tmp__158))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__158));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__158) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_sigmoid' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%176 = load i16* %%175, align 2, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1559_count);
  llvm_cbe_tmp__160 = (unsigned short )*llvm_cbe_tmp__159;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__160);
  llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__160;   /* for PHI node */
  goto llvm_cbe_tmp__360;

llvm_cbe_tmp__361:
  if ((((signed short )llvm_cbe_tmp__157) > ((signed short )((unsigned short )-1)))) {
    goto llvm_cbe_tmp__362;
  } else {
    goto llvm_cbe_tmp__363;
  }

llvm_cbe_tmp__363:
  if ((((signed short )llvm_cbe_tmp__157) > ((signed short )((unsigned short )-1024)))) {
    goto llvm_cbe_tmp__364;
  } else {
    llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned short )((unsigned short )1);   /* for PHI node */
    goto llvm_cbe_tmp__360;
  }

llvm_cbe_tmp__364:
if (AESL_DEBUG_TRACE)
printf("\n  %%180 = sext i16 %%169 to i32, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1563_count);
  llvm_cbe_tmp__161 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__157);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n  %%181 = sub nsw i32 0, %%180, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1564_count);
  llvm_cbe_tmp__162 = (unsigned int )-(llvm_cbe_tmp__161);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__162&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%182 = sext i32 %%181 to i64, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1565_count);
  llvm_cbe_tmp__163 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__162);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__163);
if (AESL_DEBUG_TRACE)
printf("\n  %%183 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_sigmoid, i64 0, i64 %%182, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1566_count);
  llvm_cbe_tmp__164 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_sigmoid[(((signed long long )llvm_cbe_tmp__163))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__163));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__163) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_sigmoid' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%184 = load i16* %%183, align 2, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1567_count);
  llvm_cbe_tmp__165 = (unsigned short )*llvm_cbe_tmp__164;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__165);
if (AESL_DEBUG_TRACE)
printf("\n  %%185 = sub i16 4096, %%184, !dbg !14 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1568_count);
  llvm_cbe_tmp__166 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )4096)&65535ull)) - ((unsigned short )(llvm_cbe_tmp__165&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__166&65535ull)));
  llvm_cbe_storemerge27__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__166;   /* for PHI node */
  goto llvm_cbe_tmp__360;

  } while (1); /* end of syntactic loop '.preheader35' */
  do {     /* Syntactic loop '.preheader33' to make GCC happy */
llvm_cbe__2e_preheader33:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge534 = phi i32 [ %%227, %%226 ], [ 0, %%186  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge534_count);
  llvm_cbe_storemerge534 = (unsigned int )llvm_cbe_storemerge534__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge534 = 0x%X",llvm_cbe_storemerge534);
printf("\n = 0x%X",llvm_cbe_tmp__191);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%188 = sext i32 %%storemerge534 to i64, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1685_count);
  llvm_cbe_tmp__168 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge534);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__168);
if (AESL_DEBUG_TRACE)
printf("\n  %%189 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%188, i64 2, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1686_count);
  llvm_cbe_tmp__169 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__168))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__168));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__168) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%190 = load i16* %%189, align 4, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1687_count);
  llvm_cbe_tmp__170 = (unsigned short )*llvm_cbe_tmp__169;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__170);
  if ((((signed short )llvm_cbe_tmp__170) > ((signed short )((unsigned short )1023)))) {
    llvm_cbe_storemerge21__PHI_TEMPORARY = (unsigned short )((unsigned short )4095);   /* for PHI node */
    goto llvm_cbe_tmp__365;
  } else {
    goto llvm_cbe_tmp__366;
  }

llvm_cbe_tmp__367:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge24 = phi i16 [ 4096, %%207 ], [ %%216, %%213 ], [ %%225, %%219 ], [ -4096, %%217  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge24_count);
  llvm_cbe_storemerge24 = (unsigned short )llvm_cbe_storemerge24__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge24 = 0x%X",llvm_cbe_storemerge24);
printf("\n = 0x%X",((unsigned short )4096));
printf("\n = 0x%X",llvm_cbe_tmp__184);
printf("\n = 0x%X",llvm_cbe_tmp__190);
printf("\n = 0x%X",((unsigned short )-4096));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__168) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%storemerge24, i16* %%208, align 2, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1725_count);
  *llvm_cbe_tmp__180 = llvm_cbe_storemerge24;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge24 = 0x%X\n", llvm_cbe_storemerge24);
if (AESL_DEBUG_TRACE)
printf("\n  %%227 = add nsw i32 %%storemerge534, 1, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1726_count);
  llvm_cbe_tmp__191 = (unsigned int )((unsigned int )(llvm_cbe_storemerge534&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__191&4294967295ull)));
  if (((llvm_cbe_tmp__191&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge632__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge534__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__191;   /* for PHI node */
    goto llvm_cbe__2e_preheader33;
  }

llvm_cbe_tmp__365:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge21 = phi i16 [ 4095, %%.preheader33 ], [ %%197, %%194 ], [ %%206, %%200 ], [ 1, %%198  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge21_count);
  llvm_cbe_storemerge21 = (unsigned short )llvm_cbe_storemerge21__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge21 = 0x%X",llvm_cbe_storemerge21);
printf("\n = 0x%X",((unsigned short )4095));
printf("\n = 0x%X",llvm_cbe_tmp__173);
printf("\n = 0x%X",llvm_cbe_tmp__179);
printf("\n = 0x%X",((unsigned short )1));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__168) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%storemerge21, i16* %%189, align 4, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1705_count);
  *llvm_cbe_tmp__169 = llvm_cbe_storemerge21;
if (AESL_DEBUG_TRACE)
printf("\nstoremerge21 = 0x%X\n", llvm_cbe_storemerge21);
if (AESL_DEBUG_TRACE)
printf("\n  %%208 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%188, i64 3, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1706_count);
  llvm_cbe_tmp__180 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__168))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__168));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__168) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%209 = load i16* %%208, align 2, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1707_count);
  llvm_cbe_tmp__181 = (unsigned short )*llvm_cbe_tmp__180;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__181);
  if ((((signed short )llvm_cbe_tmp__181) > ((signed short )((unsigned short )1023)))) {
    llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned short )((unsigned short )4096);   /* for PHI node */
    goto llvm_cbe_tmp__367;
  } else {
    goto llvm_cbe_tmp__368;
  }

llvm_cbe_tmp__369:
if (AESL_DEBUG_TRACE)
printf("\n  %%195 = sext i16 %%190 to i64, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1692_count);
  llvm_cbe_tmp__171 = (unsigned long long )((signed long long )(signed short )llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__171);
if (AESL_DEBUG_TRACE)
printf("\n  %%196 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_sigmoid, i64 0, i64 %%195, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1693_count);
  llvm_cbe_tmp__172 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_sigmoid[(((signed long long )llvm_cbe_tmp__171))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__171));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__171) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_sigmoid' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%197 = load i16* %%196, align 2, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1694_count);
  llvm_cbe_tmp__173 = (unsigned short )*llvm_cbe_tmp__172;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__173);
  llvm_cbe_storemerge21__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__173;   /* for PHI node */
  goto llvm_cbe_tmp__365;

llvm_cbe_tmp__366:
  if ((((signed short )llvm_cbe_tmp__170) > ((signed short )((unsigned short )-1)))) {
    goto llvm_cbe_tmp__369;
  } else {
    goto llvm_cbe_tmp__370;
  }

llvm_cbe_tmp__370:
  if ((((signed short )llvm_cbe_tmp__170) > ((signed short )((unsigned short )-1024)))) {
    goto llvm_cbe_tmp__371;
  } else {
    llvm_cbe_storemerge21__PHI_TEMPORARY = (unsigned short )((unsigned short )1);   /* for PHI node */
    goto llvm_cbe_tmp__365;
  }

llvm_cbe_tmp__371:
if (AESL_DEBUG_TRACE)
printf("\n  %%201 = sext i16 %%190 to i32, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1698_count);
  llvm_cbe_tmp__174 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__170);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n  %%202 = sub nsw i32 0, %%201, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1699_count);
  llvm_cbe_tmp__175 = (unsigned int )-(llvm_cbe_tmp__174);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__175&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%203 = sext i32 %%202 to i64, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1700_count);
  llvm_cbe_tmp__176 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__175);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__176);
if (AESL_DEBUG_TRACE)
printf("\n  %%204 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_sigmoid, i64 0, i64 %%203, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1701_count);
  llvm_cbe_tmp__177 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_sigmoid[(((signed long long )llvm_cbe_tmp__176))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__176));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__176) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_sigmoid' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%205 = load i16* %%204, align 2, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1702_count);
  llvm_cbe_tmp__178 = (unsigned short )*llvm_cbe_tmp__177;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__178);
if (AESL_DEBUG_TRACE)
printf("\n  %%206 = sub i16 4096, %%205, !dbg !15 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1703_count);
  llvm_cbe_tmp__179 = (unsigned short )((unsigned short )(((unsigned short )(((unsigned short )4096)&65535ull)) - ((unsigned short )(llvm_cbe_tmp__178&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__179&65535ull)));
  llvm_cbe_storemerge21__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__179;   /* for PHI node */
  goto llvm_cbe_tmp__365;

llvm_cbe_tmp__372:
if (AESL_DEBUG_TRACE)
printf("\n  %%214 = sext i16 %%209 to i64, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1712_count);
  llvm_cbe_tmp__182 = (unsigned long long )((signed long long )(signed short )llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__182);
if (AESL_DEBUG_TRACE)
printf("\n  %%215 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_tanh, i64 0, i64 %%214, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1713_count);
  llvm_cbe_tmp__183 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_tanh[(((signed long long )llvm_cbe_tmp__182))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__182));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__182) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_tanh' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%216 = load i16* %%215, align 2, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1714_count);
  llvm_cbe_tmp__184 = (unsigned short )*llvm_cbe_tmp__183;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__184);
  llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__184;   /* for PHI node */
  goto llvm_cbe_tmp__367;

llvm_cbe_tmp__368:
  if ((((signed short )llvm_cbe_tmp__181) > ((signed short )((unsigned short )-1)))) {
    goto llvm_cbe_tmp__372;
  } else {
    goto llvm_cbe_tmp__373;
  }

llvm_cbe_tmp__373:
  if ((((signed short )llvm_cbe_tmp__181) > ((signed short )((unsigned short )-1024)))) {
    goto llvm_cbe_tmp__374;
  } else {
    llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned short )((unsigned short )-4096);   /* for PHI node */
    goto llvm_cbe_tmp__367;
  }

llvm_cbe_tmp__374:
if (AESL_DEBUG_TRACE)
printf("\n  %%220 = sext i16 %%209 to i32, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1718_count);
  llvm_cbe_tmp__185 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__181);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n  %%221 = sub nsw i32 0, %%220, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1719_count);
  llvm_cbe_tmp__186 = (unsigned int )-(llvm_cbe_tmp__185);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__186&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%222 = sext i32 %%221 to i64, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1720_count);
  llvm_cbe_tmp__187 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__186);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__187);
if (AESL_DEBUG_TRACE)
printf("\n  %%223 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_tanh, i64 0, i64 %%222, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1721_count);
  llvm_cbe_tmp__188 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_tanh[(((signed long long )llvm_cbe_tmp__187))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__187));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__187) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_tanh' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%224 = load i16* %%223, align 2, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1722_count);
  llvm_cbe_tmp__189 = (unsigned short )*llvm_cbe_tmp__188;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__189);
if (AESL_DEBUG_TRACE)
printf("\n  %%225 = sub i16 0, %%224, !dbg !16 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1723_count);
  llvm_cbe_tmp__190 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__189)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__190&65535ull)));
  llvm_cbe_storemerge24__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__190;   /* for PHI node */
  goto llvm_cbe_tmp__367;

  } while (1); /* end of syntactic loop '.preheader33' */
  do {     /* Syntactic loop '.preheader' to make GCC happy */
llvm_cbe__2e_preheader:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge632 = phi i32 [ %%276, %%268 ], [ 0, %%226  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge632_count);
  llvm_cbe_storemerge632 = (unsigned int )llvm_cbe_storemerge632__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge632 = 0x%X",llvm_cbe_storemerge632);
printf("\n = 0x%X",llvm_cbe_tmp__232);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%228 = sext i32 %%storemerge632 to i64, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1840_count);
  llvm_cbe_tmp__192 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge632);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__192);
if (AESL_DEBUG_TRACE)
printf("\n  %%229 = getelementptr inbounds [64 x i16]* @aesl_internal_lstm_kernel.c_state, i64 0, i64 %%228, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1841_count);
  llvm_cbe_tmp__193 = (signed short *)(&aesl_internal_lstm_kernel_OC_c_state[(((signed long long )llvm_cbe_tmp__192))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__192) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.c_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%230 = load i16* %%229, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1842_count);
  llvm_cbe_tmp__194 = (unsigned short )*llvm_cbe_tmp__193;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n  %%231 = sext i16 %%230 to i32, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1843_count);
  llvm_cbe_tmp__195 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__194);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__195);
if (AESL_DEBUG_TRACE)
printf("\n  %%232 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%228, i64 1, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1844_count);
  llvm_cbe_tmp__196 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__192))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__192) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%233 = load i16* %%232, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1845_count);
  llvm_cbe_tmp__197 = (unsigned short )*llvm_cbe_tmp__196;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n  %%234 = sext i16 %%233 to i32, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1846_count);
  llvm_cbe_tmp__198 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__197);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__198);
if (AESL_DEBUG_TRACE)
printf("\n  %%235 = mul nsw i32 %%234, %%231, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1847_count);
  llvm_cbe_tmp__199 = (unsigned int )((unsigned int )(llvm_cbe_tmp__198&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__195&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__199&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%236 = lshr i32 %%235, 8, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1848_count);
  llvm_cbe_tmp__200 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__199&4294967295ull)) >> ((unsigned int )(8u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__200&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%237 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%228, i64 3, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1849_count);
  llvm_cbe_tmp__201 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__192))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__192) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%238 = load i16* %%237, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1850_count);
  llvm_cbe_tmp__202 = (unsigned short )*llvm_cbe_tmp__201;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n  %%239 = sext i16 %%238 to i32, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1851_count);
  llvm_cbe_tmp__203 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__202);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__203);
if (AESL_DEBUG_TRACE)
printf("\n  %%240 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%228, i64 0, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1852_count);
  llvm_cbe_tmp__204 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__192))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__192) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )0ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%241 = load i16* %%240, align 8, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1853_count);
  llvm_cbe_tmp__205 = (unsigned short )*llvm_cbe_tmp__204;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n  %%242 = sext i16 %%241 to i32, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1854_count);
  llvm_cbe_tmp__206 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__205);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__206);
if (AESL_DEBUG_TRACE)
printf("\n  %%243 = mul nsw i32 %%242, %%239, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1855_count);
  llvm_cbe_tmp__207 = (unsigned int )((unsigned int )(llvm_cbe_tmp__206&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__203&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__207&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%244 = lshr i32 %%243, 12, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1856_count);
  llvm_cbe_tmp__208 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__207&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__208&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%245 = add nsw i32 %%244, %%236, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1857_count);
  llvm_cbe_tmp__209 = (unsigned int )((unsigned int )(llvm_cbe_tmp__208&4294967295ull)) + ((unsigned int )(llvm_cbe_tmp__200&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__209&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%246 = lshr i32 %%245, 4, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1858_count);
  llvm_cbe_tmp__210 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__209&4294967295ull)) >> ((unsigned int )(4u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__210&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%247 = trunc i32 %%246 to i16, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1859_count);
  llvm_cbe_tmp__211 = (unsigned short )((unsigned short )llvm_cbe_tmp__210&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__211);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__192) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.c_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%247, i16* %%229, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1860_count);
  *llvm_cbe_tmp__193 = llvm_cbe_tmp__211;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n  %%248 = sext i16 %%247 to i32, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1861_count);
  llvm_cbe_tmp__212 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__211);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__212);
if (AESL_DEBUG_TRACE)
printf("\n  %%249 = lshr i32 %%248, 1, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1862_count);
  llvm_cbe_tmp__213 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__212&4294967295ull)) >> ((unsigned int )(1u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__213&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%250 = trunc i32 %%249 to i16, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1863_count);
  llvm_cbe_tmp__214 = (unsigned short )((unsigned short )llvm_cbe_tmp__213&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n  %%251 = getelementptr inbounds [64 x i16]* @aesl_internal_lstm_kernel.h_state, i64 0, i64 %%228, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1864_count);
  llvm_cbe_tmp__215 = (signed short *)(&aesl_internal_lstm_kernel_OC_h_state[(((signed long long )llvm_cbe_tmp__192))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__192) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.h_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%250, i16* %%251, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1865_count);
  *llvm_cbe_tmp__215 = llvm_cbe_tmp__214;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__214);
  if ((((signed short )llvm_cbe_tmp__214) > ((signed short )((unsigned short )1023)))) {
    llvm_cbe_storemerge18__PHI_TEMPORARY = (unsigned short )((unsigned short )4096);   /* for PHI node */
    goto llvm_cbe_tmp__375;
  } else {
    goto llvm_cbe_tmp__376;
  }

llvm_cbe_tmp__375:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge18 = phi i16 [ 4096, %%.preheader ], [ %%258, %%255 ], [ %%267, %%261 ], [ -4096, %%259  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge18_count);
  llvm_cbe_storemerge18 = (unsigned short )llvm_cbe_storemerge18__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge18 = 0x%X",llvm_cbe_storemerge18);
printf("\n = 0x%X",((unsigned short )4096));
printf("\n = 0x%X",llvm_cbe_tmp__218);
printf("\n = 0x%X",llvm_cbe_tmp__224);
printf("\n = 0x%X",((unsigned short )-4096));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%269 = sext i16 %%storemerge18 to i32, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1883_count);
  llvm_cbe_tmp__225 = (unsigned int )((signed int )(signed short )llvm_cbe_storemerge18);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__225);
if (AESL_DEBUG_TRACE)
printf("\n  %%270 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%228, i64 2, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1884_count);
  llvm_cbe_tmp__226 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__192))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__192));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__192) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%271 = load i16* %%270, align 4, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1885_count);
  llvm_cbe_tmp__227 = (unsigned short )*llvm_cbe_tmp__226;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n  %%272 = sext i16 %%271 to i32, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1886_count);
  llvm_cbe_tmp__228 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__227);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__228);
if (AESL_DEBUG_TRACE)
printf("\n  %%273 = mul nsw i32 %%272, %%269, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1887_count);
  llvm_cbe_tmp__229 = (unsigned int )((unsigned int )(llvm_cbe_tmp__228&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__225&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__229&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%274 = lshr i32 %%273, 12, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1888_count);
  llvm_cbe_tmp__230 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__229&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__230&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%275 = trunc i32 %%274 to i16, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1889_count);
  llvm_cbe_tmp__231 = (unsigned short )((unsigned short )llvm_cbe_tmp__230&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__231);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__192) < 64 && "Write access out of array 'aesl_internal_lstm_kernel.h_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%275, i16* %%251, align 2, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1890_count);
  *llvm_cbe_tmp__215 = llvm_cbe_tmp__231;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__231);
if (AESL_DEBUG_TRACE)
printf("\n  %%276 = add nsw i32 %%storemerge632, 1, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1891_count);
  llvm_cbe_tmp__232 = (unsigned int )((unsigned int )(llvm_cbe_storemerge632&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__232&4294967295ull)));
  if (((llvm_cbe_tmp__232&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__377;
  } else {
    llvm_cbe_storemerge632__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__232;   /* for PHI node */
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe_tmp__378:
if (AESL_DEBUG_TRACE)
printf("\n  %%256 = sext i16 %%250 to i64, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1870_count);
  llvm_cbe_tmp__216 = (unsigned long long )((signed long long )(signed short )llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__216);
if (AESL_DEBUG_TRACE)
printf("\n  %%257 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_tanh, i64 0, i64 %%256, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1871_count);
  llvm_cbe_tmp__217 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_tanh[(((signed long long )llvm_cbe_tmp__216))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__216));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__216) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_tanh' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%258 = load i16* %%257, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1872_count);
  llvm_cbe_tmp__218 = (unsigned short )*llvm_cbe_tmp__217;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__218);
  llvm_cbe_storemerge18__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__218;   /* for PHI node */
  goto llvm_cbe_tmp__375;

llvm_cbe_tmp__376:
  if ((((signed short )llvm_cbe_tmp__214) > ((signed short )((unsigned short )-1)))) {
    goto llvm_cbe_tmp__378;
  } else {
    goto llvm_cbe_tmp__379;
  }

llvm_cbe_tmp__379:
  if ((((signed short )llvm_cbe_tmp__214) > ((signed short )((unsigned short )-1024)))) {
    goto llvm_cbe_tmp__380;
  } else {
    llvm_cbe_storemerge18__PHI_TEMPORARY = (unsigned short )((unsigned short )-4096);   /* for PHI node */
    goto llvm_cbe_tmp__375;
  }

llvm_cbe_tmp__380:
if (AESL_DEBUG_TRACE)
printf("\n  %%262 = sext i16 %%250 to i32, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1876_count);
  llvm_cbe_tmp__219 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__214);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n  %%263 = sub nsw i32 0, %%262, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1877_count);
  llvm_cbe_tmp__220 = (unsigned int )-(llvm_cbe_tmp__219);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__220&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%264 = sext i32 %%263 to i64, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1878_count);
  llvm_cbe_tmp__221 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__220);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__221);
if (AESL_DEBUG_TRACE)
printf("\n  %%265 = getelementptr inbounds [1024 x i16]* @aesl_internal_lstm_kernel.lut_tanh, i64 0, i64 %%264, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1879_count);
  llvm_cbe_tmp__222 = (signed short *)(&aesl_internal_lstm_kernel_OC_lut_tanh[(((signed long long )llvm_cbe_tmp__221))
#ifdef AESL_BC_SIM
 % 1024
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__221));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__221) < 1024)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.lut_tanh' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%266 = load i16* %%265, align 2, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1880_count);
  llvm_cbe_tmp__223 = (unsigned short )*llvm_cbe_tmp__222;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__223);
if (AESL_DEBUG_TRACE)
printf("\n  %%267 = sub i16 0, %%266, !dbg !17 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_1881_count);
  llvm_cbe_tmp__224 = (unsigned short )((unsigned short )(-(llvm_cbe_tmp__223)));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__224&65535ull)));
  llvm_cbe_storemerge18__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__224;   /* for PHI node */
  goto llvm_cbe_tmp__375;

  } while (1); /* end of syntactic loop '.preheader' */
llvm_cbe_tmp__377:
if (AESL_DEBUG_TRACE)
printf("\n  %%278 = getelementptr inbounds i32* %%weight, i64 16960, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2005_count);
  llvm_cbe_tmp__233 = (signed int *)(&llvm_cbe_weight[(((signed long long )16960ull))]);
if (AESL_DEBUG_TRACE) {
}
if (AESL_DEBUG_TRACE)
printf("\n  %%279 = load i32* %%278, align 4, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2006_count);
  llvm_cbe_tmp__234 = (unsigned int )*llvm_cbe_tmp__233;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__234);
if (AESL_DEBUG_TRACE)
printf("\n  %%280 = trunc i32 %%279 to i16, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2007_count);
  llvm_cbe_tmp__235 = (unsigned short )((unsigned short )llvm_cbe_tmp__234&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__235);
  llvm_cbe_storemerge731__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__236__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__235;   /* for PHI node */
  goto llvm_cbe_tmp__381;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__381:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge731 = phi i32 [ 0, %%277 ], [ %%297, %%281  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge731_count);
  llvm_cbe_storemerge731 = (unsigned int )llvm_cbe_storemerge731__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge731 = 0x%X",llvm_cbe_storemerge731);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__251);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%282 = phi i16 [ %%280, %%277 ], [ %%296, %%281  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2124_count);
  llvm_cbe_tmp__236 = (unsigned short )llvm_cbe_tmp__236__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%X",llvm_cbe_tmp__236);
printf("\n = 0x%X",llvm_cbe_tmp__235);
printf("\n = 0x%X",llvm_cbe_tmp__250);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%283 = sext i32 %%storemerge731 to i64, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2125_count);
  llvm_cbe_tmp__237 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge731);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__237);
if (AESL_DEBUG_TRACE)
printf("\n  %%284 = getelementptr inbounds [64 x i16]* @aesl_internal_lstm_kernel.h_state, i64 0, i64 %%283, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2126_count);
  llvm_cbe_tmp__238 = (signed short *)(&aesl_internal_lstm_kernel_OC_h_state[(((signed long long )llvm_cbe_tmp__237))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__237));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__237) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.h_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%285 = load i16* %%284, align 2, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2127_count);
  llvm_cbe_tmp__239 = (unsigned short )*llvm_cbe_tmp__238;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n  %%286 = sext i16 %%285 to i32, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2128_count);
  llvm_cbe_tmp__240 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__239);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__240);
if (AESL_DEBUG_TRACE)
printf("\n  %%287 = add nsw i32 %%storemerge731, 16896, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2129_count);
  llvm_cbe_tmp__241 = (unsigned int )((unsigned int )(llvm_cbe_storemerge731&4294967295ull)) + ((unsigned int )(16896u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__241&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%288 = sext i32 %%287 to i64, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2130_count);
  llvm_cbe_tmp__242 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__241);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__242);
if (AESL_DEBUG_TRACE)
printf("\n  %%289 = getelementptr inbounds i32* %%weight, i64 %%288, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2131_count);
  llvm_cbe_tmp__243 = (signed int *)(&llvm_cbe_weight[(((signed long long )llvm_cbe_tmp__242))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__242));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%290 = load i32* %%289, align 4, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2132_count);
  llvm_cbe_tmp__244 = (unsigned int )*llvm_cbe_tmp__243;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__244);
if (AESL_DEBUG_TRACE)
printf("\n  %%291 = trunc i32 %%290 to i16, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2133_count);
  llvm_cbe_tmp__245 = (unsigned short )((unsigned short )llvm_cbe_tmp__244&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n  %%292 = sext i16 %%291 to i32, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2134_count);
  llvm_cbe_tmp__246 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__245);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__246);
if (AESL_DEBUG_TRACE)
printf("\n  %%293 = mul nsw i32 %%292, %%286, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2135_count);
  llvm_cbe_tmp__247 = (unsigned int )((unsigned int )(llvm_cbe_tmp__246&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__240&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__247&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%294 = lshr i32 %%293, 12, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2136_count);
  llvm_cbe_tmp__248 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__247&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__248&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%295 = trunc i32 %%294 to i16, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2137_count);
  llvm_cbe_tmp__249 = (unsigned short )((unsigned short )llvm_cbe_tmp__248&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__249);
if (AESL_DEBUG_TRACE)
printf("\n  %%296 = add i16 %%295, %%282, !dbg !8 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2138_count);
  llvm_cbe_tmp__250 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__249&65535ull)) + ((unsigned short )(llvm_cbe_tmp__236&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__250&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%297 = add nsw i32 %%storemerge731, 1, !dbg !18 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2142_count);
  llvm_cbe_tmp__251 = (unsigned int )((unsigned int )(llvm_cbe_storemerge731&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__251&4294967295ull)));
  if (((llvm_cbe_tmp__251&4294967295U) == (64u&4294967295U))) {
    goto llvm_cbe_tmp__382;
  } else {
    llvm_cbe_storemerge731__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__251;   /* for PHI node */
    llvm_cbe_tmp__236__PHI_TEMPORARY = (unsigned short )llvm_cbe_tmp__250;   /* for PHI node */
    goto llvm_cbe_tmp__381;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__382:
if (AESL_DEBUG_TRACE)
printf("\n  store volatile i16 %%296, i16* %%lstm_out, align 2, !dbg !9 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2256_count);
  *((unsigned short volatile*)llvm_cbe_lstm_out) = llvm_cbe_tmp__250;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__250);
  goto llvm_cbe__2e_loopexit;

llvm_cbe__2e_loopexit:
  if (AESL_DEBUG_TRACE)
      printf("\nEND @lstm_kernel}\n");
  return;
  do {     /* Syntactic loop '.preheader39.1' to make GCC happy */
llvm_cbe__2e_preheader39_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge840.1 = phi i32 [ %%308, %%.preheader39.1 ], [ 0, %%.preheader41  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge840_2e_1_count);
  llvm_cbe_storemerge840_2e_1 = (unsigned int )llvm_cbe_storemerge840_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge840.1 = 0x%X",llvm_cbe_storemerge840_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__261);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%299 = sext i32 %%storemerge840.1 to i64, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2259_count);
  llvm_cbe_tmp__252 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge840_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__252);
if (AESL_DEBUG_TRACE)
printf("\n  %%300 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 261, i64 %%299, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2260_count);
  llvm_cbe_tmp__253 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )261ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__252))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__252));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )261ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__252) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%301 = load i16* %%300, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2261_count);
  llvm_cbe_tmp__254 = (unsigned short )*llvm_cbe_tmp__253;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__254);
if (AESL_DEBUG_TRACE)
printf("\n  %%302 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%299, i64 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2262_count);
  llvm_cbe_tmp__255 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__252))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__252));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__252) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )1ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%303 = load i16* %%302, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2263_count);
  llvm_cbe_tmp__256 = (unsigned short )*llvm_cbe_tmp__255;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__256);
if (AESL_DEBUG_TRACE)
printf("\n  %%304 = add i16 %%303, %%301, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2264_count);
  llvm_cbe_tmp__257 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__256&65535ull)) + ((unsigned short )(llvm_cbe_tmp__254&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__257&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%305 = sext i16 %%304 to i32, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2265_count);
  llvm_cbe_tmp__258 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__257);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__258);
if (AESL_DEBUG_TRACE)
printf("\n  %%306 = lshr i32 %%305, 5, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2266_count);
  llvm_cbe_tmp__259 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__258&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__259&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%307 = trunc i32 %%306 to i16, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2267_count);
  llvm_cbe_tmp__260 = (unsigned short )((unsigned short )llvm_cbe_tmp__259&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__252) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%307, i16* %%302, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2268_count);
  *llvm_cbe_tmp__255 = llvm_cbe_tmp__260;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__260);
if (AESL_DEBUG_TRACE)
printf("\n  %%308 = add nsw i32 %%storemerge840.1, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2269_count);
  llvm_cbe_tmp__261 = (unsigned int )((unsigned int )(llvm_cbe_storemerge840_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__261&4294967295ull)));
  if (((llvm_cbe_tmp__261&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge840_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader39_2e_2;
  } else {
    llvm_cbe_storemerge840_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__261;   /* for PHI node */
    goto llvm_cbe__2e_preheader39_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader39.1' */
  do {     /* Syntactic loop '.preheader39.2' to make GCC happy */
llvm_cbe__2e_preheader39_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge840.2 = phi i32 [ %%318, %%.preheader39.2 ], [ 0, %%.preheader39.1  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge840_2e_2_count);
  llvm_cbe_storemerge840_2e_2 = (unsigned int )llvm_cbe_storemerge840_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge840.2 = 0x%X",llvm_cbe_storemerge840_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__271);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%309 = sext i32 %%storemerge840.2 to i64, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2383_count);
  llvm_cbe_tmp__262 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge840_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__262);
if (AESL_DEBUG_TRACE)
printf("\n  %%310 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 262, i64 %%309, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2384_count);
  llvm_cbe_tmp__263 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )262ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__262))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__262));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )262ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__262) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%311 = load i16* %%310, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2385_count);
  llvm_cbe_tmp__264 = (unsigned short )*llvm_cbe_tmp__263;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__264);
if (AESL_DEBUG_TRACE)
printf("\n  %%312 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%309, i64 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2386_count);
  llvm_cbe_tmp__265 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__262))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__262));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__262) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )2ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%313 = load i16* %%312, align 4, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2387_count);
  llvm_cbe_tmp__266 = (unsigned short )*llvm_cbe_tmp__265;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__266);
if (AESL_DEBUG_TRACE)
printf("\n  %%314 = add i16 %%313, %%311, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2388_count);
  llvm_cbe_tmp__267 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__266&65535ull)) + ((unsigned short )(llvm_cbe_tmp__264&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__267&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%315 = sext i16 %%314 to i32, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2389_count);
  llvm_cbe_tmp__268 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__267);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__268);
if (AESL_DEBUG_TRACE)
printf("\n  %%316 = lshr i32 %%315, 5, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2390_count);
  llvm_cbe_tmp__269 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__268&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__269&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%317 = trunc i32 %%316 to i16, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2391_count);
  llvm_cbe_tmp__270 = (unsigned short )((unsigned short )llvm_cbe_tmp__269&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__270);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__262) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%317, i16* %%312, align 4, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2392_count);
  *llvm_cbe_tmp__265 = llvm_cbe_tmp__270;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__270);
if (AESL_DEBUG_TRACE)
printf("\n  %%318 = add nsw i32 %%storemerge840.2, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2393_count);
  llvm_cbe_tmp__271 = (unsigned int )((unsigned int )(llvm_cbe_storemerge840_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__271&4294967295ull)));
  if (((llvm_cbe_tmp__271&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge840_2e_3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader39_2e_3;
  } else {
    llvm_cbe_storemerge840_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__271;   /* for PHI node */
    goto llvm_cbe__2e_preheader39_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader39.2' */
  do {     /* Syntactic loop '.preheader39.3' to make GCC happy */
llvm_cbe__2e_preheader39_2e_3:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge840.3 = phi i32 [ %%328, %%.preheader39.3 ], [ 0, %%.preheader39.2  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge840_2e_3_count);
  llvm_cbe_storemerge840_2e_3 = (unsigned int )llvm_cbe_storemerge840_2e_3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge840.3 = 0x%X",llvm_cbe_storemerge840_2e_3);
printf("\n = 0x%X",llvm_cbe_tmp__281);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%319 = sext i32 %%storemerge840.3 to i64, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2507_count);
  llvm_cbe_tmp__272 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge840_2e_3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__272);
if (AESL_DEBUG_TRACE)
printf("\n  %%320 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 263, i64 %%319, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2508_count);
  llvm_cbe_tmp__273 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )263ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__272))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__272));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )263ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__272) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%321 = load i16* %%320, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2509_count);
  llvm_cbe_tmp__274 = (unsigned short )*llvm_cbe_tmp__273;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__274);
if (AESL_DEBUG_TRACE)
printf("\n  %%322 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%319, i64 3, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2510_count);
  llvm_cbe_tmp__275 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__272))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__272));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__272) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )3ull) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'lstm_state' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%323 = load i16* %%322, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2511_count);
  llvm_cbe_tmp__276 = (unsigned short )*llvm_cbe_tmp__275;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__276);
if (AESL_DEBUG_TRACE)
printf("\n  %%324 = add i16 %%323, %%321, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2512_count);
  llvm_cbe_tmp__277 = (unsigned short )((unsigned short )(((unsigned short )(llvm_cbe_tmp__276&65535ull)) + ((unsigned short )(llvm_cbe_tmp__274&65535ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned short )(llvm_cbe_tmp__277&65535ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%325 = sext i16 %%324 to i32, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2513_count);
  llvm_cbe_tmp__278 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__277);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__278);
if (AESL_DEBUG_TRACE)
printf("\n  %%326 = lshr i32 %%325, 5, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2514_count);
  llvm_cbe_tmp__279 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__278&4294967295ull)) >> ((unsigned int )(5u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__279&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%327 = trunc i32 %%326 to i16, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2515_count);
  llvm_cbe_tmp__280 = (unsigned short )((unsigned short )llvm_cbe_tmp__279&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__280);

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__272) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%327, i16* %%322, align 2, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2516_count);
  *llvm_cbe_tmp__275 = llvm_cbe_tmp__280;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__280);
if (AESL_DEBUG_TRACE)
printf("\n  %%328 = add nsw i32 %%storemerge840.3, 1, !dbg !12 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_2517_count);
  llvm_cbe_tmp__281 = (unsigned int )((unsigned int )(llvm_cbe_storemerge840_2e_3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__281&4294967295ull)));
  if (((llvm_cbe_tmp__281&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge338__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader37;
  } else {
    llvm_cbe_storemerge840_2e_3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__281;   /* for PHI node */
    goto llvm_cbe__2e_preheader39_2e_3;
  }

  } while (1); /* end of syntactic loop '.preheader39.3' */
  do {     /* Syntactic loop '.preheader49.1' to make GCC happy */
llvm_cbe__2e_preheader49_2e_1:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1150.1 = phi i32 [ %%379, %%.preheader49.1 ], [ 0, %%105  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1150_2e_1_count);
  llvm_cbe_storemerge1150_2e_1 = (unsigned int )llvm_cbe_storemerge1150_2e_1__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1150.1 = 0x%X",llvm_cbe_storemerge1150_2e_1);
printf("\n = 0x%X",llvm_cbe_tmp__328);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%371 = sext i32 %%storemerge1150.1 to i64, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3316_count);
  llvm_cbe_tmp__320 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1150_2e_1);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__320);
if (AESL_DEBUG_TRACE)
printf("\n  %%372 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 1, i64 %%371, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3317_count);
  llvm_cbe_tmp__321 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__320))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__320));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )1ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__320) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%373 = load i16* %%372, align 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3318_count);
  llvm_cbe_tmp__322 = (unsigned short )*llvm_cbe_tmp__321;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__322);
if (AESL_DEBUG_TRACE)
printf("\n  %%374 = sext i16 %%373 to i32, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3319_count);
  llvm_cbe_tmp__323 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__322);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__323);
if (AESL_DEBUG_TRACE)
printf("\n  %%375 = mul nsw i32 %%374, %%104, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3320_count);
  llvm_cbe_tmp__324 = (unsigned int )((unsigned int )(llvm_cbe_tmp__323&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__102&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__324&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%376 = lshr i32 %%375, 12, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3321_count);
  llvm_cbe_tmp__325 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__324&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__325&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%377 = trunc i32 %%376 to i16, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3322_count);
  llvm_cbe_tmp__326 = (unsigned short )((unsigned short )llvm_cbe_tmp__325&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE)
printf("\n  %%378 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%371, i64 1, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3323_count);
  llvm_cbe_tmp__327 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__320))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__320));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__320) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )1ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%377, i16* %%378, align 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3324_count);
  *llvm_cbe_tmp__327 = llvm_cbe_tmp__326;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__326);
if (AESL_DEBUG_TRACE)
printf("\n  %%379 = add nsw i32 %%storemerge1150.1, 1, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3325_count);
  llvm_cbe_tmp__328 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1150_2e_1&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__328&4294967295ull)));
  if (((llvm_cbe_tmp__328&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge1150_2e_2__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader49_2e_2;
  } else {
    llvm_cbe_storemerge1150_2e_1__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__328;   /* for PHI node */
    goto llvm_cbe__2e_preheader49_2e_1;
  }

  } while (1); /* end of syntactic loop '.preheader49.1' */
  do {     /* Syntactic loop '.preheader49.2' to make GCC happy */
llvm_cbe__2e_preheader49_2e_2:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1150.2 = phi i32 [ %%388, %%.preheader49.2 ], [ 0, %%.preheader49.1  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1150_2e_2_count);
  llvm_cbe_storemerge1150_2e_2 = (unsigned int )llvm_cbe_storemerge1150_2e_2__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1150.2 = 0x%X",llvm_cbe_storemerge1150_2e_2);
printf("\n = 0x%X",llvm_cbe_tmp__337);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%380 = sext i32 %%storemerge1150.2 to i64, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3439_count);
  llvm_cbe_tmp__329 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1150_2e_2);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__329);
if (AESL_DEBUG_TRACE)
printf("\n  %%381 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 2, i64 %%380, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3440_count);
  llvm_cbe_tmp__330 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__329))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__329));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )2ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__329) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%382 = load i16* %%381, align 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3441_count);
  llvm_cbe_tmp__331 = (unsigned short )*llvm_cbe_tmp__330;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE)
printf("\n  %%383 = sext i16 %%382 to i32, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3442_count);
  llvm_cbe_tmp__332 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__331);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__332);
if (AESL_DEBUG_TRACE)
printf("\n  %%384 = mul nsw i32 %%383, %%104, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3443_count);
  llvm_cbe_tmp__333 = (unsigned int )((unsigned int )(llvm_cbe_tmp__332&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__102&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__333&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%385 = lshr i32 %%384, 12, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3444_count);
  llvm_cbe_tmp__334 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__333&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__334&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%386 = trunc i32 %%385 to i16, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3445_count);
  llvm_cbe_tmp__335 = (unsigned short )((unsigned short )llvm_cbe_tmp__334&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE)
printf("\n  %%387 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%380, i64 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3446_count);
  llvm_cbe_tmp__336 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__329))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__329));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__329) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )2ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%386, i16* %%387, align 4, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3447_count);
  *llvm_cbe_tmp__336 = llvm_cbe_tmp__335;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__335);
if (AESL_DEBUG_TRACE)
printf("\n  %%388 = add nsw i32 %%storemerge1150.2, 1, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3448_count);
  llvm_cbe_tmp__337 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1150_2e_2&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__337&4294967295ull)));
  if (((llvm_cbe_tmp__337&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge1150_2e_3__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader49_2e_3;
  } else {
    llvm_cbe_storemerge1150_2e_2__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__337;   /* for PHI node */
    goto llvm_cbe__2e_preheader49_2e_2;
  }

  } while (1); /* end of syntactic loop '.preheader49.2' */
  do {     /* Syntactic loop '.preheader49.3' to make GCC happy */
llvm_cbe__2e_preheader49_2e_3:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge1150.3 = phi i32 [ %%397, %%.preheader49.3 ], [ 0, %%.preheader49.2  for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_storemerge1150_2e_3_count);
  llvm_cbe_storemerge1150_2e_3 = (unsigned int )llvm_cbe_storemerge1150_2e_3__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge1150.3 = 0x%X",llvm_cbe_storemerge1150_2e_3);
printf("\n = 0x%X",llvm_cbe_tmp__346);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%389 = sext i32 %%storemerge1150.3 to i64, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3562_count);
  llvm_cbe_tmp__338 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge1150_2e_3);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__338);
if (AESL_DEBUG_TRACE)
printf("\n  %%390 = getelementptr inbounds [264 x [64 x i16]]* @aesl_internal_lstm_kernel.weight_l, i64 0, i64 3, i64 %%389, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3563_count);
  llvm_cbe_tmp__339 = (signed short *)(&aesl_internal_lstm_kernel_OC_weight_l[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 264
#endif
][(((signed long long )llvm_cbe_tmp__338))
#ifdef AESL_BC_SIM
 % 64
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__338));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )3ull) < 264)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);
  if (!(((signed long long )llvm_cbe_tmp__338) < 64)) fprintf(stderr, "%s:%d: warning: Read access out of array 'aesl_internal_lstm_kernel.weight_l' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%391 = load i16* %%390, align 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3564_count);
  llvm_cbe_tmp__340 = (unsigned short )*llvm_cbe_tmp__339;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__340);
if (AESL_DEBUG_TRACE)
printf("\n  %%392 = sext i16 %%391 to i32, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3565_count);
  llvm_cbe_tmp__341 = (unsigned int )((signed int )(signed short )llvm_cbe_tmp__340);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__341);
if (AESL_DEBUG_TRACE)
printf("\n  %%393 = mul nsw i32 %%392, %%104, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3566_count);
  llvm_cbe_tmp__342 = (unsigned int )((unsigned int )(llvm_cbe_tmp__341&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__102&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__342&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%394 = lshr i32 %%393, 12, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3567_count);
  llvm_cbe_tmp__343 = (unsigned int )((unsigned int )(((unsigned int )(llvm_cbe_tmp__342&4294967295ull)) >> ((unsigned int )(12u&4294967295ull))));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__343&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%395 = trunc i32 %%394 to i16, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3568_count);
  llvm_cbe_tmp__344 = (unsigned short )((unsigned short )llvm_cbe_tmp__343&65535U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%396 = getelementptr inbounds [64 x [4 x i16]]* %%lstm_state, i64 0, i64 %%389, i64 3, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3569_count);
  llvm_cbe_tmp__345 = (signed short *)(&llvm_cbe_lstm_state[(((signed long long )llvm_cbe_tmp__338))
#ifdef AESL_BC_SIM
 % 64
#endif
][(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 4
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__338));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__338) < 64 && "Write access out of array 'lstm_state' bound?");
  assert(((signed long long )3ull) < 4 && "Write access out of array 'lstm_state' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i16 %%395, i16* %%396, align 2, !dbg !10 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3570_count);
  *llvm_cbe_tmp__345 = llvm_cbe_tmp__344;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__344);
if (AESL_DEBUG_TRACE)
printf("\n  %%397 = add nsw i32 %%storemerge1150.3, 1, !dbg !11 for 0x%I64xth hint within @lstm_kernel  --> \n", ++aesl_llvm_cbe_3571_count);
  llvm_cbe_tmp__346 = (unsigned int )((unsigned int )(llvm_cbe_storemerge1150_2e_3&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__346&4294967295ull)));
  if (((llvm_cbe_tmp__346&4294967295U) == (64u&4294967295U))) {
    llvm_cbe_storemerge148__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_preheader45;
  } else {
    llvm_cbe_storemerge1150_2e_3__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__346;   /* for PHI node */
    goto llvm_cbe__2e_preheader49_2e_3;
  }

  } while (1); /* end of syntactic loop '.preheader49.3' */
}

