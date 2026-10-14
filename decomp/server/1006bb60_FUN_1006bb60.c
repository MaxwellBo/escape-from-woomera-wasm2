
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_1006bb60(void *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float local_4;
  
  uVar3 = param_5 & 0x340;
  local_4 = 0.0;
  iVar1 = *(int *)((int)param_1 + 0x18);
  while( true ) {
    if (param_2 == param_3) {
      return (float10)local_4;
    }
    if (iVar1 < 1) {
      (*DAT_10121efc)(1,s_Route_Failure_10112928);
      return (float10)_DAT_100dd5f8;
    }
    iVar2 = FUN_1006bc40(param_1,param_2,param_3,param_4,(uint)(uVar3 != 0));
    if (param_2 == iVar2) break;
    FUN_1006f5a0(param_1,param_2,iVar2,(int *)&param_5);
    if ((int)param_5 < 0) {
      (*DAT_10121efc)(1,s_HashLinks_is_broken_from__d_to___10112904,param_2,param_3);
      break;
    }
    local_4 = local_4 + *(float *)(*(int *)((int)param_1 + 0x10) + 0x14 + param_5 * 0x18);
    iVar1 = iVar1 + -1;
    param_2 = iVar2;
  }
  return (float10)_DAT_100dd5f8;
}

