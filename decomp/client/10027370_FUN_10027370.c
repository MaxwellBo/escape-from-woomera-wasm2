
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10027370(void)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(undefined4 *)(DAT_100acc38 + 0x38);
  local_8 = *(undefined4 *)(DAT_100acc38 + 0x3c);
  local_4 = *(undefined4 *)(DAT_100acc38 + 0x40);
  local_18 = *(undefined4 *)(DAT_100acc38 + 0x38);
  local_14 = *(undefined4 *)(DAT_100acc38 + 0x3c);
  local_10 = *(float *)(DAT_100acc38 + 0x40) - _DAT_1005acb0;
  *(undefined1 *)(DAT_100acc38 + 0xf0) = 0;
  *(undefined1 *)(DAT_100acc38 + 0x1f0) = 0x43;
  pcVar3 = (char *)(**(code **)(DAT_100acc38 + 0x4f5b8))
                             (*(undefined4 *)(DAT_100acc38 + 0xe0),&local_c,&local_18);
  if (pcVar3 != (char *)0x0) {
    if ((*pcVar3 == '-') || (*pcVar3 == '+')) {
      pcVar3 = pcVar3 + 2;
    }
    cVar1 = *pcVar3;
    if ((((cVar1 == '{') || (cVar1 == '!')) || (cVar1 == '~')) || (cVar1 == ' ')) {
      pcVar3 = pcVar3 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pcVar6 = pcVar3;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar3 = pcVar6 + -uVar4;
    pcVar6 = (char *)(DAT_100acc38 + 0xf0);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar3;
      pcVar3 = pcVar3 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    }
    *(undefined1 *)(DAT_100acc38 + 0xfc) = 0;
    uVar2 = FUN_10026910((byte *)(DAT_100acc38 + 0xf0));
    *(undefined1 *)(DAT_100acc38 + 0x1f0) = uVar2;
  }
  return;
}

