
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10037540(void *this,int param_1,int param_2,float param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)((int)this + 4);
  fVar2 = *(float *)(iVar1 + 0xf4) * _DAT_100dd614;
  fVar3 = *(float *)(iVar1 + 0xf8) * _DAT_100dd614;
  if (param_2 == param_1) {
    local_18 = *(float *)(param_1 + 8) - (fVar2 + *(float *)(iVar1 + 0xc4));
    local_14 = *(float *)(param_1 + 0xc) - (fVar3 + *(float *)(iVar1 + 200));
    local_10 = *(float *)(param_1 + 0x10) -
               (*(float *)(iVar1 + 0xfc) * _DAT_100dd614 + *(float *)(iVar1 + 0xcc));
    if ((((*(byte *)(param_2 + 0x1a4) & 8) != 0) && ((*(uint *)(iVar1 + 0x1a0) & 0x100) != 0)) &&
       ((param_4 & 0x80) != 0)) {
      param_3 = *(float *)(iVar1 + 0x160);
    }
  }
  else {
    local_18 = *(float *)(param_1 + 8) - (fVar2 + *(float *)(iVar1 + 0xc4));
    local_14 = *(float *)(param_1 + 0xc) - (fVar3 + *(float *)(iVar1 + 200));
    local_10 = *(float *)(param_1 + 0x10) -
               (*(float *)(iVar1 + 0xfc) * _DAT_100dd614 + *(float *)(iVar1 + 0xcc));
  }
  bVar4 = FUN_10037dd0((int)this);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    return 0;
  }
  if ((param_4 & 0x80) != 0) {
    param_3 = param_3 + param_3;
  }
  if ((param_4 & 0x20000) != 0) {
    param_3 = param_3 * (float)_DAT_100dfb80;
  }
  local_4 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  if (local_4 == _DAT_100dd5f8) {
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 1.0;
  }
  else {
    local_4 = _DAT_100dd618 / local_4;
    local_c = local_18 * local_4;
    local_8 = local_14 * local_4;
    local_4 = local_10 * local_4;
  }
  _DAT_10121df8 = local_c;
  _DAT_10121dfc = local_8;
  _DAT_10121e00 = local_4;
  *(float *)(*(int *)((int)this + 4) + 0x160) =
       *(float *)(*(int *)((int)this + 4) + 0x160) - param_3;
  if (*(float *)(*(int *)((int)this + 4) + 0x160) <= _DAT_100dd5f8) {
    CBreakable::Die(this);
    return 0;
  }
  FUN_10036ee0((int)this);
  return 1;
}

