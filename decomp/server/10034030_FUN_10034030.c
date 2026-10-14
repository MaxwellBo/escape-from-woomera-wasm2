
void __thiscall FUN_10034030(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)((int)this + 0xdc) + 0x534 + *(int *)((int)this + 0x104) * 4);
  if (param_1 <= *piVar1) {
    *piVar1 = *piVar1 - param_1;
    return;
  }
  *piVar1 = 0;
  return;
}

