
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10029310(float *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  iVar1 = param_2 * 0xe0 + 0x250 + DAT_100acc38;
  FUN_10026230(param_1,local_c,(float *)0x0,(float *)0x0);
  local_18 = *(float *)(iVar1 + 0x24);
  local_14 = *(float *)(iVar1 + 0x28);
  local_10 = *(float *)(iVar1 + 0x2c) + _DAT_1005c368;
  FUN_100312c0(param_3,112.0,local_c,&local_24);
  local_24 = local_18 - local_24;
  local_20 = local_14 - local_20;
  local_1c = local_10 - local_1c;
  iVar1 = (**(code **)(DAT_100acc38 + 0x4f584))(&local_18,&local_24,0,2,param_2);
  FUN_100312c0((float *)(iVar1 + 0x14),4.0,(float *)(iVar1 + 0x20),param_4);
  return;
}

