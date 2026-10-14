
unkbyte10 FUN_1004f2a0(void)

{
  code *pcVar1;
  unkbyte10 Var2;
  
  pcVar1 = (code *)swi(6);
  Var2 = (*pcVar1)();
  FUN_1004f080();
  return Var2;
}

