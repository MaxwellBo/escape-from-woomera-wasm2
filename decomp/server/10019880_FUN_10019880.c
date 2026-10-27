
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10019880(void *this,int param_1,int param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float afStack_c [3];
  
  iVar2 = *(int *)((int)this + 4);
  if (*(float *)(iVar2 + 0x16c) == _DAT_100dd5f8) {
    return 0;
  }
  if (param_2 == param_1) {
    pfVar1 = (float *)FUN_10010f30(&local_24,iVar2);
    local_18 = *(float *)(param_1 + 8) - *pfVar1;
    local_14 = *(float *)(param_1 + 0xc) - pfVar1[1];
    local_10 = *(float *)(param_1 + 0x10) - pfVar1[2];
  }
  else {
    pfVar1 = (float *)FUN_10010f30(&local_24,iVar2);
    local_18 = *(float *)(param_1 + 8) - *pfVar1;
    local_14 = *(float *)(param_1 + 0xc) - pfVar1[1];
    local_10 = *(float *)(param_1 + 0x10) - pfVar1[2];
  }
  fVar5 = SQRT(local_18 * local_18 + local_10 * local_10 + local_14 * local_14);
  if (fVar5 == _DAT_100dd5f8) {
    fVar7 = 1.0;
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar5 = _DAT_100dd618 / fVar5;
    fVar7 = local_10 * fVar5;
    fVar6 = local_14 * fVar5;
    fVar5 = local_18 * fVar5;
  }
  local_24 = local_18;
  local_20 = local_14;
  local_1c = local_10;
  FUN_10001d60(&local_18,fVar5,fVar6,fVar7);
  _DAT_10121df8 = local_18;
  _DAT_10121dfc = local_14;
  _DAT_10121e00 = local_10;
  if (param_1 != 0) {
    iVar2 = (*DAT_10121f20)(*(undefined4 *)(param_1 + 0x208));
    if (iVar2 != 0) {
      iVar2 = *(int *)((int)this + 4);
      if (((*(int *)(iVar2 + 0x108) == 3) || (*(int *)(iVar2 + 0x108) == 4)) &&
         (*(int *)(param_2 + 0x10c) != 1)) {
        local_14 = *(float *)(param_1 + 0xd4) + *(float *)(param_1 + 200);
        local_10 = *(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xcc);
        local_1c = *(float *)(iVar2 + 0x10) - local_10 * _DAT_100dd614;
        local_20 = *(float *)(iVar2 + 0xc) - local_14 * _DAT_100dd614;
        local_24 = *(float *)(iVar2 + 8) -
                   (*(float *)(param_1 + 0xc4) + *(float *)(param_1 + 0xd0)) * _DAT_100dd614;
        fVar4 = FUN_1000a9b0(&local_24);
        if (fVar4 == (float10)_DAT_100dd5f8) {
          local_18 = 0.0;
          local_14 = 0.0;
          local_10 = 1.0;
        }
        else {
          fVar4 = (float10)_DAT_100dd618 / fVar4;
          FUN_10001d60(&local_18,(float)((float10)local_24 * fVar4),
                       (float)((float10)local_20 * fVar4),(float)((float10)local_1c * fVar4));
        }
        local_20 = local_14;
        iVar2 = *(int *)((int)this + 4);
        local_24 = local_18;
        local_1c = local_10;
        fVar5 = ((float)_DAT_100e08f8 /
                (*(float *)(iVar2 + 0xfc) * *(float *)(iVar2 + 0xf8) * *(float *)(iVar2 + 0xf4))) *
                param_3 * (float)_DAT_100e08f0;
        if ((float)_DAT_100e08e8 < fVar5) {
          fVar5 = _DAT_100e08e0;
        }
        FUN_10001d60(&local_18,local_18 * fVar5,local_14 * fVar5,local_10 * fVar5);
        puVar3 = (undefined4 *)
                 FUN_1000b550((void *)(*(int *)((int)this + 4) + 0x20),afStack_c,&local_18);
        iVar2 = *(int *)((int)this + 4);
        *(undefined4 *)(iVar2 + 0x20) = *puVar3;
        *(undefined4 *)(iVar2 + 0x24) = puVar3[1];
        *(undefined4 *)(iVar2 + 0x28) = puVar3[2];
      }
    }
  }
  *(float *)(*(int *)((int)this + 4) + 0x160) =
       *(float *)(*(int *)((int)this + 4) + 0x160) - param_3;
  if (*(float *)(*(int *)((int)this + 4) + 0x160) <= _DAT_100dd5f8) {
    (**(code **)(*(int *)this + 0x68))(param_2,0);
    return 0;
  }
  return 1;
}

