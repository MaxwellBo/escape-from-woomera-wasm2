
void __thiscall FUN_100b5b90(void *this,int param_1,int param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  char *pcVar7;
  
  pbVar2 = FUN_100b58c0(this,param_1);
  if (pbVar2 != (byte *)0x0) {
    uVar3 = 0xffffffff;
    pcVar6 = (char *)(*(int *)(DAT_10122044 + 0x98) + param_2);
    do {
      pcVar7 = pcVar6;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pbVar5 = (byte *)(pcVar7 + -uVar3);
    pbVar2 = pbVar2 + 0x40;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pbVar2 = *(undefined4 *)pbVar5;
      pbVar5 = pbVar5 + 4;
      pbVar2 = pbVar2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pbVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
      pbVar2 = pbVar2 + 1;
    }
  }
  return;
}

