
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CRoach::MonsterThink(void) */

void __thiscall CRoach::MonsterThink(CRoach *this)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  longlong lVar4;
  
                    /* 0x8a850  151  ?MonsterThink@CRoach@@UAEXXZ */
  iVar1 = (*DAT_10121e4c)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
  if ((iVar1 == 0) || (iVar1 = (*DAT_10121f20)(iVar1), iVar1 == 0)) {
    iVar1 = *(int *)this;
    fVar3 = (float10)(*DAT_10121f74)(0x3f800000,0x3fc00000);
    (**(code **)(iVar1 + 8))((float)fVar3);
  }
  else {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  fVar3 = FUN_10007fc0((int)this,0.0);
  if (*(int *)(this + 0x310) == 0) {
    (**(code **)(*(int *)this + 8))(0x3f800000);
    *(undefined4 *)(this + 0x310) = 1;
    return;
  }
  if (*(float *)(this + 0x308) < _DAT_100dd5f8) {
    iVar1 = (*DAT_10121e44)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
    *(float *)(this + 0x308) = (float)iVar1;
  }
  iVar1 = *(int *)(this + 0x314);
  if (iVar1 != 0) {
    if (iVar1 == 3) {
      iVar1 = (*DAT_10121e44)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
      if ((float)iVar1 <= *(float *)(this + 0x308)) {
        (**(code **)(*(int *)this + 0x1a8))(1);
        iVar1 = (*DAT_10121e44)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
        *(float *)(this + 0x308) = (float)iVar1;
      }
      goto LAB_1008aad7;
    }
    if (iVar1 != 5) goto LAB_1008aad7;
  }
  iVar1 = (*DAT_10121f70)(0,3);
  if (iVar1 == 1) {
    (**(code **)(*(int *)this + 0x11c))(0x96);
    if (((byte)this[0x15c] & 4) == 0) {
      iVar1 = (*DAT_10121f70)(0,0x95);
      if (iVar1 == 1) {
        FUN_1008ab00(this,1);
        (**(code **)(*(int *)this + 0x1a8))(3);
        if (*(int *)(this + 0x314) == 5) {
          iVar1 = (*DAT_10121f70)(0,0xe);
          FUN_1005cb50(this,(float)(iVar1 + 0x1e));
        }
      }
    }
    else {
      iVar1 = (*DAT_10121f70)(0,0xe);
      FUN_1005cb50(this,(float)(iVar1 + 0x1e));
      FUN_1008ab00(this,2);
      (**(code **)(*(int *)this + 0x1a8))(3);
    }
  }
  if (*(int *)(this + 0x314) == 0) {
    iVar1 = FUN_1005cb70((int)this);
    if (iVar1 != 0) {
      FUN_1005cbf0((int *)this);
    }
    iVar1 = (*DAT_10121e44)(*(undefined4 *)(*(int *)(this + 4) + 0x208));
    if ((float)iVar1 <= *(float *)(this + 0x308)) {
      if (((((byte)this[0x15c] & 0x40) == 0) ||
          (iVar1 = FUN_10095f40(*(int *)(this + 0x288)), iVar1 == 0)) ||
         (lVar4 = __ftol(), uVar2 = (int)(uint)lVar4 >> 0x1f,
         3 < (int)(((uint)lVar4 ^ uVar2) - uVar2))) goto LAB_1008aad7;
      iVar1 = 4;
    }
    else {
      iVar1 = 3;
    }
    FUN_1008ab00(this,iVar1);
    (**(code **)(*(int *)this + 0x1a8))(3);
  }
LAB_1008aad7:
  if (*(float *)(this + 0xcc) != _DAT_100dd5f8) {
    (**(code **)(*(int *)this + 0x154))((float)fVar3);
  }
  return;
}

