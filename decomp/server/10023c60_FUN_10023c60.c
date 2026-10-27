
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10023c60(void *this,float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)((int)this + 0x310);
  fVar3 = SQRT(*(float *)((int)this + 0x318) * *(float *)((int)this + 0x318) +
               *(float *)((int)this + 0x314) * *(float *)((int)this + 0x314) +
               *(float *)((int)this + 0x310) * *(float *)((int)this + 0x310));
  if (fVar3 == _DAT_100dd5f8) {
    iVar2 = *(int *)((int)this + 4);
    *pfVar1 = *(float *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x314) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)((int)this + 0x318) = *(undefined4 *)(iVar2 + 0x28);
    fVar3 = SQRT(*(float *)((int)this + 0x318) * *(float *)((int)this + 0x318) +
                 *(float *)((int)this + 0x314) * *(float *)((int)this + 0x314) + *pfVar1 * *pfVar1);
  }
  if (_DAT_100de4a8 < fVar3) {
    fVar3 = SQRT(*(float *)((int)this + 0x318) * *(float *)((int)this + 0x318) +
                 *(float *)((int)this + 0x314) * *(float *)((int)this + 0x314) + *pfVar1 * *pfVar1);
    if (fVar3 == _DAT_100dd5f8) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = _DAT_100dd618;
    }
    else {
      fVar3 = _DAT_100dd618 / fVar3;
      FUN_10001d60(&local_18,fVar3 * *pfVar1,fVar3 * *(float *)((int)this + 0x314),
                   fVar3 * *(float *)((int)this + 0x318));
    }
    local_c = local_18 * _DAT_100de4a8;
    local_8 = local_14 * _DAT_100de4a8;
    *pfVar1 = local_c;
    local_4 = local_10 * _DAT_100de4a8;
    *(float *)((int)this + 0x314) = local_8;
    *(float *)((int)this + 0x318) = local_4;
  }
  iVar2 = *(int *)((int)this + 4);
  fVar3 = param_1 - *(float *)(iVar2 + 8);
  local_14 = param_2 - *(float *)(iVar2 + 0xc);
  local_10 = param_3 - *(float *)(iVar2 + 0x10);
  fVar4 = SQRT(fVar3 * fVar3 + local_14 * local_14 + local_10 * local_10);
  if (fVar4 == _DAT_100dd5f8) {
    param_1 = 0.0;
    param_2 = 0.0;
    param_3 = _DAT_100dd618;
  }
  else {
    fVar4 = _DAT_100dd618 / fVar4;
    FUN_10001d60(&param_1,fVar3 * fVar4,local_14 * fVar4,local_10 * fVar4);
  }
  fVar5 = param_1 * _DAT_100dd61c + *pfVar1;
  fVar3 = param_2 * _DAT_100dd61c + *(float *)((int)this + 0x314);
  fVar4 = param_3 * _DAT_100dd61c + *(float *)((int)this + 0x318);
  *pfVar1 = fVar5;
  *(float *)((int)this + 0x314) = fVar3;
  *(float *)((int)this + 0x318) = fVar4;
  iVar2 = *(int *)((int)this + 4);
  *(float *)(iVar2 + 0x20) = fVar5;
  *(float *)(iVar2 + 0x24) = fVar3;
  *(float *)(iVar2 + 0x28) = fVar4;
  return;
}

