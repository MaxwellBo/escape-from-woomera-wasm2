
void __fastcall FUN_10053720(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (*DAT_10121f70)(0,2);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x36c);
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    uVar5 = 0;
    uVar4 = 0x3f4ccccd;
    uVar3 = 0x3f800000;
    iVar2 = (*DAT_10121f70)(0,1);
    FUN_10094b20(this,uVar1,1,(&PTR_s_aslave_slv_pain1_wav_1010f8ac)[iVar2],uVar3,uVar4,uVar5,uVar6)
    ;
  }
  return;
}

