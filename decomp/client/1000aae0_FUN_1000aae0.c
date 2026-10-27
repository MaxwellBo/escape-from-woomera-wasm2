
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000aae0(int *param_1,int param_2,int param_3,double param_4,undefined4 param_5)

{
  float fVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int *local_4;
  
  piVar8 = param_1;
  local_4 = (int *)0x0;
  FUN_1000a880();
  *DAT_1007f7f8 = (float)param_4;
  switch(param_1[0x6f]) {
  case 1:
    local_4 = (int *)&DAT_10086ed8;
    break;
  case 2:
    local_4 = (int *)&DAT_10085c78;
    break;
  case 3:
    local_4 = (int *)&DAT_10080468;
    break;
  case 4:
    local_4 = (int *)&DAT_10080338;
    break;
  case 6:
    local_4 = (int *)&DAT_1007fb88;
    break;
  case 7:
    local_4 = (int *)&DAT_10080208;
    break;
  case 8:
    local_4 = (int *)&DAT_100806b8;
    break;
  case 9:
    local_4 = (int *)&DAT_10087158;
    break;
  case 10:
    local_4 = (int *)&DAT_1007fde0;
    break;
  case 0xb:
    local_4 = (int *)&DAT_10086da8;
    break;
  case 0xc:
    local_4 = (int *)&DAT_10080598;
    break;
  case 0xd:
    local_4 = (int *)&DAT_1007f800;
    break;
  case 0xe:
    local_4 = (int *)&DAT_10087038;
    break;
  case 0xf:
    local_4 = (int *)&DAT_100866a0;
    break;
  case 0x10:
    local_4 = (int *)&DAT_100800d8;
    break;
  case 0x11:
    local_4 = (int *)&DAT_10086440;
    break;
  case 0x12:
    local_4 = (int *)&DAT_1007fcb0;
    break;
  case 0x13:
    local_4 = (int *)&DAT_10086878;
    break;
  case 0x14:
    local_4 = (int *)&DAT_10087290;
    break;
  case 0x15:
    local_4 = (int *)&DAT_1007fa58;
    break;
  case 0x16:
    local_4 = (int *)&DAT_1007f928;
    break;
  case 0x17:
    local_4 = (int *)&DAT_1007ffa8;
    break;
  case 0x18:
    local_4 = &DAT_10086570;
  }
  DAT_100a5184 = param_2;
  if (DAT_100a5180 != 0) {
    if ((_DAT_10059a18 < *(float *)(param_2 + 0x194)) || (DAT_100807f4 < 1)) {
      if ((_DAT_10059a18 < *(float *)(param_2 + 0x194)) && (DAT_100807f4 < 1)) {
        FUN_1000a840(0x10085da0);
      }
    }
    else {
      FUN_1000a820(0x10085da0);
    }
    lVar10 = __ftol();
    DAT_100807f4 = (int)lVar10;
  }
  if (local_4 != (int *)0x0) {
    param_1 = &DAT_1007ff28;
    piVar6 = piVar8 + 0xd2;
    do {
      iVar4 = *param_1;
      if (iVar4 != 0) {
        *(int *)(iVar4 + 0x118) = piVar6[-1];
        *(int *)(iVar4 + 0xf4) = *piVar6;
        *(int *)(iVar4 + 0x10c) = piVar6[-5];
        *(int *)(iVar4 + 0xf8) = piVar6[-4];
        *(int *)(iVar4 + 0xfc) = piVar6[-3];
        *(int *)(iVar4 + 0x100) = piVar6[-2];
        *(int *)(*(int *)(iVar4 + 4) + 0x254) = piVar6[0xc];
        *(int *)(iVar4 + 0xa4) = piVar6[0xd];
        *(int *)(iVar4 + 0xa8) = piVar6[0xe];
        *(int *)(iVar4 + 0xac) = piVar6[8];
        *(int *)(iVar4 + 0xb0) = piVar6[9];
        *(int *)(iVar4 + 0xb4) = piVar6[10];
        lVar10 = __ftol();
        *(int *)(iVar4 + 0x108) = (int)lVar10;
        lVar10 = __ftol();
        *(int *)(iVar4 + 0x104) = (int)lVar10;
        lVar11 = __ftol();
        *(int *)(&DAT_100862d4 + (int)lVar10 * 4) = (int)lVar11;
        lVar10 = __ftol();
        *(int *)(&DAT_100862d4 + *(int *)(iVar4 + 0x108) * 4) = (int)lVar10;
      }
      param_1 = param_1 + 1;
      piVar6 = piVar6 + 0x16;
    } while ((int)param_1 < 0x1007ffa8);
    _DAT_100860a8 = param_5;
    _DAT_100860cc = piVar8[0x33];
    _DAT_100860d4 = *(ushort *)(param_3 + 0x1e) ^ _DAT_100860cc;
    _DAT_100860d0 = *(ushort *)(param_3 + 0x1e) & _DAT_100860d4;
    _DAT_100860d4 = ~(uint)*(ushort *)(param_3 + 0x1e) & _DAT_100860d4;
    *(uint *)(DAT_10085da4 + 0x180) = (uint)*(ushort *)(param_3 + 0x1e);
    iVar4 = DAT_10085da4;
    *(int *)(DAT_10085da4 + 0x20) = piVar8[0x58];
    *(int *)(iVar4 + 0x24) = piVar8[0x59];
    *(int *)(iVar4 + 0x28) = piVar8[0x5a];
    *(int *)(DAT_10085da4 + 0x1a4) = piVar8[0x5f];
    *(int *)(DAT_10085da4 + 0x170) = piVar8[0x77];
    *(int *)(DAT_10085da4 + 0x1c0) = piVar8[0x60];
    DAT_1008656c = *(undefined4 *)(DAT_10085da4 + 0x1c0);
    *(int *)(DAT_10085da4 + 0x210) = piVar8[0x6c];
    *(int *)(DAT_10085da4 + 0x214) = piVar8[0x6d];
    *(int *)(DAT_10085da4 + 0x218) = piVar8[0x6e];
    *(int *)(DAT_10085da4 + 0xbc) = piVar8[0x5b];
    DAT_1008605c = (float)piVar8[0x74];
    DAT_10086438 = piVar8[0xbd];
    DAT_10086430 = piVar8[0xbe];
    lVar10 = __ftol();
    _DAT_10085e24 = (int)lVar10;
    lVar10 = __ftol();
    _DAT_10085e28 = (int)lVar10;
    lVar10 = __ftol();
    _DAT_10085e40 = (int)lVar10;
    DAT_10085e2c = piVar8[0x71];
    DAT_10085e30 = piVar8[0x70];
    DAT_10085e38 = piVar8[0x72];
    lVar10 = __ftol();
    _DAT_10085e3c = (int)lVar10;
    DAT_10085e34 = piVar8[0x73];
    if (piVar8[0x6f] != 0) {
      DAT_100862c8 = (int *)(&DAT_1007ff28)[piVar8[0x6f]];
    }
    piVar6 = DAT_100862c8;
    if (DAT_100862c8[0x39] == 8) {
      lVar10 = __ftol();
      piVar6[0x49] = (int)lVar10;
      lVar10 = __ftol();
      DAT_100862c8[0x4a] = (int)lVar10;
    }
    if ((((*(int *)(DAT_10085da4 + 0x170) != 5) &&
         (bVar2 = FUN_100236b0(), CONCAT31(extraout_var,bVar2) == 0)) &&
        (*(int *)(DAT_10085da4 + 0xbc) != 0)) && (DAT_1008605c <= _DAT_10059a18)) {
      (**(code **)(*local_4 + 0x140))();
    }
    *(int *)(param_2 + 0x1bc) = piVar8[0x6f];
    if (((*(byte *)(param_3 + 0x21) != 0) && (*(int *)(DAT_10085da4 + 0x170) != 5)) &&
       ((uVar3 = (uint)*(byte *)(param_3 + 0x21), piVar8[uVar3 * 0x16 + 0xcc] == uVar3 &&
        ((piVar6 = (int *)(&DAT_1007ff28)[uVar3], piVar6 != (int *)0x0 && (piVar6 != local_4)))))) {
      if (DAT_100862c8 != (int *)0x0) {
        (**(code **)(*DAT_100862c8 + 0x134))(0);
      }
      _DAT_100862d0 = DAT_100862c8;
      DAT_100862c8 = piVar6;
      (**(code **)(*piVar6 + 300))();
      *(uint *)(param_2 + 0x1bc) = (uint)*(byte *)(param_3 + 0x21);
    }
    *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(DAT_10085da4 + 0xbc);
    *(undefined4 *)(param_2 + 0x1b4) = *(undefined4 *)(DAT_10085da4 + 0x214);
    *(undefined4 *)(param_2 + 0x1b8) = *(undefined4 *)(DAT_10085da4 + 0x218);
    *(float *)(param_2 + 0x1d0) = DAT_1008605c;
    *(int *)(param_2 + 0x2f4) = DAT_10086438;
    *(int *)(param_2 + 0x2f8) = DAT_10086430;
    *(undefined4 *)(param_2 + 0x1b0) = *(undefined4 *)(DAT_10085da4 + 0x210);
    *(float *)(param_2 + 0x300) = (float)_DAT_10085e24;
    *(float *)(param_2 + 0x304) = (float)_DAT_10085e28;
    *(float *)(param_2 + 0x308) = (float)_DAT_10085e40;
    *(int *)(param_2 + 0x1c4) = DAT_10085e2c;
    *(int *)(param_2 + 0x1c0) = DAT_10085e30;
    *(int *)(param_2 + 0x1c8) = DAT_10085e38;
    *(float *)(param_2 + 0x30c) = (float)_DAT_10085e3c;
    *(int *)(param_2 + 0x1cc) = DAT_10085e34;
    if (DAT_100862c8[0x39] == 8) {
      piVar8[0xc4] = (int)(float)DAT_100862c8[0x49];
      piVar8[0xc5] = (int)(float)DAT_100862c8[0x4a];
    }
    if ((DAT_100a5180 != 0) && (iVar4 = FUN_10018e60(), iVar4 != *(int *)(param_2 + 0x1b8))) {
      uVar7 = 2;
      if (local_4 == (int *)&DAT_1007f800) {
        uVar7 = 0;
      }
      if ((local_4 == (int *)&DAT_10080468) && (bVar2 = FUN_1000a1d0(), bVar2)) {
        uVar7 = 1;
      }
      FUN_10018e30(*(undefined4 *)(param_2 + 0x1b8),uVar7,1);
    }
    piVar8 = &DAT_1007ff28;
    puVar5 = (undefined4 *)(param_2 + 0x348);
    do {
      iVar4 = *piVar8;
      if (iVar4 == 0) {
        puVar9 = puVar5 + -6;
        for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
      }
      else {
        puVar5[-1] = *(undefined4 *)(iVar4 + 0x118);
        *puVar5 = *(undefined4 *)(iVar4 + 0xf4);
        puVar5[-5] = *(undefined4 *)(iVar4 + 0x10c);
        puVar5[-4] = *(undefined4 *)(iVar4 + 0xf8);
        puVar5[-3] = *(undefined4 *)(iVar4 + 0xfc);
        puVar5[-2] = *(undefined4 *)(iVar4 + 0x100);
        puVar5[0xc] = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x254);
        puVar5[0xd] = *(undefined4 *)(iVar4 + 0xa4);
        puVar5[0xe] = *(undefined4 *)(iVar4 + 0xa8);
        puVar5[8] = *(undefined4 *)(iVar4 + 0xac);
        puVar5[9] = *(undefined4 *)(iVar4 + 0xb0);
        puVar5[10] = *(undefined4 *)(iVar4 + 0xb4);
        puVar5[1] = (float)puVar5[1] - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
        puVar5[5] = (float)puVar5[5] - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
        puVar5[-4] = (float)puVar5[-4] - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
        puVar5[-3] = (float)puVar5[-3] - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
        puVar5[-2] = (float)puVar5[-2] - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
        puVar5[0xc] = (float)puVar5[0xc] - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
        *(float *)(param_2 + 800) = (float)*(int *)(iVar4 + 0x108);
        *(float *)(param_2 + 0x324) = (float)*(int *)(iVar4 + 0x104);
        *(float *)(param_2 + 0x328) = (float)*(int *)(&DAT_100862d4 + *(int *)(iVar4 + 0x104) * 4);
        *(float *)(param_2 + 0x32c) = (float)*(int *)(&DAT_100862d4 + *(int *)(iVar4 + 0x108) * 4);
        if ((float)puVar5[5] < (float)_DAT_1005d2b8) {
          puVar5[5] = 0xbf800000;
        }
        if ((float)puVar5[-4] < (float)_DAT_1005d2b8) {
          puVar5[-4] = 0xbf800000;
        }
        if ((float)puVar5[-3] < (float)_DAT_1005d2b0) {
          puVar5[-3] = 0xba83126f;
        }
        if ((float)puVar5[-2] < (float)_DAT_1005d2b0) {
          puVar5[-2] = 0xba83126f;
        }
        if ((float)puVar5[1] < (float)_DAT_1005d2b0) {
          puVar5[1] = 0xba83126f;
        }
        if ((float)puVar5[0xc] < (float)_DAT_1005d2b0) {
          puVar5[0xc] = 0xba83126f;
        }
      }
      piVar8 = piVar8 + 1;
      puVar5 = puVar5 + 0x16;
    } while ((int)piVar8 < 0x1007ffa8);
    fVar1 = *(float *)(param_2 + 0x1d0) - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
    *(float *)(param_2 + 0x1d0) = fVar1;
    if (fVar1 < (float)_DAT_1005d2b0) {
      *(undefined4 *)(param_2 + 0x1d0) = 0xba83126f;
    }
    fVar1 = *(float *)(param_2 + 0x2f4) - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
    *(float *)(param_2 + 0x2f4) = fVar1;
    if (fVar1 < (float)_DAT_1005d2b0) {
      *(undefined4 *)(param_2 + 0x2f4) = 0xba83126f;
    }
    fVar1 = *(float *)(param_2 + 0x2f8) - (float)*(byte *)(param_3 + 2) * (float)_DAT_1005d2c0;
    *(float *)(param_2 + 0x2f8) = fVar1;
    if (fVar1 < (float)_DAT_1005d2b0) {
      *(undefined4 *)(param_2 + 0x2f8) = 0xba83126f;
    }
    FUN_1000aab0();
    DAT_100a5184 = 0;
  }
  return;
}

