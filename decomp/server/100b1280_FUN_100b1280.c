
undefined4 __thiscall FUN_100b1280(void *this,int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  if (((iVar1 != 0) && (-1 < param_1)) && (param_1 <= *(int *)(iVar1 + 0x20))) {
    iVar2 = param_1 * 0x18;
    *(uint *)(*(int *)(iVar1 + 0x28) + 0x10 + iVar2) =
         *(uint *)(*(int *)(iVar1 + 0x28) + 0x10 + iVar2) | param_2;
    return *(undefined4 *)(*(int *)(*(int *)this + 0x28) + 0x10 + iVar2);
  }
  return 0;
}

