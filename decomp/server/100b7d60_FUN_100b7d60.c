
void __fastcall FUN_100b7d60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = (*DAT_10121f70)(0,9);
  iVar2 = iVar2 + 0x5f;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  uVar6 = 0;
  uVar5 = 0x3f4ccccd;
  uVar4 = 0x3f800000;
  iVar3 = (*DAT_10121f70)(0,2);
  FUN_10094b20(this,uVar1,2,(&PTR_s_zombie_zo_alert10_wav_1011c258)[iVar3],uVar4,uVar5,uVar6,iVar2);
  return;
}

