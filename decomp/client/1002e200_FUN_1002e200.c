
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002e200(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float *pfVar5;
  
  iVar3 = *(int *)(param_2 + 0x304);
  if (0xe < iVar3) {
    if (iVar3 < 0x11) {
      iVar3 = (*DAT_100a5100)(0,0x31);
      if (iVar3 == 0) {
        iVar3 = (*DAT_100a5100)(0,1);
        if (iVar3 == 1) {
          iVar3 = 2;
        }
        pfVar1 = (float *)(iVar3 * 0x10 + param_3);
        pfVar5 = pfVar1;
        fVar4 = (float10)(*DAT_100a50fc)(0x3f800000,0x3fbdf3b6);
        FUN_10031290(pfVar1,(float)fVar4,pfVar5);
        return;
      }
      iVar3 = (*DAT_100a5100)(0,0x31);
      if (iVar3 == 0) {
        (*DAT_100a5100)(0,1);
        fVar4 = (float10)(*DAT_100a50fc)(0xc1200000,0x41200000);
        iVar3 = (*DAT_100a5100)(0,2);
        *(float *)(iVar3 * 0x10 + 0xc + param_3) =
             (float)fVar4 + *(float *)(iVar3 * 0x10 + 0xc + param_3);
      }
    }
    else if (iVar3 == 0x12) {
      fVar2 = ((float)*(double *)(param_1 + 8) - *(float *)(param_2 + 0x30c)) * (float)_DAT_1005acb8
              + (float)_DAT_10059a10;
      if (_DAT_10059ea0 < fVar2) {
        fVar2 = _DAT_10059ea0;
      }
      *(float *)(param_3 + 4) = fVar2 * *(float *)(param_3 + 4);
      *(float *)(param_3 + 0x14) = fVar2 * *(float *)(param_3 + 0x14);
      *(float *)(param_3 + 0x24) = fVar2 * *(float *)(param_3 + 0x24);
      return;
    }
  }
  return;
}

