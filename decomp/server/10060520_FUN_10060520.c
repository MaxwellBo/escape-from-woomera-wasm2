
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_10060520(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  
  if (((param_2 == _DAT_100dd5f8) && (param_3 == _DAT_100dd5f8)) && (param_4 == _DAT_100dd5f8)) {
    return (float10)*(float *)(*(int *)(param_1 + 4) + 0x54);
  }
  fVar1 = (float10)FUN_100afde0(&param_2);
  return fVar1;
}

