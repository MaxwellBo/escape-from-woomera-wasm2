
int __thiscall FUN_10094a60(void *this,int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  void *extraout_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  char *pcVar8;
  char local_8 [8];
  
  iVar5 = 0;
  if (0 < DAT_1013104c) {
    pbVar6 = (byte *)&DAT_10129448;
    do {
      uVar2 = FUN_100d8b20(this,pbVar6,(byte *)(param_1 + 1));
      if (uVar2 == 0) {
        if (param_2 == (char *)0x0) {
          return iVar5;
        }
        uVar2 = 0xffffffff;
        pcVar7 = (char *)&DAT_10114e60;
        goto code_r0x10094ab6;
      }
      iVar5 = iVar5 + 1;
      pbVar6 = pbVar6 + 0x10;
      this = extraout_ECX;
    } while (iVar5 < DAT_1013104c);
  }
  return -1;
  while( true ) {
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
    if (cVar1 == '\0') break;
code_r0x10094ab6:
    pcVar8 = pcVar7;
    if (uVar2 == 0) break;
  }
  uVar2 = ~uVar2;
  pcVar7 = pcVar8 + -uVar2;
  pcVar8 = param_2;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  FUN_100c8506(local_8,&DAT_101083c8);
  uVar2 = 0xffffffff;
  pcVar7 = local_8;
  do {
    pcVar8 = pcVar7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  do {
    pcVar7 = param_2;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar7;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar2;
  pcVar7 = pcVar7 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return iVar5;
}

