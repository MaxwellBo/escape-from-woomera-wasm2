
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1004ac90(int param_1)

{
  int iVar1;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [48];
  int local_8;
  
  FUN_100af200(*(int *)(param_1 + 4) + 0x50);
  iVar1 = *(int *)(param_1 + 4);
  local_5c = *(float *)(iVar1 + 8);
  local_58 = *(float *)(iVar1 + 0xc);
  local_54 = *(float *)(iVar1 + 0xfc) * (float)_DAT_100dd648 + *(float *)(iVar1 + 0x10);
  local_4c = *(float *)(DAT_10122044 + 0x2c) * _DAT_100de528;
  local_48 = *(float *)(DAT_10122044 + 0x30) * _DAT_100de528;
  local_44 = *(float *)(DAT_10122044 + 0x28) * _DAT_100de528 + local_5c;
  local_40 = local_58 + local_4c;
  local_3c = local_48 + local_54;
  FUN_100afc90(&local_5c,&local_44,0,3,*(undefined4 *)(iVar1 + 0x208),local_38);
  if (local_8 != 0) {
    return *(undefined4 *)(local_8 + 0x7c);
  }
  return 0;
}

