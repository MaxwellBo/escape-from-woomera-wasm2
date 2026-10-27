
void __cdecl FUN_100c3500(char *param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int local_2c [2];
  undefined1 local_24 [4];
  char *local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14 [4];
  undefined1 local_4;
  
  local_24[0] = param_2;
  uVar3 = 0xffffffff;
  pcVar5 = param_1;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_20 = (char *)0x0;
  local_1c = 0;
  local_18 = 0;
  uVar2 = FUN_100bbb30(local_24,uVar3,'\x01');
  if ((char)uVar2 != '\0') {
    pcVar5 = local_20;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar5 = *param_1;
      param_1 = param_1 + 1;
      pcVar5 = pcVar5 + 1;
    }
    local_20[uVar3] = '\0';
    local_1c = uVar3;
  }
  FUN_100ba1f0(local_14,local_24);
  local_4 = 0;
  FUN_100c3700(&DAT_10132c80,local_2c,local_14);
  FUN_100bacf0(local_14,'\x01');
  *(undefined1 *)(local_2c[0] + 0x1c) = param_2;
  if (local_20 != (char *)0x0) {
    cVar1 = local_20[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_20[-1] = cVar1 + -1;
      FUN_100c35e0();
      return;
    }
    FUN_100c8ce6(local_20 + -1);
  }
  FUN_100c35e0();
  return;
}

