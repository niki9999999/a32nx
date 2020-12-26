#ifndef RTW_HEADER_Autopilot_h_
#define RTW_HEADER_Autopilot_h_
#include <cfloat>
#include <cmath>
#include <cstring>
#ifndef Autopilot_COMMON_INCLUDES_
# define Autopilot_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif

#include "Autopilot_types.h"

typedef struct {
  uint8_T is_active_c5_Autopilot;
  uint8_T is_c5_Autopilot;
} rtDW_Chart_Autopilot_T;

typedef struct {
  real_T ACTIVE_LAW;
} BlockIO_Autopilot_T;

typedef struct {
  real_T Delay_DSTATE;
  real_T Delay_DSTATE_k;
  real_T Delay1_DSTATE;
  real_T Delay_DSTATE_a;
  real_T Delay_DSTATE_o;
  real_T Delay1_DSTATE_e;
  real_T Delay_DSTATE_k3;
  real_T Delay_DSTATE_oh;
  real_T Delay_DSTATE_d;
  real_T Delay1_DSTATE_n;
  real_T Delay_DSTATE_m;
  real_T Delay_DSTATE_n;
  real_T Delay1_DSTATE_i;
  real_T Delay_DSTATE_i;
  real_T Delay_DSTATE_b;
  real_T Delay1_DSTATE_c;
  real_T Delay_DSTATE_dd;
  real_T loc_trk_time;
  uint8_T icLoad;
  uint8_T icLoad_g;
  uint8_T is_active_c4_Autopilot;
  uint8_T is_c4_Autopilot;
  uint8_T is_active_c1_Autopilot;
  uint8_T is_c1_Autopilot;
  uint8_T is_active_c2_Autopilot;
  uint8_T is_c2_Autopilot;
  uint8_T is_LOC;
  uint8_T is_active_c3_Autopilot;
  uint8_T is_c3_Autopilot;
  boolean_T IC_FirstOutputTime;
  boolean_T IC_FirstOutputTime_k;
  boolean_T IC_FirstOutputTime_g;
  boolean_T IC_FirstOutputTime_gm;
  rtDW_Chart_Autopilot_T sf_Chart_p;
  rtDW_Chart_Autopilot_T sf_Chart_h;
  rtDW_Chart_Autopilot_T sf_Chart_ds;
  rtDW_Chart_Autopilot_T sf_Chart_f;
  rtDW_Chart_Autopilot_T sf_Chart_a;
} D_Work_Autopilot_T;

typedef struct {
  ap_input in;
} ExternalInputs_Autopilot_T;

typedef struct {
  ap_output out;
} ExternalOutputs_Autopilot_T;

