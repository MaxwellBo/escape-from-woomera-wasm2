
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100286e0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(DAT_100acc38 + 0xd0) == 0) && (*(float *)(DAT_100acc38 + 0xcc) == _DAT_10059a18)) {
    fVar2 = param_2;
    if (_DAT_1005c370 < param_2) {
      fVar2 = _DAT_1005c370;
    }
    fVar2 = fVar2 - (*(float *)(DAT_100acc38 + 0x5c) * *param_1 +
                    *(float *)(DAT_100acc38 + 0x60) * param_1[1] +
                    *(float *)(DAT_100acc38 + 100) * param_1[2]);
    if (_DAT_10059a18 < fVar2) {
      fVar1 = *(float *)(DAT_100acc38 + 0xc4) * *(float *)(DAT_100acc38 + 0x10) * param_2 * param_3;
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
      }
      iVar3 = 0x5c;
      do {
        iVar4 = iVar3 + 4;
        *(float *)(iVar3 + DAT_100acc38) =
             fVar1 * *(float *)((int)param_1 + iVar3 + -0x5c) + *(float *)(iVar3 + DAT_100acc38);
        iVar3 = iVar4;
      } while (iVar4 < 0x68);
    }
  }
  return;
}

