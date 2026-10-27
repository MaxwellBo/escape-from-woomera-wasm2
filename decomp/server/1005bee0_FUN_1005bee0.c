
void __fastcall FUN_1005bee0(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  lVar2 = __ftol();
  *(float *)(iVar1 + 0x1e0) = (float)(int)lVar2;
  FUN_1005ae70(param_1);
  return;
}

