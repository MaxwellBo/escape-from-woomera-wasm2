
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_1001a050(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (_DAT_100de488 <= *(float *)(iVar1 + 8)) {
    return 0;
  }
  if (_DAT_100de488 <= *(float *)(iVar1 + 0xc)) {
    return 0;
  }
  if (_DAT_100de488 <= *(float *)(iVar1 + 0x10)) {
    return 0;
  }
  if (*(float *)(iVar1 + 8) <= _DAT_100de774) {
    return 0;
  }
  if (*(float *)(iVar1 + 0xc) <= _DAT_100de774) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x10) <= _DAT_100de774) {
    return 0;
  }
  if (_DAT_100de478 <= *(float *)(iVar1 + 0x20)) {
    return 0;
  }
  if (_DAT_100de478 <= *(float *)(iVar1 + 0x24)) {
    return 0;
  }
  if (_DAT_100de478 <= *(float *)(iVar1 + 0x28)) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x20) <= _DAT_100e0900) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x24) <= _DAT_100e0900) {
    return 0;
  }
  if (*(float *)(iVar1 + 0x28) <= _DAT_100e0900) {
    return 0;
  }
  return 1;
}

