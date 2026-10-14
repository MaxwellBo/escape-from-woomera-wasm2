
void __fastcall FUN_100b7d00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (*DAT_10121f70)(0,9);
  iVar2 = iVar2 + 0x5f;
  iVar3 = (*DAT_10121f70)(0,5);
  if (iVar3 < 2) {
    uVar6 = 0;
    uVar5 = 0x3f4ccccd;
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
    uVar4 = 0x3f800000;
    iVar3 = (*DAT_10121f70)(0,1);
    FUN_10094b20((&PTR_s_zombie_zo_pain1_wav_1011c264)[iVar3],uVar1,2,
                 (&PTR_s_zombie_zo_pain1_wav_1011c264)[iVar3],uVar4,uVar5,uVar6,iVar2);
  }
  return;
}

