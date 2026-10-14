
int __cdecl FUN_100090c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xcc) < param_3) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0xd0) + param_3 * 0x4c + param_1;
  iVar1 = *(int *)(iVar2 + 0x40);
  if (iVar1 < 2) {
    return 0;
  }
  return (*(int *)(param_2 + 0x114) / *(int *)(iVar2 + 0x44)) % iVar1;
}

