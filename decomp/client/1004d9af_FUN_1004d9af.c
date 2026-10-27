
void FUN_1004d9af(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_100be180 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_100be180) goto LAB_1004d9ce;
  DAT_100be180 = iVar1;
LAB_1004d9ce:
  DAT_100bd164 = FUN_10053a99(DAT_100be180,4);
  if (DAT_100bd164 == (int *)0x0) {
    DAT_100be180 = 0x14;
    DAT_100bd164 = FUN_10053a99(0x14,4);
    if (DAT_100bd164 == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_1007be18;
  do {
    *(undefined ***)(iVar1 + (int)DAT_100bd164) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x1007c098);
  uVar3 = 0;
  puVar4 = &DAT_1007be28;
  do {
    iVar1 = *(int *)((&DAT_100bd060)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x1007be88);
  return;
}

