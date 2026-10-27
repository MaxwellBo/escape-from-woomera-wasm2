
void __thiscall FUN_1005b560(int *param_1,int *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = FUN_1005ae40(param_1,(int)param_2);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
      if (param_2 != (int *)0x0) {
        iVar2 = (**(code **)(*param_2 + 0xd0))();
        if (iVar2 != 0) {
          FUN_100af6e0(param_2,param_1 + 0x2f,
                       (char *)(*(int *)(param_1[1] + 0x1d4) + *(int *)(DAT_10122044 + 0x98)));
        }
      }
    }
    else {
      FUN_100af8f0(param_1 + 0x2f,
                   (char *)(*(int *)(param_1[1] + 0x1d4) + *(int *)(DAT_10122044 + 0x98)));
    }
    if (*(int *)(param_1[1] + 0x1c8) != 0) {
      param_1[0x39] = (int)param_2;
      param_1[0x1d] = (int)CGameText::TriggerThink;
      (**(code **)(*param_1 + 8))
                ((float)param_1[0x36] + (float)param_1[0x35] + (float)param_1[0x34]);
      return;
    }
    if ((*(byte *)(param_1[1] + 0x1a0) & 2) != 0) {
      param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
      (**(code **)(*param_1 + 8))(0x3dcccccd);
    }
  }
  return;
}

