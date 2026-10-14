
void __cdecl FUN_10028f20(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1 * 2;
  iVar2 = *(int *)(&DAT_100aaf28 + iVar1 * 4);
  *(int *)(&DAT_100aaf28 + iVar1 * 4) = iVar2 + 1;
  iVar2 = iVar2 % 0x36;
  *param_3 = (&DAT_100aaba0)[iVar2 * 3];
  param_3[1] = (&DAT_100aaba4)[iVar2 * 3];
  param_3[2] = (&DAT_100aaba8)[iVar2 * 3];
  return;
}

