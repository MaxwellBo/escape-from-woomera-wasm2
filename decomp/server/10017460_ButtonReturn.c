
/* public: void __thiscall CBaseButton::ButtonReturn(void) */

void __thiscall CBaseButton::ButtonReturn(CBaseButton *this)

{
  int iVar1;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int in_stack_fffffff4;
  
                    /* 0x17460  29  ?ButtonReturn@CBaseButton@@QAEXXZ */
  *(undefined4 *)(this + 0xdc) = 3;
  *(undefined4 *)(*(int *)(this + 4) + 0x130) = 0;
  iVar1 = *(int *)(this + 0x60);
  if (iVar1 < 0x20) {
    if (-0x20 < iVar1) goto LAB_1001749f;
    iVar1 = -iVar1;
  }
  in_stack_fffffff0 = 0x1001749c;
  (*DAT_10121eb4)();
  in_stack_fffffff4 = iVar1;
LAB_1001749f:
  iVar1 = *(int *)(this + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    ButtonBackHome(this);
    return;
  }
  *(code **)(this + 0x130) = ButtonBackHome;
  if (*(int *)(this + 0x160) != 0) {
    iVar1 = *(int *)(iVar1 + 0x1f8);
    FUN_10003850(&stack0xffffffec,(undefined4 *)(this + 0x110));
    FUN_10099620(this,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,iVar1);
    return;
  }
  iVar1 = *(int *)(iVar1 + 0x1f8);
  FUN_10003850(&stack0xffffffec,(undefined4 *)(this + 0xf8));
  FUN_10099340(this,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,iVar1);
  return;
}

