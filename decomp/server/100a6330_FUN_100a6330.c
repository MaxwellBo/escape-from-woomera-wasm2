
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a6330(void *param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  undefined3 extraout_var;
  uint uVar8;
  
  bVar7 = FUN_100b0030(*(int *)((int)param_1 + 0x158),param_2);
  if ((CONCAT31(extraout_var,bVar7) != 0) &&
     (uVar8 = FUN_100a30c0(param_1,(int *)param_2[1]), uVar8 != 0)) {
    iVar4 = param_2[1];
    iVar5 = *(int *)((int)param_1 + 4);
    pfVar1 = (float *)(iVar4 + 0x20);
    fVar6 = *(float *)(iVar5 + 0x44) * *pfVar1 +
            *(float *)(iVar5 + 0x48) * *(float *)(iVar4 + 0x24) +
            *(float *)(iVar5 + 0x4c) * *(float *)(iVar4 + 0x28);
    if (fVar6 < -*(float *)(iVar5 + 0x1bc)) {
      if ((*(byte *)(iVar5 + 0x1a0) & 0x10) == 0) {
        fVar6 = (*(float *)(iVar5 + 0x164) + _DAT_100dd618) * fVar6;
        fVar2 = *(float *)(iVar5 + 0x48);
        fVar3 = *(float *)(iVar5 + 0x4c);
        *pfVar1 = *pfVar1 - fVar6 * *(float *)(iVar5 + 0x44);
        *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) - fVar6 * fVar2;
        *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) - fVar6 * fVar3;
        FUN_10098e40(param_1,param_2,3,0);
        return;
      }
      fVar6 = (fVar6 + *(float *)(iVar5 + 0x1bc)) * *(float *)(iVar5 + 0x164) + fVar6;
      fVar2 = *(float *)(iVar5 + 0x48);
      fVar3 = *(float *)(iVar5 + 0x4c);
      *pfVar1 = *pfVar1 - fVar6 * *(float *)(iVar5 + 0x44);
      *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) - fVar6 * fVar2;
      *(float *)(iVar4 + 0x28) = *(float *)(iVar4 + 0x28) - fVar6 * fVar3;
      FUN_10098e40(param_1,param_2,3,0);
      return;
    }
  }
  return;
}

