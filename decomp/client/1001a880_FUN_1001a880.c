
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1001a880(int param_1,int param_2,int param_3,int param_4,int param_5,float *param_6,int param_7,
            int param_8,float param_9,float param_10,float param_11)

{
  float *pfVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float local_c [3];
  
  local_c[0] = 0.0;
  local_c[1] = 0.0;
  local_c[2] = 28.0;
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = FUN_1001a760(iVar2);
  if (iVar4 != 0) {
    bVar3 = FUN_1001a780(iVar2);
    if (CONCAT31(extraout_var,bVar3) == 0) {
      if (*(int *)(param_1 + 0x2c) == 1) {
        local_c[2] = 12.0;
      }
    }
    else {
      (**(code **)(DAT_100a5140 + 0x18))(local_c);
    }
  }
  fVar7 = (float10)(*DAT_100a50fc)(0x42480000,0x428c0000);
  fVar8 = (float10)(*DAT_100a50fc)(0x42c80000,0x43160000);
  param_1 = 3;
  pfVar5 = param_6;
  do {
    pfVar1 = (float *)((param_4 - (int)param_6) + (int)pfVar5);
    pfVar6 = pfVar5 + 1;
    *pfVar1 = (float)((float10)*pfVar5 * (float10)_DAT_1005f9e8 +
                     fVar8 * (float10)*(float *)((param_8 - (int)param_6) + (int)pfVar5) +
                     (float10)(float)fVar7 *
                     (float10)*(float *)((param_7 - (int)param_6) + (int)pfVar5) +
                     (float10)*(float *)((int)pfVar1 + (param_3 - param_4)));
    *(float *)((param_5 - (int)param_6) + -4 + (int)pfVar6) =
         param_10 * *(float *)((param_8 - (int)param_6) + -4 + (int)pfVar6) +
         param_11 * *(float *)((param_7 - (int)param_6) + -4 + (int)pfVar6) + param_9 * *pfVar5 +
         *(float *)(&stack0xfffffff0 + -(int)param_6 + (int)pfVar6) +
         *(float *)((int)pfVar5 + (param_2 - (int)param_6));
    param_1 = param_1 + -1;
    pfVar5 = pfVar6;
  } while (param_1 != 0);
  return;
}

