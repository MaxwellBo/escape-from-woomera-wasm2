
void FUN_10036fbc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  void *this;
  int unaff_EBX;
  undefined4 unaff_EDI;
  char *pcStack00000010;
  char *pcStack00000014;
  char *pcStack00000018;
  char *pcStack0000001c;
  char *pcStack00000020;
  char *pcStack00000024;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcStack00000010 = s_debris_flesh1_wav_10108a14;
  pcStack00000014 = s_debris_flesh2_wav_10108a00;
  pcStack00000018 = s_debris_flesh3_wav_101089ec;
  pcStack0000001c = s_debris_flesh5_wav_101089d8;
  pcStack00000020 = s_debris_flesh6_wav_101089c4;
  pcStack00000024 = s_debris_flesh7_wav_101089b0;
  uVar4 = 0;
  uVar1 = *(undefined4 *)(*(int *)(unaff_EBX + 4) + 0x208);
  uVar3 = 0x3f4ccccd;
  iVar2 = (*DAT_10121f70)(0,5);
  FUN_10094b20(this,uVar1,2,*(char **)((int)&stack0x00000010 + iVar2 * 4),param_3,uVar3,uVar4,
               unaff_EDI);
  return;
}

