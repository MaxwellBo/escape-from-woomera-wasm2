
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10059e30(void *this,float *param_1,int param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  undefined1 *puVar2;
  float10 fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 1) != 0) {
    local_10 = SQRT(param_3 * param_3 + param_4 * param_4 + param_5 * param_5);
    if (local_10 == _DAT_100dd5f8) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = 1.0;
    }
    else {
      local_10 = _DAT_100dd618 / local_10;
      local_18 = param_3 * local_10;
      local_14 = param_4 * local_10;
      local_10 = param_5 * local_10;
    }
    param_3 = local_18;
    param_4 = local_14;
    param_5 = local_10;
  }
  puVar2 = (undefined1 *)(*(int *)(*(int *)((int)this + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98))
  ;
  fVar3 = FUN_100588f0(puVar2,param_2,puVar2);
  fVar1 = (float)fVar3;
  FUN_10058820(&local_18,(int)this,param_2,
               (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)((int)this + 4) + 0x1d4)));
  local_10 = local_10 + param_5 * fVar1;
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) {
    local_10 = -local_10;
  }
  *param_1 = param_3 * fVar1 + local_18;
  param_1[1] = local_14 + param_4 * fVar1;
  param_1[2] = local_10;
  return;
}

