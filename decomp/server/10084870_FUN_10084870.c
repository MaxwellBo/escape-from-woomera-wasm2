
void __cdecl FUN_10084870(char *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar4 = 0;
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      (**(code **)(DAT_10126a38 + 0x4f5b4))(4,param_1,param_3,0x3f4ccccd,0,100);
      return;
    }
    if (cVar1 == '?') break;
    cVar1 = param_1[iVar4 + 1];
    iVar4 = iVar4 + 1;
  }
  uVar2 = 0xffffffff;
  do {
    pcVar5 = param_1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar5 = pcVar5 + -uVar2;
  pcVar6 = (char *)&DAT_10124920;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  switch(param_2) {
  case 0:
    *(undefined1 *)((int)&DAT_10124920 + iVar4) = 0x31;
    break;
  case 1:
    *(undefined1 *)((int)&DAT_10124920 + iVar4) = 0x33;
    break;
  case 2:
    *(undefined1 *)((int)&DAT_10124920 + iVar4) = 0x32;
    break;
  case 3:
    *(undefined1 *)((int)&DAT_10124920 + iVar4) = 0x34;
    break;
  default:
    *(undefined1 *)((int)&DAT_10124920 + iVar4) = 0x23;
  }
  (**(code **)(DAT_10126a38 + 0x4f5b4))(4,&DAT_10124920,param_3,0x3f4ccccd,0,100);
  return;
}

