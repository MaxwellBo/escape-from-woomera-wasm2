
int __cdecl FUN_1004e19a(uint param_1,char *param_2,char *param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100bd160) &&
     ((*(byte *)((&DAT_100bd060)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10053ece(param_1);
    iVar1 = FUN_1004e1ff(param_1,param_2,param_3);
    FUN_10053f2d(param_1);
    return iVar1;
  }
  pDVar2 = FUN_1004ddc4();
  *pDVar2 = 9;
  pDVar2 = FUN_1004ddcd();
  *pDVar2 = 0;
  return -1;
}

