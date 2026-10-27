
void FUN_100cf8b8(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_101361e0 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_101361e0) goto LAB_100cf8d7;
  DAT_101361e0 = iVar1;
LAB_100cf8d7:
  DAT_101351cc = FUN_100c8dda(DAT_101361e0,4);
  if (DAT_101351cc == (int *)0x0) {
    DAT_101361e0 = 0x14;
    DAT_101351cc = FUN_100c8dda(0x14,4);
    if (DAT_101351cc == (int *)0x0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_10120590;
  do {
    *(undefined ***)(iVar1 + (int)DAT_101351cc) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x10120810);
  uVar3 = 0;
  puVar4 = &DAT_101205a0;
  do {
    iVar1 = *(int *)((&DAT_101350c0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x10120600);
  return;
}

