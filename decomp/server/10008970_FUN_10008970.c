
void __cdecl FUN_10008970(int param_1,byte *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = param_1;
  iVar4 = FUN_100088f0(param_1,param_2);
  if (((-1 < iVar4) && (param_1 != 0)) && (iVar4 < *(int *)(param_1 + 0xa4))) {
    piVar1 = (int *)(param_1 + 0xa8);
    param_1 = 0;
    iVar4 = iVar4 * 0xb0 + *piVar1 + iVar3;
    if (0 < *(int *)(iVar4 + 0x30)) {
      pcVar6 = (char *)(*(int *)(iVar4 + 0x34) + iVar3 + 0xc);
      do {
        if (*(int *)(pcVar6 + -8) < 5000) {
          iVar5 = FUN_10008950(*(int *)(pcVar6 + -8));
          if (iVar5 != 0) {
            iVar5 = -1;
            pcVar7 = pcVar6;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              cVar2 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (iVar5 == -2) {
              (*DAT_10121efc)(4,s_Bad_sound_event__d_in_sequence___10102980,
                              *(undefined4 *)(pcVar6 + -8),iVar3 + 8,param_2,pcVar6);
            }
            iVar5 = (*DAT_10121f14)(pcVar6);
            (*DAT_10121e0c)(iVar5 + *(int *)(DAT_10122044 + 0x98));
          }
        }
        param_1 = param_1 + 1;
        pcVar6 = pcVar6 + 0x4c;
      } while (param_1 < *(int *)(iVar4 + 0x30));
    }
  }
  return;
}

