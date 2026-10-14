
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEnvFog::FadeInDone(void) */

void __thiscall CEnvFog::FadeInDone(CEnvFog *this)

{
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
                    /* 0x33a70  94  ?FadeInDone@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0xffff7fff;
  fStack_c = *(float *)(this + 0xbc);
  uStack_10 = *(undefined4 *)(this + 0xb8);
  uStack_14 = 0;
  FUN_10003850(auStack_20,(undefined4 *)(*(int *)(this + 4) + 0x150));
  FUN_10033b60();
  fStack_c = *(float *)(this + 200);
  if (fStack_c != _DAT_100dd5f8) {
    uStack_10 = 0x10033ad4;
    (**(code **)(*(int *)this + 8))();
    *(code **)(this + 0x74) = TurnOff;
  }
  return;
}

