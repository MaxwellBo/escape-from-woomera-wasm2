
void __fastcall FUN_10029440(void *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x198);
  if (iVar1 != 0) {
    uVar2 = (*DAT_10121f24)(iVar1);
    FUN_10029490(param_1,uVar2);
  }
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x194);
  if (iVar1 != 0) {
    uVar2 = (*DAT_10121f24)(iVar1);
    FUN_100294e0(param_1,uVar2);
  }
  return;
}

