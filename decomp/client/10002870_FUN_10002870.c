
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10002870(CBasePlayerItem *param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  (**(code **)(*(int *)param_1 + 0x178))();
  if (*(float *)(param_1 + 0x100) <= *DAT_1007f7f8) {
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_10002930(param_1);
    }
    fVar2 = (float10)(*DAT_1007f03c)(0,0x3f800000);
    fVar1 = (float10)_DAT_100599f0;
    if (fVar1 < fVar2) {
      fVar4 = FUN_10018f40();
      fVar4 = fVar4 + (float10)_DAT_10059eb8;
    }
    else {
      fVar3 = FUN_10018fb0(*(int *)(*(int *)(param_1 + 0xdc) + 0x308),10.0,0x41700000);
      fVar4 = FUN_10018f40();
      fVar4 = fVar4 + (float10)(float)fVar3;
    }
    *(float *)(param_1 + 0x100) = (float)fVar4;
    (**(code **)(*(int *)param_1 + 0x17c))(fVar1 < fVar2,1,0);
    *(undefined4 *)(param_1 + 0x140) = 1;
  }
  return;
}

