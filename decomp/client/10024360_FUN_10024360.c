
void FUN_10024360(void)

{
  int iVar1;
  UINT UVar2;
  UINT UVar3;
  MMRESULT MVar4;
  undefined4 *puVar5;
  tagJOYCAPSA *ptVar6;
  tagJOYCAPSA tStack_194;
  
  DAT_100a99f0 = 0;
  iVar1 = (*DAT_100a50ac)(s__nojoy_100793c4,0);
  if (iVar1 == 0) {
    UVar2 = joyGetNumDevs();
    if (UVar2 == 0) {
      (*DAT_100a5094)(s_joystick_not_found____driver_not_10079398);
      return;
    }
    DAT_100a9aa8 = 0;
    UVar3 = UVar2;
    if (0 < (int)UVar2) {
      do {
        UVar3 = DAT_100a9aa8;
        puVar5 = &DAT_100a9a70;
        for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        DAT_100a9a70 = 0x34;
        DAT_100a9a74 = 0x400;
        UVar3 = joyGetPosEx(UVar3,(LPJOYINFOEX)&DAT_100a9a70);
        if (UVar3 == 0) goto LAB_10024426;
        DAT_100a9aa8 = DAT_100a9aa8 + 1;
      } while ((int)DAT_100a9aa8 < (int)UVar2);
    }
    if (UVar3 != 0) {
      (*DAT_100a5094)(s_joystick_not_found____no_valid_j_10079368,UVar3);
      return;
    }
LAB_10024426:
    ptVar6 = &tStack_194;
    for (iVar1 = 0x65; iVar1 != 0; iVar1 = iVar1 + -1) {
      ptVar6->wMid = 0;
      ptVar6->wPid = 0;
      ptVar6 = (tagJOYCAPSA *)ptVar6->szPname;
    }
    MVar4 = joyGetDevCapsA(DAT_100a9aa8,&tStack_194,0x194);
    if (MVar4 != 0) {
      (*DAT_100a5094)(s_joystick_not_found____invalid_jo_1007932c,MVar4);
      return;
    }
    DAT_100a9acc = tStack_194.wCaps & 0x10;
    DAT_100a99e4 = tStack_194.wNumButtons;
    DAT_100a99fc = 0;
    DAT_100a9a40 = 0;
    (*DAT_100a5090)(s_joystick_found_10079318,0);
    DAT_100a99f0 = 1;
    DAT_100a9a68 = 0;
  }
  return;
}