struct Parameters_Autopilot_T_ {
  ap_output ap_output_MATLABStruct;
  real_T LagFilter_C1;
  real_T LagFilter_C1_m;
  real_T LagFilter1_C1;
  real_T LagFilter_C1_m0;
  real_T LagFilter_C1_f;
  real_T DiscreteDerivativeVariableTs_Gain;
  real_T DiscreteDerivativeVariableTs_Gain_e;
  real_T DiscreteDerivativeVariableTs_Gain_o;
  real_T DiscreteDerivativeVariableTs_InitialCondition;
  real_T RateLimiterVariableTs_InitialCondition;
  real_T DiscreteDerivativeVariableTs_InitialCondition_m;
  real_T DiscreteDerivativeVariableTs_InitialCondition_p;
  real_T RateLimiterVariableTs_InitialCondition_i;
  real_T RateLimiterVariableTs_lo;
  real_T RateLimiterVariableTs_lo_h;
  real_T RateLimiterVariableTs_up;
  real_T RateLimiterVariableTs_up_k;
  real_T Gain_Gain;
  real_T Gain_Gain_m;
  real_T Gain_Gain_l;
  real_T Gain_Gain_n;
  real_T Gain_Gain_e;
  real_T Gain1_Gain;
  real_T Gain4_Gain;
  real_T Gain1_Gain_j;
  real_T Gain2_Gain;
  real_T Gain1_Gain_k;
  real_T msftmin_Gain;
  real_T ftmintoms_Gain;
  real_T Gain_Gain_nj;
  real_T Gain1_Gain_m;
  real_T Gain2_Gain_k;
  real_T Gain1_Gain_kp;
  real_T msftmin_Gain_m;
  real_T ftmintoms_Gain_h;
  real_T Gain_Gain_k;
  real_T Saturation_UpperSat;
  real_T Saturation_LowerSat;
  real_T Gain1_Gain_g;
  real_T Switch_Threshold;
  real_T Gain1_Gain_e;
  real_T Gain2_Gain_k1;
  real_T Gain1_Gain_d;
  real_T msftmin_Gain_c;
  real_T Constant_Value;
  real_T Gain_Gain_mr;
  real_T ftmintoms_Gain_n;
  real_T Gain_Gain_a;
  real_T Gain1_Gain_n;
  real_T Gain2_Gain_kp;
  real_T Gain1_Gain_l;
  real_T msftmin_Gain_i;
  real_T Gain_Gain_ml;
  real_T Saturation_UpperSat_i;
  real_T Saturation_LowerSat_f;
  real_T ftmintoms_Gain_m;
  real_T Gain_Gain_i;
  real_T Gain1_Gain_go;
  real_T Gain_Gain_j;
  real_T Constant3_Value;
  real_T Gain_Gain_kt;
  real_T Constant_Value_e;
  real_T Constant3_Value_f;
  real_T Gain_Gain_g;
  real_T Constant_Value_k;
  real_T Constant3_Value_i;
  real_T Constant_Value_ex;
  real_T Gain_Gain_aa;
  real_T Saturation_UpperSat_k;
  real_T Saturation_LowerSat_g;
  real_T Gain1_Gain_p;
  real_T Gain_Gain_jr;
  real_T Constant_Value_g;
  real_T Constant3_Value_j;
  real_T Constant_Value_b;
  real_T Gain1_Gain_o;
  real_T Gain2_Gain_p;
  real_T Saturation1_UpperSat;
  real_T Saturation1_LowerSat;
  real_T Gain3_Gain;
  real_T Gain_Gain_p;
  real_T Constant_Value_b0;
  real_T Constant3_Value_g;
  real_T Constant_Value_kd;
  real_T Gain3_Gain_o;
  real_T Delay_InitialCondition;
  real_T Constant_Value_n;
  real_T Delay1_InitialCondition;
  real_T Gain4_Gain_f;
  real_T Gain_Gain_if;
  real_T Constant_Value_k5;
  real_T ROLLLIM1_tableData[5];
  real_T ROLLLIM1_bp01Data[5];
  real_T Gain_Gain_b;
  real_T Constant2_Value;
  real_T Gain1_Gain_a;
  real_T Delay_InitialCondition_g;
  real_T Constant_Value_n5;
  real_T Delay1_InitialCondition_i;
  real_T Saturation_UpperSat_j;
  real_T Saturation_LowerSat_fv;
  real_T Constant_Value_ga;
  real_T Constant1_Value;
  real_T kntoms_Gain;
  real_T IC_Value;
  real_T kntoms_Gain_e;
  real_T IC_Value_e;
  real_T Gain3_Gain_h;
  real_T Delay_InitialCondition_j;
  real_T Constant_Value_m;
  real_T Delay1_InitialCondition_p;
  real_T kntoms_Gain_a;
  real_T IC_Value_h;
  real_T kntoms_Gain_p;
  real_T IC_Value_k;
  real_T Gain1_Gain_kq;
  real_T Gain3_Gain_a;
  real_T Delay_InitialCondition_d;
  real_T Constant_Value_mm;
  real_T Delay1_InitialCondition_e;
  real_T Gain_Gain_nw;
  real_T Constant2_Value_e;
  real_T Gain1_Gain_i;
  real_T Delay_InitialCondition_a;
  real_T Constant_Value_p;
  real_T Delay1_InitialCondition_ig;
  real_T Saturation_UpperSat_h;
  real_T Saturation_LowerSat_c;
  real_T Constant_Value_f;
};

extern const ap_input Autopilot_rtZap_input;
extern const ap_output Autopilot_rtZap_output;
class AutopilotModelClass {
 public:
  ExternalInputs_Autopilot_T Autopilot_U;
  ExternalOutputs_Autopilot_T Autopilot_Y;
  void initialize();
  void step();
  void terminate();
  AutopilotModelClass();
  ~AutopilotModelClass();
 private:
  static Parameters_Autopilot_T Autopilot_P;
  BlockIO_Autopilot_T Autopilot_B;
  D_Work_Autopilot_T Autopilot_DWork;
  void Autopilot_Chart_Init(rtDW_Chart_Autopilot_T *localDW);
  void Autopilot_Chart(real_T rtu_right, real_T rtu_left, real_T rtu_use_short_path, real_T *rty_out,
                       rtDW_Chart_Autopilot_T *localDW);
};

#endif
