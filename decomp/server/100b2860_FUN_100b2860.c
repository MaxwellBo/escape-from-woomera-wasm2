
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100b2860(int param_1)

{
  float10 fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  uint uStack_14;
  int *piStack_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fVar8 = (float10)(*DAT_10121eec)(s_sv_alltalk_1011b3d4);
  fVar1 = (float10)_DAT_100dd5f8;
  iStack_c = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar5 = iStack_c;
      iVar6 = iStack_c + 1;
      iStack_4 = iVar6;
      piStack_10 = (int *)FUN_100af1c0(iVar6);
      if ((piStack_10 != (int *)0x0) && (iVar3 = (**(code **)(*piStack_10 + 0xcc))(), iVar3 != 0)) {
        uVar7 = 1 << ((byte)iVar5 & 0x1f);
        if (((&DAT_10131c6c)[iVar5 >> 5] & uVar7) != 0) {
          (*DAT_10121ec0)(1,*(undefined4 *)(param_1 + 0xc),0,*(undefined4 *)(piStack_10[1] + 0x208))
          ;
          (*DAT_10121ec4)();
        }
        uStack_14 = 0;
        if (((uVar7 & (&DAT_10131b68)[iVar5 >> 5]) != 0) &&
           (iVar6 = 0, 0 < *(int *)(param_1 + 0x14))) {
          do {
            iVar3 = iVar6 + 1;
            piVar4 = (int *)FUN_100af1c0(iVar3);
            if (((piVar4 != (int *)0x0) && (iVar5 = (**(code **)(*piVar4 + 0xcc))(), iVar5 != 0)) &&
               ((fVar8 != fVar1 ||
                (cVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 4))(piStack_10,piVar4),
                cVar2 != '\0')))) {
              (&uStack_14)[iVar6 >> 5] = (&uStack_14)[iVar6 >> 5] | 1 << ((byte)iVar6 & 0x1f);
            }
            iVar5 = iStack_c;
            iVar6 = iVar3;
          } while (iVar3 < *(int *)(param_1 + 0x14));
        }
        iVar6 = iVar5 * 4;
        uVar7 = FUN_100b2aa0(&uStack_14,(int)(&DAT_10131bec + iVar5));
        if ((char)uVar7 == '\0') {
LAB_100b29cc:
          (&DAT_10131bec)[iVar5] = uStack_14;
          (&DAT_10131c70)[iVar5] = (&DAT_10131b6c)[iVar5];
          (*DAT_10121ec0)(1,*(undefined4 *)(param_1 + 8),0,*(undefined4 *)(piStack_10[1] + 0x208));
          (*DAT_10121ed4)(uStack_14);
          (*DAT_10121ed4)((&DAT_10131b6c)[iVar5]);
          (*DAT_10121ec4)();
        }
        else {
          iVar3 = 0;
          do {
            if (*(int *)((int)&DAT_10131b6c + iVar6) != *(int *)((int)&DAT_10131c70 + iVar6))
            goto LAB_100b29cc;
            iVar3 = iVar3 + 1;
            iVar6 = iVar6 + 4;
          } while (iVar3 < 1);
        }
        iVar3 = 0;
        iVar6 = iStack_4;
        if (0 < *(int *)(param_1 + 0x14)) {
          do {
            uVar7 = 1 << ((byte)iVar3 & 0x1f);
            if (((&uStack_14)[iVar3 >> 5] & uVar7) == 0) {
LAB_100b2a4e:
              uStack_8 = uStack_8 & 0xffffff00;
            }
            else {
              uStack_8 = CONCAT31(uStack_8._1_3_,1);
              if ((uVar7 & (&DAT_10131b6c)[(iVar3 >> 5) + iVar5]) != 0) goto LAB_100b2a4e;
            }
            iVar3 = iVar3 + 1;
            (*DAT_10122040)(iStack_4,iVar3,uStack_8 & 0xff);
            iVar6 = iStack_4;
          } while (iVar3 < *(int *)(param_1 + 0x14));
        }
      }
      iStack_c = iVar6;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  return;
}

