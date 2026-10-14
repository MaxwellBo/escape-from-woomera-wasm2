
void FUN_1001a9b0(void)

{
  int iVar1;
  
  iVar1 = FUN_1001a730();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x2ec) = *(uint *)(iVar1 + 0x2ec) | 2;
  }
  return;
}

