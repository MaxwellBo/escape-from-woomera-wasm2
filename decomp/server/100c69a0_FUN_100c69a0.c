
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c69a0(void)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  iVar7 = 0;
  pcVar6 = &DAT_10132cd0;
  do {
    uVar2 = FUN_100c6a50((&DAT_1011d134)[iVar7]);
    if ((char)uVar2 != '\0') {
      FUN_100c80d0();
      FUN_100c80d0();
      uVar4 = 0xffffffff;
      pcVar8 = pcVar6;
      do {
        pcVar9 = pcVar8;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      pcVar8 = pcVar9 + -uVar4;
      pcVar9 = (char *)&DAT_10134480;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      iVar3 = FUN_100c7420();
      if (iVar3 != 0) {
        _DAT_10134470 = FUN_100c7420();
      }
      if ((int *)(&DAT_10134894)[iVar7] == (int *)0x0) {
        FUN_100c7430();
      }
      else {
        (**(code **)(*(int *)(&DAT_10134894)[iVar7] + 4))();
      }
    }
    pcVar6 = pcVar6 + 1000;
    iVar7 = iVar7 + 1;
    if (0x1013443f < (int)pcVar6) {
      return;
    }
  } while( true );
}

