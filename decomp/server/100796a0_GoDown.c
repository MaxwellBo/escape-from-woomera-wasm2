
/* public: virtual void __thiscall CFuncTrackChange::GoDown(void) */

void __thiscall CFuncTrackChange::GoDown(CFuncTrackChange *this)

{
  int in_stack_ffffffc8;
  int in_stack_ffffffcc;
  int in_stack_ffffffd0;
  int iVar1;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
                    /* 0x796a0  115  ?GoDown@CFuncTrackChange@@UAEXXZ */
  if (*(int *)(this + 0x194) != 1) {
    (**(code **)(*(int *)this + 0x130))();
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x10) == 0) {
      FUN_10074c20(this);
      *(code **)(this + 0x130) = CFuncPlat::CallHitBottom;
      if (*(int *)(this + 0x10) == 0) {
        fStack_1c = *(float *)(this + 0x134);
        fStack_18 = *(float *)(this + 0x138);
        fStack_14 = *(float *)(this + 0x13c);
      }
      else {
        iVar1 = *(int *)(*(int *)(this + 0x10) + 4);
        fStack_1c = *(float *)(iVar1 + 8) + *(float *)(this + 0x134);
        fStack_18 = *(float *)(iVar1 + 0xc) + *(float *)(this + 0x138);
        fStack_14 = *(float *)(iVar1 + 0x10) + *(float *)(this + 0x13c);
      }
      iVar1 = *(int *)(this + 4);
      fStack_1c = fStack_1c - *(float *)(iVar1 + 8);
      fStack_18 = fStack_18 - *(float *)(iVar1 + 0xc);
      fStack_14 = fStack_14 - *(float *)(iVar1 + 0x10);
      FUN_10075300(this,(float *)(this + 0x170),
                   SQRT(fStack_1c * fStack_1c + fStack_14 * fStack_14 + fStack_18 * fStack_18) /
                   *(float *)(this + 0x140));
    }
    else {
      *(code **)(this + 0x130) = CFuncPlat::CallHitBottom;
      *(undefined4 *)(this + 0xdc) = 3;
      iVar1 = *(int *)(*(int *)(this + 4) + 0x1f8);
      FUN_10003850(&stack0xffffffc8,(undefined4 *)(this + 0x170));
      FUN_10099620(this,in_stack_ffffffc8,in_stack_ffffffcc,in_stack_ffffffd0,iVar1);
    }
    if (*(int *)(this + 0x194) == 2) {
      FUN_100793a0(this,(float *)(this + 0x170));
      *(undefined4 *)(*(int *)(this + 0x184) + 0xbc) = 0;
    }
  }
  return;
}

