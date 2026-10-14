
void __fastcall FUN_10017de0(void *param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  float10 fVar4;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  bVar3 = FUN_100995b0((int)param_1);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    fVar4 = FUN_10099970((byte)*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x1a0),
                         (float *)(*(int *)((int)param_1 + 4) + 0x50),
                         (float *)((int)param_1 + 0x168));
    *(float *)(*(int *)((int)param_1 + 4) + 0xac) =
         (float)(fVar4 / (float10)*(float *)((int)param_1 + 0xe4));
    FUN_10017eb0(param_1,*(float *)(*(int *)((int)param_1 + 4) + 0xac),1);
    iVar1 = *(int *)((int)param_1 + 4);
    fVar2 = *(float *)((int)param_1 + 0x54) - *(float *)(iVar1 + 0x100);
    fStack_4 = fVar2 * *(float *)(iVar1 + 100) + *(float *)(iVar1 + 0x58);
    fStack_8 = fVar2 * *(float *)(iVar1 + 0x60) + *(float *)(iVar1 + 0x54);
    fStack_c = fVar2 * *(float *)(iVar1 + 0x5c) + *(float *)(iVar1 + 0x50);
    fVar4 = FUN_10099970((byte)*(undefined4 *)(iVar1 + 0x1a0),&fStack_c,
                         (float *)((int)param_1 + 0x168));
    FUN_100180f0(param_1,(float)(fVar4 / (float10)*(float *)((int)param_1 + 0xe4)));
  }
  return;
}

