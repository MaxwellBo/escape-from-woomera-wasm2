
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10022c60(CBaseEntity *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  CBaseEntity *pCVar6;
  longlong lVar7;
  int iStack_24;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  FUN_10062050(param_1);
  if (((byte)param_1[0x2a0] & 0x80) == 0) {
    iStack_24 = 0x3000;
    pCVar6 = param_1 + 0x34c;
    iVar5 = 3;
    do {
      if (*(int *)pCVar6 == 0) {
        piVar2 = FUN_1002ca80(0x10106420,(undefined4 *)(*(int *)(param_1 + 4) + 8),1);
        *(int **)pCVar6 = piVar2;
        *(undefined4 *)(piVar2[1] + 0x148) = 3;
        *(undefined4 *)(piVar2[1] + 0x150) = 0x437f0000;
        *(undefined4 *)(piVar2[1] + 0x154) = 0x437f0000;
        *(undefined4 *)(piVar2[1] + 0x158) = 0x437f0000;
        *(undefined4 *)(piVar2[1] + 0x14c) = 0x437f0000;
        *(undefined4 *)(piVar2[1] + 0x15c) = 0xe;
        iVar4 = *(int *)pCVar6;
        iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x208);
        if (iVar1 != 0) {
          uVar3 = (*DAT_10121f24)(iVar1);
          *(undefined4 *)(*(int *)(iVar4 + 4) + 0x110) = uVar3;
          *(int *)(*(int *)(iVar4 + 4) + 0x114) = iVar5;
          *(int *)(*(int *)(iVar4 + 4) + 0x194) = iVar1;
          *(undefined4 *)(*(int *)(iVar4 + 4) + 0x108) = 0xc;
        }
        *(undefined4 *)(*(int *)(*(int *)pCVar6 + 4) + 0x144) = 0x3f800000;
      }
      lVar7 = __ftol();
      *(int *)(pCVar6 + 0x18) = (int)lVar7;
      *(float *)(*(int *)(*(int *)pCVar6 + 4) + 0x14c) = (float)(int)lVar7;
      FUN_10008450(param_1,iVar5 + -1,&uStack_18,auStack_c);
      FUN_100afe10(*(int *)pCVar6,&uStack_18);
      (*DAT_10121ec0)(0,0x17,0,0);
      (*DAT_10121ec8)(0x1c);
      iVar4 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
      (*DAT_10121ed0)(iVar4 + iStack_24);
      (*DAT_10121edc)(uStack_18);
      (*DAT_10121edc)(uStack_14);
      (*DAT_10121edc)(uStack_10);
      (*DAT_10121edc)((float)((int)(*(int *)(pCVar6 + 0x18) + (*(int *)(pCVar6 + 0x18) >> 0x1f & 7U)
                                   ) >> 3));
      (*DAT_10121ec8)(0xff);
      (*DAT_10121ec8)(0xc0);
      (*DAT_10121ec8)(0x40);
      (*DAT_10121ec8)(5);
      (*DAT_10121edc)(0);
      (*DAT_10121ec4)();
      iStack_24 = iStack_24 + 0x1000;
      pCVar6 = pCVar6 + 4;
      iVar4 = iVar5 + -2;
      iVar5 = iVar5 + 1;
    } while (iVar4 < 2);
  }
  return;
}

