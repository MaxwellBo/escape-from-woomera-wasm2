
void __fastcall FUN_100011f0(int *param_1)

{
  bool bVar1;
  
  if (param_1[0x48] != 0) {
    bVar1 = FUN_1000a1d0();
    if (bVar1) {
      FUN_10001220(param_1);
      return;
    }
  }
  FUN_100013e0(param_1);
  return;
}

