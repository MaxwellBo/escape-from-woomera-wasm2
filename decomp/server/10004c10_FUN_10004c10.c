
void __fastcall FUN_10004c10(CBaseEntity *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0xc) & 0x20) != 0)) {
      (**(code **)(*(int *)param_1 + 0x184))(0x13);
      return;
    }
  }
  if (*(int *)(param_1 + 0x1d8) != 2) {
    FUN_10006c50(param_1);
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x15c);
  if ((uVar1 & 0x100000) != 0) {
    FUN_10006c50(param_1);
    return;
  }
  if ((uVar1 & 0x10000) != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(3);
    return;
  }
  if ((uVar1 & 0x800) != 0) {
    FUN_10003a30((int)param_1);
    (**(code **)(*(int *)param_1 + 0x184))(0x16);
    return;
  }
  if ((uVar1 & 0x200) != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0x11);
    return;
  }
  if ((uVar1 & 0x400) != 0) {
    iVar2 = FUN_100961f0(param_1,0x30);
    if (iVar2 != 0) {
      (**(code **)(*(int *)param_1 + 0x184))(0x18);
      return;
    }
  }
  iVar2 = FUN_100961f0(param_1,0x40);
  if (iVar2 != 0) {
    (**(code **)(*(int *)param_1 + 0x184))(0xc);
    return;
  }
  (**(code **)(*(int *)param_1 + 0x184))(0x1c);
  return;
}

