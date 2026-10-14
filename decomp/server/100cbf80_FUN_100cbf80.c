
unkbyte10 FUN_100cbf80(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  FUN_100cbd60();
  return Var2;
}

