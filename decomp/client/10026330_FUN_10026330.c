
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10026330(float *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    if (*param_1 <= (float)_DAT_10060168) {
      if (*param_1 < (float)_DAT_100601e8) {
        fVar1 = *param_1 + (float)_DAT_10060160;
        goto LAB_10026367;
      }
    }
    else {
      fVar1 = *param_1 - (float)_DAT_10060160;
LAB_10026367:
      *param_1 = fVar1;
    }
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return;
    }
  } while( true );
}

