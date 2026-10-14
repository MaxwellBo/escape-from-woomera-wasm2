
void __fastcall FUN_100492a0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *(undefined4 *)(param_1[1] + 0x208);
  uVar2 = (**(code **)(*param_1 + 0x230))();
  uVar7 = 0;
  uVar6 = 0x40000000;
  fVar4 = (float10)(**(code **)(*param_1 + 0x234))();
  fVar5 = (float)fVar4;
  iVar3 = (*DAT_10121f70)(0,2);
  FUN_10094b20((&PTR_s_headcrab_hc_pain1_wav_1010dd14)[iVar3],uVar1,2,
               (&PTR_s_headcrab_hc_pain1_wav_1010dd14)[iVar3],fVar5,uVar6,uVar7,uVar2);
  return;
}

