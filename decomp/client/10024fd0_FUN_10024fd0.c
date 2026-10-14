
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10024fd0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if ((_DAT_10059a18 < *(float *)(param_1 + 0x1c)) && (*(float *)(param_1 + 0x1c) <= DAT_100a3a64))
  {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    return 1;
  }
  if ((DAT_100a5178 != 0) && (uVar1 = FUN_1003ca10(DAT_100a5178), (char)uVar1 != '\0')) {
    return 1;
  }
  iVar2 = 0;
  iVar3 = 0;
  do {
    if ((&DAT_100a9cd4)[iVar3] == '\0') break;
    if ((&DAT_100a9cd4)[iVar3] == '\n') {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x200);
  iVar3 = DAT_100a4dd0 / 2 + (iVar2 / 2) * -0xc + -0x28;
  iVar2 = 0;
  do {
    if ((&DAT_100a9cd4)[iVar2] == '\0') {
      return 1;
    }
    FUN_1001e7d0(0x14,iVar3,0x140,&DAT_100a9cd4 + iVar2,0xff,0xff,0xff);
    iVar3 = iVar3 + 0xc;
    for (; ((iVar2 < 0x200 && ((&DAT_100a9cd4)[iVar2] != '\0')) && ((&DAT_100a9cd4)[iVar2] != '\n'))
        ; iVar2 = iVar2 + 1) {
    }
    if ((&DAT_100a9cd4)[iVar2] == '\n') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar2 < 0x200);
  return 1;
}

