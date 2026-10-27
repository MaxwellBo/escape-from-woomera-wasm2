
void __fastcall FUN_100a4a10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_100a3270(param_1);
  iVar2 = (*DAT_10121e5c)();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 0x80;
  }
  iVar1 = *(int *)(iVar2 + 0x208);
  if ((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 0x7c), puVar3 == (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*DAT_10121f04)(iVar1,200);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_100f3cb4;
    }
    puVar3[1] = iVar2;
  }
  *(undefined4 **)(param_1 + 0x164) = puVar3;
  FUN_10019420(puVar3 + 0x30,0);
  *(undefined4 *)(*(int *)(param_1 + 0x164) + 0xbc) = 0;
  *(int *)(*(int *)(param_1 + 0x164) + 0xb8) = param_1;
  **(int **)(*(int *)(param_1 + 0x164) + 4) =
       (int)s_inout_register_10119854 - *(int *)(DAT_10122044 + 0x98);
  return;
}

