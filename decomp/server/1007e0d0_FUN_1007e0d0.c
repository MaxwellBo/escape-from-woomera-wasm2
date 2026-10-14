
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007e0d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char acStack_14 [20];
  
  iVar6 = *(int *)(param_1 + 0x394);
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x168) & 0x80000000) != 0) {
    FUN_1007e020(param_1);
    iVar3 = (**(code **)(*DAT_10121db8 + 0x18))();
    if (((iVar3 == 0) && (*(float *)(param_1 + 0x380) <= *DAT_10122044)) &&
       (_DAT_100dd5f8 < *(float *)(param_1 + 0x380))) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 900 + iVar6 * 4);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 900 + iVar6 * 4) = 0;
          if (0 < iVar2) {
            uVar4 = 0xffffffff;
            pcVar7 = (char *)&DAT_10114e60;
            goto code_r0x1007e16d;
          }
          FUN_10094c20(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),-iVar2);
          goto LAB_1007e1e9;
        }
        iVar6 = iVar6 + 1;
        if (iVar6 == 4) {
          iVar6 = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      *(undefined4 *)(param_1 + 0x380) = 0;
    }
  }
  return;
  while( true ) {
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
    if (cVar1 == '\0') break;
code_r0x1007e16d:
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
  }
  uVar4 = ~uVar4;
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = acStack_14;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar7 = (char *)(&DAT_10129448 + iVar2 * 4);
  do {
    pcVar9 = pcVar7;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar9 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar9;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar6 = -1;
  pcVar7 = acStack_14;
  do {
    pcVar8 = pcVar7;
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  pcVar7 = pcVar9 + -uVar4;
  pcVar9 = pcVar8 + -1;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar9 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar9 = pcVar9 + 1;
  }
  FUN_10094bb0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),acStack_14);
LAB_1007e1e9:
  *(float *)(param_1 + 0x380) = *DAT_10122044 + (float)_DAT_100e9458;
  return;
}

