
uint __fastcall FUN_1003ca10(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0xaac) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x1003ca1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(param_1 + 0xaac) + 0x28))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

