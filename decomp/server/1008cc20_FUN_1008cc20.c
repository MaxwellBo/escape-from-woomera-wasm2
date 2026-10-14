
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008cc20(void *param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = FUN_100ae400();
  *(float *)(*(int *)((int)param_1 + 0xdc) + 700) = (float)(fVar1 + (float10)_DAT_100dd628);
  fVar1 = FUN_100ae4b0(*(int *)(*(int *)((int)param_1 + 0xdc) + 0x308),10.0,0x41700000);
  fVar2 = FUN_100ae400();
  *(float *)((int)param_1 + 0x100) = (float)(fVar2 + (float10)(float)fVar1);
  if (*(int *)((int)param_1 + 0xac) != 0) {
    FUN_100b4130(param_1,0x101155bc,0x10115588,2,&DAT_1010ee40,0,0);
    return;
  }
  FUN_100b4130(param_1,0x101155d8,0x101155a4,2,&DAT_101155f0,0,0);
  return;
}

