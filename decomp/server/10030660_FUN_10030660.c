
void FUN_10030660(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar4 = 0;
  if (*param_1 != '\0') {
    pcVar5 = param_1;
    do {
      if (*pcVar5 == '?') {
        uVar2 = 0xffffffff;
        pcVar6 = param_1;
        do {
          pcVar7 = pcVar6;
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar2 = ~uVar2;
        pcVar6 = pcVar7 + -uVar2;
        pcVar7 = (char *)&DAT_10121cf0;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        iVar4 = 0;
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        do {
          pcVar5[(int)&DAT_10121cf0 - (int)param_1] = (char)iVar4 + '1';
          (*DAT_10121e0c)(&DAT_10121cf0);
          iVar4 = iVar4 + 1;
        } while (iVar4 < 4);
      }
      pcVar6 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar6 != '\0');
    if (iVar4 != 0) {
      return;
    }
  }
  (*DAT_10121e0c)(param_1);
  return;
}

