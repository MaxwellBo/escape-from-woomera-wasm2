
void __thiscall FUN_1002ca40(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;
  
  *(int *)(*(int *)((int)this + 4) + 0xb8) = param_1 - *(int *)(DAT_10122044 + 0x98);
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_2[1];
  *(undefined4 *)(iVar1 + 0x10) = param_2[2];
  (**(code **)(*(int *)this + 0x28))();
  return;
}

