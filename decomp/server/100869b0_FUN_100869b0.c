
void FUN_100869b0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_20;
  float local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  fVar3 = *(float *)(DAT_10126a38 + 0x45468);
  fVar4 = *(float *)(DAT_10126a38 + 0x4546c);
  *(undefined4 *)(DAT_10126a38 + 0x1c) = 0;
  *(undefined4 *)(DAT_10126a38 + 0x28) = 0;
  FUN_10084210((float *)(DAT_10126a38 + 0x14));
  FUN_10084210((float *)(DAT_10126a38 + 0x20));
  pfVar5 = (float *)(DAT_10126a38 + 0x14);
  iVar7 = 2;
  pfVar6 = local_18;
  do {
    pfVar1 = pfVar5 + 3;
    fVar2 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    iVar7 = iVar7 + -1;
    *pfVar6 = fVar3 * fVar2 + fVar4 * *pfVar1;
    pfVar6 = pfVar6 + 1;
  } while (iVar7 != 0);
  local_18[2] = 0.0;
  local_18[3] = local_18[0];
  local_8 = local_18[1];
  local_4 = 0;
  fVar8 = (float10)FUN_10084210(local_18 + 3);
  local_20 = (float)fVar8;
  if (*(float *)(DAT_10126a38 + 500) < local_20) {
    FUN_10084280(local_18,*(float *)(DAT_10126a38 + 500) / local_20,local_18);
    local_20 = *(float *)(DAT_10126a38 + 500);
  }
  FUN_100865e0(local_18 + 3,local_20,*(float *)(*(int *)(DAT_10126a38 + 0x4f4f0) + 0x14));
  *(float *)(DAT_10126a38 + 0x5c) =
       *(float *)(DAT_10126a38 + 0x74) + *(float *)(DAT_10126a38 + 0x5c);
  *(float *)(DAT_10126a38 + 0x60) =
       *(float *)(DAT_10126a38 + 0x78) + *(float *)(DAT_10126a38 + 0x60);
  *(float *)(DAT_10126a38 + 100) = *(float *)(DAT_10126a38 + 0x7c) + *(float *)(DAT_10126a38 + 100);
  FUN_10085990();
  return;
}

