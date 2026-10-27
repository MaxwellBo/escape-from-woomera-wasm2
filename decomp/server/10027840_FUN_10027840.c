
undefined4 __fastcall FUN_10027840(CBaseDoor *param_1)

{
  CBaseDoor *pCVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar4;
  int iVar5;
  
  pCVar1 = param_1 + 0xc0;
  uVar3 = FUN_10019410((uint *)pCVar1);
  bVar2 = FUN_100b0030(*(int *)(param_1 + 0x158),uVar3);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 0x20) != 0) && (*(int *)(param_1 + 0xdc) == 0)) {
    CBaseDoor::DoorGoDown(param_1);
    return 1;
  }
  bVar2 = FUN_10019450((uint *)pCVar1);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    piVar4 = (int *)FUN_10019460((uint *)pCVar1);
    iVar5 = (**(code **)(*piVar4 + 0xcc))();
    if (iVar5 != 0) {
      piVar4 = (int *)FUN_10019460((uint *)pCVar1);
      (**(code **)(*piVar4 + 100))((float)(byte)param_1[0x15c],0);
    }
  }
  FUN_10026660(*(int *)(param_1 + 4),(int *)(param_1 + 0x160),0,0.0);
  CBaseDoor::DoorGoUp(param_1);
  return 1;
}

