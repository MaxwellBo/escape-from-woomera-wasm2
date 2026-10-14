
char __cdecl FUN_10011da0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\0';
  iVar2 = 0;
  do {
    cVar1 = cVar1 + *(char *)(iVar2 + param_1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return cVar1;
}

