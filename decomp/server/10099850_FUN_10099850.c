
float10 FUN_10099850(byte param_1,float *param_2)

{
  if ((param_1 & 0x40) != 0) {
    return (float10)param_2[2];
  }
  if ((param_1 & 0x80) != 0) {
    return (float10)*param_2;
  }
  return (float10)param_2[1];
}

