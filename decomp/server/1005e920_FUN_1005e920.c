
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_1005e920(void *this,float *param_1,float *param_2,float param_3,undefined4 param_4,
            float *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  float local_4;
  
  local_b0 = *(float *)(*(int *)((int)this + 4) + 0xf4);
  if ((float)_DAT_100ec3a0 <= local_b0) {
    if ((float)_DAT_100ec398 < local_b0) {
      local_b0 = 48.0;
    }
  }
  else {
    local_b0 = 24.0;
  }
  fVar2 = *(float *)(*(int *)((int)this + 4) + 0xfc);
  fVar7 = *param_2 - *param_1;
  local_80 = param_2[1] - param_1[1];
  local_7c = param_2[2] - param_1[2];
  fVar3 = SQRT(fVar7 * fVar7 + local_80 * local_80 + local_7c * local_7c);
  if (fVar3 == _DAT_100dd5f8) {
    fVar9 = 1.0;
    fVar8 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar3 = _DAT_100dd618 / fVar3;
    fVar9 = local_7c * fVar3;
    fVar8 = local_80 * fVar3;
    fVar7 = fVar7 * fVar3;
  }
  FUN_10001d60(&local_54,fVar7,fVar8,fVar9);
  local_a8 = local_50 - _DAT_100dd5f8;
  local_a0 = 0.0;
  local_78 = 0.0;
  local_74 = 0.0;
  local_70 = 1.0;
  local_a4 = _DAT_100dd5f8 - local_54;
  local_7c = 0.0;
  fVar7 = local_b0 * _DAT_100ddad4;
  iVar6 = *(int *)((int)this + 4);
  local_90 = local_a8 * fVar7;
  local_8c = local_a4 * fVar7;
  local_24 = local_b0 + param_3;
  local_6c = local_54 * local_24 + *(float *)(iVar6 + 8);
  local_68 = local_50 * local_24 + *(float *)(iVar6 + 0xc);
  local_9c = local_6c - local_90;
  local_98 = local_68 - local_8c;
  local_94 = (local_24 * local_4c + *(float *)(iVar6 + 0x10)) - fVar7 * 0.0;
  local_84 = local_a8;
  local_80 = local_a4;
  local_20 = local_9c;
  local_1c = local_98;
  local_18 = local_94;
  FUN_10001d60(&local_6c,fVar7 * local_a8,local_a4 * fVar7,fVar7 * 0.0);
  FUN_10001d60(&local_90,local_54 * local_24,local_50 * local_24,local_4c * local_24);
  iVar6 = *(int *)((int)this + 4);
  FUN_10001d60(&local_9c,local_90 + *(float *)(iVar6 + 8),local_8c + *(float *)(iVar6 + 0xc),
               local_88 + *(float *)(iVar6 + 0x10));
  FUN_10001d60(&local_a8,local_6c + local_9c,local_68 + local_98,local_64 + local_94);
  local_48 = local_a8;
  local_44 = local_a4;
  local_40 = local_a0;
  if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
    FUN_10001d60(&local_90,local_78 * fVar2,local_74 * fVar2,local_70 * fVar2);
    FUN_10001d60(&local_9c,local_90 * _DAT_100ddad4,local_8c * _DAT_100ddad4,
                 local_88 * _DAT_100ddad4);
    fVar7 = local_4c * param_3;
    fVar3 = local_50 * param_3;
    fVar9 = local_54 * param_3;
    local_24 = fVar7;
    local_8 = fVar9;
    local_4 = fVar3;
    FUN_10001d60(&local_6c,fVar9,fVar3,fVar7);
    iVar6 = *(int *)((int)this + 4);
    FUN_10001d60(&local_a8,local_6c + *(float *)(iVar6 + 8),local_68 + *(float *)(iVar6 + 0xc),
                 local_64 + *(float *)(iVar6 + 0x10));
    FUN_10001d60(&local_60,local_9c + local_a8,local_98 + local_a4,local_94 + local_a0);
    local_30 = local_60;
    local_2c = local_5c;
    local_28 = local_58;
    FUN_10001d60(&local_60,local_78 * fVar2,local_74 * fVar2,local_70 * fVar2);
    FUN_10001d60(&local_9c,local_60 * _DAT_100ddad4,local_5c * _DAT_100ddad4,
                 local_58 * _DAT_100ddad4);
    FUN_10001d60(&local_90,fVar9,fVar3,fVar7);
    iVar6 = *(int *)((int)this + 4);
    FUN_10001d60(&local_6c,local_90 + *(float *)(iVar6 + 8),local_8c + *(float *)(iVar6 + 0xc),
                 local_88 + *(float *)(iVar6 + 0x10));
    FUN_10001d60(&local_a8,local_6c - local_9c,local_68 - local_98,local_64 - local_94);
    local_3c = local_a8;
    local_38 = local_a4;
    local_34 = local_a0;
  }
  puVar1 = (undefined4 *)(*(int *)((int)this + 0x270) * 0x10 + 0x1ec + (int)this);
  local_14 = *puVar1;
  local_10 = puVar1[1];
  local_c = puVar1[2];
  FUN_10001d60(&local_60,local_84 * local_b0,local_80 * local_b0,local_7c * local_b0);
  FUN_10001d60(&local_90,local_60 + local_60,local_5c + local_5c,local_58 + local_58);
  local_84 = local_90;
  local_80 = local_8c;
  local_7c = local_88;
  if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
    FUN_10001d60(&local_60,local_78 * fVar2,local_74 * fVar2,local_70 * fVar2);
    pfVar4 = (float *)FUN_10002280(&local_60,&local_90,2.0);
    local_78 = *pfVar4;
    local_74 = pfVar4[1];
    local_70 = pfVar4[2];
  }
  iVar6 = 0;
  do {
    iVar5 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,&local_48,param_4,0);
    if (iVar5 == 2) {
      iVar5 = (**(code **)(*(int *)this + 0x150))(&local_58,&local_24,param_4,0);
      if (iVar5 == 2) {
        if (param_1 != (float *)0x0) {
          *param_1 = local_58;
          param_1[1] = local_54;
          param_1[2] = local_50;
        }
        return 1;
      }
    }
    iVar5 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,&local_30,param_4,0);
    if (iVar5 == 2) {
      iVar5 = (**(code **)(*(int *)this + 0x150))(&local_20,&local_14,param_4,0);
      if (iVar5 == 2) {
        if (param_5 != (float *)0x0) {
          *param_5 = local_20;
          param_5[1] = local_1c;
          param_5[2] = local_18;
        }
        return 1;
      }
    }
    if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
      iVar5 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,&local_30,param_4,0);
      if (iVar5 == 2) {
        iVar5 = (**(code **)(*(int *)this + 0x150))(&local_40,&local_24,param_4,0);
        if (iVar5 == 2) {
          if (param_1 != (float *)0x0) {
            *param_1 = local_40;
            param_1[1] = local_3c;
            param_1[2] = local_38;
          }
          return 1;
        }
      }
      iVar5 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,&local_4c,param_4,0);
      if (iVar5 == 2) {
        iVar5 = (**(code **)(*(int *)this + 0x150))(&local_3c,&local_14,param_4,0);
        if (iVar5 == 2) {
          if (param_5 != (float *)0x0) {
            *param_5 = local_3c;
            param_5[1] = local_38;
            param_5[2] = local_34;
          }
          return 1;
        }
      }
    }
    pfVar4 = (float *)FUN_1000b550(&local_48,&local_60,&local_84);
    local_48 = *pfVar4;
    local_44 = pfVar4[1];
    local_40 = pfVar4[2];
    pfVar4 = (float *)FUN_10002250(&local_20,&local_90,&local_84);
    local_20 = *pfVar4;
    local_1c = pfVar4[1];
    local_18 = pfVar4[2];
    if (*(int *)(*(int *)((int)this + 4) + 0x108) == 5) {
      pfVar4 = (float *)FUN_1000b550(&local_30,&local_6c,&local_78);
      local_30 = *pfVar4;
      local_2c = pfVar4[1];
      local_28 = pfVar4[2];
      pfVar4 = (float *)FUN_10002250(&local_3c,&local_9c,&local_78);
      local_3c = *pfVar4;
      local_38 = pfVar4[1];
      local_34 = pfVar4[2];
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  return 0;
}

