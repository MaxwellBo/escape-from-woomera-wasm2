
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6c10(void)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  
  if (DAT_10134880 == '\0') {
    DAT_10134884 = DAT_10134884 + 1;
    if ((0x3c < DAT_10134884) && (DAT_10134868 != -1)) {
      FUN_100c81a0(0,DAT_10134868);
      FUN_100c81a0(5,1);
      DAT_10134868 = -1;
    }
  }
  else {
    fVar12 = FUN_100c5b60();
    if ((float10)_DAT_1011d128 + (float10)_DAT_1013487c <= fVar12) {
      FUN_100c7430();
      FUN_100b94e0();
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_10121c38;
      do {
        pcVar11 = pcVar10;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar11 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar11;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar10 = pcVar11 + -uVar8;
      pcVar11 = (char *)&DAT_10134480;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    iVar6 = FUN_100c6980();
    if ((iVar6 != 0) && (DAT_1013488c != 0)) {
      iVar6 = *(int *)(DAT_1013488c + 4);
      iVar7 = FUN_100c6980();
      iVar7 = *(int *)(iVar7 + 4);
      fVar2 = *(float *)(iVar7 + 8) - *(float *)(iVar6 + 8);
      fVar3 = *(float *)(iVar7 + 0xc) - *(float *)(iVar6 + 0xc);
      fVar4 = *(float *)(iVar7 + 0x10) - *(float *)(iVar6 + 0x10);
      if (_DAT_1011d130 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4)) {
        FUN_100c80d0();
        FUN_100c7430();
        FUN_100b94e0();
        uVar8 = 0xffffffff;
        pcVar10 = &DAT_10121c38;
        do {
          pcVar11 = pcVar10;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar11 = pcVar10 + 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar11;
        } while (cVar1 != '\0');
        uVar8 = ~uVar8;
        pcVar10 = pcVar11 + -uVar8;
        pcVar11 = (char *)&DAT_10134480;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
      }
    }
    DAT_10134884 = 0;
  }
  uVar5 = FUN_100c5b80();
  if (CONCAT31(extraout_var,uVar5) == 0) {
    fVar12 = FUN_100c5b60();
    FUN_100c7740(DAT_10132cc4,(float)fVar12);
  }
  return;
}

