
void FUN_1001d3e0(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 auStack_2c [7];
  undefined4 uStack_10;
  
  param_3[10] = *(undefined4 *)(param_1 + 0x224);
  param_3[0x10] = *(undefined4 *)(param_1 + 0x1e0);
  uVar2 = (*DAT_10121e14)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x13c));
  param_3[6] = uVar2;
  param_3[0xb] = *(undefined4 *)(param_1 + 0x240);
  param_3[0xc] = *(undefined4 *)(param_1 + 0x244);
  param_3[0x12] = *(undefined4 *)(param_1 + 0x1e8);
  *param_3 = *(undefined4 *)(param_1 + 0x88);
  param_3[1] = *(undefined4 *)(param_1 + 0x8c);
  param_3[2] = *(undefined4 *)(param_1 + 0x90);
  param_3[3] = *(undefined4 *)(param_1 + 0xa0);
  param_3[4] = *(undefined4 *)(param_1 + 0xa4);
  param_3[5] = *(undefined4 *)(param_1 + 0xa8);
  param_3[0xd] = *(undefined4 *)(param_1 + 500);
  param_3[0xe] = *(undefined4 *)(param_1 + 0x1f8);
  param_3[0xf] = *(undefined4 *)(param_1 + 0x1fc);
  param_3[7] = *(undefined4 *)(param_1 + 0xe8);
  param_3[8] = *(undefined4 *)(param_1 + 0xec);
  param_3[9] = *(undefined4 *)(param_1 + 0xf0);
  param_3[0x11] = *(undefined4 *)(param_1 + 0x2a0);
  param_3[0x13] = *(undefined4 *)(param_1 + 0x2a4);
  param_3[0x14] = *(undefined4 *)(param_1 + 0x2ac);
  param_3[0x15] = *(undefined4 *)(param_1 + 0x2a8);
  lVar11 = __ftol();
  param_3[0x16] = (int)lVar11;
  pcVar3 = (char *)(*DAT_10121fec)(param_1);
  uVar7 = 0xffffffff;
  do {
    pcVar9 = pcVar3;
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    pcVar9 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar9;
  } while (cVar1 != '\0');
  uVar7 = ~uVar7;
  pcVar3 = pcVar9 + -uVar7;
  pcVar9 = (char *)(param_3 + 0x23);
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar9 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar9 = pcVar9 + 1;
  }
  param_3[0x17] = *(undefined4 *)(param_1 + 0x290);
  param_3[0x18] = *(undefined4 *)(param_1 + 0x294);
  param_3[0x19] = *(undefined4 *)(param_1 + 0x298);
  param_3[0x21] = *(undefined4 *)(param_1 + 0x29c);
  if (param_2 != 0) {
    iVar4 = *(int *)(param_1 + 0x288);
    if ((iVar4 == 0) && (iVar4 = (*DAT_10121f1c)(0), iVar4 == 0)) {
      return;
    }
    iVar4 = *(int *)(iVar4 + 0x7c);
    if (iVar4 != 0) {
      param_3[0x1f] = *(undefined4 *)(iVar4 + 700);
      param_3[0x68] = *(undefined4 *)(iVar4 + 0x698);
      param_3[0x69] = *(undefined4 *)(iVar4 + 0x690);
      param_3[0x6b] = (float)*(int *)(iVar4 + 0x84);
      param_3[0x6c] = (float)*(int *)(iVar4 + 0x88);
      param_3[0x6d] = (float)*(int *)(iVar4 + 0xa0);
      param_3[0x1c] = *(undefined4 *)(iVar4 + 0x8c);
      param_3[0x1b] = *(undefined4 *)(iVar4 + 0x90);
      param_3[0x1e] = *(undefined4 *)(iVar4 + 0x94);
      param_3[0x1d] = *(undefined4 *)(iVar4 + 0x98);
      param_3[0x6e] = (float)*(int *)(iVar4 + 0x9c);
      if (((*(int **)(iVar4 + 0x528) != (int *)0x0) &&
          (piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x528) + 0x15c))(), piVar5 != (int *)0x0)
          ) && (iVar6 = (**(code **)(*piVar5 + 0x19c))(), iVar6 != 0)) {
        puVar10 = auStack_2c;
        for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        (**(code **)(*piVar5 + 0x124))(auStack_2c);
        param_3[0x1a] = uStack_10;
        param_3[0x73] = (float)piVar5[0x42];
        param_3[0x74] = (float)piVar5[0x41];
        param_3[0x75] = (float)*(int *)(iVar4 + 0x534 + piVar5[0x41] * 4);
        param_3[0x76] = (float)*(int *)(iVar4 + 0x534 + piVar5[0x42] * 4);
        if (*(int *)(*(int *)(iVar4 + 0x528) + 0xe4) == 8) {
          param_3[0x6f] = (float)*(int *)(*(int *)(iVar4 + 0x528) + 0x124);
          param_3[0x70] = (float)*(int *)(*(int *)(iVar4 + 0x528) + 0x128);
        }
      }
    }
  }
  return;
}

