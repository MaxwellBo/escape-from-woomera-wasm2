
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008bbc0(void *param_1)

{
  void *pvVar1;
  float10 fVar2;
  float10 fVar3;
  
  if ((*(int *)((int)param_1 + 0x10c) != 1) && (0 < *(int *)(*(int *)((int)param_1 + 0xdc) + 0x94)))
  {
    fVar2 = FUN_100ae400();
    *(float *)((int)param_1 + 0xf8) = (float)(fVar2 + (float10)_DAT_100dd648);
    if ((*(int *)((int)param_1 + 0x128) == 0) || (*(int *)((int)param_1 + 0x124) == 0)) {
      if ((*(void **)((int)param_1 + 0x120) != (void *)0x0) && (*(int *)((int)param_1 + 0x124) != 0)
         ) {
        FUN_1008b140(*(void **)((int)param_1 + 0x120),2.1);
        fVar2 = FUN_100ae400();
        *(float *)((int)param_1 + 0xfc) = (float)(fVar2 + (float10)_DAT_100effa8);
      }
      pvVar1 = param_1;
      if (*(int *)((int)param_1 + 0x10c) == 0) {
        pvVar1 = (void *)FUN_100b4210(param_1,1,2,2.0);
      }
      if (pvVar1 != (void *)0x0) {
        fVar2 = FUN_100ae4b0(*(int *)(*(int *)((int)param_1 + 0xdc) + 0x308),10.0,0x41700000);
        fVar3 = FUN_100ae400();
        *(float *)((int)param_1 + 0x100) = (float)(fVar3 + (float10)(float)fVar2);
      }
    }
  }
  return;
}

