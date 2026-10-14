
void FUN_10036f9d(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  int unaff_EBX;
  undefined4 unaff_EDI;
  char *pcStack00000010;
  char *pcStack00000014;
  char *pcStack00000018;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcStack00000010 = s_debris_metal1_wav_1010899c;
  pcStack00000014 = s_debris_metal3_wav_10108974;
  pcStack00000018 = s_debris_metal2_wav_10108988;
  uVar4 = 0;
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBX + 4) + 0x208);
  uVar3 = 0x3f4ccccd;
  iVar2 = (*DAT_10121f70)(0,1);
  FUN_10094b20(this,uVar1,2,*(char **)((int)&stack0x00000010 + iVar2 * 4),param_3,uVar3,uVar4,
               unaff_EDI);
  return;
}

