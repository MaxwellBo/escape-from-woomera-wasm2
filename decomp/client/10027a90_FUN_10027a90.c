
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10027a90(void)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int aiStackY_168 [12];
  undefined4 uStackY_138;
  undefined1 *puStackY_134;
  uint local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  int aiStack_d0 [4];
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_8c [18];
  undefined1 local_44 [68];
  
  iVar5 = 0;
  local_108 = *(float *)(DAT_100acc38 + 0x5c);
  local_104 = *(undefined4 *)(DAT_100acc38 + 0x60);
  local_100 = *(undefined4 *)(DAT_100acc38 + 100);
  local_e8 = *(float *)(DAT_100acc38 + 0x5c);
  local_e4 = *(float *)(DAT_100acc38 + 0x60);
  local_e0 = *(float *)(DAT_100acc38 + 100);
  local_10c = *(float *)(DAT_100acc38 + 0x10);
  local_110 = 0;
  local_fc = 0.0;
  local_ec = 0;
  do {
    if (((*(float *)(DAT_100acc38 + 0x5c) == _DAT_10059a18) &&
        (*(float *)(DAT_100acc38 + 0x60) == _DAT_10059a18)) &&
       (*(float *)(DAT_100acc38 + 100) == _DAT_10059a18)) break;
    iVar6 = 3;
    pfVar1 = (float *)(DAT_100acc38 + 0x38);
    pfVar3 = local_8c;
    do {
      iVar6 = iVar6 + -1;
      *pfVar3 = local_10c * pfVar1[9] + *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar6 != 0);
    puStackY_134 = local_44;
    uStackY_138 = 0x10027b55;
    piVar2 = (int *)(**(code **)(DAT_100acc38 + 0x4f580))();
    piVar7 = aiStack_d0;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar7 = piVar7 + 1;
    }
    local_fc = fStack_c0 + local_fc;
    if (aiStack_d0[0] != 0) {
      *(undefined4 *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
      return 4;
    }
    iVar6 = iVar5;
    if (_DAT_10059a18 < fStack_c0) {
      *(undefined4 *)(DAT_100acc38 + 0x38) = uStack_bc;
      *(undefined4 *)(DAT_100acc38 + 0x3c) = uStack_b8;
      *(undefined4 *)(DAT_100acc38 + 0x40) = uStack_b4;
      local_108 = *(float *)(DAT_100acc38 + 0x5c);
      local_104 = *(undefined4 *)(DAT_100acc38 + 0x60);
      local_100 = *(undefined4 *)(DAT_100acc38 + 100);
      iVar6 = 0;
    }
    if (fStack_c0 == _DAT_10059eb0) break;
    piVar2 = aiStack_d0;
    piVar7 = aiStackY_168;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar7 = piVar7 + 1;
    }
    FUN_10027780();
    if ((float)_DAT_1005d770 < fStack_a8) {
      local_110 = local_110 | 1;
    }
    if (fStack_a8 == _DAT_10059a18) {
      local_110 = local_110 | 2;
    }
    local_10c = local_10c - fStack_c0 * local_10c;
    if (4 < iVar6) {
      *(undefined4 *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
      break;
    }
    iVar5 = iVar6 + 1;
    local_8c[iVar6 * 3 + 3] = fStack_b0;
    local_8c[iVar6 * 3 + 4] = fStack_ac;
    local_8c[iVar6 * 3 + 5] = fStack_a8;
    if ((*(int *)(DAT_100acc38 + 0xdc) != 3) ||
       ((*(int *)(DAT_100acc38 + 0xe0) != -1 && (*(int *)(DAT_100acc38 + 0xc4) == 0x3f800000)))) {
      iVar6 = 0;
      if (0 < iVar5) {
        pfVar1 = local_8c;
        do {
          pfVar1 = pfVar1 + 3;
          puStackY_134 = (undefined1 *)0x10027da5;
          FUN_10027910(&local_108,pfVar1,(float *)(DAT_100acc38 + 0x5c),1.0);
          iVar4 = 0;
          pfVar3 = local_8c + 4;
          do {
            if ((iVar4 != iVar6) &&
               (*(float *)(DAT_100acc38 + 0x60) * *pfVar3 +
                pfVar3[-1] * *(float *)(DAT_100acc38 + 0x5c) +
                pfVar3[1] * *(float *)(DAT_100acc38 + 100) < _DAT_10059a18)) break;
            iVar4 = iVar4 + 1;
            pfVar3 = pfVar3 + 3;
          } while (iVar4 < iVar5);
          if (iVar4 == iVar5) break;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar5);
      }
      if (iVar6 == iVar5) {
        if (iVar5 == 2) {
          FUN_10026480(local_8c + 3,local_8c + 6,&fStack_dc);
          FUN_10031290(&fStack_dc,
                       fStack_dc * *(float *)(DAT_100acc38 + 0x5c) +
                       fStack_d8 * *(float *)(DAT_100acc38 + 0x60) +
                       fStack_d4 * *(float *)(DAT_100acc38 + 100),(float *)(DAT_100acc38 + 0x5c));
          goto LAB_10027e53;
        }
      }
      else {
LAB_10027e53:
        if (_DAT_10059a18 <
            local_e8 * *(float *)(DAT_100acc38 + 0x5c) +
            local_e4 * *(float *)(DAT_100acc38 + 0x60) + local_e0 * *(float *)(DAT_100acc38 + 100))
        goto LAB_10027e7d;
      }
      *(undefined4 *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
      *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
      *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
      break;
    }
    if (0 < iVar5) {
      pfVar1 = local_8c;
      iVar6 = iVar5;
      do {
        pfVar1 = pfVar1 + 3;
        if (pfVar1[2] <= (float)_DAT_1005d770) {
          puStackY_134 = (undefined1 *)0x10027d32;
          FUN_10027910(&local_108,pfVar1,&fStack_f8,
                       (_DAT_10059eb0 - *(float *)(DAT_100acc38 + 0xc4)) *
                       *(float *)(*(int *)(DAT_100acc38 + 0x4f4f0) + 0x2c) + (float)_DAT_10059a10);
        }
        else {
          puStackY_134 = (undefined1 *)0x10027ce6;
          FUN_10027910(&local_108,pfVar1,&fStack_f8,1.0);
          local_108 = fStack_f8;
          local_104 = uStack_f4;
          local_100 = uStack_f0;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(float *)(DAT_100acc38 + 0x5c) = fStack_f8;
    *(undefined4 *)(DAT_100acc38 + 0x60) = uStack_f4;
    *(undefined4 *)(DAT_100acc38 + 100) = uStack_f0;
    local_100 = uStack_f0;
    local_108 = fStack_f8;
    local_104 = uStack_f4;
LAB_10027e7d:
    local_ec = local_ec + 1;
  } while (local_ec < 4);
  if (local_fc == _DAT_10059a18) {
    *(undefined4 *)(DAT_100acc38 + 0x5c) = DAT_100aab14;
    *(undefined4 *)(DAT_100acc38 + 0x60) = DAT_100aab18;
    *(undefined4 *)(DAT_100acc38 + 100) = DAT_100aab1c;
  }
  return local_110;
}

