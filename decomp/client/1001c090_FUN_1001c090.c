
int __thiscall FUN_1001c090(void *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    iVar3 = 0;
    do {
      iVar1 = _strncmp(param_1,(char *)(iVar3 + *(int *)((int)this + 0x78)),0x18);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  return -1;
}

