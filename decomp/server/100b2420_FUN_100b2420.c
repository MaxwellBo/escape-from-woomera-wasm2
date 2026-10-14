
void FUN_100b2420(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_10131bec;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

