
undefined4 __thiscall FUN_100b5a70(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_100b18e0(param_1,s_cGLOBAL_1011bf34,(byte *)s_GLOBAL_1011bf3c,(int)this,0x1011bcd8,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)this;
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      if (iVar1 == 0) {
        return 1;
      }
      iVar2 = FUN_100b18e0(param_1,s_cGENT_1011bf24,&DAT_1011bf2c,iVar1,0x1011bce8,3);
      if (iVar2 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 100);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return 1;
}

