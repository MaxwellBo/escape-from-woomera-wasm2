
void __fastcall FUN_10074c20(void *param_1)

{
  void *this;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  int in_stack_fffffff4;
  int iVar1;
  
  this = *(void **)(*(int *)((int)param_1 + 4) + 0x1e8);
  if (this != (void *)0x0) {
    in_stack_ffffffec = *(int *)((int)param_1 + 0x160);
    in_stack_fffffff4 = 0;
    in_stack_fffffff0 = 0x3f4ccccd;
    FUN_10094b20(this,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),6,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)this),in_stack_ffffffec,0x3f4ccccd,0,
                 100);
  }
  *(undefined4 *)((int)param_1 + 0xdc) = 3;
  *(code **)((int)param_1 + 0x130) = CFuncPlat::CallHitBottom;
  iVar1 = *(int *)(*(int *)((int)param_1 + 4) + 0x1f8);
  FUN_10003850(&stack0xffffffec,(undefined4 *)((int)param_1 + 0x104));
  FUN_10099340(param_1,in_stack_ffffffec,in_stack_fffffff0,in_stack_fffffff4,iVar1);
  return;
}

