
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a2fb0(void *this,float param_1,int param_2,void *param_3)

{
  if (param_1 != _DAT_100dd5f8) {
    if (param_1 == _DAT_100ddaf0) {
      FUN_10008360(param_3,param_2,0.0);
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
        (*DAT_10121efc)(1,s_bone_d_0_101197a0,param_2);
        return;
      }
    }
    else {
      FUN_10008360(param_3,param_2,param_1);
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
        (*DAT_10121efc)(1,s_bone_d__f_10119794,param_2,(double)param_1);
      }
    }
  }
  return;
}

