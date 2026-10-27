
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d1ab4(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_10136218 == 0) {
    FUN_100d6144();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_10134a80,0x104);
  _DAT_101349a8 = &DAT_10134a80;
  pbVar2 = &DAT_10134a80;
  if (*DAT_1013620c != 0) {
    pbVar2 = DAT_1013620c;
  }
  FUN_100d1b4d(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100d1b4d(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_10134990 = puVar1;
  _DAT_1013498c = local_8 + -1;
  return;
}

