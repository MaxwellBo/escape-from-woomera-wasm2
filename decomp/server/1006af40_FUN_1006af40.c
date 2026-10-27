
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1006af40(void *this,float param_1,float param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)((int)this + 0x30c);
  if (((*(float *)((int)this + 0x30c) == _DAT_100dd5f8) &&
      (*(float *)((int)this + 0x310) == _DAT_100dd5f8)) &&
     (*(float *)((int)this + 0x314) == _DAT_100dd5f8)) {
    iVar2 = *(int *)((int)this + 4);
    *pfVar1 = *(float *)(iVar2 + 0x20);
    *(undefined4 *)((int)this + 0x310) = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)((int)this + 0x314) = *(undefined4 *)(iVar2 + 0x28);
  }
  if (_DAT_100ddae4 <
      SQRT(*(float *)((int)this + 0x314) * *(float *)((int)this + 0x314) +
           *(float *)((int)this + 0x310) * *(float *)((int)this + 0x310) + *pfVar1 * *pfVar1)) {
    fVar4 = SQRT(*(float *)((int)this + 0x314) * *(float *)((int)this + 0x314) +
                 *(float *)((int)this + 0x310) * *(float *)((int)this + 0x310) + *pfVar1 * *pfVar1);
    if (fVar4 == _DAT_100dd5f8) {
      local_18 = 0.0;
      local_14 = 0.0;
      local_10 = _DAT_100dd618;
    }
    else {
      fVar4 = _DAT_100dd618 / fVar4;
      FUN_10001d60(&local_18,fVar4 * *pfVar1,fVar4 * *(float *)((int)this + 0x310),
                   fVar4 * *(float *)((int)this + 0x314));
    }
    local_c = local_18 * _DAT_100ddae4;
    local_8 = local_14 * _DAT_100ddae4;
    *pfVar1 = local_c;
    local_4 = local_10 * _DAT_100ddae4;
    *(float *)((int)this + 0x310) = local_8;
    *(float *)((int)this + 0x314) = local_4;
  }
  iVar2 = *(int *)((int)this + 4);
  fVar4 = param_1 - *(float *)(iVar2 + 8);
  local_14 = param_2 - *(float *)(iVar2 + 0xc);
  local_10 = param_3 - *(float *)(iVar2 + 0x10);
  fVar3 = SQRT(fVar4 * fVar4 + local_14 * local_14 + local_10 * local_10);
  if (fVar3 == _DAT_100dd5f8) {
    fVar6 = 1.0;
    fVar5 = 0.0;
    fVar4 = 0.0;
  }
  else {
    fVar3 = _DAT_100dd618 / fVar3;
    fVar6 = local_10 * fVar3;
    fVar5 = local_14 * fVar3;
    fVar4 = fVar4 * fVar3;
  }
  FUN_10001d60(&param_1,fVar4,fVar5,fVar6);
  fVar6 = param_1 * _DAT_100ddae4 + *pfVar1;
  fVar4 = param_2 * _DAT_100ddae4 + *(float *)((int)this + 0x310);
  fVar3 = param_3 * _DAT_100ddae4 + *(float *)((int)this + 0x314);
  *pfVar1 = fVar6;
  *(float *)((int)this + 0x310) = fVar4;
  *(float *)((int)this + 0x314) = fVar3;
  iVar2 = *(int *)((int)this + 4);
  *(float *)(iVar2 + 0x20) = fVar6;
  *(float *)(iVar2 + 0x24) = fVar4;
  *(float *)(iVar2 + 0x28) = fVar3;
  return;
}

