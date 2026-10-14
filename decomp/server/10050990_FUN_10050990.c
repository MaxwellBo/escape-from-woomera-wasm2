
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10050990(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float10 fVar7;
  
  if (((*(int *)(param_1 + 0x1d8) == 2) && (*(int *)(param_1 + 0x1cc) == 4)) &&
     (fVar7 = (float10)(*DAT_10121f74)(0,0x3f800000), fVar7 < (float10)_DAT_100dd608)) {
    FUN_1004fe40(param_1);
  }
  if (*(int *)(param_1 + 0x348) == 0) {
    if ((*(int *)(*(int *)(param_1 + 4) + 0x110) == 0) &&
       (iVar3 = (*DAT_10121f70)(0,0x7f), iVar3 == 0)) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 3;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x110);
      if (iVar3 != 0) {
        *(int *)(*(int *)(param_1 + 4) + 0x110) = iVar3 + -1;
      }
    }
  }
  iVar3 = FUN_10019410((uint *)(param_1 + 0x308));
  if (iVar3 == param_1) {
    iVar3 = 0;
    iVar6 = 0;
    puVar5 = (uint *)(param_1 + 0x310);
    do {
      iVar4 = param_1;
      if (iVar6 < 4) {
        iVar4 = FUN_10019410(puVar5);
      }
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar4 + 4);
        iVar3 = iVar3 + 1;
        fVar1 = *(float *)(iVar4 + 0xc);
        fVar2 = *(float *)(iVar4 + 0x10);
        *(float *)(param_1 + 0x34c) = *(float *)(iVar4 + 8) + *(float *)(param_1 + 0x34c);
        *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x350) + fVar1;
        *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x354) + fVar2;
      }
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 5);
    fVar1 = (float)iVar3;
    *(float *)(param_1 + 0x34c) = *(float *)(param_1 + 0x34c) / fVar1;
    *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0x350) / fVar1;
    *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0x354) / fVar1;
  }
  return;
}

