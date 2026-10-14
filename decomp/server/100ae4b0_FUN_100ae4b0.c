
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100ae4b0(int param_1,float param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_100ae450(param_3 + (int)param_2 + param_1);
  FUN_100ae410();
  FUN_100ae410();
  lVar2 = __ftol();
  if ((int)lVar2 == 0) {
    return (float10)param_2;
  }
  uVar1 = FUN_100ae410();
  return (float10)(uVar1 & 0xffff) * (float10)_DAT_100f60c8 * (float10)(int)lVar2 + (float10)param_2
  ;
}

