
void __cdecl FUN_100748e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *this;
  void *this_00;
  
  if (param_1 == 0) {
    iVar2 = (*DAT_10121e5c)();
    if (iVar2 != 0) {
      param_1 = iVar2 + 0x80;
    }
  }
  iVar2 = *(int *)(param_1 + 0x208);
  if ((iVar2 == 0) || (puVar3 = *(undefined4 **)(iVar2 + 0x7c), puVar3 == (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*DAT_10121f04)(iVar2,0x164);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      FUN_10002f30(puVar3);
      *puVar3 = &PTR_FUN_100edb84;
    }
    puVar3[1] = param_1;
  }
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (this_00 = *(void **)(iVar1 + 0x7c), this_00 == (void *)0x0)) {
    this = (undefined4 *)(*DAT_10121f04)(iVar1,0xbc);
    if (this != (undefined4 *)0x0) {
      *this = &PTR_FUN_100edcb4;
      this[1] = iVar2;
      FUN_100749c0(this,(int)puVar3);
      return;
    }
    this_00 = (void *)0x0;
    iRam00000004 = iVar2;
  }
  FUN_100749c0(this_00,(int)puVar3);
  return;
}

