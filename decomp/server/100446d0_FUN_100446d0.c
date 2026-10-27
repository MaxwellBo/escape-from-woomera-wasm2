
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl
FUN_100446d0(undefined4 *param_1,int param_2,float *param_3,float param_4,float param_5,
            float param_6,float param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  
  local_58 = param_7 * *(float *)(DAT_10121dac + 0xc);
  if (param_6 - param_3[2] <= _DAT_100df284) {
    FUN_100af200(param_2 + 0x50);
    fVar4 = (float10)(*DAT_10121f74)(0xc1000000,0x41000000);
    fVar5 = (float10)(*DAT_10121f74)(0xc1800000,0x41800000);
    fVar5 = fVar5 + (float10)(float)fVar4;
    fStack_88 = (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x40));
    fStack_84 = (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x44));
    param_4 = param_4 + fStack_88;
    param_5 = param_5 + fStack_84;
    param_6 = (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x48) + (float10)param_6);
    fStack_7c = param_4;
    fStack_78 = param_5;
    fStack_74 = param_6;
    fVar4 = (float10)(*DAT_10121f74)(0xc1000000,0x41000000);
    fVar5 = (float10)(*DAT_10121f74)(0xc1800000,0x41800000);
    fVar5 = fVar5 + (float10)(float)fVar4;
    fStack_88 = (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x28));
    fStack_84 = (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x2c));
    FUN_10001d60(&fStack_7c,fStack_88 + param_4,param_5 + fStack_84,
                 (float)(fVar5 * (float10)*(float *)(DAT_10122044 + 0x30) + (float10)param_6));
    param_4 = fStack_7c;
    param_5 = fStack_78;
    param_6 = fStack_74;
    FUN_10001d60(&fStack_88,fStack_7c - *param_3,fStack_78 - param_3[1],fStack_74 - param_3[2]);
    FUN_10001d60(&fStack_70,fStack_88 * _DAT_100dd614,fStack_84 * _DAT_100dd614,
                 fStack_80 * _DAT_100dd614);
    FUN_10001d60(&fStack_7c,fStack_70 + *param_3,fStack_6c + param_3[1],fStack_68 + param_3[2]);
    uVar1 = *(undefined4 *)(param_2 + 0x208);
    fStack_60 = fStack_78;
    fStack_64 = fStack_7c;
    fStack_5c = fStack_74;
    FUN_10001d60(&fStack_70,fStack_7c,fStack_78,fStack_74 + _DAT_100df284);
    FUN_100afc60(&fStack_64,&fStack_70,1,uVar1,auStack_38);
    fStack_5c = fStack_1c - _DAT_100dd5d4;
    fStack_64 = fStack_24;
    fStack_60 = (float)uStack_20;
    if ((param_3[2] <= fStack_5c) && (param_6 <= fStack_5c)) {
      fVar3 = SQRT((fStack_5c - param_3[2]) / (local_58 * (float)_DAT_100dd648));
      fStack_3c = SQRT((fStack_5c - param_6) / (local_58 * (float)_DAT_100dd648));
      if ((float)_DAT_100dfb80 <= fVar3) {
        FUN_10001d60(&fStack_70,param_4 - *param_3,param_5 - param_3[1],param_6 - param_3[2]);
        fVar2 = fStack_3c + fVar3;
        FUN_10001d60(&fStack_88,fStack_70 / fVar2,fStack_6c / fVar2,fStack_68 / fVar2);
        fStack_4c = fVar3 * local_58;
        fStack_50 = fStack_84;
        fStack_54 = fStack_88;
        FUN_10001d60(&fStack_70,fStack_88 * fVar3,fStack_84 * fVar3,fStack_4c * fVar3);
        FUN_10001d60(&fStack_88,fStack_70 + *param_3,fStack_6c + param_3[1],fStack_68 + param_3[2]);
        fStack_44 = fStack_84;
        fStack_48 = fStack_88;
        fStack_40 = fStack_5c;
        FUN_100afc60(param_3,&fStack_48,0,*(undefined4 *)(param_2 + 0x208),auStack_38);
        if (fStack_28 == (float)_DAT_100dd628) {
          FUN_100afc60(&param_4,&fStack_48,1,*(undefined4 *)(param_2 + 0x208),auStack_38);
          if (fStack_28 == (float)_DAT_100dd628) {
            FUN_10003850(param_1,&fStack_54);
            return param_1;
          }
        }
      }
    }
  }
  *param_1 = DAT_10121dd8;
  param_1[1] = DAT_10121ddc;
  param_1[2] = DAT_10121de0;
  return param_1;
}

