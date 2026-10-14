
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_100841e0(float *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_100dd5f8;
  iVar2 = 3;
  do {
    fVar1 = *param_1;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
    fVar3 = (float10)fVar1 * (float10)fVar1 + fVar3;
  } while (iVar2 != 0);
  return SQRT(fVar3);
}

