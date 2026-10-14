
undefined4 * __thiscall FUN_100dabe4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_100fa590;
  param_1[0xd] = 0xffffffff;
  param_1[10] = 6;
  *(undefined1 *)(param_1 + 0xb) = 0x20;
  param_1[2] = (-(uint)(param_2 != 0) & 0xfffffffc) + 4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  FUN_100db53a((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar1 = DAT_10134e70;
  DAT_10134e70 = DAT_10134e70 + 1;
  if (iVar1 == 0) {
    FUN_100db53a((LPCRITICAL_SECTION)&DAT_10134e38);
  }
  return param_1;
}

