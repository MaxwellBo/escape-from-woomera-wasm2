
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10026eb0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar7 = *(int *)(param_1 + 4);
    pfVar8 = (float *)(iVar7 + 8);
    *(float *)(param_1 + 0xf8) = *pfVar8;
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(iVar7 + 0x10);
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 4);
    iVar7 = *(int *)(param_1 + 4);
    pfVar8 = (float *)(iVar7 + 8);
    fVar2 = *(float *)(iVar7 + 0xc);
    fVar3 = *(float *)(iVar6 + 0xc);
    fVar4 = *(float *)(iVar7 + 0x10);
    fVar5 = *(float *)(iVar6 + 0x10);
    *(float *)(param_1 + 0xf8) = *(float *)(iVar7 + 8) - *(float *)(iVar6 + 8);
    *(float *)(param_1 + 0xfc) = fVar2 - fVar3;
    *(float *)(param_1 + 0x100) = fVar4 - fVar5;
  }
  pfVar9 = (float *)(param_1 + 0xf8);
  pfVar1 = (float *)(param_1 + 0x104);
  fVar2 = (ABS((*(float *)(iVar7 + 0xf4) - _DAT_100de4ac) * *(float *)(iVar7 + 0x44)) +
          ABS((*(float *)(iVar7 + 0xf8) - _DAT_100de4ac) * *(float *)(iVar7 + 0x48)) +
          ABS((*(float *)(iVar7 + 0xfc) - _DAT_100de4ac) * *(float *)(iVar7 + 0x4c))) -
          *(float *)(param_1 + 0xec);
  fStack_18 = fVar2 * *(float *)(iVar7 + 0x44);
  fStack_14 = fVar2 * *(float *)(iVar7 + 0x48);
  fStack_24 = fStack_18 + *pfVar9;
  fStack_20 = fStack_14 + *(float *)(param_1 + 0xfc);
  fStack_1c = fVar2 * *(float *)(iVar7 + 0x4c) + *(float *)(param_1 + 0x100);
  *pfVar1 = fStack_24;
  *(float *)(param_1 + 0x108) = fStack_20;
  *(float *)(param_1 + 0x10c) = fStack_1c;
  if ((*(byte *)(iVar7 + 0x1a0) & 1) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_10001d60(&fStack_c,*pfVar1 + *(float *)(param_1 + 100),
                   *(float *)(param_1 + 0x108) + *(float *)(param_1 + 0x68),
                   *(float *)(param_1 + 0x10c) + *(float *)(param_1 + 0x6c));
      iVar7 = *(int *)(param_1 + 4);
      FUN_10001d60(&fStack_18,fStack_c - *(float *)(iVar7 + 8),fStack_8 - *(float *)(iVar7 + 0xc),
                   fStack_4 - *(float *)(iVar7 + 0x10));
      *(float *)(param_1 + 100) = fStack_18;
      *(float *)(param_1 + 0x68) = fStack_14;
      *(float *)(param_1 + 0x6c) = fStack_10;
    }
    else {
      iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 4);
      fStack_14 = *(float *)(iVar7 + 0xc) + *(float *)(param_1 + 0x108);
      fStack_10 = *(float *)(iVar7 + 0x10) + *(float *)(param_1 + 0x10c);
      fStack_8 = fStack_14 + *(float *)(param_1 + 0x68);
      fStack_4 = fStack_10 + *(float *)(param_1 + 0x6c);
      fStack_24 = (*pfVar1 + *(float *)(iVar7 + 8) + *(float *)(param_1 + 100)) - *pfVar8;
      fStack_20 = fStack_8 - pfVar8[1];
      fStack_1c = fStack_4 - pfVar8[2];
      *(float *)(param_1 + 100) = fStack_24;
      *(float *)(param_1 + 0x68) = fStack_20;
      *(float *)(param_1 + 0x6c) = fStack_1c;
    }
    FUN_10063390(param_1);
    FUN_10003850(&fStack_24,pfVar1);
    *pfVar1 = *pfVar9;
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xfc);
    *pfVar9 = fStack_24;
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x100);
    *(float *)(param_1 + 0xfc) = fStack_20;
    *(float *)(param_1 + 0x100) = fStack_1c;
  }
  return;
}

