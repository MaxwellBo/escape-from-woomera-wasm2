
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10031350(int *param_1)

{
  float fVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [16];
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar11 = 0;
  iVar10 = 0;
  iVar9 = 0;
  iVar8 = 0;
  puVar2 = FUN_100affd0((byte *)s_Rain_think__08x_10108444);
  FUN_100af940(1,puVar2,iVar8,iVar9,iVar10,iVar11);
  (*DAT_10121efc)(1,s_RainThink__d__d__d__s_1010842c,param_1[0x2f],param_1[0x31],param_1[0x35],
                  *(int *)(DAT_10122044 + 0x98) + param_1[0x30]);
  FUN_100af200(param_1[1] + 0x50);
  fStack_50 = *(float *)(DAT_10122044 + 0x28);
  fStack_4c = *(float *)(DAT_10122044 + 0x2c);
  fStack_48 = *(float *)(DAT_10122044 + 0x30);
  iVar8 = param_1[0x39];
  if (iVar8 == 0) {
    fVar1 = *(float *)(param_1[1] + 0xfc) / fStack_48;
    fStack_50 = fVar1 * fStack_50;
    fStack_4c = fVar1 * fStack_4c;
    fStack_48 = fVar1 * fStack_48;
    fStack_2c = fStack_50;
    fStack_28 = fStack_4c;
    fStack_24 = fStack_48;
  }
  else if (iVar8 == 1) {
    fVar1 = *(float *)(param_1[1] + 0xf4) / fStack_50;
    fStack_50 = fVar1 * fStack_50;
    fStack_4c = fVar1 * fStack_4c;
    fStack_48 = fVar1 * fStack_48;
    fStack_2c = fStack_50;
    fStack_28 = fStack_4c;
    fStack_24 = fStack_48;
  }
  else if (iVar8 == 2) {
    fVar1 = *(float *)(param_1[1] + 0xf8) / fStack_4c;
    fStack_50 = fVar1 * fStack_50;
    fStack_4c = fVar1 * fStack_4c;
    fStack_48 = fVar1 * fStack_48;
    fStack_2c = fStack_50;
    fStack_28 = fStack_4c;
    fStack_24 = fStack_48;
  }
  if ((((float)param_1[0x3b] == _DAT_100dd5f8) && ((float)param_1[0x37] == _DAT_100dd5f8)) &&
     ((float)param_1[0x38] == _DAT_100dd5f8)) {
    iVar8 = param_1[0x34] * 3;
  }
  else {
    iVar8 = param_1[0x34];
  }
  iVar10 = 0;
  iVar9 = 0;
  if (0 < iVar8) {
    do {
      if (iVar8 * 3 <= iVar9) break;
      iVar11 = param_1[1];
      iVar9 = iVar9 + 1;
      if (param_1[0x39] == 1) {
        fStack_44 = *(float *)(iVar11 + 0xe8);
      }
      else {
        lVar7 = __ftol();
        iVar3 = (*DAT_10121f70)(0,(int)lVar7);
        fStack_44 = (float)iVar3 + *(float *)(iVar11 + 0xdc);
      }
      if (param_1[0x39] == 2) {
        fStack_40 = *(float *)(iVar11 + 0xec);
      }
      else {
        iVar11 = param_1[1];
        lVar7 = __ftol();
        iVar3 = (*DAT_10121f70)(0,(int)lVar7);
        fStack_40 = (float)iVar3 + *(float *)(iVar11 + 0xe0);
      }
      if (param_1[0x39] == 0) {
        fStack_3c = *(float *)(iVar11 + 0xf0);
      }
      else {
        lVar7 = __ftol();
        iVar11 = (*DAT_10121f70)(0,(int)lVar7);
        fStack_3c = (float)iVar11 + *(float *)(param_1[1] + 0xe4);
      }
      fStack_38 = fStack_44 - fStack_50;
      fStack_34 = fStack_40 - fStack_4c;
      fStack_30 = fStack_3c - fStack_48;
      fStack_2c = fStack_38;
      fStack_28 = fStack_34;
      fStack_24 = fStack_30;
      switch(param_1[0x3a]) {
      case 1:
        FUN_100afc60(&fStack_44,&fStack_38,1,0,auStack_20);
        fStack_38 = fStack_c;
        fStack_34 = fStack_8;
        fStack_30 = fStack_4;
        break;
      case 2:
        FUN_100afc60(&fStack_44,&fStack_38,1,0,auStack_20);
        bVar5 = fStack_10 != (float)_DAT_100dd628;
        fStack_38 = fStack_c;
        fStack_34 = fStack_8;
        fStack_30 = fStack_4;
        goto LAB_1003174c;
      case 3:
        FUN_100afc60(&fStack_38,&fStack_44,1,0,auStack_20);
        fStack_44 = fStack_c;
        fStack_40 = fStack_8;
        fStack_3c = fStack_4;
        break;
      case 4:
        FUN_100afc60(&fStack_38,&fStack_44,1,0,auStack_20);
        bVar5 = fStack_10 != (float)_DAT_100dd628;
        fStack_44 = fStack_c;
        fStack_40 = fStack_8;
        fStack_3c = fStack_4;
LAB_1003174c:
        if (bVar5) break;
        goto LAB_100318d3;
      }
      iVar10 = iVar10 + 1;
      (*DAT_10121ec0)(0,0x17,0,0);
      (*DAT_10121ec8)(0);
      (*DAT_10121edc)(fStack_38);
      (*DAT_10121edc)(fStack_34);
      (*DAT_10121edc)(fStack_30);
      (*DAT_10121edc)(fStack_44);
      (*DAT_10121edc)(fStack_40);
      (*DAT_10121edc)(fStack_3c);
      (*DAT_10121ed0)(param_1[0x2f]);
      (*DAT_10121ec8)(0);
      (*DAT_10121ec8)(0);
      if (((float)param_1[0x3b] == _DAT_100dd5f8) && ((float)param_1[0x38] != _DAT_100dd5f8)) {
        (*DAT_10121f74)(param_1[0x37],param_1[0x38]);
        lVar7 = __ftol();
        (*DAT_10121ec8)((int)lVar7);
      }
      else {
        lVar7 = __ftol();
        (*DAT_10121ec8)((int)lVar7);
      }
      (*DAT_10121ec8)(param_1[0x31]);
      (*DAT_10121ec8)(param_1[0x3c]);
      lVar7 = __ftol();
      (*DAT_10121ec8)((int)lVar7);
      lVar7 = __ftol();
      (*DAT_10121ec8)((int)lVar7);
      lVar7 = __ftol();
      (*DAT_10121ec8)((int)lVar7);
      (*DAT_10121ec8)(param_1[0x35]);
      uVar4 = (*DAT_10121f70)(param_1[0x32],param_1[0x33]);
      (*DAT_10121ec8)(uVar4);
      (*DAT_10121ec4)();
LAB_100318d3:
    } while (iVar10 < iVar8);
  }
  if ((*(int *)(param_1[1] + 0x1c8) != 0) && (iVar10 != 0)) {
    FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)),param_1,
                 param_1,3,0);
  }
  if ((float)param_1[0x38] != _DAT_100dd5f8) {
    iVar8 = *param_1;
    fVar6 = (float10)(*DAT_10121f74)(param_1[0x38],param_1[0x37]);
    (**(code **)(iVar8 + 8))((float)fVar6);
    return;
  }
  if ((float)param_1[0x37] != _DAT_100dd5f8) {
    (**(code **)(*param_1 + 8))(param_1[0x37]);
  }
  return;
}

