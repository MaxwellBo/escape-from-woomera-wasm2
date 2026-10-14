
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10008e10(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    return (float10)param_4;
  }
  iVar2 = *(int *)(param_2 + 0x128) * 0xb0 + *(int *)(param_1 + 0xa8) + param_1;
  if (*(int *)(iVar2 + 0x80 + param_3 * 4) == 0) {
    return (float10)param_4;
  }
  lVar3 = __ftol();
  iVar1 = (int)lVar3;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (0xff < iVar1) {
    iVar1 = 0xff;
  }
  *(char *)(param_2 + 0x140 + param_3) = (char)iVar1;
  return ((float10)*(float *)(iVar2 + 0x90 + param_3 * 4) -
         (float10)*(float *)(iVar2 + 0x88 + param_3 * 4)) * (float10)iVar1 * (float10)_DAT_100de200
         + (float10)*(float *)(iVar2 + 0x88 + param_3 * 4);
}

