
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10021200(void *this,float *param_1)

{
  float local_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *(float *)((int)this + 0x958);
  local_8 = *(float *)((int)this + 0x95c);
  local_4 = (_DAT_1005afb0 - *(float *)((int)this + 0x964)) * _DAT_10060158 *
            *(float *)((int)this + 0x960);
  (*DAT_100a5050)((int)this + 0x964,&local_18,0,0);
  FUN_100264f0(&local_18);
  FUN_10031290(&local_18,-(_DAT_10060150 / *(float *)((int)this + 0x954)),&local_18);
  *param_1 = local_18 + local_c;
  param_1[1] = fStack_14 + local_8;
  param_1[2] = fStack_10 + local_4;
  return;
}

