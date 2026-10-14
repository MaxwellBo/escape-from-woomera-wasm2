
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_100c5c50(int param_1,int param_2)

{
  float10 fVar1;
  float fVar2;
  undefined2 extraout_var;
  undefined4 uVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined1 local_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  
  FUN_100c5c30(&local_74,param_1);
  FUN_100c5c30(&local_68,param_2);
  fVar5 = local_68 - local_74;
  local_58 = local_64 - local_70;
  local_54 = local_60 - local_6c;
  fVar2 = SQRT(fVar5 * fVar5 + local_58 * local_58 + local_54 * local_54);
  if (fVar2 == _DAT_100dd5f8) {
    fVar7 = 1.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar2 = _DAT_100dd618 / fVar2;
    fVar7 = local_54 * fVar2;
    fVar6 = local_58 * fVar2;
    fVar5 = fVar5 * fVar2;
  }
  FUN_10001d60(local_50,fVar5,fVar6,fVar7);
  fVar5 = SQRT((local_74 - local_68) * (local_74 - local_68) +
               (local_70 - local_64) * (local_70 - local_64) +
               (local_6c - local_60) * (local_6c - local_60));
  uVar3 = CONCAT22(extraout_var,
                   (ushort)(fVar5 < _DAT_100de47c) << 8 |
                   (ushort)(NAN(fVar5) || NAN(_DAT_100de47c)) << 10 |
                   (ushort)(fVar5 == _DAT_100de47c) << 0xe);
  if (fVar5 < _DAT_100de47c || (fVar5 == _DAT_100de47c) != 0) {
    FUN_100af200(*(int *)(param_1 + 4) + 0x50);
    fVar4 = (float10)FUN_100c9190();
    fVar1 = (float10)_DAT_100f93a0;
    uVar3 = CONCAT22(extraout_var_00,
                     (ushort)(fVar4 < fVar1) << 8 | (ushort)(NAN(fVar4) || NAN(fVar1)) << 10 |
                     (ushort)(fVar4 == fVar1) << 0xe);
    if (fVar4 < fVar1) {
      FUN_100afc60(&local_74,&local_68,1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),local_38);
      uVar3 = CONCAT22(extraout_var_01,
                       (ushort)(local_28 < _DAT_100dd618) << 8 |
                       (ushort)(NAN(local_28) || NAN(_DAT_100dd618)) << 10 |
                       (ushort)(local_28 == _DAT_100dd618) << 0xe);
      if (local_28 < _DAT_100dd618 != 0) {
        local_3c = local_6c + _DAT_100e113c;
        local_44 = local_74;
        local_5c = local_68;
        local_54 = local_60 + _DAT_100e113c;
        local_40 = local_70;
        local_58 = local_64;
        FUN_100afc60(&local_44,&local_5c,1,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),local_38);
        uVar3 = CONCAT22(extraout_var_02,
                         (ushort)(local_28 < _DAT_100dd618) << 8 |
                         (ushort)(NAN(local_28) || NAN(_DAT_100dd618)) << 10 |
                         (ushort)(local_28 == _DAT_100dd618) << 0xe);
        if (local_28 < _DAT_100dd618) {
          return uVar3;
        }
      }
      return CONCAT31((int3)((uint)uVar3 >> 8),1);
    }
  }
  return uVar3;
}

