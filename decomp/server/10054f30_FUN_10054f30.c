
void __fastcall FUN_10054f30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  local_18 = 0x41800000;
  local_14 = 0x41800000;
  local_10 = 0x41800000;
  local_c = 0xc1800000;
  local_8 = 0xc1800000;
  local_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&local_c,&local_18);
  *(code **)(param_1 + 0x78) = CItem::ItemTouch;
  iVar2 = (*DAT_10121e70)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  if (iVar2 == 0) {
    piVar1 = *(int **)(param_1 + 4);
    (*DAT_10121efc)(4,s_Item__s_fell_out_of_level_at__f__1010fa50,
                    *(int *)(DAT_10122044 + 0x98) + *piVar1,(double)(float)piVar1[2],
                    (double)(float)piVar1[3],(double)(float)piVar1[4]);
    FUN_100b0ef0(param_1);
  }
  return;
}

