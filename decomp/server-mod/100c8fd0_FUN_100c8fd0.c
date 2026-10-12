
undefined4 * __cdecl FUN_100c8fd0(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_100cfeb0();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_100cfd40(param_1,param_2,param_3,puVar1);
  FUN_100cf9c6((uint)puVar1);
  return puVar2;
}

