
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10003870(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = (*DAT_10121f70)(0,10);
  fVar1 = (float)iVar2 + *DAT_10122044 + _DAT_100dd63c;
  *(float *)(param_1 + 0x34c) = fVar1;
  *(float *)(param_1 + 0x350) = fVar1;
  return;
}

