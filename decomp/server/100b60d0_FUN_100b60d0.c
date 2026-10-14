
void FUN_100b60d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)s_bodyque_1011c038 - *(int *)(DAT_10122044 + 0x98);
  DAT_101323a0 = (*DAT_10121e64)(iVar4);
  if (DAT_101323a0 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = DAT_101323a0 + 0x80;
  }
  iVar2 = 3;
  do {
    iVar1 = (*DAT_10121e64)(iVar4);
    *(int *)(iVar3 + 0x198) = iVar1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar1 + 0x80;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(int *)(iVar3 + 0x198) = DAT_101323a0;
  return;
}

