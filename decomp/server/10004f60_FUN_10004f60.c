
void __fastcall FUN_10004f60(CBaseEntity *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if ((*(int *)(param_1 + 0x1e4) != 0) && (*(int *)(param_1 + 0x1e0) == 4)) {
      FUN_10004ee0((int)param_1);
    }
    bVar1 = FUN_10004f30((int)param_1);
    if ((CONCAT31(extraout_var,bVar1) == 0) ||
       (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x1dc))) {
      (**(code **)(*(int *)param_1 + 0x18c))();
      if (((*(int *)(param_1 + 0x1dc) != 8) &&
          ((*(int *)(param_1 + 0x1dc) != 6 || (*(int *)(param_1 + 0x1d8) == 6)))) &&
         (((*(uint *)(param_1 + 0x15c) != 0 && ((*(uint *)(param_1 + 0x15c) & 0x80000000) == 0)) ||
          (((*(int *)(param_1 + 0x1e4) != 0 &&
            ((*(uint *)(*(int *)(param_1 + 0x1e4) + 8) & 0x80000000) != 0)) ||
           ((*(int *)(param_1 + 0x1d8) == 2 &&
            (bVar1 = FUN_10019450((uint *)(param_1 + 0x160)), CONCAT31(extraout_var_00,bVar1) == 0))
           )))))) {
        (**(code **)(*(int *)param_1 + 0x1a4))();
      }
      if (((*(uint *)(param_1 + 0x15c) & 0x40000000) == 0) ||
         (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x1dc))) {
        FUN_10062000(param_1,*(int *)(param_1 + 0x1dc));
        if ((*(int *)(param_1 + 0x1d8) == 6) || (*(int *)(param_1 + 0x1d8) == 8)) {
          ppuVar2 = FUN_10006c50(param_1);
        }
        else {
          ppuVar2 = (undefined **)(**(code **)(*(int *)param_1 + 0x188))();
        }
      }
      else {
        if (*(int *)(param_1 + 0x2d4) == 0) {
          ppuVar2 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(0x29);
        }
        else {
          ppuVar2 = (undefined **)(**(code **)(*(int *)param_1 + 0x184))(*(int *)(param_1 + 0x2d4));
        }
        (*DAT_10121efc)(2,s_Schedule_Failed_at__d__10101b74,*(undefined4 *)(param_1 + 0x1e8));
      }
      FUN_10004e70(param_1,(int)ppuVar2);
    }
    if (*(int *)(param_1 + 0x1e0) == 0) {
      iVar3 = FUN_10006c30((int)param_1);
      *(undefined4 *)(param_1 + 0x1e0) = 1;
      (**(code **)(*(int *)param_1 + 0x17c))(iVar3);
    }
    if (*(int *)(param_1 + 0x1cc) != *(int *)(param_1 + 0x1d0)) {
      (**(code **)(*(int *)param_1 + 0x1a8))(*(int *)(param_1 + 0x1d0));
    }
  } while (((*(int *)(param_1 + 0x1e0) == 4) || (*(int *)(param_1 + 0x1e0) == 0)) &&
          (iVar4 = iVar4 + 1, iVar4 < 10));
  iVar4 = FUN_1005fb90((int)param_1);
  if (iVar4 != 0) {
    iVar4 = FUN_10006c30((int)param_1);
    (**(code **)(*(int *)param_1 + 0x180))(iVar4);
  }
  if (*(int *)(param_1 + 0x1cc) != *(int *)(param_1 + 0x1d0)) {
    (**(code **)(*(int *)param_1 + 0x1a8))(*(int *)(param_1 + 0x1d0));
  }
  return;
}

