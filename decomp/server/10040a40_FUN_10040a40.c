
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl FUN_10040a40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_4 <= _DAT_100dd5f8) {
    return (int *)0x0;
  }
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (piVar3 = *(int **)(iVar1 + 0x7c), piVar3 == (int *)0x0)) {
    piVar3 = (int *)(*DAT_10121f04)(iVar1,0xb8);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = (int)&PTR_FUN_100e4fd8;
    }
    piVar3[1] = iVar2;
  }
  (**(code **)(*piVar3 + 0x28))();
  *(int *)(piVar3[1] + 0x1e4) = piVar3[0x15];
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 8) = *param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_1[1];
  *(undefined4 *)(iVar2 + 0x10) = param_1[2];
  *(undefined4 *)(piVar3[1] + 0x144) = param_3;
  *(undefined4 *)(piVar3[1] + 0x1e0) = param_2;
  *(float *)(piVar3[1] + 0x1f8) = param_4;
  *(undefined4 *)(piVar3[1] + 0x160) = 0;
  iVar2 = piVar3[1];
  *(undefined4 *)(iVar2 + 0x50) = DAT_10121dd8;
  *(undefined4 *)(iVar2 + 0x54) = DAT_10121ddc;
  *(undefined4 *)(iVar2 + 0x58) = DAT_10121de0;
  return piVar3;
}

