
void __cdecl FUN_100c6920(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_100c7450();
  if (cVar1 != '\0') {
    DAT_10134868 = param_1;
    return;
  }
  FUN_100c81a0(0,param_1);
  DAT_10134868 = 0xffffffff;
  return;
}

