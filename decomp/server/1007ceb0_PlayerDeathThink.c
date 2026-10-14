
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CBasePlayer::PlayerDeathThink(void) */

void __thiscall CBasePlayer::PlayerDeathThink(CBasePlayer *this)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float local_14;
  float local_10;
  
                    /* 0x7ceb0  167  ?PlayerDeathThink@CBasePlayer@@QAEXXZ */
  iVar4 = *(int *)(this + 4);
  if ((*(uint *)(iVar4 + 0x1a4) & 0x200) != 0) {
    pfVar1 = (float *)(iVar4 + 0x20);
    fVar2 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                 *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                 *(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20)) - _DAT_100ddacc;
    if (_DAT_100dd5f8 < fVar2) {
      local_10 = SQRT(*(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28) +
                      *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) + *pfVar1 * *pfVar1);
      if (local_10 == _DAT_100dd5f8) {
        local_14 = 0.0;
        local_10 = 1.0;
        fVar3 = _DAT_100dd5f8;
      }
      else {
        local_10 = _DAT_100dd618 / local_10;
        fVar3 = local_10 * *pfVar1;
        local_14 = local_10 * *(float *)(iVar4 + 0x24);
        local_10 = local_10 * *(float *)(iVar4 + 0x28);
      }
      *pfVar1 = fVar3 * fVar2;
      *(float *)(iVar4 + 0x24) = local_14 * fVar2;
      *(float *)(iVar4 + 0x28) = local_10 * fVar2;
    }
    else {
      *pfVar1 = DAT_10121dd8;
      *(undefined4 *)(iVar4 + 0x24) = DAT_10121ddc;
      *(undefined4 *)(iVar4 + 0x28) = DAT_10121de0;
    }
  }
  iVar4 = FUN_1007f480((int)this);
  if (iVar4 != 0) {
    FUN_1007bc10(this);
  }
  if (((*(int *)(*(int *)(this + 4) + 0xb4) != 0) && (*(int *)(this + 0xd4) == 0)) &&
     (*(int *)(*(int *)(this + 4) + 0x170) == 1)) {
    FUN_10007fc0((int)this,0.0);
    fVar2 = *(float *)(this + 0x648) + _DAT_100dd618;
    *(float *)(this + 0x648) = fVar2;
    if (fVar2 < _DAT_100e4124) {
      return;
    }
  }
  iVar4 = *(int *)(this + 4);
  if ((*(int *)(iVar4 + 0x108) != 0) && ((*(uint *)(iVar4 + 0x1a4) & 0x200) != 0)) {
    *(undefined4 *)(iVar4 + 0x108) = 0;
  }
  if (*(int *)(*(int *)(this + 4) + 0x170) == 1) {
    *(undefined4 *)(*(int *)(this + 4) + 0x170) = 2;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x20;
  *(undefined4 *)(*(int *)(this + 4) + 0x138) = 0;
  uVar5 = *(uint *)(*(int *)(this + 4) + 0x180) & 0xffff7fff;
  if (*(int *)(*(int *)(this + 4) + 0x170) == 2) {
    if ((uVar5 == 0) && (iVar4 = (**(code **)(*DAT_10121db8 + 0x50))(this), iVar4 != 0)) {
      *(float *)(this + 0x4e4) = *DAT_10122044;
      *(undefined4 *)(*(int *)(this + 4) + 0x170) = 3;
      return;
    }
  }
  else {
    iVar4 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (((iVar4 != 0) && (*(float *)(this + 0x4e4) + _DAT_100dd620 < *DAT_10122044)) &&
       (((byte)this[0x364] & 0x20) == 0)) {
      FUN_1007d180(this);
    }
    if (uVar5 == 0) {
      iVar4 = (**(code **)(*DAT_10121db8 + 0x18))();
      if (iVar4 == 0) {
        return;
      }
      if (_DAT_101096bc <= _DAT_100dd5f8) {
        return;
      }
      if (*DAT_10122044 <= *(float *)(this + 0x4e4) + _DAT_100dd5d8) {
        return;
      }
    }
    *(undefined4 *)(*(int *)(this + 4) + 0x180) = 0;
    *(undefined4 *)(this + 0x648) = 0;
    FUN_1001a390(*(int *)(this + 4),~*(uint *)(this + 0x364) >> 5 & 1);
    FUN_10019680((int)this);
  }
  return;
}

