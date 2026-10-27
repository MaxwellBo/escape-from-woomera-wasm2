
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d910(CBasePlayerItem *param_1)

{
  int iVar1;
  float10 fVar2;
  
  CBasePlayerItem::AttemptToMaterialize(param_1);
  (**(code **)(*(int *)param_1 + 0x178))();
  fVar2 = FUN_10018f40();
  if ((float10)*(float *)(param_1 + 0x100) <= fVar2) {
    if (*(int *)(*(int *)(param_1 + 0xdc) + 0x534 + *(int *)(param_1 + 0x104) * 4) != 0) {
      fVar2 = FUN_10018fb0(*(int *)(*(int *)(param_1 + 0xdc) + 0x308),0.0,0x3f800000);
      if ((fVar2 <= (float10)_DAT_10059a00) || (*(int *)(param_1 + 0x124) != 0)) {
        iVar1 = (-(uint)(*(int *)(param_1 + 0x10c) != 0) & 0xfffffff8) + 8;
        fVar2 = FUN_10018f40();
        fVar2 = fVar2 + (float10)_DAT_1005d8a0;
      }
      else {
        iVar1 = (-(uint)(*(int *)(param_1 + 0x10c) != 0) & 0xfffffff8) + 9;
        fVar2 = FUN_10018f40();
        fVar2 = fVar2 + (float10)_DAT_10059a28;
      }
      *(float *)(param_1 + 0x100) = (float)fVar2;
      (**(code **)(*(int *)param_1 + 0x17c))(iVar1,1,0);
      return;
    }
    fVar2 = FUN_10018f40();
    *(float *)(param_1 + 0x100) = (float)(fVar2 + (float10)_DAT_10059eb0);
  }
  return;
}

