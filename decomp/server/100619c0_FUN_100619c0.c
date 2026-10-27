
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100619c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [20];
  float local_24;
  float local_20;
  float local_1c;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar5 = *(float *)(iVar1 + 0xf4) * _DAT_100dd614;
  fVar6 = *(float *)(iVar1 + 0xf8) * _DAT_100dd614;
  local_5c = fVar5 + *(float *)(iVar1 + 8);
  local_58 = fVar6 + *(float *)(iVar1 + 0xc);
  local_54 = *(float *)(iVar1 + 0x10);
  local_3c = local_54 - _DAT_100dd61c;
  local_44 = local_5c;
  local_40 = local_58;
  FUN_100afc60(&local_5c,&local_44,1,*(undefined4 *)(iVar1 + 0x208),local_38);
  local_50 = local_5c - local_24;
  iVar1 = *(int *)(param_1 + 4);
  local_4c = local_58 - local_20;
  local_48 = local_54 - local_1c;
  local_5c = *(float *)(iVar1 + 8) - fVar5;
  local_58 = *(float *)(iVar1 + 0xc) - fVar6;
  uVar2 = *(undefined4 *)(iVar1 + 0x208);
  FUN_10001d60(&local_44,local_5c,local_58,local_54 - _DAT_100dd61c);
  FUN_100afc60(&local_5c,&local_44,1,uVar2,local_38);
  FUN_10001d60(&local_44,local_5c - local_24,local_58 - local_20,local_54 - local_1c);
  fVar3 = SQRT(local_44 * local_44 + local_40 * local_40 + local_3c * local_3c);
  if (SQRT(local_50 * local_50 + local_4c * local_4c + local_48 * local_48) < fVar3) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  local_5c = *(float *)(iVar1 + 8) - fVar5;
  local_58 = fVar6 + *(float *)(iVar1 + 0xc);
  uVar2 = *(undefined4 *)(iVar1 + 0x208);
  FUN_10001d60(&local_44,local_5c,local_58,local_54 - _DAT_100dd61c);
  FUN_100afc60(&local_5c,&local_44,1,uVar2,local_38);
  FUN_10001d60(&local_44,local_5c - local_24,local_58 - local_20,local_54 - local_1c);
  fVar4 = SQRT(local_44 * local_44 + local_40 * local_40 + local_3c * local_3c);
  if (fVar3 < fVar4) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4);
  local_5c = fVar5 + *(float *)(iVar1 + 8);
  local_58 = *(float *)(iVar1 + 0xc) - fVar6;
  uVar2 = *(undefined4 *)(iVar1 + 0x208);
  FUN_10001d60(&local_44,local_5c,local_58,local_54 - _DAT_100dd61c);
  FUN_100afc60(&local_5c,&local_44,1,uVar2,local_38);
  FUN_10001d60(&local_44,local_5c - local_24,local_58 - local_20,local_54 - local_1c);
  fVar7 = FUN_1000a9b0(&local_44);
  if ((float10)fVar4 < fVar7) {
    return 0;
  }
  return 1;
}

