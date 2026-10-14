
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10024500(void)

{
  byte bVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  longlong lVar7;
  
  iVar4 = 0;
  do {
    (&DAT_100a99b4)[iVar4] = 0;
    (&DAT_100a999c)[iVar4] = 0;
    puVar2 = FUN_100244b0(iVar4);
    (&DAT_100a99cc)[iVar4] = puVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (*(float *)(DAT_100a9a50 + 0xc) == (float)_DAT_1005d2a8) {
    DAT_100a99b4 = 4;
    DAT_100a99b8 = 1;
  }
  else {
    pcVar5 = s_joystick_100793e0;
    pbVar3 = *(byte **)(DAT_100a99f8 + 4);
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_1002458d:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_10024592;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_1002458d;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10024592:
    if (iVar4 != 0) {
      (*DAT_100a5090)(s__s_configured_100793cc,*(byte **)(DAT_100a99f8 + 4));
    }
    lVar7 = __ftol();
    DAT_100a99b4 = (uint)lVar7 & 0xf;
    DAT_100a999c = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    DAT_100a99b8 = (uint)lVar7 & 0xf;
    DAT_100a99a0 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100a99bc = (uint)lVar7 & 0xf;
    _DAT_100a99a4 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100a99c0 = (uint)lVar7 & 0xf;
    _DAT_100a99a8 = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100a99c4 = (uint)lVar7 & 0xf;
    _DAT_100a99ac = (uint)lVar7 & 0x10;
    lVar7 = __ftol();
    _DAT_100a99c8 = (uint)lVar7 & 0xf;
    _DAT_100a99b0 = (uint)lVar7 & 0x10;
  }
  DAT_100a9ab8 = 0x4c0;
  iVar4 = 0;
  do {
    if (*(int *)((int)&DAT_100a99b4 + iVar4) != 0) {
      DAT_100a9ab8 = DAT_100a9ab8 | *(uint *)((int)&DAT_100792c4 + iVar4);
    }
    iVar4 = iVar4 + 4;
  } while (iVar4 < 0x18);
  return;
}

