
int __cdecl FUN_100cfc09(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_100cfc37(param_1);
  if (iVar1 != 0) {
    return -1;
  }
  if ((*(byte *)((int)param_1 + 0xd) & 0x40) != 0) {
    iVar1 = FUN_100d4329(param_1[4]);
    return -(uint)(iVar1 != 0);
  }
  return 0;
}

