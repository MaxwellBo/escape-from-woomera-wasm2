
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEnvFog::TurnOff(void) */

void __thiscall CEnvFog::TurnOff(CEnvFog *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
                    /* 0x339a0  266  ?TurnOff@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0xfffffffe;
  iVar1 = *(int *)(this + 4);
  if (*(float *)(this + 0xc4) != _DAT_100dd5f8) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
    uStack_8 = *(undefined4 *)(this + 0xbc);
    uStack_c = *(undefined4 *)(this + 0xb8);
    uStack_10 = 0x100339ed;
    lVar2 = __ftol();
    uStack_10 = (undefined4)lVar2;
    FUN_10003850(auStack_1c,(undefined4 *)(*(int *)(this + 4) + 0x150));
    FUN_10033b60();
    uStack_8 = *(undefined4 *)(this + 0xc4);
    uStack_c = 0x10033a17;
    (**(code **)(*(int *)this + 8))();
    *(code **)(this + 0x74) = FadeOutDone;
    return;
  }
  uStack_8 = 0;
  uStack_c = 0;
  uStack_10 = 0;
  *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) & 0xffff7fff;
  FUN_10003850(auStack_1c,&DAT_10121dd8);
  FUN_10033b60();
  uStack_8 = 0x10033a4c;
  FUN_10019680((int)this);
  return;
}

