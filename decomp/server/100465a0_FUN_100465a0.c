
void __fastcall FUN_100465a0(int param_1)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 3;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
  (*DAT_10121e08)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0xb8));
  (*DAT_10121e10)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),
                  *(int *)(*(int *)(param_1 + 4) + 0xb8) + *(int *)(DAT_10122044 + 0x98));
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(iVar1 + 0xb8);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(iVar1 + 0xb4);
  FUN_100afe10(param_1,iVar1 + 8);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x41800000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(code **)(param_1 + 0x78) = CBasePlayerItem::DefaultTouch;
  return;
}

