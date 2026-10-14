
void __fastcall FUN_10021740(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (*DAT_10121f70)(0,5);
  if (iVar2 < 2) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    uVar3 = (*DAT_10121f70)(0x5f,0x69);
    uVar6 = 0;
    uVar5 = 0x3f4ccccd;
    uVar4 = 0x3f800000;
    iVar2 = (*DAT_10121f70)(0,2);
    FUN_10094b20((&PTR_s_controller_con_pain1_wav_10106094)[iVar2],uVar1,2,
                 (&PTR_s_controller_con_pain1_wav_10106094)[iVar2],uVar4,uVar5,uVar6,uVar3);
  }
  return;
}

