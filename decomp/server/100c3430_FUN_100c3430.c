
undefined1 __cdecl FUN_100c3430(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int local_2c [2];
  undefined1 local_24 [4];
  char *local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14 [4];
  undefined1 local_4;
  
  local_24[0] = param_1._0_1_;
  uVar4 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_20 = (char *)0x0;
  local_1c = 0;
  local_18 = 0;
  uVar3 = FUN_100bbb30(local_24,uVar4,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar6 = local_20;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar6 = *param_1;
      param_1 = param_1 + 1;
      pcVar6 = pcVar6 + 1;
    }
    local_20[uVar4] = '\0';
    local_1c = uVar4;
  }
  FUN_100ba1f0(local_14,local_24);
  local_4 = 0;
  FUN_100c3700(&DAT_10132c80,local_2c,local_14);
  FUN_100bacf0(local_14,'\x01');
  uVar2 = *(undefined1 *)(local_2c[0] + 0x1c);
  if (local_20 != (char *)0x0) {
    cVar1 = local_20[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_20[-1] = cVar1 + -1;
      return uVar2;
    }
    FUN_100c8ce6(local_20 + -1);
  }
  return uVar2;
}

