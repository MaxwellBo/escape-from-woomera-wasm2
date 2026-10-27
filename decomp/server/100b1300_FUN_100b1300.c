
uint FUN_100b1300(char *param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = 0;
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    uVar3 = (uVar3 >> 4 | uVar3 << 0x1c) ^ (int)cVar2;
    pcVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    cVar2 = *pcVar1;
  }
  return uVar3;
}

