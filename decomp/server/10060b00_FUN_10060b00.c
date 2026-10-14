
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_10060b00(int *param_1)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar6 = 0;
  if (DAT_10122780 == 0) {
    (*DAT_10121efc)(2,s_find_hintnode__graph_not_ready__1011144c);
    return -1;
  }
  if (DAT_10122798 <= DAT_10124844) {
    DAT_10124844 = 0;
  }
  iVar4 = DAT_10122798;
  if (0 < DAT_10122798) {
    do {
      iVar5 = (DAT_10124844 + iVar6) % iVar4;
      pfVar1 = (float *)(DAT_1012278c + iVar5 * 0x58);
      sVar2 = *(short *)(DAT_1012278c + 0x50 + iVar5 * 0x58);
      if (((sVar2 != 0) &&
          (iVar3 = (**(code **)(*param_1 + 0x1d8))
                             (CONCAT22((short)((uint)(iVar5 * 0xb) >> 0x10),sVar2)),
          iVar4 = DAT_10122798, iVar3 != 0)) &&
         ((*(short *)((int)pfVar1 + 0x52) == 0 ||
          (iVar3 = FUN_10008100(param_1,(int)*(short *)((int)pfVar1 + 0x52)), iVar4 = DAT_10122798,
          iVar3 != -1)))) {
        iVar4 = param_1[1];
        fStack_48 = *(float *)(iVar4 + 0x17c) + pfVar1[2];
        fStack_4c = *(float *)(iVar4 + 0x178) + pfVar1[1];
        fStack_50 = *pfVar1 + *(float *)(iVar4 + 0x174);
        fStack_3c = *(float *)(iVar4 + 0x10) + *(float *)(iVar4 + 0x17c);
        fStack_40 = *(float *)(iVar4 + 0xc) + *(float *)(iVar4 + 0x178);
        fStack_44 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x174);
        FUN_100afc60(&fStack_44,&fStack_50,1,*(undefined4 *)(iVar4 + 0x208),auStack_38);
        iVar4 = DAT_10122798;
        if (fStack_28 == (float)_DAT_100dd628) {
          DAT_10124844 = iVar5 + 1;
          return iVar5;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  DAT_10124844 = 0;
  return -1;
}

