
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1006ba70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x108) == 5) {
    return 3;
  }
  if (((*(int *)(iVar1 + 0xdc) == -0x3ec00000) && (*(int *)(iVar1 + 0xe0) == -0x3ec00000)) &&
     (*(float *)(iVar1 + 0xe4) == _DAT_100dd5f8)) {
    return 0;
  }
  if (((((*(int *)(iVar1 + 0xdc) == -0x3e800000) && (*(int *)(iVar1 + 0xe0) == -0x3e800000)) &&
       (*(float *)(iVar1 + 0xe4) == _DAT_100dd5f8)) ||
      ((*(int *)(iVar1 + 0xdc) != -0x3e000000 || (*(int *)(iVar1 + 0xe0) != -0x3e000000)))) ||
     (uVar2 = 2, *(float *)(iVar1 + 0xe4) != _DAT_100dd5f8)) {
    uVar2 = 1;
  }
  return uVar2;
}

