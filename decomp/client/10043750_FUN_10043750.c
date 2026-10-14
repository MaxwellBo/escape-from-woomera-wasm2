
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10043750(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float fStack_90;
  int iStack_80;
  int local_64 [24];
  
  iVar6 = DAT_100a4dd0;
  iVar8 = DAT_100a4dcc;
  local_64[1] = 0x100;
  local_64[8] = 0x100;
  local_64[9] = 0x100;
  local_64[10] = 0x100;
  local_64[0xc] = 0x100;
  local_64[0xe] = 0x100;
  local_64[0x11] = 0x100;
  iVar10 = 0;
  local_64[0] = 0;
  local_64[2] = 0;
  local_64[3] = 0x200;
  local_64[4] = 0;
  local_64[5] = 0x300;
  local_64[6] = 0;
  local_64[7] = 0;
  local_64[0xb] = 0x200;
  local_64[0xd] = 0x300;
  local_64[0xf] = 0;
  local_64[0x10] = 0x200;
  local_64[0x12] = 0x200;
  local_64[0x13] = 0x200;
  local_64[0x14] = 0x200;
  local_64[0x15] = 0x300;
  local_64[0x16] = 0x200;
  iStack_80 = (*DAT_100a4ff4)(DAT_1007ab5c);
  if (0xc < iStack_80) {
    iStack_80 = 0xc;
  }
  uVar7 = (*DAT_100a50e8)(param_1);
  (**(code **)(DAT_100a5138 + 4))(0);
  (**(code **)(DAT_100a5138 + 0x28))(1);
  (**(code **)(DAT_100a5138 + 0x10))(0x437f0000,0x437f0000,0x437f0000,0x3f800000);
  if (0 < iStack_80) {
    piVar11 = local_64;
    iVar9 = (iVar8 + -800) / 2;
    fVar1 = (float)iVar9 + _DAT_1005d410;
    iVar8 = (iVar6 + -600) / 2;
    do {
      (**(code **)(DAT_100a5138 + 0x2c))(uVar7,iVar10);
      fVar2 = (float)(piVar11[-1] + iVar9);
      fVar3 = fVar2 + _DAT_10064d38;
      fStack_90 = (float)(*piVar11 + iVar8);
      fVar4 = fStack_90 - _DAT_10064d3c;
      fStack_90 = fStack_90 + _DAT_10064d38;
      if (fVar1 <= fVar3) {
        fVar3 = fVar1;
      }
      fVar5 = (float)iVar8 + _DAT_10064d34;
      if (fVar5 <= fStack_90) {
        fStack_90 = fVar5;
      }
      fVar2 = (fVar2 - _DAT_10064d3c) - _DAT_10059a18;
      fVar3 = fVar3 - _DAT_10059a18;
      (**(code **)(DAT_100a5138 + 8))(2);
      (**(code **)(DAT_100a5138 + 0x18))(0,0);
      (**(code **)(DAT_100a5138 + 0x20))(fVar2,fVar4,0x3f000000);
      (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0);
      (**(code **)(DAT_100a5138 + 0x20))(fVar3,fVar4,0x3f000000);
      (**(code **)(DAT_100a5138 + 0x18))(0x3f800000,0x3f800000);
      (**(code **)(DAT_100a5138 + 0x20))(fVar3,fStack_90,0x3f000000);
      (**(code **)(DAT_100a5138 + 0x18))(0,0x3f800000);
      (**(code **)(DAT_100a5138 + 0x20))(fVar2,fStack_90,0x3f000000);
      (**(code **)(DAT_100a5138 + 0xc))();
      iVar10 = iVar10 + 1;
      piVar11 = piVar11 + 2;
    } while (iVar10 < iStack_80);
  }
  return;
}

