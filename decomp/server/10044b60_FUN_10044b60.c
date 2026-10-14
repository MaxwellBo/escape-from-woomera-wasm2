
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10044b60(float *param_1,int param_2,float *param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  
  fVar3 = param_8 * *(float *)(DAT_10121dac + 0xc);
  fVar5 = param_4 - *param_3;
  local_40 = param_5 - param_3[1];
  local_3c = param_6 - param_3[2];
  fVar7 = SQRT(local_3c * local_3c + fVar5 * fVar5 + local_40 * local_40) / param_7;
  param_8 = (float)_DAT_100dd628 / fVar7;
  fVar6 = fVar5 * param_8;
  fVar1 = local_40 * param_8;
  fVar2 = param_8 * local_3c;
  fVar4 = (float)_DAT_100dd648;
  local_40 = local_40 * _DAT_100dd614;
  local_3c = local_3c * _DAT_100dd614;
  local_50 = fVar5 * _DAT_100dd614 + *param_3;
  local_4c = local_40 + param_3[1];
  local_48 = fVar3 * fVar7 * (float)_DAT_100dd648 * fVar7 * (float)_DAT_100dd648 *
             (float)_DAT_100dd648 + local_3c + param_3[2];
  FUN_100afc60(param_3,&local_50,0,*(undefined4 *)(param_2 + 0x208),local_38);
  if (local_28 == (float)_DAT_100dd628) {
    FUN_100afc60(&param_4,&local_50,1,*(undefined4 *)(param_2 + 0x208),local_38);
    if (local_28 == (float)_DAT_100dd628) {
      *param_1 = fVar6;
      param_1[1] = fVar1;
      param_1[2] = fVar7 * fVar3 * fVar4 + fVar2;
      return;
    }
  }
  *param_1 = DAT_10121dd8;
  param_1[1] = DAT_10121ddc;
  param_1[2] = DAT_10121de0;
  return;
}

