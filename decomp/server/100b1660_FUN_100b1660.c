
void __thiscall FUN_100b1660(void *this,byte *param_1,float *param_2,int param_3)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_100b1c50(this,param_1,param_3 * 0xc);
  if (0 < param_3) {
    do {
      local_18 = *param_2;
      local_14 = param_2[1];
      iVar1 = *(int *)this;
      local_10 = param_2[2];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x52c) != 0)) {
        local_18 = local_18 - *(float *)(iVar1 + 0x544);
        local_14 = local_14 - *(float *)(iVar1 + 0x548);
        local_10 = local_10 - *(float *)(iVar1 + 0x54c);
        local_c = local_18;
        local_8 = local_14;
        local_4 = local_10;
      }
      FUN_100b1ca0(this,&local_18,0xc);
      param_2 = param_2 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

