
void FUN_1004d7c0(void)

{
  FUN_1004ca1f();
  if (DAT_1007be10 != 0xffffffff) {
    TlsFree(DAT_1007be10);
    DAT_1007be10 = 0xffffffff;
  }
  return;
}

