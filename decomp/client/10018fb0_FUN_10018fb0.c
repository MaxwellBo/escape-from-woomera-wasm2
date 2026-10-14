
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10018fb0(int param_1,float param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_10018f90(param_3 + (int)param_2 + param_1);
  FUN_10018f50();
  FUN_10018f50();
  lVar2 = __ftol();
  if ((int)lVar2 == 0) {
    return (float10)param_2;
  }
  uVar1 = FUN_10018f50();
  return (float10)(uVar1 & 0xffff) * (float10)_DAT_1005f9b8 * (float10)(int)lVar2 + (float10)param_2
  ;
}

