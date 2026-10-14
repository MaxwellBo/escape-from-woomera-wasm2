
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10079000(int param_1)

{
  *(float *)(*(int *)(param_1 + 4) + 0x104) =
       *(float *)(*(int *)(param_1 + 4) + 0x100) + (float)_DAT_100dd628;
  *(code **)(param_1 + 0x74) = CFuncTrackChange::Find;
  return;
}

