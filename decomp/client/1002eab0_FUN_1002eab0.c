
void __fastcall FUN_1002eab0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcStack_10;
  char *pcStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iVar6 = 0;
  iVar2 = *(int *)(param_1 + 0x44);
  iStack_4 = 0;
  iVar3 = *(int *)(iVar2 + 0x90);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar2 + 0x8c);
  pcStack_c = (char *)(iVar3 + iVar2);
  if (0 < *(int *)(iVar2 + 0x8c)) {
    puStack_8 = (undefined4 *)(param_1 + 0x2860);
    pcStack_10 = (char *)(param_1 + 0x60);
    do {
      uVar4 = 0xffffffff;
      pcVar7 = pcStack_c;
      do {
        pcVar8 = pcVar7;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar7 = pcVar8 + -uVar4;
      pcVar8 = pcStack_10;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_1002d360((undefined4 *)(*(int *)(param_1 + 0x40a8) + iVar6),puStack_8 + -0x600);
      FUN_1002d360((undefined4 *)(*(int *)(param_1 + 0x40ac) + iVar6),puStack_8);
      pcStack_c = pcStack_c + 0x70;
      iStack_4 = iStack_4 + 1;
      pcStack_10 = pcStack_10 + 0x20;
      iVar6 = iVar6 + 0x30;
      puStack_8 = puStack_8 + 0xc;
    } while (iStack_4 < *(int *)(*(int *)(param_1 + 0x44) + 0x8c));
  }
  return;
}

