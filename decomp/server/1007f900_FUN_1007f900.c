
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1007f900(int param_1)

{
  int iVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  int local_8;
  
  FUN_100af200(*(int *)(param_1 + 4) + 0x74);
  iVar1 = *(int *)(param_1 + 4);
  local_44 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174) +
             *(float *)(DAT_10122044 + 0x28) * _DAT_100e185c;
  local_40 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc) +
             *(float *)(DAT_10122044 + 0x2c) * _DAT_100e185c;
  local_3c = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10) +
             *(float *)(DAT_10122044 + 0x30) * _DAT_100e185c;
  local_48 = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0x10);
  local_4c = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0xc);
  local_50 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x174);
  FUN_100afc60(&local_50,&local_44,0,*(undefined4 *)(iVar1 + 0x208),local_38);
  if (((local_28 != (float)_DAT_100dd628) && (local_8 != 0)) &&
     (iVar1 = (*DAT_10121f20)(local_8), iVar1 != 0)) {
    if ((local_8 == 0) && (local_8 = (*DAT_10121f1c)(0), local_8 == 0)) {
      return 0;
    }
    return *(undefined4 *)(local_8 + 0x7c);
  }
  return 0;
}

