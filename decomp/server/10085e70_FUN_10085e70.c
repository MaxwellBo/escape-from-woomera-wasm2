
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10085e70(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (((*(int *)(DAT_10126a38 + 0xd0) == 0) && (*(float *)(DAT_10126a38 + 0xcc) == _DAT_100dd5f8))
     && (fVar2 = param_2 - (*(float *)(DAT_10126a38 + 0x5c) * *param_1 +
                           *(float *)(DAT_10126a38 + 0x60) * param_1[1] +
                           *(float *)(DAT_10126a38 + 100) * param_1[2]), _DAT_100dd5f8 < fVar2)) {
    fVar1 = *(float *)(DAT_10126a38 + 0xc4) * *(float *)(DAT_10126a38 + 0x10) * param_2 * param_3;
    if (fVar2 < fVar1) {
      fVar1 = fVar2;
    }
    iVar3 = 0x5c;
    do {
      iVar4 = iVar3 + 4;
      *(float *)(iVar3 + DAT_10126a38) =
           fVar1 * *(float *)((int)param_1 + iVar3 + -0x5c) + *(float *)(iVar3 + DAT_10126a38);
      iVar3 = iVar4;
    } while (iVar4 < 0x68);
  }
  return;
}

