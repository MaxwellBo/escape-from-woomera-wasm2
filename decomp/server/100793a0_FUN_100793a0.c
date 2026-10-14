
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100793a0(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  iVar1 = *(int *)((int)this + 4);
  local_30 = *(float *)(iVar1 + 0x20);
  local_2c = *(float *)(iVar1 + 0x24);
  local_28 = *(float *)(iVar1 + 0x28);
  if (*(code **)((int)this + 0x74) == CBaseToggle::LinearMoveNow) {
    if (*(int *)((int)this + 0x10) == 0) {
      local_3c = *(float *)((int)this + 0x134);
      local_38 = *(float *)((int)this + 0x138);
      local_34 = *(float *)((int)this + 0x13c);
    }
    else {
      iVar2 = *(int *)(*(int *)((int)this + 0x10) + 4);
      local_3c = *(float *)(iVar2 + 8) + *(float *)((int)this + 0x134);
      local_38 = *(float *)(iVar2 + 0xc) + *(float *)((int)this + 0x138);
      local_34 = *(float *)(iVar2 + 0x10) + *(float *)((int)this + 0x13c);
    }
    local_3c = local_3c - *(float *)(iVar1 + 8);
    local_14 = local_38 - *(float *)(iVar1 + 0xc);
    local_10 = local_34 - *(float *)(iVar1 + 0x10);
    local_40 = SQRT(local_3c * local_3c + local_10 * local_10 + local_14 * local_14) /
               *(float *)((int)this + 0x140);
    local_30 = local_3c / local_40;
    local_2c = local_14 / local_40;
    local_28 = local_10 / local_40;
    local_24 = local_30;
    local_20 = local_2c;
    local_1c = local_28;
  }
  else {
    local_40 = *(float *)(iVar1 + 0x104) - *(float *)(iVar1 + 0x100);
  }
  iVar1 = *(int *)(*(int *)((int)this + 0x184) + 4);
  *(float *)(iVar1 + 0x20) = local_30;
  *(float *)(iVar1 + 0x24) = local_2c;
  *(float *)(iVar1 + 0x28) = local_28;
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(*(int *)((int)this + 0x184) + 4);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
  *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar1 + 100);
  FUN_10077160(*(void **)((int)this + 0x184),
               local_40 + *(float *)(*(int *)((int)*(void **)((int)this + 0x184) + 4) + 0x100),0);
  if (_DAT_100dd5f8 < local_40) {
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)(*(int *)((int)this + 0x184) + 4);
    fVar3 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
    fVar4 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
    fVar5 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
    FUN_10001d60(local_c,*param_1 - *(float *)(iVar1 + 0x50),param_1[1] - *(float *)(iVar1 + 0x54),
                 param_1[2] - *(float *)(iVar1 + 0x58));
    FUN_100af240(local_c,DAT_10122044);
    FUN_10001d60(&local_18,
                 (fVar3 * *(float *)(DAT_10122044 + 0x28) +
                 fVar4 * *(float *)(DAT_10122044 + 0x2c) + fVar5 * *(float *)(DAT_10122044 + 0x30))
                 - fVar3,(fVar3 * *(float *)(DAT_10122044 + 0x40) +
                         fVar4 * *(float *)(DAT_10122044 + 0x44) +
                         fVar5 * *(float *)(DAT_10122044 + 0x48)) - fVar4,
                 (fVar3 * *(float *)(DAT_10122044 + 0x34) +
                 fVar4 * *(float *)(DAT_10122044 + 0x38) + fVar5 * *(float *)(DAT_10122044 + 0x3c))
                 - fVar5);
    local_40 = (float)_DAT_100dd628 / local_40;
    FUN_10001d60(&local_18,local_18 * local_40,local_14 * local_40,local_10 * local_40);
    FUN_10001d60(&local_24,local_18 + local_30,local_2c + local_14,local_28 + local_10);
    iVar1 = *(int *)(*(int *)((int)this + 0x184) + 4);
    *(float *)(iVar1 + 0x20) = local_24;
    *(float *)(iVar1 + 0x24) = local_20;
    *(float *)(iVar1 + 0x28) = local_1c;
  }
  return;
}

