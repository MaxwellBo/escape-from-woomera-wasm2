
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_1003df10(float *param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  iVar3 = (*DAT_10121e5c)();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x80;
  }
  iVar1 = *(int *)(iVar3 + 0x208);
  if ((iVar1 == 0) || (piVar4 = *(int **)(iVar1 + 0x7c), piVar4 == (int *)0x0)) {
    piVar4 = (int *)(*DAT_10121f04)(iVar1,0xb8);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = (int)&PTR_FUN_100e50f0;
    }
    piVar4[1] = iVar3;
  }
  iVar3 = piVar4[1];
  *(float *)(iVar3 + 8) = *param_1;
  *(float *)(iVar3 + 0xc) = param_1[1];
  *(float *)(iVar3 + 0x10) = param_1[2];
  fStack_18 = *param_2 - *param_1;
  fStack_14 = param_2[1] - param_1[1];
  fStack_10 = param_2[2] - param_1[2];
  *(float *)(piVar4[1] + 0x144) =
       SQRT(fStack_10 * fStack_10 + fStack_14 * fStack_14 + fStack_18 * fStack_18);
  fVar2 = SQRT(fStack_14 * fStack_14 + fStack_10 * fStack_10 + fStack_18 * fStack_18);
  if (fVar2 == _DAT_100dd5f8) {
    fStack_18 = 0.0;
    fStack_14 = 0.0;
    fStack_10 = 1.0;
  }
  else {
    fVar2 = _DAT_100dd618 / fVar2;
    fStack_18 = fStack_18 * fVar2;
    fStack_14 = fStack_14 * fVar2;
    fStack_10 = fStack_10 * fVar2;
  }
  iVar3 = piVar4[1];
  *(float *)(iVar3 + 0x44) = fStack_18;
  *(float *)(iVar3 + 0x48) = fStack_14;
  *(float *)(iVar3 + 0x4c) = fStack_10;
  *(undefined4 *)(piVar4[1] + 0x1f8) = param_3;
  (**(code **)(*piVar4 + 0x28))();
  return piVar4;
}

