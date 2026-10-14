
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10076250(int *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  float *pfVar4;
  float fVar5;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float afStack_c [3];
  
  iVar2 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8)));
  param_1[0x5c] = 0;
  if (iVar2 == 0) {
    (*DAT_10121efc)(1,s_Missing_train_target___s__10113f00,
                    *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1c8));
    return;
  }
  iVar2 = *(int *)(iVar2 + 4);
  *(undefined4 *)(param_1[1] + 0x1d4) = *(undefined4 *)(iVar2 + 0x1cc);
  *(undefined4 *)(param_1[1] + 0x1c8) = *(undefined4 *)(iVar2 + 0x1c8);
  iVar1 = param_1[1];
  param_1[0x5a] = iVar2;
  if (((*(float *)(iVar1 + 0x5c) != DAT_10121dd8) || (*(float *)(iVar1 + 0x60) != DAT_10121ddc)) ||
     (*(float *)(iVar1 + 100) != DAT_10121de0)) {
    param_1[0x5e] = *(int *)(iVar1 + 0x5c);
    param_1[0x5f] = *(int *)(iVar1 + 0x60);
    param_1[0x60] = *(int *)(iVar1 + 100);
    FUN_10063ac0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  }
  iVar1 = param_1[1];
  if ((*(byte *)(iVar1 + 0x1a0) & 2) == 0) {
    fStack_20 = (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * _DAT_100dd614;
    fStack_1c = (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * _DAT_100dd614;
    fStack_14 = *(float *)(iVar2 + 0xc) - fStack_20;
    fStack_10 = *(float *)(iVar2 + 0x10) - fStack_1c;
    FUN_10001d60(&fStack_18,
                 ((*(float *)(iVar2 + 8) -
                  (*(float *)(iVar1 + 0xe8) + *(float *)(iVar1 + 0xdc)) * _DAT_100dd614) +
                 (float)param_1[0x19]) - *(float *)(iVar1 + 8),
                 (fStack_14 + (float)param_1[0x1a]) - *(float *)(iVar1 + 0xc),
                 (fStack_10 + (float)param_1[0x1b]) - *(float *)(iVar1 + 0x10));
    param_1[0x19] = (int)fStack_18;
    param_1[0x1a] = (int)fStack_14;
    param_1[0x1b] = (int)fStack_10;
    if (param_1[4] == 0) {
      pfVar4 = afStack_c;
      fVar5 = 0.5;
      pvVar3 = (void *)FUN_1000b550((void *)(param_1[1] + 0xdc),&fStack_18,
                                    (float *)(param_1[1] + 0xe8));
      FUN_10002280(pvVar3,pfVar4,fVar5);
    }
    else {
      pfVar4 = &fStack_18;
      fVar5 = 0.5;
      pvVar3 = (void *)FUN_1000b550((void *)(param_1[1] + 0xdc),&fStack_24,
                                    (float *)(param_1[1] + 0xe8));
      pfVar4 = (float *)FUN_10002280(pvVar3,pfVar4,fVar5);
      FUN_10002250((float *)(iVar2 + 8),afStack_c,pfVar4);
    }
  }
  else {
    fStack_14 = (float)param_1[0x1a] + *(float *)(iVar2 + 0xc);
    fStack_10 = (float)param_1[0x1b] + *(float *)(iVar2 + 0x10);
    fStack_24 = (*(float *)(iVar2 + 8) + (float)param_1[0x19]) - *(float *)(iVar1 + 8);
    fStack_20 = fStack_14 - *(float *)(iVar1 + 0xc);
    fStack_1c = fStack_10 - *(float *)(iVar1 + 0x10);
    param_1[0x19] = (int)fStack_24;
    param_1[0x1a] = (int)fStack_20;
    param_1[0x1b] = (int)fStack_1c;
  }
  FUN_10063390((int)param_1);
  iVar2 = param_1[1];
  if ((*(int *)(iVar2 + 0x1cc) != 0) && ((*(uint *)(iVar2 + 0x1a0) & 4) == 0)) {
    *(uint *)(iVar2 + 0x1a0) = *(uint *)(iVar2 + 0x1a0) | 1;
    return;
  }
  (**(code **)(*param_1 + 8))(0x3fc00000);
  param_1[0x1d] = (int)CFuncTrain::ThinkDoNext;
  return;
}

