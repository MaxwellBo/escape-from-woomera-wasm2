
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10005780(void *param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = FUN_10060350((int)param_1);
  if (fVar2 <= (float10)_DAT_100ddb0c) {
    iVar1 = FUN_10008100(param_1,0x10);
    if (iVar1 != -1) {
      *(undefined4 *)((int)param_1 + 0x1d0) = 0x10;
      return;
    }
  }
  if (_DAT_100ddb08 < (float)fVar2) {
    iVar1 = FUN_10008100(param_1,0xf);
    if (iVar1 != -1) {
      *(undefined4 *)((int)param_1 + 0x1d0) = 0xf;
    }
  }
  return;
}

