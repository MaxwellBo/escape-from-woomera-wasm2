
/* public: virtual void __thiscall CFuncTrackChange::GoUp(void) */

void __thiscall CFuncTrackChange::GoUp(CFuncTrackChange *this)

{
  int in_stack_ffffffe4;
  int in_stack_ffffffe8;
  int in_stack_ffffffec;
  int iVar1;
  
                    /* 0x79800  116  ?GoUp@CFuncTrackChange@@UAEXXZ */
  if (*(int *)(this + 0x194) != 1) {
    (**(code **)(*(int *)this + 0x130))();
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x10) == 0) {
      FUN_10074d30(this);
      *(code **)(this + 0x130) = CFuncPlat::CallHitTop;
      FUN_10075300(this,(float *)(this + 0x164),
                   *(float *)(*(int *)(this + 4) + 0x104) - *(float *)(*(int *)(this + 4) + 0x100));
    }
    else {
      *(undefined4 *)(this + 0xdc) = 2;
      *(code **)(this + 0x130) = CFuncPlat::CallHitTop;
      iVar1 = *(int *)(*(int *)(this + 4) + 0x1f8);
      FUN_10003850(&stack0xffffffe4,(undefined4 *)(this + 0x164));
      FUN_10099620(this,in_stack_ffffffe4,in_stack_ffffffe8,in_stack_ffffffec,iVar1);
    }
    if (*(int *)(this + 0x194) == 2) {
      FUN_100793a0(this,(float *)(this + 0x164));
      *(undefined4 *)(*(int *)(this + 0x184) + 0xbc) = 0;
    }
  }
  return;
}

