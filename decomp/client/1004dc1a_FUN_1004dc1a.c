
int __cdecl FUN_1004dc1a(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1004dc48(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_10053f4f(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

