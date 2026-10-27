
void __fastcall FUN_10062050(CBaseEntity *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined4 uVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x1d8) == 1) || (*(int *)(param_1 + 0x1d8) == 3)) {
    iVar2 = (*DAT_10121f70)(0,99);
    if ((iVar2 == 0) && ((*(byte *)(*(int *)(param_1 + 4) + 0x1a4) & 2) == 0)) {
      (**(code **)(*(int *)param_1 + 0x220))();
    }
  }
  iVar2 = *(int *)(param_1 + 0x1d8);
  if (((iVar2 == 0) || (iVar2 == 5)) || (iVar2 == 8)) goto LAB_10062149;
  iVar2 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  if (iVar2 == 0) {
LAB_100620d5:
    if (*(int *)(param_1 + 0x1d8) == 2) goto LAB_100620dd;
  }
  else {
    iVar2 = (*DAT_10121f20)(iVar2);
    if (iVar2 == 0) goto LAB_100620d5;
LAB_100620dd:
    iVar2 = *(int *)param_1;
    lVar5 = __ftol();
    (**(code **)(iVar2 + 0x11c))((int)lVar5);
    FUN_1005cbf0((int *)param_1);
    uVar3 = (**(code **)(*(int *)param_1 + 0x1d4))();
    *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & ~uVar3;
    FUN_10061cb0((int *)param_1);
  }
  bVar1 = FUN_10019450((uint *)(param_1 + 0x160));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    iVar2 = *(int *)param_1;
    uVar4 = FUN_10019410((uint *)(param_1 + 0x160));
    (**(code **)(iVar2 + 0x1b0))(uVar4);
  }
  (**(code **)(*(int *)param_1 + 0x1d0))();
LAB_10062149:
  FUN_10061070((int *)param_1);
  (**(code **)(*(int *)param_1 + 0x1f8))();
  FUN_10004f60(param_1);
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) & 0xfffffcff;
  return;
}

