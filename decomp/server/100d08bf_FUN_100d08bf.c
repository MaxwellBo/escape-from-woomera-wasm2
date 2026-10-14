
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * __cdecl FUN_100d08bf(uint *param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint *puVar2;
  uint local_8c [34];
  
  if (param_1 == (uint *)0x0) {
LAB_100d0965:
    puVar2 = (uint *)0x0;
  }
  else {
    if (((char)*param_1 == 'C') && (*(char *)((int)param_1 + 1) == '\0')) {
      *(undefined1 *)((int)param_2 + 1) = 0;
      *(undefined1 *)param_2 = 0x43;
      if (param_3 != (undefined4 *)0x0) {
        *(undefined2 *)param_3 = 0;
        *(undefined2 *)((int)param_3 + 2) = 0;
        *(undefined2 *)(param_3 + 1) = 0;
      }
      if (param_4 == (undefined4 *)0x0) {
        return param_2;
      }
      *param_4 = 0;
      return param_2;
    }
    iVar1 = _strcmp(&DAT_10120898,(char *)param_1);
    if ((iVar1 != 0) && (iVar1 = _strcmp(&DAT_10120814,(char *)param_1), iVar1 != 0)) {
      puVar2 = param_1;
      iVar1 = FUN_100d09ff((char *)local_8c,(byte *)param_1);
      if ((iVar1 != 0) ||
         (iVar1 = FUN_100d53ea(puVar2,(char *)local_8c,(undefined2 *)&DAT_10134a4c,(int)local_8c),
         iVar1 == 0)) goto LAB_100d0965;
      _DAT_10134a54 = (uint)DAT_10134a50;
      FUN_100d0acb((uint *)&DAT_10120898,local_8c);
      if ((char)*param_1 == '\0') {
        param_1 = (uint *)&DAT_10120898;
      }
      FUN_100d2d10((uint *)&DAT_10120814,param_1);
    }
    if (param_3 != (undefined4 *)0x0) {
      FUN_100d0170(param_3,(undefined4 *)&DAT_10134a4c,6);
    }
    if (param_4 != (undefined4 *)0x0) {
      FUN_100d0170(param_4,(undefined4 *)&DAT_10134a54,4);
    }
    FUN_100d2d10(param_2,(uint *)&DAT_10120898);
    puVar2 = (uint *)&DAT_10120898;
  }
  return puVar2;
}

