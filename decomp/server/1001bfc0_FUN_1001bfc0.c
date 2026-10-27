
void FUN_1001bfc0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(DAT_10122044 + 0x9c);
  if (iVar1 != 0) {
    uVar2 = FUN_100a5860();
    *(undefined4 *)(iVar1 + 0x24) = uVar2;
  }
  return;
}

