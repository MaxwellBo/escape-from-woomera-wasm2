
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1009b850(void *param_1,byte *param_2,float param_3,void *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 != (byte *)0x0) {
    FUN_100c80d0();
    FUN_1009b910(param_1,param_3);
    _DAT_10131064 = param_3 + *DAT_10122044 + (float)_DAT_100e4138;
    uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
    if (*param_2 == 0x21) {
      iVar2 = FUN_1009b130((int)param_1);
      FUN_10094b20(param_4,uVar1,2,(char *)param_2,param_4,param_5,0,iVar2);
      *(uint *)((int)param_1 + 0x308) = *(uint *)((int)param_1 + 0x308) | 8;
      return;
    }
    FUN_1009b130((int)param_1);
    FUN_100945d0(uVar1,param_2);
    *(uint *)((int)param_1 + 0x308) = *(uint *)((int)param_1 + 0x308) | 8;
  }
  return;
}

