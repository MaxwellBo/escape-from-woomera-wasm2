
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100b0cc0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            undefined4 param_7)

{
  float10 fVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  local_8 = param_5 + param_2;
  local_4 = param_6 + param_3;
  local_18 = (param_4 + param_1) * _DAT_100dd614;
  local_14 = local_8 * _DAT_100dd614;
  local_10 = local_4 * _DAT_100dd614;
  fVar1 = FUN_100b0c00(&local_18,local_10,local_10 + _DAT_100ddaf0);
  (*DAT_10121ec0)(5,0x17,&local_18,0);
  (*DAT_10121ec8)(0x71);
  (*DAT_10121edc)(param_1);
  (*DAT_10121edc)(param_2);
  (*DAT_10121edc)(param_3);
  (*DAT_10121edc)(param_4);
  (*DAT_10121edc)(param_5);
  (*DAT_10121edc)(param_6);
  (*DAT_10121edc)((float)(fVar1 - (float10)param_3));
  (*DAT_10121ed0)((int)DAT_10132398);
  (*DAT_10121ec8)(param_7);
  (*DAT_10121edc)(0x41000000);
  (*DAT_10121ec4)();
  return;
}

