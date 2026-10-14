
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100259d0(float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *local_84;
  int *local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  float local_60;
  int local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  int local_48 [2];
  float *local_40;
  int local_3c;
  undefined4 local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_48[0] = param_3;
  local_48[1] = param_4;
  local_60 = 1e+06;
  local_50 = ((float)param_2[6] - param_1[1]) + ((float)param_2[6] - param_1[1]);
  local_4c = ((float)param_2[7] - param_1[2]) + ((float)param_2[7] - param_1[2]);
  local_7c = ((float)param_2[5] - *param_1) + ((float)param_2[5] - *param_1) + *param_1;
  local_78 = local_50 + param_1[1];
  local_74 = local_4c + param_1[2];
  local_70 = local_7c;
  local_6c = local_78;
  local_68 = local_74;
  FUN_100afc60(param_1,&local_7c,0,param_5,local_38);
  if ((float)_DAT_100dd628 <= local_28) {
    local_84 = local_48;
    local_5c = 2;
    do {
      local_80 = local_48;
      local_64 = 2;
      local_40 = (float *)*local_84;
      do {
        piVar3 = local_48;
        local_58 = 2;
        local_3c = *local_80;
        do {
          local_54 = local_7c + *local_40;
          local_50 = local_78 + *(float *)(local_3c + 4);
          local_4c = local_74 + *(float *)(*piVar3 + 8);
          FUN_100afc60(param_1,&local_54,0,param_5,local_38);
          if ((local_28 < (float)_DAT_100dd628) &&
             (fVar1 = SQRT((local_24 - *param_1) * (local_24 - *param_1) +
                           (local_20 - param_1[1]) * (local_20 - param_1[1]) +
                           (local_1c - param_1[2]) * (local_1c - param_1[2])), fVar1 < local_60)) {
            puVar4 = local_38;
            puVar5 = param_2;
            for (iVar2 = 0xe; local_60 = fVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar5 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar5 = puVar5 + 1;
            }
          }
          piVar3 = piVar3 + 1;
          local_58 = local_58 + -1;
        } while (local_58 != 0);
        local_80 = local_80 + 1;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
      local_84 = local_84 + 1;
      local_5c = local_5c + -1;
    } while (local_5c != 0);
    return;
  }
  puVar4 = local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

