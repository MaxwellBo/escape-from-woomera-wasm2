
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d820(CBasePlayerItem *param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x10c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x314) = 1000;
    *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x31c) = 0x200;
    (*DAT_1007f0bc)(1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xdc) + 4) + 0x208),
                    *(undefined2 *)(param_1 + 300),0,&DAT_1007f110,&DAT_1007f110,0,0,0,0,0,0);
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + -1;
    fVar1 = FUN_10018f40();
    *(float *)(param_1 + 0xf8) = (float)(fVar1 + (float10)_DAT_1005d898);
    fVar1 = FUN_10018f40();
    *(float *)(param_1 + 0x100) = (float)(fVar1 + (float10)_DAT_1005d898);
    CBasePlayerItem::AttemptToMaterialize(param_1);
    return;
  }
  (**(code **)(*(int *)param_1 + 0x174))();
  CBasePlayerItem::AttemptToMaterialize(param_1);
  return;
}

