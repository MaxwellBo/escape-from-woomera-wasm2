
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007bc10(void *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int **ppiVar7;
  int iVar8;
  int iVar9;
  int *piStack_e0;
  int *apiStack_dc [19];
  int iStack_90;
  int aiStack_8c [35];
  
  ppiVar7 = apiStack_dc + 2;
  for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppiVar7 = (int *)0x0;
    ppiVar7 = ppiVar7 + 1;
  }
  iVar8 = 0;
  piVar5 = aiStack_8c + 2;
  for (iVar6 = 0x21; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = -1;
    piVar5 = piVar5 + 1;
  }
  iVar6 = (**(code **)(*DAT_10121db8 + 0xbc))(param_1);
  iVar3 = (**(code **)(*DAT_10121db8 + 0xc0))(param_1);
  if ((iVar6 == 9) && (iVar3 == 0xc)) {
    FUN_1007be20(param_1,1);
    return;
  }
  piVar5 = (int *)((int)param_1 + 0x510);
  iVar9 = 6;
  do {
    piVar4 = (int *)*piVar5;
    if (piVar4 != (int *)0x0) {
      ppiVar7 = apiStack_dc + iVar8;
      do {
        if ((iVar6 == 7) ||
           (((iVar6 == 8 && (*(int **)((int)param_1 + 0x528) != (int *)0x0)) &&
            (piVar4 == *(int **)((int)param_1 + 0x528))))) {
          *ppiVar7 = piVar4;
          iVar8 = iVar8 + 1;
          ppiVar7 = ppiVar7 + 1;
        }
        piVar4 = (int *)piVar4[0x38];
      } while (piVar4 != (int *)0x0);
    }
    piVar5 = piVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (iVar3 != 0xc) {
    iVar6 = 0;
    piVar4 = aiStack_8c;
    piVar5 = (int *)((int)param_1 + 0x534);
    do {
      if (0 < *piVar5) {
        if (iVar3 == 10) {
LAB_1007bd1a:
          *piVar4 = iVar6;
          piVar4 = piVar4 + 1;
        }
        else if (iVar3 == 0xb) {
          if (*(int **)((int)param_1 + 0x528) != (int *)0x0) {
            iVar8 = (**(code **)(**(int **)((int)param_1 + 0x528) + 0x150))();
            if (iVar6 == iVar8) goto LAB_1007bd1a;
          }
          if (*(int **)((int)param_1 + 0x528) != (int *)0x0) {
            iVar8 = (**(code **)(**(int **)((int)param_1 + 0x528) + 0x154))();
            if (iVar6 == iVar8) goto LAB_1007bd1a;
          }
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 < 0x20);
  }
  iVar6 = *(int *)((int)param_1 + 4);
  piVar5 = (int *)FUN_1001a1f0(0x10114db8,(undefined4 *)(iVar6 + 8),(undefined4 *)(iVar6 + 0x50),
                               *(undefined4 *)(iVar6 + 0x208));
  *(undefined4 *)(piVar5[1] + 0x50) = 0;
  *(undefined4 *)(piVar5[1] + 0x58) = 0;
  piVar5[0x1d] = (int)CWeaponBox::Kill;
  (**(code **)(*piVar5 + 8))(0x42f00000);
  if (iStack_90 != -1) {
    piVar4 = &iStack_90;
    do {
      FUN_100b4bd0(piVar5,(&DAT_10131d10)[iStack_90 * 2] - *(int *)(DAT_10122044 + 0x98),
                   *(int *)((int)param_1 + iStack_90 * 4 + 0x534));
      iStack_90 = piVar4[1];
      piVar4 = piVar4 + 1;
    } while (iStack_90 != -1);
  }
  if (piStack_e0 != (int *)0x0) {
    ppiVar7 = &piStack_e0;
    do {
      FUN_100b4af0(piVar5,piStack_e0);
      piStack_e0 = ppiVar7[1];
      ppiVar7 = ppiVar7 + 1;
    } while (piStack_e0 != (int *)0x0);
  }
  iVar6 = *(int *)((int)param_1 + 4);
  iVar8 = piVar5[1];
  fVar1 = *(float *)(iVar6 + 0x24) * _DAT_100ed294;
  fVar2 = *(float *)(iVar6 + 0x28) * _DAT_100ed294;
  *(float *)(iVar8 + 0x20) = *(float *)(iVar6 + 0x20) * _DAT_100ed294;
  *(float *)(iVar8 + 0x24) = fVar1;
  *(float *)(iVar8 + 0x28) = fVar2;
  FUN_1007be20(param_1,1);
  return;
}

