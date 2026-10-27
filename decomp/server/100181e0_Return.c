
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMomentaryRotButton::Return(void) */

void __thiscall CMomentaryRotButton::Return(CMomentaryRotButton *this)

{
  float fVar1;
  float10 fVar2;
  
                    /* 0x181e0  183  ?Return@CMomentaryRotButton@@QAEXXZ */
  fVar2 = FUN_10099970((byte)*(undefined4 *)(*(int *)(this + 4) + 0x1a0),
                       (float *)(*(int *)(this + 4) + 0x50),(float *)(this + 0x168));
  fVar1 = (float)(fVar2 / (float10)*(float *)(this + 0xe4));
  FUN_10017eb0(this,fVar1,0);
  if (_DAT_100dd5f8 < fVar1) {
    FUN_100180f0(this,fVar1);
  }
  return;
}

