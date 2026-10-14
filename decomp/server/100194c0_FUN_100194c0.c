
void __fastcall FUN_100194c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar7 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x14)));
    *(int *)(param_1 + 0x10) = iVar7;
    if (iVar7 == 0) {
      (*DAT_10121efc)(1,s_Missing_movewith_entity__s_101050d4,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1 + 0x14));
      return;
    }
    for (iVar5 = *(int *)(iVar7 + 0x18); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x1c)) {
      if (iVar5 == param_1) {
        if (iVar5 != 0) {
          return;
        }
        break;
      }
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar7 + 0x18);
    *(int *)(iVar7 + 0x18) = param_1;
    iVar7 = *(int *)(param_1 + 4);
    if (*(int *)(iVar7 + 0x108) == 0) {
      *(uint *)(iVar7 + 0x108) = (*(int *)(iVar7 + 0x10c) != 4) + 7;
    }
    iVar7 = *(int *)(param_1 + 0x10);
    if (((*(float *)(iVar7 + 100) == DAT_10121dd8) && (*(float *)(iVar7 + 0x68) == DAT_10121ddc)) &&
       (*(float *)(iVar7 + 0x6c) == DAT_10121de0)) {
      iVar5 = *(int *)(iVar7 + 4);
      iVar6 = *(int *)(param_1 + 4);
      fVar1 = *(float *)(iVar6 + 0xc);
      fVar2 = *(float *)(iVar5 + 0xc);
      fVar3 = *(float *)(iVar6 + 0x10);
      fVar4 = *(float *)(iVar5 + 0x10);
      *(float *)(param_1 + 0x20) = *(float *)(iVar6 + 8) - *(float *)(iVar5 + 8);
      *(float *)(param_1 + 0x24) = fVar1 - fVar2;
      *(float *)(param_1 + 0x28) = fVar3 - fVar4;
    }
    else {
      FUN_10063390(param_1);
      iVar7 = *(int *)(param_1 + 0x10);
      fVar1 = *(float *)(iVar7 + 0x68);
      fVar2 = *(float *)(iVar7 + 0x6c);
      *(float *)(param_1 + 100) = *(float *)(iVar7 + 100) + *(float *)(param_1 + 100);
      *(float *)(param_1 + 0x68) = fVar1 + *(float *)(param_1 + 0x68);
      *(float *)(param_1 + 0x6c) = fVar2 + *(float *)(param_1 + 0x6c);
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar7 = *(int *)(iVar7 + 4);
    fVar1 = *(float *)(iVar5 + 0x54);
    fVar2 = *(float *)(iVar7 + 0x54);
    fVar3 = *(float *)(iVar5 + 0x58);
    fVar4 = *(float *)(iVar7 + 0x58);
    *(float *)(param_1 + 0x2c) = *(float *)(iVar5 + 0x50) - *(float *)(iVar7 + 0x50);
    *(float *)(param_1 + 0x30) = fVar1 - fVar2;
    *(float *)(param_1 + 0x34) = fVar3 - fVar4;
  }
  return;
}

