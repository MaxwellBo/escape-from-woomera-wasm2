
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a6050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined1 *puVar4;
  float10 fVar5;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar1 = *(int *)(param_2 + 4);
  switch(*(undefined4 *)(iVar1 + 0x108)) {
  case 0:
  case 7:
  case 8:
  case 0xc:
    break;
  default:
    if (*(int *)(param_1 + 0x15c) == 0) {
      iVar2 = *(int *)(param_1 + 4);
      fStack_18 = *(float *)(iVar2 + 0x44);
      fStack_14 = *(float *)(iVar2 + 0x48);
      fStack_10 = *(float *)(iVar2 + 0x4c);
    }
    else {
      pfVar3 = FUN_10058820(&fStack_c,param_1,param_2,
                            (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x15c)));
      fStack_18 = *pfVar3;
      fStack_14 = pfVar3[1];
      fStack_10 = pfVar3[2];
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      puVar4 = (undefined1 *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x160));
      fVar5 = FUN_100588f0(puVar4,param_2,puVar4);
      fStack_18 = (float)((float10)fStack_18 * fVar5);
      fStack_14 = (float)((float10)fStack_14 * fVar5);
      fStack_10 = (float)((float10)fStack_10 * fVar5);
    }
    iVar2 = *(int *)(param_1 + 4);
    fStack_4 = _DAT_100dd61c;
    if (*(float *)(iVar2 + 0x1f8) != _DAT_100dd5f8) {
      fStack_4 = *(float *)(iVar2 + 0x1f8);
    }
    fStack_14 = fStack_14 * fStack_4;
    fStack_18 = fStack_18 * fStack_4;
    fStack_4 = fStack_10 * fStack_4;
    if ((*(int *)(iVar1 + 0x10c) != 0) && (*(int *)(iVar1 + 0x10c) != 4)) {
      if ((*(byte *)(iVar2 + 0x1a0) & 1) != 0) {
        fStack_c = fStack_18 + *(float *)(iVar1 + 0x20);
        fStack_8 = fStack_14 + *(float *)(iVar1 + 0x24);
        fStack_4 = fStack_4 + *(float *)(iVar1 + 0x28);
        *(float *)(iVar1 + 0x20) = fStack_c;
        *(float *)(iVar1 + 0x24) = fStack_8;
        *(float *)(iVar1 + 0x28) = fStack_4;
        if (_DAT_100dd5f8 < *(float *)(iVar1 + 0x28)) {
          *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) & 0xfffffdff;
        }
        FUN_100b0ef0(param_1);
        return;
      }
      if ((*(uint *)(iVar1 + 0x1a4) & 0x400000) != 0) {
        fStack_18 = fStack_18 + *(float *)(iVar1 + 0x2c);
        fStack_14 = fStack_14 + *(float *)(iVar1 + 0x30);
        fStack_4 = fStack_4 + *(float *)(iVar1 + 0x34);
      }
      *(uint *)(iVar1 + 0x1a4) = *(uint *)(iVar1 + 0x1a4) | 0x400000;
      *(float *)(iVar1 + 0x2c) = fStack_18;
      *(float *)(iVar1 + 0x30) = fStack_14;
      *(float *)(iVar1 + 0x34) = fStack_4;
    }
  }
  return;
}

