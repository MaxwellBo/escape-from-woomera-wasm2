
void __cdecl FUN_100a3e70(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 auStack_40 [64];
  
  iVar1 = (*DAT_10121f28)(1);
  if (iVar1 != 0) {
    if ((-2 < param_1) && (param_1 < 0x1f)) {
      if (param_1 == -1) {
        (*DAT_10121eac)(iVar1,s_cd_pause_10119828);
        return;
      }
      puVar2 = auStack_40;
      pcVar3 = s_cd_play__3d_10119818;
      FUN_100c8506(puVar2,(byte *)s_cd_play__3d_10119818);
      (*DAT_10121eac)(iVar1,auStack_40,puVar2,pcVar3,param_1);
      return;
    }
    (*DAT_10121efc)(1,s_TriggerCDAudio___Track__d_out_of_101197f0);
  }
  return;
}

