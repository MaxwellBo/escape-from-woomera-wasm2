
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100704d0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  int iStack_1c;
  float fStack_14;
  float fStack_10;
  int iStack_8;
  
  piVar3 = operator_new(*(int *)((int)param_1 + 0x18) << 2);
  piVar4 = operator_new(*(int *)((int)param_1 + 0x18) << 2);
  if (piVar3 != (int *)0x0) {
    if (piVar4 != (int *)0x0) {
      iStack_34 = 0;
      do {
        iStack_1c = 0;
        do {
          if (iStack_1c == 0) {
            uStack_28 = 0;
          }
          else if (iStack_1c == 1) {
            uStack_28 = 0x340;
          }
          iVar5 = *(int *)((int)param_1 + 0x18);
          iStack_2c = 0;
          if (0 < iVar5) {
            do {
              iStack_30 = 0;
              if (0 < iVar5) {
LAB_10070550:
                *(undefined4 *)((int)param_1 + 8) = 0;
                iVar5 = FUN_1006bcd0(param_1,piVar3,iStack_2c,iStack_30,iStack_34,uStack_28);
                *(undefined4 *)((int)param_1 + 8) = 1;
                iVar6 = FUN_1006bcd0(param_1,piVar4,iStack_2c,iStack_30,iStack_34,uStack_28);
                if (iVar6 == 10) goto LAB_100706ff;
                fStack_14 = 0.0;
                iStack_8 = iVar5 + -1;
                piVar9 = piVar3;
                if (0 < iStack_8) {
                  do {
                    if (*piVar9 != piVar9[1]) {
                      iVar8 = 0;
                      iVar1 = *(int *)((int)param_1 + 0xc) + *piVar9 * 0x58;
                      iVar2 = *(int *)(iVar1 + 0x20);
                      if (0 < iVar2) {
                        iVar1 = *(int *)(iVar1 + 0x24);
                        piVar7 = (int *)(*(int *)((int)param_1 + 0x10) + 4 + iVar1 * 0x18);
                        do {
                          if (*piVar7 == piVar9[1]) {
                            fStack_14 = fStack_14 +
                                        *(float *)(*(int *)((int)param_1 + 0x10) + 0x14 +
                                                  (iVar1 + iVar8) * 0x18);
                            goto LAB_10070605;
                          }
                          iVar8 = iVar8 + 1;
                          piVar7 = piVar7 + 6;
                        } while (iVar8 < iVar2);
                      }
                      (*DAT_10121efc)(2,s_No_link__10113390);
                    }
LAB_10070605:
                    iStack_8 = iStack_8 + -1;
                    piVar9 = piVar9 + 1;
                  } while (iStack_8 != 0);
                }
                iStack_8 = iVar6 + -1;
                fStack_10 = 0.0;
                piVar9 = piVar4;
                if (0 < iStack_8) {
                  do {
                    if (*piVar9 != piVar9[1]) {
                      iVar8 = 0;
                      iVar1 = *(int *)((int)param_1 + 0xc) + *piVar9 * 0x58;
                      iVar2 = *(int *)(iVar1 + 0x20);
                      if (0 < iVar2) {
                        iVar1 = *(int *)(iVar1 + 0x24);
                        piVar7 = (int *)(*(int *)((int)param_1 + 0x10) + 4 + iVar1 * 0x18);
                        do {
                          if (*piVar7 == piVar9[1]) {
                            fStack_10 = fStack_10 +
                                        *(float *)(*(int *)((int)param_1 + 0x10) + 0x14 +
                                                  (iVar1 + iVar8) * 0x18);
                            goto LAB_100706c6;
                          }
                          iVar8 = iVar8 + 1;
                          piVar7 = piVar7 + 6;
                        } while (iVar8 < iVar2);
                      }
                      (*DAT_10121efc)(2,s_No_link__10113390);
                    }
LAB_100706c6:
                    iStack_8 = iStack_8 + -1;
                    piVar9 = piVar9 + 1;
                  } while (iStack_8 != 0);
                }
                if (ABS(fStack_14 - fStack_10) <= (float)_DAT_100dfb80) goto LAB_100706ff;
                (*DAT_10121efc)(2,s_Routing_is_inconsistent____10113374);
                (*DAT_10121efc)(2,s___d_to__d___d__d_1__10113360,iStack_2c,iStack_30,iStack_34,
                                iStack_1c);
                piVar9 = piVar3;
                if (0 < iVar5) {
                  do {
                    (*DAT_10121efc)(2,0x1011335c,*piVar9);
                    iVar5 = iVar5 + -1;
                    piVar9 = piVar9 + 1;
                  } while (iVar5 != 0);
                }
                (*DAT_10121efc)(2,s___d_to__d___d__d_2__10113344,iStack_2c,iStack_30,iStack_34,
                                iStack_1c);
                piVar9 = piVar4;
                if (0 < iVar6) {
                  do {
                    (*DAT_10121efc)(2,0x1011335c,*piVar9);
                    iVar6 = iVar6 + -1;
                    piVar9 = piVar9 + 1;
                  } while (iVar6 != 0);
                }
                (*DAT_10121efc)(2,&DAT_1010541c);
                *(undefined4 *)((int)param_1 + 8) = 0;
                FUN_1006bcd0(param_1,piVar3,iStack_2c,iStack_30,iStack_34,uStack_28);
                *(undefined4 *)((int)param_1 + 8) = 1;
                FUN_1006bcd0(param_1,piVar4,iStack_2c,iStack_30,iStack_34,uStack_28);
                goto LAB_1007082b;
              }
LAB_1007070f:
              iVar5 = *(int *)((int)param_1 + 0x18);
              iStack_2c = iStack_2c + 1;
            } while (iStack_2c < iVar5);
          }
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < 2);
        iStack_34 = iStack_34 + 1;
      } while (iStack_34 < 4);
    }
LAB_1007082b:
    FUN_100c8ce6((undefined *)piVar3);
  }
  if (piVar4 != (int *)0x0) {
    FUN_100c8ce6((undefined *)piVar4);
  }
  return;
LAB_100706ff:
  iStack_30 = iStack_30 + 1;
  if (*(int *)((int)param_1 + 0x18) <= iStack_30) goto LAB_1007070f;
  goto LAB_10070550;
}

