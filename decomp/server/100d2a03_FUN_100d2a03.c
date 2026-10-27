
void FUN_100d2a03(void)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  void *extraout_ECX;
  
  piVar3 = (int *)FUN_100d69d2();
  iVar1 = *piVar3;
  FUN_100ca804(extraout_ECX);
  if ((iVar1 != 0) && (puVar2 = *(uint **)(iVar1 + 4), (*puVar2 & 0x10008) != 0)) {
    puVar2[8] = 0;
    puVar2[9] = 0xffff;
  }
  return;
}

