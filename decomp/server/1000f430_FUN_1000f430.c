
void __fastcall FUN_1000f430(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  void *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (0 < param_1[0xc6]) {
    param_1[0xc6] = param_1[0xc6] + -1;
  }
  iVar2 = (**(code **)(*param_1 + 0xb8))();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1[1] + 0x208);
    uVar3 = (*DAT_10121f70)(0x5f,0x69);
    uVar6 = 0;
    uVar5 = 0x3f4ccccd;
    uVar4 = 0x3f800000;
    iVar2 = (*DAT_10121f70)(0,2);
    FUN_10094b20(this,uVar1,1,(&PTR_s_gonarch_gon_childdie1_wav_10103458)[iVar2],uVar4,uVar5,uVar6,
                 uVar3);
  }
  return;
}

