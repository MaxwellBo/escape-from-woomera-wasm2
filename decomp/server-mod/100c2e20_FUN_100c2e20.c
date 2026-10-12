
void __cdecl FUN_100c2e20(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = FUN_100c2c00((int)param_2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_100c97a0(puVar1,puVar1 + 2,((int)&DAT_10132468 + (DAT_10132c70 * 8 - (int)puVar1) >> 3) << 3
                );
    DAT_10132c70 = DAT_10132c70 + -1;
  }
  iVar2 = (**(code **)(*param_1 + 0xcc))();
  if (iVar2 != 0) {
    FUN_100c2c30(param_1,param_2);
  }
  return;
}

