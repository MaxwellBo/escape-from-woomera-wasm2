
void __fastcall FUN_1007e3a0(int param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  
  iVar4 = FUN_10095f90(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  puVar5 = (undefined4 *)FUN_10095f40(iVar4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[3] = 0;
    iVar1 = *(int *)(param_1 + 4);
    if ((*(uint *)(iVar1 + 0x1a4) & 0x200) != 0) {
      lVar7 = __ftol();
      iVar4 = (int)lVar7;
      if (0x200 < iVar4) {
        iVar4 = 0x200;
      }
    }
    if ((*(byte *)(iVar1 + 0x180) & 2) != 0) {
      iVar4 = iVar4 + 100;
    }
    if (iVar4 < *(int *)(param_1 + 0x314)) {
      *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x314);
      puVar5[3] = puVar5[3] | 1;
    }
    else {
      *(int *)(param_1 + 0x310) = iVar4;
    }
    lVar7 = __ftol();
    iVar4 = *(int *)(param_1 + 0x310);
    *(int *)(param_1 + 0x314) = (int)lVar7;
    pfVar3 = DAT_10122044;
    iVar1 = puVar5[4];
    iVar6 = iVar4;
    if ((iVar4 <= iVar1) && (iVar6 = iVar1, iVar4 < iVar1)) {
      lVar7 = __ftol();
      iVar6 = (int)lVar7;
      if ((int)lVar7 < iVar4) {
        iVar6 = 0;
      }
    }
    if (*(int *)(param_1 + 0x4e8) != 0) {
      iVar6 = 0;
    }
    if (*(float *)(param_1 + 800) < *pfVar3) {
      *(undefined4 *)(param_1 + 0x318) = 0;
    }
    iVar4 = *(int *)(param_1 + 4);
    *puVar5 = *(undefined4 *)(iVar4 + 8);
    puVar5[1] = *(undefined4 *)(iVar4 + 0xc);
    puVar5[2] = *(undefined4 *)(iVar4 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x318);
    puVar5[4] = iVar6;
    puVar5[3] = puVar5[3] | uVar2 | 4;
    lVar7 = __ftol();
    *(int *)(param_1 + 0x31c) = (int)lVar7;
    if ((int)lVar7 < 0) {
      *(undefined4 *)(param_1 + 0x31c) = 0;
    }
    return;
  }
  (*DAT_10121efc)(1,s_Client_lost_reserved_sound__10114e84);
  return;
}

