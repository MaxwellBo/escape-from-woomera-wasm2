
undefined4 __thiscall FUN_100b5af0(void *this,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_68 [64];
  undefined1 auStack_28 [32];
  int local_8;
  
  FUN_100b5be0(this);
  iVar1 = FUN_100b20a0(param_1,(byte *)s_GLOBAL_1011bf3c,(int)this,&DAT_1011bcd8,1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 4);
  iVar3 = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_100b20a0(param_1,&DAT_1011bf2c,(int)local_68,&DAT_1011bce8,3);
      if (iVar2 == 0) {
        return 0;
      }
      FUN_100b5980(this,(int)(local_68 + -*(int *)(DAT_10122044 + 0x98)),
                   (int)(auStack_28 + -*(int *)(DAT_10122044 + 0x98)),local_8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 1;
}

