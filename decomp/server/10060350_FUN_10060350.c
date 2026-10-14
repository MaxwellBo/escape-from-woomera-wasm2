
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_10060350(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  fVar2 = FUN_100ae770(*(float *)(*(int *)(param_1 + 4) + 0x54));
  fVar1 = *(float *)(*(int *)(param_1 + 4) + 0xac);
  if (fVar2 == (float10)fVar1) {
    return (float10)_DAT_100dd5f8;
  }
  fVar2 = FUN_100ae7f0(fVar1,(float)fVar2);
  return fVar2;
}

