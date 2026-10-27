
void __cdecl FUN_1001a550(int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  void *this;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_01;
  void *this_02;
  void *extraout_ECX_02;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char acStack_180 [128];
  char acStack_100 [256];
  
  pbVar2 = (byte *)(*DAT_10121f54)(0);
  iVar3 = (*DAT_10121f58)();
  if (iVar3 != 0) {
    uVar4 = FUN_100d8b20(this,pbVar2,&DAT_10105450);
    if ((uVar4 == 0) ||
       (uVar4 = FUN_100d8b20(this_00,pbVar2,(byte *)s_say_team_10105444), uVar4 == 0)) {
      iVar3 = (*DAT_10121f58)();
      if (iVar3 < 2) {
        return;
      }
      pcVar8 = (char *)(*DAT_10121f50)();
      this_01 = extraout_ECX_01;
    }
    else {
      iVar3 = (*DAT_10121f58)();
      if (iVar3 < 2) {
        FUN_100c8506(acStack_100,&DAT_10105438);
        pcVar8 = acStack_100;
        this_01 = extraout_ECX_00;
      }
      else {
        (*DAT_10121f50)();
        FUN_100c8506(acStack_100,(byte *)s__s__s_1010543c);
        pcVar8 = acStack_100;
        this_01 = extraout_ECX;
      }
    }
    if (*pcVar8 == '\"') {
      pcVar8 = pcVar8 + 1;
      uVar4 = 0xffffffff;
      pcVar9 = pcVar8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      this_01 = (void *)(~uVar4 - 1);
      pcVar8[~uVar4 - 2] = '\0';
    }
    pcVar9 = pcVar8;
    if (pcVar8 != (char *)0x0) {
      while (*pcVar9 != '\0') {
        uVar4 = FUN_100c86a9(this_01,(int)*pcVar9);
        this_01 = this_02;
        if (((uVar4 != 0) &&
            (uVar4 = FUN_100c862b(this_02,(int)*pcVar9), this_01 = extraout_ECX_02, uVar4 == 0)) ||
           (pcVar9 = pcVar9 + 1, pcVar9 == (char *)0x0)) goto LAB_1001a650;
      }
      if (pcVar9 != (char *)0x0) {
        return;
      }
    }
LAB_1001a650:
    if (param_2 == 0) {
      pcVar9 = s__c_s__10105420;
    }
    else {
      pcVar9 = s__c_TEAM___s__10105428;
    }
    FUN_100c8506(acStack_180,(byte *)pcVar9);
    uVar4 = 0xffffffff;
    pcVar9 = acStack_180;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    iVar3 = 0x7e - (~uVar4 - 1);
    uVar4 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (iVar3 < (int)(~uVar4 - 1)) {
      pcVar8[iVar3] = '\0';
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      pcVar11 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar9 = acStack_180;
    do {
      pcVar10 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = &DAT_1010541c;
    do {
      pcVar11 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar9 = acStack_180;
    do {
      pcVar10 = pcVar9;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    pcVar9 = pcVar11 + -uVar4;
    pcVar11 = pcVar10 + -1;
    for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    piVar5 = (int *)FUN_100aec40(0,s_player_10101c54);
    while (((piVar5 != (int *)0x0 && (*(int *)(piVar5[1] + 0x208) != 0)) &&
           (iVar3 = (*DAT_10121f20)(*(int *)(piVar5[1] + 0x208)), iVar3 != 0))) {
      if (((piVar5[1] != 0) && (*(int *)(piVar5[1] + 0x208) != param_1)) &&
         (iVar3 = (**(code **)(*piVar5 + 0xd0))(), iVar3 != 0)) {
        if (param_2 != 0) {
          iVar3 = param_1;
          if ((param_1 == 0) && (iVar3 = (*DAT_10121f1c)(0), iVar3 == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined4 *)(iVar3 + 0x7c);
          }
          iVar3 = (**(code **)(*DAT_10121db8 + 200))(piVar5,uVar6);
          if (iVar3 != 1) goto LAB_1001a7ec;
        }
        (*DAT_10121ec0)(1,DAT_101248dc,0,*(undefined4 *)(piVar5[1] + 0x208));
        uVar6 = (*DAT_10121f24)(param_1);
        (*DAT_10121ec8)(uVar6);
        (*DAT_10121ee0)(acStack_180);
        (*DAT_10121ec4)();
      }
LAB_1001a7ec:
      piVar5 = (int *)FUN_100aec40((int)piVar5,s_player_10101c54);
    }
    (*DAT_10121ec0)(1,DAT_101248dc,0,*(undefined4 *)(param_1 + 0x288));
    uVar6 = (*DAT_10121f24)(param_1);
    (*DAT_10121ec8)(uVar6);
    (*DAT_10121ee0)(acStack_180);
    (*DAT_10121ec4)();
    (*DAT_10121f4c)(acStack_180);
    pcVar9 = s_say_team_10105444;
    if (param_2 == 0) {
      pcVar9 = &DAT_10105450;
    }
    if (DAT_10121dbc != 0) {
      uVar6 = (*DAT_10121fb0)(param_1,s_model_10105414);
      uVar6 = (*DAT_10121fb4)(uVar6);
      uVar6 = (*DAT_10121fdc)(param_1,uVar6);
      (*DAT_10121fcc)(param_1,uVar6);
      FUN_100b0fe0((byte *)s___s<_i><_u><_s>___s___s__101053f8);
      return;
    }
    uVar6 = (*DAT_10121fcc)(param_1,pcVar9,pcVar8);
    uVar6 = (*DAT_10121fdc)(param_1,uVar6);
    (*DAT_10121fcc)(param_1,uVar6);
    FUN_100b0fe0((byte *)s___s<_i><_u><_i>___s___s__101053dc);
  }
  return;
}

