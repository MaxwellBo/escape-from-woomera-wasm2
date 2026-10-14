
undefined4 * __cdecl FUN_1004a472(LPCSTR param_1,char *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = FUN_1004e885();
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = FUN_1004e715(param_1,param_2,param_3,puVar1);
  FUN_1004dabd((uint)puVar1);
  return puVar2;
}

