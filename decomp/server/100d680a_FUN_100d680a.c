
undefined4 __cdecl FUN_100d680a(DWORD *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *puVar7;
  DWORD local_10;
  DWORD local_c;
  
  bVar1 = false;
  if (param_1 == (DWORD *)0x2) {
    puVar7 = &DAT_10134c08;
    pcVar6 = DAT_10134c08;
LAB_100d6890:
    bVar1 = true;
    FUN_100cf6a6(1);
    pDVar2 = param_1;
  }
  else {
    if (((param_1 != (DWORD *)0x4) && (param_1 != (DWORD *)&DAT_00000008)) &&
       (param_1 != (DWORD *)0xb)) {
      if (param_1 == (DWORD *)0xf) {
        puVar7 = &DAT_10134c14;
        pcVar6 = DAT_10134c14;
      }
      else if (param_1 == (DWORD *)0x15) {
        puVar7 = &DAT_10134c0c;
        pcVar6 = DAT_10134c0c;
      }
      else {
        if (param_1 != (DWORD *)0x16) {
          return 0xffffffff;
        }
        puVar7 = &DAT_10134c10;
        pcVar6 = DAT_10134c10;
      }
      goto LAB_100d6890;
    }
    pDVar2 = FUN_100cad28();
    uVar3 = FUN_100d698c((int)param_1,pDVar2[0x14]);
    puVar7 = (undefined4 *)(uVar3 + 8);
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 == (code *)0x1) {
    if (!bVar1) {
      return 0;
    }
    FUN_100cf707(1);
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_100cf707(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((param_1 == (DWORD *)&DAT_00000008) || (param_1 == (DWORD *)0xb)) ||
     (param_1 == (DWORD *)0x4)) {
    local_c = pDVar2[0x15];
    pDVar2[0x15] = 0;
    if (param_1 == (DWORD *)&DAT_00000008) {
      local_10 = pDVar2[0x16];
      pDVar2[0x16] = 0x8c;
      goto LAB_100d6904;
    }
  }
  else {
LAB_100d6904:
    if (param_1 == (DWORD *)&DAT_00000008) {
      if (DAT_10120ad8 < DAT_10120adc + DAT_10120ad8) {
        iVar4 = DAT_10120ad8 * 0xc;
        iVar5 = DAT_10120ad8;
        do {
          iVar4 = iVar4 + 0xc;
          *(undefined4 *)((pDVar2[0x14] - 4) + iVar4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < DAT_10120adc + DAT_10120ad8);
      }
      goto LAB_100d6942;
    }
  }
  *puVar7 = 0;
LAB_100d6942:
  if (bVar1) {
    FUN_100cf707(1);
  }
  if (param_1 == (DWORD *)&DAT_00000008) {
    (*pcVar6)(8,pDVar2[0x16]);
  }
  else {
    (*pcVar6)(param_1);
    if ((param_1 != (DWORD *)0xb) && (param_1 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar2[0x15] = local_c;
  if (param_1 == (DWORD *)&DAT_00000008) {
    pDVar2[0x16] = local_10;
  }
  return 0;
}

