
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10010510(float *param_1,int param_2,float *param_3,float param_4,float param_5,float param_6,
            float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  
  fVar2 = *(float *)(DAT_10121dac + 0xc);
  local_5c = (param_4 - *param_3) * _DAT_100dd614 + *param_3;
  local_58 = (param_5 - param_3[1]) * _DAT_100dd614 + param_3[1];
  local_54 = (param_6 - param_3[2]) * _DAT_100dd614 + param_3[2];
  local_48 = local_54 + param_7;
  local_50 = local_5c;
  local_4c = local_58;
  local_44 = local_5c;
  local_40 = local_58;
  local_3c = local_54;
  FUN_100afc60(&local_44,&local_50,1,*(undefined4 *)(param_2 + 0x208),local_38);
  local_5c = local_24;
  local_58 = (float)local_20;
  local_54 = local_1c;
  FUN_100afc60(param_3,&local_5c,0,*(undefined4 *)(param_2 + 0x208),local_38);
  if (local_28 != (float)_DAT_100dd628) {
    *param_1 = DAT_10121dd8;
    param_1[1] = DAT_10121ddc;
    param_1[2] = DAT_10121de0;
    return;
  }
  fVar1 = ((local_54 - param_3[2]) - _DAT_100dd5d4) * fVar2;
  fVar3 = SQRT(fVar1 + fVar1);
  fVar1 = param_3[1];
  fVar2 = (float)_DAT_100dd648 / (fVar3 / fVar2);
  *param_1 = (param_4 - *param_3) * fVar2;
  param_1[1] = (param_5 - fVar1) * fVar2;
  param_1[2] = fVar3;
  return;
}

