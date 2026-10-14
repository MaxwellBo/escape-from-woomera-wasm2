
uint __thiscall FUN_100b2aa0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1 - (int)this;
  do {
    if (*(int *)this != *(int *)(iVar1 + (int)this)) {
      return (uint)this & 0xffffff00;
    }
    iVar2 = iVar2 + 1;
    this = (void *)((int)this + 4);
  } while (iVar2 < 1);
  return CONCAT31((int3)((uint)this >> 8),1);
}

