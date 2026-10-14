
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005294d(void)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int local_c;
  int local_8;
  
  if (DAT_100be190 == 0) {
    FUN_10055825();
  }
  GetModuleFileNameA((HMODULE)0x0,&DAT_100bcb24,0x104);
  _DAT_100bca30 = &DAT_100bcb24;
  pbVar2 = &DAT_100bcb24;
  if (*DAT_100be184 != 0) {
    pbVar2 = DAT_100be184;
  }
  FUN_100529e6(pbVar2,(undefined4 *)0x0,(byte *)0x0,&local_8,&local_c);
  puVar1 = _malloc(local_c + local_8 * 4);
  if (puVar1 == (undefined4 *)0x0) {
    __amsg_exit(8);
  }
  FUN_100529e6(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_c);
  _DAT_100bca18 = puVar1;
  _DAT_100bca14 = local_8 + -1;
  return;
}

