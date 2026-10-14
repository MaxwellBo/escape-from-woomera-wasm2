
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100085d0(void *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = FUN_100085a0(param_1,*(int *)(*(int *)((int)param_1 + 4) + 0x128),&local_48,&local_3c);
  if (iVar2 != 0) {
    fVar8 = (float10)*(float *)(*(int *)((int)param_1 + 4) + 0x54) * (float10)_DAT_100de1f8;
    local_18 = local_48;
    local_14 = local_44;
    local_10 = local_40;
    fVar9 = (float10)fcos(fVar8);
    local_c = local_3c;
    local_8 = local_38;
    local_4 = local_34;
    local_60 = 9999.0;
    local_5c = 9999.0;
    local_58 = 9999.0;
    local_6c = -9999.0;
    local_68 = -9999.0;
    local_64 = -9999.0;
    pfVar5 = &local_18;
    iVar2 = 2;
    local_30 = (float)fVar9;
    fVar8 = (float10)fsin((float10)(float)fVar8);
    local_2c = (float)fVar8;
    local_24 = (float)-fVar8;
    do {
      pfVar6 = &local_14;
      iVar7 = 2;
      do {
        pfVar3 = &local_10;
        iVar4 = 2;
        local_54 = (float)((float10)*pfVar6 * (float10)local_24 +
                          (float10)(float)((float10)*pfVar5 * (float10)local_30));
        fVar8 = (float10)*pfVar6 * fVar9 + (float10)*pfVar5 * (float10)local_2c;
        do {
          fVar1 = *pfVar3;
          if (local_54 < local_60) {
            local_60 = local_54;
          }
          if (local_6c < local_54) {
            local_6c = local_54;
          }
          if (fVar8 < (float10)local_5c) {
            local_5c = (float)fVar8;
          }
          if ((float10)local_68 < fVar8) {
            local_68 = (float)fVar8;
          }
          if (fVar1 < local_58) {
            local_58 = fVar1;
          }
          if (local_64 < fVar1) {
            local_64 = fVar1;
          }
          pfVar3 = pfVar3 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        pfVar6 = pfVar6 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      pfVar5 = pfVar5 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_58 = 0.0;
    local_64 = 1.0;
    FUN_100afdc0(*(int *)((int)param_1 + 4),&local_60,&local_6c);
  }
  return;
}

