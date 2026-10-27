
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000d510(void *param_1)

{
  void *pvVar1;
  float10 fVar2;
  float10 fVar3;
  
  if ((*(int *)((int)param_1 + 0x10c) != 1) && (0 < *(int *)(*(int *)((int)param_1 + 0xdc) + 0x94)))
  {
    fVar2 = FUN_10018f40();
    *(float *)((int)param_1 + 0xf8) = (float)(fVar2 + (float10)_DAT_100599f0);
    if ((*(int *)((int)param_1 + 0x128) == 0) || (*(int *)((int)param_1 + 0x124) == 0)) {
      pvVar1 = param_1;
      if (*(int *)((int)param_1 + 0x10c) == 0) {
        pvVar1 = (void *)FUN_1000a2a0(param_1,1,2,2.0,0);
      }
      if (pvVar1 != (void *)0x0) {
        fVar2 = FUN_10018fb0(*(int *)(*(int *)((int)param_1 + 0xdc) + 0x308),10.0,0x41700000);
        fVar3 = FUN_10018f40();
        *(float *)((int)param_1 + 0x100) = (float)(fVar3 + (float10)(float)fVar2);
      }
    }
  }
  return;
}

