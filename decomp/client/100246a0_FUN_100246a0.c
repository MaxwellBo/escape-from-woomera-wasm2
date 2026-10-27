
void FUN_100246a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = DAT_100a9a90;
  uVar1 = DAT_100a99fc;
  if (DAT_100a99f0 != 0) {
    iVar2 = 0;
    if (0 < DAT_100a99e4) {
      do {
        uVar4 = 1 << ((byte)iVar2 & 0x1f);
        uVar1 = uVar4 & uVar3;
        if ((uVar1 != 0) && ((DAT_100a9a40 & uVar4) == 0)) {
          (*DAT_100a50b0)(((3 < iVar2) - 1 & 0xfffffffc) + 0xcf + iVar2,1);
        }
        if ((uVar1 == 0) && ((DAT_100a9a40 & uVar4) != 0)) {
          (*DAT_100a50b0)(((3 < iVar2) - 1 & 0xfffffffc) + 0xcf + iVar2,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_100a99e4);
    }
    DAT_100a9a40 = uVar3;
    uVar1 = DAT_100a99fc;
    if (DAT_100a9acc != 0) {
      uVar1 = 0;
      if (DAT_100a9a98 != 0xffff) {
        if (DAT_100a9a98 == 0) {
          uVar1 = 1;
        }
        else if (DAT_100a9a98 == 9000) {
          uVar1 = 2;
        }
        else if (DAT_100a9a98 == 18000) {
          uVar1 = 4;
        }
        else if (DAT_100a9a98 == 27000) {
          uVar1 = 8;
        }
      }
      iVar2 = 0;
      do {
        uVar3 = 1 << ((byte)iVar2 & 0x1f);
        if (((uVar3 & uVar1) != 0) && ((DAT_100a99fc & uVar3) == 0)) {
          (*DAT_100a50b0)(iVar2 + 0xeb,1);
        }
        if (((uVar3 & uVar1) == 0) && ((DAT_100a99fc & uVar3) != 0)) {
          (*DAT_100a50b0)(iVar2 + 0xeb,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
  }
  DAT_100a99fc = uVar1;
  return;
}

