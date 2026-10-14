
void __fastcall FUN_10033340(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_100333b0((int)param_1);
  if (iVar1 != 0) {
    FUN_10039020(iVar1);
    if (*(void **)(iVar1 + 0xbc) != (void *)0x0) {
      piVar2 = (int *)FUN_10039070(*(void **)(iVar1 + 0xbc),iVar1);
      FUN_10033340(piVar2);
    }
  }
  (**(code **)(*param_1 + 0x234))(1);
  return;
}

