
unkbyte10 FUN_100cc290(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  Var2 = FUN_100cbd60();
  return Var2;
}

