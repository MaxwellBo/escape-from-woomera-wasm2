
float10 __cdecl FUN_100d6cc2(int param_1,double param_2,double param_3)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_101215c8 == 0) {
    fVar2 = FUN_100d7329(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_100d3f8f();
  *pDVar1 = 0x21;
  FUN_100d744b();
  return (float10)(param_2 + param_3);
}

