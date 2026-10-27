
float * __thiscall FUN_1002f100(void *this,float *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if ((*(byte *)(iVar1 + 0x1a0) & 1) != 0) {
    FUN_100b03b0(param_1);
    return param_1;
  }
  if (*(int *)(iVar1 + 0x1d0) != 0) {
    FUN_10058820(param_1,(int)this,param_2,
                 (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0x1d0)));
    return param_1;
  }
  *param_1 = *(float *)(iVar1 + 0x44);
  param_1[1] = *(float *)(iVar1 + 0x48);
  param_1[2] = *(float *)(iVar1 + 0x4c);
  return param_1;
}

