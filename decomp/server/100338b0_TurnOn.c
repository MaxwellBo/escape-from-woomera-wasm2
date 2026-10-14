
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEnvFog::TurnOn(void) */

void __thiscall CEnvFog::TurnOn(CEnvFog *this)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fStack_c;
  
                    /* 0x338b0  267  ?TurnOn@CEnvFog@@QAEXXZ */
  *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) | 1;
  iVar1 = *(int *)(this + 4);
  if (*(float *)(this + 0xc0) != _DAT_100dd5f8) {
    *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) | 0x8000;
    fStack_c = *(float *)(this + 0xbc);
    uStack_10 = *(undefined4 *)(this + 0xb8);
    uStack_14 = 0x100338fc;
    lVar2 = __ftol();
    uStack_14 = (undefined4)lVar2;
    FUN_10003850(auStack_20,(undefined4 *)(*(int *)(this + 4) + 0x150));
    FUN_10033b60();
    fStack_c = *(float *)(this + 0xc0);
    uStack_10 = 0x10033926;
    (**(code **)(*(int *)this + 8))();
    *(code **)(this + 0x74) = FadeInDone;
    return;
  }
  *(uint *)(iVar1 + 0x1a0) = *(uint *)(iVar1 + 0x1a0) & 0xffff7fff;
  fStack_c = *(float *)(this + 0xbc);
  uStack_10 = *(undefined4 *)(this + 0xb8);
  uStack_14 = 0;
  FUN_10003850(auStack_20,(undefined4 *)(*(int *)(this + 4) + 0x150));
  FUN_10033b60();
  fStack_c = *(float *)(this + 200);
  if (fStack_c != _DAT_100dd5f8) {
    uStack_10 = 0x1003398d;
    (**(code **)(*(int *)this + 8))();
    *(code **)(this + 0x74) = TurnOff;
  }
  return;
}

