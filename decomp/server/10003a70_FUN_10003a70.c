
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10003a70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  
  if (*(float *)(param_1 + 0x348) <= *DAT_10122044) {
    *(float *)(param_1 + 0x348) = *DAT_10122044 + (float)_DAT_100ddad8;
    FUN_10003870(param_1);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    iVar2 = (*DAT_10121f70)(0,4);
    FUN_10094b20(this,uVar1,2,(&PTR_s_agrunt_ag_pain1_wav_101013fc)[iVar2],0x3f800000,0x3f4ccccd,0,
                 100);
  }
  return;
}

