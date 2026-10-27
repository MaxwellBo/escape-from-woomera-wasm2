
void __cdecl FUN_10086e20(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1 * 2;
  iVar2 = *(int *)(&DAT_10124d28 + iVar1 * 4);
  *(int *)(&DAT_10124d28 + iVar1 * 4) = iVar2 + 1;
  iVar2 = iVar2 % 0x36;
  *param_3 = (&DAT_101249a0)[iVar2 * 3];
  param_3[1] = (&DAT_101249a4)[iVar2 * 3];
  param_3[2] = (&DAT_101249a8)[iVar2 * 3];
  return;
}

