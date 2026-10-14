
unkbyte10 FUN_1004f5b0(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  
  pcVar1 = (code *)swi(6);
  (*pcVar1)();
  Var2 = FUN_1004f080();
  return Var2;
}

