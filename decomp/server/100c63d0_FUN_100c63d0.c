
void FUN_100c63d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = 0xffffffff;
  param_1[0x11] = 0;
  param_1[1] = param_2;
  iVar3 = param_1[0x11] + 1;
  param_1[0x11] = iVar3;
  if (iVar3 < 0x10) {
    puVar2 = &param_2;
    do {
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
      param_1[iVar3 + 1] = *puVar1;
      iVar3 = param_1[0x11] + 1;
      if (param_1[iVar3] == 0) {
        return;
      }
      param_1[0x11] = iVar3;
    } while (iVar3 < 0x10);
  }
  return;
}

