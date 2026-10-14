
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10020de0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_24;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_4;
  
  bVar8 = *(int *)(param_1 + 0xc98) == 0;
  uVar7 = (*DAT_100a50e8)(*(undefined4 *)(param_1 + 0xc8c));
  if (bVar8) {
    iStack_30 = 8;
    iStack_24 = 6;
  }
  else {
    lVar9 = __ftol();
    iStack_30 = (int)lVar9 * 4;
    iStack_24 = (int)lVar9 * 3;
  }
  fVar1 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x24);
  fVar4 = (_DAT_1005afb0 - *(float *)(param_1 + 0x964)) * _DAT_10060158 * *(float *)(param_1 + 0x34)
  ;
  (**(code **)(DAT_100a5138 + 4))(2);
  (**(code **)(DAT_100a5138 + 0x28))(1);
  (**(code **)(DAT_100a5138 + 0x10))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  iStack_34 = 0;
  fVar5 = (_DAT_100599f8 / *(float *)(param_1 + 0x2c)) / (float)iStack_30;
  if (*(int *)(param_1 + 0x138) == 0) {
    fVar5 = -fVar5;
    fVar3 = *(float *)(param_1 + 0x2c) * _DAT_10060154;
    fVar6 = _DAT_100599f8 / fVar3;
    fStack_38 = _DAT_10060150 / fVar3 + fVar1;
    iStack_4 = iStack_24;
    if (0 < iStack_24) {
      do {
        fStack_3c = _DAT_10060150 / *(float *)(param_1 + 0x2c) + fVar2;
        if (0 < iStack_30) {
          fVar1 = fStack_38 + fVar5;
          iStack_10 = iStack_30;
          do {
            if (bVar8) {
              (**(code **)(DAT_100a5138 + 0x2c))(uVar7,0);
            }
            else {
              (**(code **)(DAT_100a5138 + 0x2c))(*(undefined4 *)(param_1 + 0xc98),iStack_34);
            }
            (**(code **)(DAT_100a5138 + 8))(2);
            (**(code **)(DAT_100a5138 + 0x18))(0,0);
            (**(code **)(DAT_100a5138 + 0x20))(fStack_38,fStack_3c,fVar4);
            (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
            (**(code **)(DAT_100a5138 + 0x20))(fVar1,fStack_3c,fVar4);
            (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
            fStack_3c = fStack_3c + -(fVar6 / (float)iStack_24);
            (**(code **)(DAT_100a5138 + 0x20))(fVar1,fStack_3c,fVar4);
            (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
            (**(code **)(DAT_100a5138 + 0x20))(fStack_38,fStack_3c,fVar4);
            (**(code **)(DAT_100a5138 + 0xc))();
            iStack_34 = iStack_34 + 1;
            iStack_10 = iStack_10 + -1;
          } while (iStack_10 != 0);
        }
        fStack_38 = fStack_38 + fVar5;
        iStack_4 = iStack_4 + -1;
      } while (iStack_4 != 0);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x2c) * _DAT_10060154;
    fVar6 = -((_DAT_100599f8 / fVar3) / (float)iStack_24);
    fStack_3c = _DAT_10060150 / fVar3 + fVar2;
    iStack_14 = iStack_24;
    if (0 < iStack_24) {
      do {
        if (0 < iStack_30) {
          fVar2 = fStack_3c + fVar6;
          fStack_38 = fVar1 - _DAT_10060150 / *(float *)(param_1 + 0x2c);
          iStack_18 = iStack_30;
          do {
            if (bVar8) {
              (**(code **)(DAT_100a5138 + 0x2c))(uVar7,0);
            }
            else {
              (**(code **)(DAT_100a5138 + 0x2c))(*(undefined4 *)(param_1 + 0xc98),iStack_34);
            }
            (**(code **)(DAT_100a5138 + 8))(2);
            (**(code **)(DAT_100a5138 + 0x18))(0,0);
            (**(code **)(DAT_100a5138 + 0x20))(fStack_38,fStack_3c,fVar4);
            (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
            fVar3 = fStack_38 + fVar5;
            (**(code **)(DAT_100a5138 + 0x20))(fVar3,fStack_3c,fVar4);
            (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
            (**(code **)(DAT_100a5138 + 0x20))(fVar3,fVar2,fVar4);
            (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
            (**(code **)(DAT_100a5138 + 0x20))(fStack_38,fVar2,fVar4);
            (**(code **)(DAT_100a5138 + 0xc))();
            iStack_34 = iStack_34 + 1;
            iStack_18 = iStack_18 + -1;
            fStack_38 = fVar3;
          } while (iStack_18 != 0);
        }
        fStack_3c = fStack_3c + fVar6;
        iStack_14 = iStack_14 + -1;
      } while (iStack_14 != 0);
      return;
    }
  }
  return;
}

