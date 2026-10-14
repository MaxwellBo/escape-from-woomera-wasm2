
float10 __cdecl FUN_10099970(byte param_1,float *param_2,float *param_3)

{
  if ((param_1 & 0x40) != 0) {
    return (float10)param_2[2] - (float10)param_3[2];
  }
  if ((param_1 & 0x80) != 0) {
    return (float10)*param_2 - (float10)*param_3;
  }
  return (float10)param_2[1] - (float10)param_3[1];
}

