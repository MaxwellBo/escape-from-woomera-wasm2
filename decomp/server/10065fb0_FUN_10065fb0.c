
undefined4 __thiscall FUN_10065fb0(void *this,char *param_1)

{
  char cVar1;
  uint uVar2;
  void *extraout_ECX;
  
  cVar1 = *param_1;
  while( true ) {
    if ((cVar1 == '\0') || (*param_1 == '\n')) {
      return 0;
    }
    uVar2 = FUN_100c862b(this,(int)*param_1);
    if ((uVar2 == 0) || (uVar2 = FUN_100c867b((void *)(int)*param_1,(int)*param_1), uVar2 != 0))
    break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    this = extraout_ECX;
  }
  return 1;
}

