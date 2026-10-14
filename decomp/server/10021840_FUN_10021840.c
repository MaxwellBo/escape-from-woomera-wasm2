
void __fastcall FUN_10021840(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  uVar2 = (*DAT_10121f70)(0x5f,0x69);
  uVar6 = 0;
  uVar5 = 0x3f4ccccd;
  uVar4 = 0x3f800000;
  iVar3 = (*DAT_10121f70)(0,2);
  FUN_10094b20((&PTR_s_controller_con_attack1_wav_10106068)[iVar3],uVar1,2,
               (&PTR_s_controller_con_attack1_wav_10106068)[iVar3],uVar4,uVar5,uVar6,uVar2);
  return;
}

