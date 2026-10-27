
void __fastcall FUN_10095630(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_1[0x2e] == 0) {
    iVar2 = param_1[1];
    if (*(int *)(iVar2 + 0x1d4) != 0) {
      iVar3 = -1;
      pcVar4 = (char *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar2 + 0x1d4));
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar3 != -2) goto LAB_100956a9;
    }
    (*DAT_10121efc)(4,s_SPEAKER_with_no_Level_Sentence__a_101170c4,(double)*(float *)(iVar2 + 8),
                    (double)*(float *)(iVar2 + 0xc),(double)*(float *)(iVar2 + 0x10));
    (**(code **)(*param_1 + 8))();
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    return;
  }
LAB_100956a9:
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  *(undefined4 *)(param_1[1] + 0x108) = 0;
  param_1[0x1d] = (int)CSpeaker::SpeakerThink;
  FUN_10019680((int)param_1);
  param_1[0x1f] = (int)CSpeaker::ToggleUse;
  (**(code **)(*param_1 + 0x2c))();
  return;
}

