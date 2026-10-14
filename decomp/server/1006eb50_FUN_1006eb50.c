
int __thiscall FUN_1006eb50(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  *param_1 = *(int *)((int)this + 8);
  iVar2 = *(int *)this + -1;
  *(int *)this = iVar2;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + iVar2 * 8 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + iVar2 * 8 + 8);
  FUN_1006eb80(this,0);
  return iVar1;
}

