
void __cdecl FUN_10030c90(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  pcVar3 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((param_1[~uVar2 - 2] == '\n') || (param_1[~uVar2 - 2] == '\r')) {
    param_1[~uVar2 - 2] = '\0';
  }
  return;
}

