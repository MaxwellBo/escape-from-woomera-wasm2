
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1001fee0(int param_1)

{
  char cVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  short *psVar5;
  float *pfVar6;
  char *pcVar7;
  longlong lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  undefined4 uStack_114;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  char acStack_100 [256];
  
  iVar3 = (*DAT_100a5150)();
  if (iVar3 != 1) {
    return 1;
  }
  if ((*(float *)(param_1 + 0xca0) != _DAT_10059a18) && (*(int *)(param_1 + 0x14) != 3)) {
    fVar2 = *(float *)(param_1 + 0xca0) + *(float *)(param_1 + 0x954);
    *(float *)(param_1 + 0x954) = fVar2;
    if (_DAT_10059eb8 < fVar2) {
      *(undefined4 *)(param_1 + 0x954) = 0x40400000;
    }
    if (*(float *)(param_1 + 0x954) < _DAT_10059cec) {
      *(undefined4 *)(param_1 + 0x954) = 0x3f000000;
    }
  }
  if ((*(float *)(param_1 + 0xca4) != _DAT_10059a18) && (*(int *)(param_1 + 0x14) != 3)) {
    (*DAT_100a5050)(param_1 + 0x964,0,&fStack_10c,0);
    FUN_100264f0(&fStack_10c);
    FUN_10031290(&fStack_10c,*(float *)(param_1 + 0xca4),&fStack_10c);
    *(float *)(param_1 + 0x958) = fStack_10c + *(float *)(param_1 + 0x958);
    *(float *)(param_1 + 0x95c) = fStack_108 + *(float *)(param_1 + 0x95c);
    *(float *)(param_1 + 0x960) = fStack_104 + *(float *)(param_1 + 0x960);
  }
  if (*(int *)(param_1 + 0x14) != 5) {
    return 1;
  }
  if (*(float *)(*(int *)(param_1 + 0x970) + 0xc) == _DAT_10059a18) {
    return 1;
  }
  FUN_1003dda0(DAT_100a5178);
  puStack_118 = &DAT_100b5a04;
  psVar5 = &DAT_100b6026;
  pfVar6 = (float *)(param_1 + 0x978);
  do {
    if (_DAT_10059a18 <= pfVar6[1]) {
      if (*(int *)(param_1 + 0x18) != 0) {
        if ((float)*(int *)(param_1 + 0x13c) * (float)DAT_100a4dcc * _DAT_1006014c < pfVar6[-1]) {
          if ((((float)*(int *)(param_1 + 0x140) * (float)DAT_100a4dd0 * _DAT_10060148 < *pfVar6) &&
              (pfVar6[-1] <
               (float)(*(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x13c)) *
               (float)DAT_100a4dcc * _DAT_1006014c)) &&
             (*pfVar6 < (float)(*(int *)(param_1 + 0x144) + *(int *)(param_1 + 0x140)) *
                        (float)DAT_100a4dd0 * _DAT_10060148)) goto LAB_100201b2;
        }
      }
      if (*psVar5 == 1) {
        uStack_120 = 0x3ecccccd;
        uStack_114 = 0x3ecccccd;
        uStack_11c = 0x3f800000;
      }
      else if (*psVar5 == 2) {
        uStack_120 = 0x3f800000;
        uStack_114 = 0x3ecccccd;
        uStack_11c = 0x3ecccccd;
      }
      else {
        uStack_120 = 0x3f4ccccd;
        uStack_114 = 0x3f4ccccd;
        uStack_11c = 0x3f4ccccd;
      }
      pcVar9 = acStack_100;
      uVar4 = *puStack_118;
      puVar10 = &DAT_10078410;
      FUN_100499f0(pcVar9,&DAT_10078410);
      iVar3 = -1;
      pcVar7 = acStack_100;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      (*DAT_100a5060)(uStack_120,uStack_114,uStack_11c,pcVar9,puVar10,uVar4);
      pcVar9 = acStack_100;
      lVar8 = __ftol();
      uVar4 = (undefined4)lVar8;
      lVar8 = __ftol();
      (*DAT_100a505c)((int)lVar8,uVar4,pcVar9);
    }
LAB_100201b2:
    psVar5 = psVar5 + 0xc;
    puStack_118 = puStack_118 + 5;
    pfVar6 = pfVar6 + 3;
    if (0x100b6625 < (int)psVar5) {
      return 1;
    }
  } while( true );
}

