
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10019d90(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x10c) == 4) &&
     (((*(float *)(param_1 + 0x50) != _DAT_100dd5f8 || (*(float *)(param_1 + 0x54) != _DAT_100dd5f8)
       ) || (*(float *)(param_1 + 0x58) != _DAT_100dd5f8)))) {
    pfVar2 = (float *)(param_1 + 0xe8);
    iVar3 = 3;
    fVar1 = _DAT_100dd5f8;
    do {
      if (fVar1 < ABS(pfVar2[-3])) {
        fVar1 = ABS(pfVar2[-3]);
      }
      if (fVar1 < ABS(*pfVar2)) {
        fVar1 = ABS(*pfVar2);
      }
      pfVar2 = pfVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 3;
    pfVar2 = (float *)(param_1 + 8);
    do {
      iVar3 = iVar3 + -1;
      pfVar2[0x2f] = *pfVar2 - fVar1;
      pfVar2[0x32] = fVar1 + *pfVar2;
      pfVar2 = pfVar2 + 1;
    } while (iVar3 != 0);
  }
  else {
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 200) = *(float *)(param_1 + 0xe0) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 8);
    *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xf0) + *(float *)(param_1 + 0x10);
  }
  *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - _DAT_100dd618;
  *(float *)(param_1 + 200) = *(float *)(param_1 + 200) - _DAT_100dd618;
  *(float *)(param_1 + 0xcc) = *(float *)(param_1 + 0xcc) - _DAT_100dd618;
  *(float *)(param_1 + 0xd0) = *(float *)(param_1 + 0xd0) + _DAT_100dd618;
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xd4) + _DAT_100dd618;
  *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + _DAT_100dd618;
  return;
}

