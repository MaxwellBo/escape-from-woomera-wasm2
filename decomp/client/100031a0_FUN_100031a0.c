
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100031a0(int param_1,int param_2,float *param_3,float *param_4,int param_5,float *param_6,
            int param_7,float param_8,int param_9,int param_10,int *param_11,float param_12,
            float param_13)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  undefined3 extraout_var;
  float10 fVar5;
  float10 fVar6;
  int iStack_64;
  int local_60;
  float afStack_5c [6];
  undefined1 auStack_44 [16];
  float fStack_34;
  undefined1 auStack_30 [48];
  
  if (0 < param_5) {
    local_60 = param_5;
    do {
      if (param_9 == 4) {
        do {
          fVar5 = (float10)(*DAT_100a50fc)(0xbf000000,0x3f000000);
          fVar6 = (float10)(*DAT_100a50fc)(0xbf000000,0x3f000000);
          fVar1 = (float)(fVar6 + (float10)(float)fVar5);
          fVar5 = (float10)(*DAT_100a50fc)(0xbf000000,0x3f000000);
          fVar6 = (float10)(*DAT_100a50fc)(0xbf000000,0x3f000000);
          fVar6 = fVar6 + (float10)(float)fVar5;
        } while ((float10)_DAT_10059eb0 < (float10)fVar1 * (float10)fVar1 + fVar6 * fVar6);
        iStack_64 = 3;
        pfVar3 = param_4;
        do {
          pfVar4 = pfVar3 + 1;
          fVar5 = fVar6 * (float10)*pfVar3 * (float10)param_13 +
                  (float10)fVar1 * (float10)*(float *)(((int)param_3 - (int)param_4) + (int)pfVar3)
                  * (float10)param_12 +
                  (float10)*(float *)((param_7 - (int)param_4) + -4 + (int)pfVar4);
          *(float *)((int)afStack_5c + (8 - (int)param_4) + (int)pfVar4) = (float)fVar5;
          *(float *)((int)afStack_5c + (-4 - (int)param_4) + (int)pfVar4) =
               (float)(fVar5 * (float10)param_8 +
                      (float10)*(float *)((int)pfVar3 + ((int)param_6 - (int)param_4)));
          iStack_64 = iStack_64 + -1;
          pfVar3 = pfVar4;
        } while (iStack_64 != 0);
      }
      else {
        param_5 = 3;
        pfVar3 = param_4;
        do {
          fVar1 = param_13 * *pfVar3 +
                  param_12 * *(float *)((int)pfVar3 + ((int)param_3 - (int)param_4)) +
                  *(float *)((int)pfVar3 + (param_7 - (int)param_4));
          *(float *)((int)pfVar3 + (int)afStack_5c + (0xc - (int)param_4)) = fVar1;
          *(float *)((int)pfVar3 + ((int)afStack_5c - (int)param_4)) =
               fVar1 * param_8 + *(float *)((int)pfVar3 + ((int)param_6 - (int)param_4));
          param_5 = param_5 + -1;
          pfVar3 = pfVar3 + 1;
        } while (param_5 != 0);
      }
      (**(code **)(DAT_100a5140 + 0x28))(0,1);
      (**(code **)(DAT_100a5140 + 0x2c))();
      (**(code **)(DAT_100a5140 + 0x34))(param_1 + -1);
      (**(code **)(DAT_100a5140 + 0x38))(2);
      (**(code **)(DAT_100a5140 + 0x3c))(param_6,afStack_5c,2,0xffffffff,auStack_44);
      bVar2 = FUN_100030b0(param_1,param_6,auStack_30,param_2,param_3,param_9,param_10,param_11);
      if (fStack_34 != (float)_DAT_10059a10) {
        if (param_9 == 2) {
          if (CONCAT31(extraout_var,bVar2) != 0) goto LAB_10003499;
          FUN_10002ae0(param_1,(int)auStack_44,param_6,afStack_5c,2);
        }
        else if (param_9 == 3) {
          FUN_10002ae0(param_1,(int)auStack_44,param_6,afStack_5c,3);
        }
        else {
          if (param_9 == 4) {
            FUN_10003070((int)auStack_44);
            goto LAB_10003499;
          }
          FUN_10002ae0(param_1,(int)auStack_44,param_6,afStack_5c,param_9);
        }
        FUN_10003070((int)auStack_44);
      }
LAB_10003499:
      (**(code **)(DAT_100a5140 + 0x30))();
      local_60 = local_60 + -1;
    } while (local_60 != 0);
  }
  return;
}

