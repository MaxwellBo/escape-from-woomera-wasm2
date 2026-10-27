
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong __fastcall FUN_10025720(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  longlong lVar7;
  
  piVar3 = *(int **)(param_1 + 0x94);
  iVar5 = *piVar3;
  if (-1 < iVar5) {
    if (iVar5 < 2) {
      fVar1 = (float)piVar3[7];
      fVar2 = (float)piVar3[5];
      *(float *)(param_1 + 0xd4) = fVar1 + fVar2;
      if ((float)piVar3[5] <= *(float *)(param_1 + 0x98)) {
        if (*(float *)(param_1 + 0x98) <= fVar1 + fVar2) {
          *(undefined4 *)(param_1 + 0xcc) = 0;
        }
        else if ((float)piVar3[6] <= _DAT_10059a18) {
          *(undefined4 *)(param_1 + 0xcc) = 0xff;
        }
        else {
          lVar7 = __ftol();
          param_2 = (int)((ulonglong)lVar7 >> 0x20);
          *(int *)(param_1 + 0xcc) = (int)lVar7;
        }
      }
      else {
        lVar7 = __ftol();
        param_2 = (int)((ulonglong)lVar7 >> 0x20);
        *(int *)(param_1 + 0xcc) = (int)lVar7;
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
      iVar5 = *piVar3;
      if (iVar5 == 1) {
        uVar4 = FUN_1004ac80();
        iVar5 = (int)uVar4 / 100;
        param_2 = (int)uVar4 % 100;
        if (param_2 < 10) {
          *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
        }
      }
    }
    else if (iVar5 == 2) {
      fVar2 = (float)*(int *)(param_1 + 0xb8) * (float)piVar3[5] + (float)piVar3[7];
      fVar1 = *(float *)(param_1 + 0x98);
      uVar6 = (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
              (ushort)(fVar1 == fVar2) << 0xe;
      *(float *)(param_1 + 0xd4) = fVar2;
      if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
        fVar1 = (float)piVar3[6];
        uVar6 = (ushort)(fVar1 < _DAT_10059a18) << 8 |
                (ushort)(NAN(fVar1) || NAN(_DAT_10059a18)) << 10 |
                (ushort)(fVar1 == _DAT_10059a18) << 0xe;
        if (fVar1 >= _DAT_10059a18 && (fVar1 == _DAT_10059a18) == 0) {
          lVar7 = __ftol();
          *(int *)(param_1 + 0xcc) = (int)lVar7;
          return lVar7;
        }
      }
      *(undefined4 *)(param_1 + 0xcc) = 0;
      return CONCAT44(param_2,CONCAT22((short)((uint)fVar2 >> 0x10),uVar6));
    }
  }
  return CONCAT44(param_2,iVar5);
}

