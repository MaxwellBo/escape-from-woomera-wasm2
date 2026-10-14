
void __cdecl FUN_1000aa90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)&DAT_100807e8 - (int)param_1;
  iVar2 = 3;
  do {
    *param_1 = *(undefined4 *)(iVar1 + (int)param_1);
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

