
undefined4 __thiscall
FUN_10025140(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  size_t sVar8;
  char *local_4;
  
  local_4 = (char *)0x0;
  FUN_10026030(param_3,param_2);
  iVar2 = FUN_100260d0();
  *(int *)((int)this + 0x18) = iVar2;
  iVar2 = FUN_10026050();
  uVar3 = FUN_10026090();
  if (iVar2 < 1) {
    *(undefined4 *)((int)this + 0x1c) = 0xbf800000;
  }
  else {
    *(float *)((int)this + 0x1c) = (float)iVar2 + DAT_100a3a64;
  }
  if (*(int *)((int)this + 0x18) == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffffe;
    *(uint *)((int)this + 0x20) = uVar3;
    return 1;
  }
  if (*(int *)((int)this + 0x20) == 0) {
    sVar8 = 0x200;
    pcVar4 = FUN_10026180();
    _strncpy(&DAT_100a9ad4,pcVar4,sVar8);
  }
  else {
    uVar5 = 0xffffffff;
    pcVar4 = &DAT_100a9ad4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    sVar8 = 0x200 - (~uVar5 - 1);
    pcVar4 = FUN_10026180();
    _strncat(&DAT_100a9ad4,pcVar4,sVar8);
  }
  DAT_100a9cd3 = 0;
  if (uVar3 == 0) {
    pcVar4 = FUN_10030c20(&DAT_100a9ad4);
    uVar5 = 0xffffffff;
    do {
      pcVar7 = pcVar4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar7;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar4 = pcVar7 + -uVar5;
    pcVar7 = &DAT_100a9cd4;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
      pcVar4 = pcVar4 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar7 = pcVar7 + 1;
    }
    iVar2 = FUN_100229c0();
    if (iVar2 != 0) {
      uVar5 = 0xffffffff;
      do {
        pcVar4 = local_4;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar4 = local_4 + 1;
        cVar1 = *local_4;
        local_4 = pcVar4;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar4 = pcVar4 + -uVar5;
      pcVar7 = &DAT_100a9cd4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar7 = pcVar7 + 1;
      }
      FUN_1004ad7e((undefined *)0x0);
    }
  }
  *(undefined4 *)((int)this + 0x14) = 1;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  *(uint *)((int)this + 0x20) = uVar3;
  return 1;
}

