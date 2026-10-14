
void __fastcall FUN_1005c600(int *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  param_1[0xc4] = 0;
  (**(code **)(*param_1 + 0x2c))();
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0x1cc) == 0) {
    (**(code **)(*param_1 + 8))(param_1[0x2e]);
  }
  else {
    if ((*(byte *)(iVar1 + 0x1a0) & 4) != 0) {
      param_1[0x1f] = (int)CMonsterMaker::CyclicUse;
      param_1[199] = 0;
      goto LAB_1005c67e;
    }
    param_1[0x1f] = (int)CMonsterMaker::ToggleUse;
    if ((*(byte *)(iVar1 + 0x1a0) & 1) == 0) {
      param_1[199] = 0;
      param_1[0x1d] = (int)CBaseEntity::SUB_DoNothing;
      goto LAB_1005c67e;
    }
  }
  param_1[199] = 1;
  param_1[0x1d] = (int)CMonsterMaker::MakerThink;
LAB_1005c67e:
  if ((param_1[0xc3] != 1) &&
     ((param_1[0xc3] == -1 || ((*(byte *)(param_1[1] + 0x1a0) & 0x10) == 0)))) {
    param_1[0xc6] = 0;
    param_1[200] = 1;
    return;
  }
  param_1[200] = 0;
  param_1[0xc6] = 0;
  return;
}

