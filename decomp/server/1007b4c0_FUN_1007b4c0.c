
void __fastcall FUN_1007b4c0(int param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *this;
  void *pvVar2;
  char *pcVar3;
  
  iVar1 = (*DAT_10121f70)(1,5);
  if (iVar1 == 1) {
    this = *(void **)(param_1 + 4);
    pvVar2 = *(void **)((int)this + 0x208);
    pcVar3 = s_player_pl_pain5_wav_101058ac;
  }
  else if (iVar1 == 2) {
    pvVar2 = *(void **)(*(int *)(param_1 + 4) + 0x208);
    pcVar3 = s_player_pl_pain6_wav_10105898;
    this = extraout_ECX;
  }
  else {
    if (iVar1 != 3) goto LAB_1007b542;
    this = *(void **)(*(int *)(param_1 + 4) + 0x208);
    pcVar3 = s_player_pl_pain7_wav_10105884;
    pvVar2 = this;
  }
  FUN_10094b20(this,pvVar2,2,pcVar3,0x3f800000,0x3f4ccccd,0,100);
LAB_1007b542:
  if (((*(uint *)(*(int *)(param_1 + 4) + 0x168) & 0x80000000) == 0) &&
     (iVar1 = (**(code **)(*DAT_10121db8 + 0x1c))(), iVar1 == 0)) {
    return;
  }
  FUN_10094c90(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HEV_DEAD_10114cec);
  return;
}

