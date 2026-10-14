
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10042cf0(void *param_1)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38 [56];
  
  iVar1 = *(int *)((int)param_1 + 4);
  local_3c = *(float *)(iVar1 + 0x10) - _DAT_100ddac8;
  local_40 = *(undefined4 *)(iVar1 + 0xc);
  local_44 = *(undefined4 *)(iVar1 + 8);
  FUN_100afc60((undefined4 *)(iVar1 + 8),&local_44,1,*(undefined4 *)(iVar1 + 0x208),local_38);
  FUN_10042d50(param_1,(int)local_38,0x40);
  return;
}

