
/* public: void __thiscall CEnvFog::FadeOutDone(void) */

void __thiscall CEnvFog::FadeOutDone(CEnvFog *this)

{
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
                    /* 0x33ae0  95  ?FadeOutDone@CEnvFog@@QAEXXZ */
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0xffff7fff;
  FUN_10003850(auStack_1c,&DAT_10121dd8);
  FUN_10033b60();
  return;
}

