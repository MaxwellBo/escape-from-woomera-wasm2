
void __cdecl FUN_100c6890(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &DAT_10134444 + DAT_10134870;
  for (piVar2 = &DAT_10134444; (piVar1 != piVar2 && (*piVar2 != param_1)); piVar2 = piVar2 + 1) {
  }
  if (piVar2 == piVar1) {
    *piVar1 = param_1;
    FUN_100c75e0((undefined4 *)&DAT_10132c98);
    if (param_2 == 0) {
      FUN_100c81a0(0,DAT_10134870);
    }
    else if (param_2 == 1) {
      FUN_100c6920(DAT_10134870);
    }
    DAT_10134870 = DAT_10134870 + 1;
    FUN_100c80d0();
  }
  return;
}

