
void __cdecl FUN_100c7380(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  size_t sVar4;
  size_t _Count;
  char local_20 [32];
  
  uVar3 = 0xffffffff;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  for (sVar4 = ~uVar3 - 1; 0 < (int)sVar4; sVar4 = sVar4 - _Count) {
    _Count = sVar4;
    if (0x1e < (int)sVar4) {
      _Count = 0x1e;
    }
    _strncpy(local_20,param_2,_Count);
    local_20[_Count] = '\0';
    for (pcVar2 = local_20; pcVar2 != local_20 + _Count; pcVar2 = pcVar2 + 1) {
      if (*pcVar2 == -0x6e) {
        *pcVar2 = '\'';
      }
    }
    (*DAT_10121ec0)(2,DAT_101248f8,0,0);
    (*DAT_10121ec8)(param_1);
    (*DAT_10121ee0)(local_20);
    (*DAT_10121ec4)();
    param_2 = param_2 + _Count;
  }
  return;
}

