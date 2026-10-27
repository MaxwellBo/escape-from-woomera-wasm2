
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10083270(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined4 uStack_c;
  float fStack_8;
  
  iVar3 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                 *(int *)(*(int *)(param_1 + 4) + 0x1c8)));
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 4);
    iVar1 = *(int *)(param_1 + 4);
    fStack_18 = *(float *)(iVar3 + 8) - *(float *)(iVar1 + 8);
    fStack_8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc);
    fStack_10 = *(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10);
    fVar2 = SQRT(fStack_18 * fStack_18 + fStack_8 * fStack_8 + fStack_10 * fStack_10);
    if (fVar2 == _DAT_100dd5f8) {
      fStack_18 = 0.0;
      fStack_14 = 0.0;
      fStack_10 = 1.0;
    }
    else {
      fVar2 = _DAT_100dd618 / fVar2;
      fStack_18 = fVar2 * fStack_18;
      fStack_14 = fStack_8 * fVar2;
      fStack_10 = fStack_10 * fVar2;
    }
    puVar4 = (undefined4 *)FUN_100ae830(&uStack_c,&fStack_18);
    iVar3 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar3 + 0x74) = *puVar4;
    *(undefined4 *)(iVar3 + 0x78) = puVar4[1];
    *(undefined4 *)(iVar3 + 0x7c) = puVar4[2];
    *(float *)(*(int *)(param_1 + 4) + 0x74) = -*(float *)(*(int *)(param_1 + 4) + 0x74);
  }
  return;
}

