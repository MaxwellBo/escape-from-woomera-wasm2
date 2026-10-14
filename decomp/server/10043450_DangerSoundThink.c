
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CGrenade::DangerSoundThink(void) */

void __thiscall CGrenade::DangerSoundThink(CGrenade *this)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
                    /* 0x43450  57  ?DangerSoundThink@CGrenade@@QAEXXZ */
  iVar2 = (**(code **)(*(int *)this + 200))();
  if (iVar2 == 0) {
    FUN_100b0ef0((int)this);
    return;
  }
  iVar2 = *(int *)(this + 4);
  fVar4 = 0.2;
  fStack_4 = *(float *)(iVar2 + 0x28) * _DAT_100dd614 + *(float *)(iVar2 + 0x10);
  fStack_8 = *(float *)(iVar2 + 0x24) * _DAT_100dd614 + *(float *)(iVar2 + 0xc);
  fStack_c = *(float *)(iVar2 + 0x20) * _DAT_100dd614 + *(float *)(iVar2 + 8);
  lVar3 = __ftol();
  FUN_10095d30(0x20,&fStack_c,(int)lVar3,fVar4);
  (**(code **)(*(int *)this + 8))(0x3e4ccccd);
  iVar2 = *(int *)(this + 4);
  if ((*(int *)(iVar2 + 0x1c0) != 0) && (-0x11 < *(int *)(iVar2 + 0x1c4))) {
    fVar4 = *(float *)(iVar2 + 0x24) * _DAT_100dd614;
    fVar1 = *(float *)(iVar2 + 0x28) * _DAT_100dd614;
    *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) * _DAT_100dd614;
    *(float *)(iVar2 + 0x24) = fVar4;
    *(float *)(iVar2 + 0x28) = fVar1;
  }
  return;
}

