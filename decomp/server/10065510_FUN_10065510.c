
void FUN_10065510(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  
  if (param_2[0x82] == 0) {
    (*DAT_10121f1c)(0);
  }
  uVar7 = 0;
  pcVar6 = s_world_10111e0c;
  if ((*(byte *)(param_2 + 0x69) & 8) == 0) {
    iVar4 = *(int *)(DAT_10122044 + 0x98);
LAB_100655b7:
    pcVar6 = (char *)(iVar4 + *param_3);
  }
  else {
    uVar7 = (*DAT_10121f24)(param_2[0x82]);
    if (param_3 != (int *)0x0) {
      if (param_3 != param_2) {
        iVar4 = *(int *)(DAT_10122044 + 0x98);
        goto LAB_100655b7;
      }
      iVar4 = param_2[0x82];
      if (iVar4 == 0) {
        iVar4 = (*DAT_10121f1c)(0);
        if (iVar4 != 0) goto LAB_10065573;
        iVar4 = 0;
      }
      else {
LAB_10065573:
        iVar4 = *(int *)(iVar4 + 0x7c);
      }
      if (*(int *)(iVar4 + 0x528) != 0) {
        pcVar6 = (char *)(&DAT_10131e30)[*(int *)(*(int *)(iVar4 + 0x528) + 0xe4) * 0xb];
      }
    }
  }
  iVar4 = _strncmp(pcVar6,s_weapon__10105614,7);
  if (iVar4 == 0) {
    pcVar6 = pcVar6 + 7;
  }
  else {
    iVar4 = _strncmp(pcVar6,s_monster__10111e00,8);
    if (iVar4 == 0) {
      pcVar6 = pcVar6 + 8;
    }
    else {
      iVar4 = _strncmp(pcVar6,s_func__10111df8,5);
      if (iVar4 == 0) {
        pcVar6 = pcVar6 + 5;
      }
    }
  }
  (*DAT_10121ec0)(2,DAT_101248ac,0,0);
  (*DAT_10121ec8)(uVar7);
  uVar7 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ec8)(uVar7);
  (*DAT_10121ee0)(pcVar6);
  (*DAT_10121ec4)();
  pbVar8 = &DAT_101086a4;
  pbVar5 = (byte *)pcVar6;
  do {
    bVar1 = *pbVar5;
    bVar10 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_10065672:
      iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
      goto LAB_10065677;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar10 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_10065672;
    pbVar5 = pbVar5 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_10065677:
  if (iVar4 == 0) {
    pcVar6 = s_gluon_gun_10111dec;
  }
  else {
    pcVar9 = s_gauss_1010d1bc;
    pbVar5 = (byte *)pcVar6;
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_100656ad:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_100656b2;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_100656ad;
      pbVar5 = pbVar5 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100656b2:
    if (iVar4 == 0) {
      pcVar6 = s_tau_cannon_10111de0;
    }
  }
  piVar2 = *(int **)(param_1 + 4);
  if (piVar2 == param_2) {
    iVar4 = piVar2[0x82];
    if (DAT_10121dbc == 0) {
      uVar7 = (*DAT_10121fcc)(iVar4,pcVar6);
      uVar7 = (*DAT_10121fdc)(iVar4,uVar7);
      (*DAT_10121fcc)(iVar4,uVar7);
      pcVar6 = s___s<_i><_u><_i>__committed_suici_10111d80;
    }
    else {
      uVar7 = (*DAT_10121fb0)(iVar4,s_model_10105414);
      uVar7 = (*DAT_10121fb4)(uVar7);
      uVar7 = (*DAT_10121fdc)(iVar4,uVar7);
      (*DAT_10121fcc)(iVar4,uVar7);
      pcVar6 = s___s<_i><_u><_s>__committed_suici_10111db0;
    }
  }
  else {
    if ((*(byte *)(param_2 + 0x69) & 8) != 0) {
      iVar4 = piVar2[0x82];
      iVar3 = param_2[0x82];
      if (DAT_10121dbc == 0) {
        uVar7 = (*DAT_10121fcc)(iVar4,pcVar6);
        uVar7 = (*DAT_10121fdc)(iVar4,uVar7);
        uVar7 = (*DAT_10121fcc)(iVar4,uVar7);
        uVar7 = (*DAT_10121fcc)(iVar3,*(int *)(*(int *)(param_1 + 4) + 0x1d0) +
                                      *(int *)(DAT_10122044 + 0x98),uVar7);
        uVar7 = (*DAT_10121fdc)(iVar3,uVar7);
        (*DAT_10121fcc)(iVar3,uVar7);
        FUN_100b0fe0((byte *)s___s<_i><_u><_i>__killed___s<_i><_10111d18);
      }
      else {
        uVar7 = (*DAT_10121fb0)(iVar4,s_model_10105414);
        uVar7 = (*DAT_10121fb4)(uVar7);
        uVar7 = (*DAT_10121fdc)(iVar4,uVar7);
        uVar7 = (*DAT_10121fcc)(iVar4,uVar7);
        uVar7 = (*DAT_10121fb0)(iVar3,s_model_10105414,
                                *(int *)(*(int *)(param_1 + 4) + 0x1d0) +
                                *(int *)(DAT_10122044 + 0x98),uVar7);
        uVar7 = (*DAT_10121fb4)(uVar7);
        uVar7 = (*DAT_10121fdc)(iVar3,uVar7);
        (*DAT_10121fcc)(iVar3,uVar7);
        FUN_100b0fe0((byte *)s___s<_i><_u><_s>__killed___s<_i><_10111d4c);
      }
      goto LAB_10065962;
    }
    iVar4 = piVar2[0x82];
    if (DAT_10121dbc == 0) {
      uVar7 = (*DAT_10121fcc)(iVar4,pcVar6);
      uVar7 = (*DAT_10121fdc)(iVar4,uVar7);
      (*DAT_10121fcc)(iVar4,uVar7);
      pcVar6 = s___s<_i><_u><_i>__committed_suici_10111ca8;
    }
    else {
      uVar7 = (*DAT_10121fb0)(iVar4,s_model_10105414);
      uVar7 = (*DAT_10121fb4)(uVar7);
      uVar7 = (*DAT_10121fdc)(iVar4,uVar7);
      (*DAT_10121fcc)(iVar4,uVar7);
      pcVar6 = s___s<_i><_u><_s>__committed_suici_10111ce0;
    }
  }
  FUN_100b0fe0((byte *)pcVar6);
LAB_10065962:
  (*DAT_10121ec0)(9,0x32,0,0);
  (*DAT_10121ec8)(3);
  uVar7 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ed0)(uVar7);
  if (param_3 == (int *)0x0) {
    iVar4 = param_2[0x82];
  }
  else {
    iVar4 = param_3[0x82];
  }
  uVar7 = (*DAT_10121f24)(iVar4);
  (*DAT_10121ed0)(uVar7);
  (*DAT_10121ed4)(0x27);
  (*DAT_10121ec4)();
  return;
}

