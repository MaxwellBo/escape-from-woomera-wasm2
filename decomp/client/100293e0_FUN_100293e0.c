
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100293e0(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_e0 [5];
  undefined4 uStackY_cc;
  float *pfStackY_c8;
  int iStackY_c4;
  undefined4 uStackY_c0;
  undefined4 uStackY_bc;
  undefined4 uStackY_b8;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [3];
  float local_78 [4];
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50 [3];
  undefined4 auStack_44 [4];
  float fStack_34;
  
  iVar7 = 0;
  if (*(int *)(DAT_100acc38 + 0x4f5b0) != 0) {
    DAT_100b6fec = 1;
  }
  if ((*(int *)(DAT_100acc38 + 0x1fc) == 3) || (*(int *)(DAT_100acc38 + 0x200) == 0)) {
    if (DAT_100bcdcc != 0) {
      *(undefined4 *)(DAT_100acc38 + 0x38) = DAT_100bcdf0;
      *(undefined4 *)(DAT_100acc38 + 0x3c) = _DAT_100bcdf4;
      *(undefined4 *)(DAT_100acc38 + 0x40) = _DAT_100bcdf8;
      *(undefined4 *)(DAT_100acc38 + 0x44) = _DAT_100bcde0;
      *(undefined4 *)(DAT_100acc38 + 0x48) = _DAT_100bcde4;
      *(undefined4 *)(DAT_100acc38 + 0x4c) = _DAT_100bcde8;
      *(float *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
      DAT_100bcdcc = 0;
      return;
    }
    fVar12 = FUN_100264c0((float *)(DAT_100acc38 + 0x5c));
    if ((float10)_DAT_10059eb0 <= fVar12) {
      iVar7 = *(int *)(DAT_100acc38 + 0x4f4f0);
      fVar13 = fVar12;
      if (fVar12 < (float10)*(float *)(iVar7 + 4)) {
        fVar13 = (float10)*(float *)(iVar7 + 4);
      }
      fVar13 = fVar12 - fVar13 * (float10)*(float *)(DAT_100acc38 + 0x10) *
                        (float10)*(float *)(iVar7 + 0x1c) * (float10)_DAT_1005d898;
      if (fVar13 < (float10)_DAT_10059a18) {
        fVar13 = (float10)_DAT_10059a18;
      }
      FUN_10031290((float *)(DAT_100acc38 + 0x5c),(float)(fVar13 / fVar12),
                   (float *)(DAT_100acc38 + 0x5c));
    }
    else {
      *(float *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
    }
    local_78[3] = *(float *)(DAT_100acc38 + 0x45468);
    local_88 = *(float *)(DAT_100acc38 + 0x4546c);
    FUN_100264f0((float *)(DAT_100acc38 + 0x14));
    FUN_100264f0((float *)(DAT_100acc38 + 0x20));
    pfVar5 = (float *)(DAT_100acc38 + 0x14);
    iVar7 = 3;
    pfVar8 = local_78;
    do {
      pfVar1 = pfVar5 + 3;
      fVar2 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      iVar7 = iVar7 + -1;
      *pfVar8 = local_78[3] * fVar2 + local_88 * *pfVar1;
      pfVar8 = pfVar8 + 1;
    } while (iVar7 != 0);
    local_84[2] = local_78[2] + *(float *)(DAT_100acc38 + 0x45470);
    local_84[0] = local_78[0];
    local_84[1] = local_78[1];
    local_78[2] = local_84[2];
    fVar12 = (float10)FUN_100264f0(local_84);
    iVar7 = *(int *)(DAT_100acc38 + 0x4f4f0);
    if ((float10)*(float *)(iVar7 + 0xc) < fVar12) {
      FUN_10031290(local_78,(float)((float10)*(float *)(iVar7 + 0xc) / fVar12),local_78);
      iVar7 = *(int *)(DAT_100acc38 + 0x4f4f0);
      fVar12 = (float10)*(float *)(iVar7 + 0xc);
    }
    fVar13 = fVar12 - ((float10)local_84[0] * (float10)*(float *)(DAT_100acc38 + 0x5c) +
                      (float10)local_84[1] * (float10)*(float *)(DAT_100acc38 + 0x60) +
                      (float10)local_84[2] * (float10)*(float *)(DAT_100acc38 + 100));
    local_88 = (float)fVar13;
    if ((float10)_DAT_10059a18 < fVar13) {
      fVar12 = (float10)*(float *)(iVar7 + 0x10) * (float10)*(float *)(DAT_100acc38 + 0x10) * fVar12
      ;
      if ((float10)local_88 < fVar12) {
        fVar12 = (float10)local_88;
      }
      iVar7 = 0x5c;
      do {
        iVar6 = iVar7 + 4;
        *(float *)(iVar7 + DAT_100acc38) =
             (float)(fVar12 * (float10)*(float *)((int)afStackY_e0 + iVar7) +
                    (float10)*(float *)(iVar7 + DAT_100acc38));
        iVar7 = iVar6;
      } while (iVar6 < 0x68);
      uStackY_b8 = 0x10029b2d;
      FUN_100312c0((float *)(DAT_100acc38 + 0x38),*(float *)(DAT_100acc38 + 0x10),
                   (float *)(DAT_100acc38 + 0x5c),(float *)(DAT_100acc38 + 0x38));
      return;
    }
  }
  else {
    iVar6 = *(int *)(DAT_100acc38 + 0x24c);
    iVar9 = 0;
    if (0 < iVar6) {
      piVar10 = (int *)(DAT_100acc38 + 0x2a0);
      do {
        if (*piVar10 == *(int *)(DAT_100acc38 + 0x200)) break;
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 0x38;
      } while (iVar9 < iVar6);
    }
    if (iVar9 == iVar6) {
      if (*(int *)(DAT_100acc38 + 0x4f5b0) != 0) {
        *(undefined4 *)(DAT_100acc38 + 0x38) = DAT_100b6f88;
        *(undefined4 *)(DAT_100acc38 + 0x3c) = DAT_100b6f8c;
        *(undefined4 *)(DAT_100acc38 + 0x40) = DAT_100b6f90;
        *(float *)(DAT_100acc38 + 0x44) = DAT_100b6764;
        *(float *)(DAT_100acc38 + 0x48) = DAT_100b6768;
        *(float *)(DAT_100acc38 + 0x4c) = DAT_100b676c;
        *(float *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
        *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
        *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
        DAT_100b6fc8 = 1;
        DAT_100b6ff0 = 1;
        return;
      }
    }
    else {
      local_68 = DAT_100aab14;
      local_64 = DAT_100aab18;
      local_60 = DAT_100aab1c;
      iVar6 = *(int *)(DAT_100acc38 + 0x1fc);
      if ((iVar6 == 4) && (*(int *)(DAT_100acc38 + 0x204) != 0)) {
        iVar3 = *(int *)(DAT_100acc38 + 0x24c);
        iVar7 = 0;
        if (0 < iVar3) {
          piVar10 = (int *)(DAT_100acc38 + 0x2a0);
          do {
            if (*piVar10 == *(int *)(DAT_100acc38 + 0x204)) break;
            iVar7 = iVar7 + 1;
            piVar10 = piVar10 + 0x38;
          } while (iVar7 < iVar3);
        }
        if (iVar7 == iVar3) {
          iVar7 = -1;
        }
      }
      if (iVar6 == 1) {
        iVar7 = iVar9 * 0xe0 + DAT_100acc38;
        local_90 = *(float *)(iVar7 + 0x2a8);
        local_8c = *(float *)(iVar7 + 0x2ac);
        local_94 = 0.0;
        if (*(int *)(DAT_100acc38 + 0x4f5b0) != 0) {
          DAT_100b6fec = DAT_100b6fec | 6;
        }
      }
      else if (iVar6 == 4) {
        if (iVar7 < 1) {
          if (iVar7 == -1) {
            local_94 = DAT_100b6764;
            local_90 = DAT_100b6768;
            local_8c = DAT_100b676c;
          }
          else {
            iVar7 = iVar9 * 0xe0 + DAT_100acc38;
            local_94 = *(float *)(iVar7 + 0x2a4);
            local_8c = *(float *)(iVar7 + 0x2ac);
            local_90 = *(float *)(iVar7 + 0x2a8) * _DAT_10060240;
          }
        }
        else {
          iVar7 = iVar7 * 0xe0;
          iVar6 = iVar9 * 0xe0 + DAT_100acc38;
          local_94 = *(float *)(iVar7 + 0x274 + DAT_100acc38) - *(float *)(iVar6 + 0x274);
          local_90 = *(float *)(iVar7 + 0x278 + DAT_100acc38) - *(float *)(iVar6 + 0x278);
          local_8c = *(float *)(iVar7 + 0x27c + DAT_100acc38) - *(float *)(iVar6 + 0x27c);
          FUN_10031190(&local_94,&local_94);
          if ((DAT_100bcddc & 0x20) == 0) {
            local_94 = -local_94 + _DAT_1006024c;
          }
          else {
            local_94 = -local_94 - _DAT_1006024c;
          }
          if ((DAT_100bcddc & 0x10) == 0) {
            local_90 = local_90 - _DAT_10060248;
          }
          else {
            local_90 = local_90 + _DAT_10060248;
          }
          uStackY_b8 = 0x10029665;
          FUN_10029310(&local_94,iVar9,&local_68,local_50);
          uStackY_b8 = 0xffffffff;
          uStackY_bc = 2;
          uStackY_c0 = 1;
          iStackY_c4 = iVar7 + 0x274 + DAT_100acc38;
          pfStackY_c8 = local_50;
          uStackY_cc = 0x10029683;
          puVar4 = (undefined4 *)(**(code **)(DAT_100acc38 + 0x4f584))();
          puVar11 = auStack_44;
          for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar11 = puVar11 + 1;
          }
          if (fStack_34 != (float)_DAT_10059a10) {
            if ((DAT_100bcddc & 0x10) == 0) {
              local_90 = local_90 + _DAT_10060244;
            }
            else {
              local_90 = local_90 - _DAT_10060244;
            }
          }
        }
        if (*(int *)(DAT_100acc38 + 0x4f5b0) != 0) {
          DAT_100b6fec = DAT_100b6fec | 6;
          uStackY_b8 = 0x100296f9;
          FUN_10026370((float *)&DAT_100ab028,&local_94,&local_94,0.1);
          _DAT_100ab028 = local_94;
          _DAT_100ab02c = local_90;
          _DAT_100ab030 = local_8c;
        }
      }
      else {
        local_94 = *(float *)(DAT_100acc38 + 0x44);
        local_90 = *(float *)(DAT_100acc38 + 0x48);
        local_8c = *(float *)(DAT_100acc38 + 0x4c);
      }
      uStackY_b8 = 0x100297b7;
      FUN_10029310(&local_94,iVar9,&local_68,&local_5c);
      *(float *)(DAT_100acc38 + 0x38) = local_5c;
      *(undefined4 *)(DAT_100acc38 + 0x3c) = local_58;
      *(undefined4 *)(DAT_100acc38 + 0x40) = local_54;
      *(float *)(DAT_100acc38 + 0x44) = local_94;
      *(float *)(DAT_100acc38 + 0x48) = local_90;
      *(float *)(DAT_100acc38 + 0x4c) = local_8c;
      *(float *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
      if (*(int *)(DAT_100acc38 + 0x4f5b0) != 0) {
        DAT_100b6764 = (float)*(undefined4 *)(DAT_100acc38 + 0x44);
        DAT_100b6768 = (float)*(undefined4 *)(DAT_100acc38 + 0x48);
        DAT_100b676c = (float)*(undefined4 *)(DAT_100acc38 + 0x4c);
        DAT_100b6fc8 = 1;
        DAT_100b6f88 = *(undefined4 *)(DAT_100acc38 + 0x38);
        DAT_100b6f8c = *(undefined4 *)(DAT_100acc38 + 0x3c);
        DAT_100b6f90 = *(undefined4 *)(DAT_100acc38 + 0x40);
        DAT_100b6ff0 = 1;
        return;
      }
    }
  }
  return;
}

