
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1005c6e0(CMonsterMaker *param_1)

{
  int iVar1;
  int local_64 [2];
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [28];
  undefined4 local_1c;
  
  if ((*(int *)(param_1 + 0x314) < 1) || (*(int *)(param_1 + 0x310) < *(int *)(param_1 + 0x314))) {
    if (*(float *)(param_1 + 0x318) == _DAT_100dd5f8) {
      iVar1 = *(int *)(param_1 + 4);
      local_3c = *(float *)(iVar1 + 0x10) - _DAT_100de9b8;
      local_40 = *(undefined4 *)(iVar1 + 0xc);
      local_44 = *(undefined4 *)(iVar1 + 8);
      FUN_100afc60((undefined4 *)(iVar1 + 8),&local_44,1,*(undefined4 *)(iVar1 + 0x208),local_38);
      *(undefined4 *)(param_1 + 0x318) = local_1c;
    }
    iVar1 = *(int *)(param_1 + 4);
    local_48 = *(undefined4 *)(param_1 + 0x318);
    local_4c = *(float *)(iVar1 + 0xc) - _DAT_100e81ec;
    local_50 = *(float *)(iVar1 + 8) - _DAT_100e81ec;
    local_58 = *(float *)(iVar1 + 0xc) + _DAT_100e81ec;
    local_5c = *(float *)(iVar1 + 8) + _DAT_100e81ec;
    local_54 = *(undefined4 *)(iVar1 + 0x10);
    iVar1 = FUN_100ae980(local_64,2,&local_50,&local_5c,0x28);
    if (iVar1 == 0) {
      if (*(int *)(*(int *)(param_1 + 4) + 0x1c8) != 0) {
        FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) +
                             *(int *)(*(int *)(param_1 + 4) + 0x1c8)),(int *)param_1,param_1,3,0);
      }
      if (*(float *)(param_1 + 0x324) != _DAT_100dd5f8) {
        *(code **)(param_1 + 0x74) = CMonsterMaker::MakeMonster;
        (**(code **)(*(int *)param_1 + 8))(*(float *)(param_1 + 0x324));
        return;
      }
      CMonsterMaker::MakeMonster(param_1);
    }
  }
  return;
}

