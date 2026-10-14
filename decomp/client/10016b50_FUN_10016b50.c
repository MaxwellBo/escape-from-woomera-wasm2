
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10016b50(void *this,int param_1,int param_2,int param_3)

{
  float10 fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (((DAT_100a3ff4 != 0) && (param_2 == 0)) && (param_3 == 1)) {
    FUN_100250e0(&DAT_100a3fe0,param_1 + 1);
    return;
  }
  if (((param_1 < 6) && (DAT_100a4fe0 == 0)) &&
     (((DAT_100a3a94 & 5) == 0 &&
      (((DAT_100a4fdc & 0x80000000) != 0 && ((DAT_100a4fdc & 0x7fffffff) != 0)))))) {
    fVar4 = (float10)(*DAT_100a502c)(s_hud_fastswitch_10077e68);
    fVar1 = (float10)_DAT_10059a18;
    if ((DAT_100a3968 == 0) || ((DAT_100a3968 == 1 || (param_1 != *(int *)(DAT_100a3968 + 0x90)))))
    {
      (*DAT_100a5048)(s_common_wpn_hudon_wav_10077f80,0x3f800000);
      iVar2 = FUN_10016470(this,param_1);
      if (iVar2 == 0) goto LAB_10016c43;
      if ((fVar4 != fVar1) &&
         (iVar3 = FUN_100164d0(*(int *)(iVar2 + 0x90),*(int *)(iVar2 + 0x94)), iVar3 == 0)) {
        (*DAT_100a503c)(iVar2);
        _DAT_100a3970 = *(undefined4 *)(iVar2 + 0x9c);
        return;
      }
    }
    else {
      (*DAT_100a5048)(s_common_wpn_moveselect_wav_10077f98,0x3f800000);
      if ((DAT_100a3968 != 0) &&
         (iVar2 = FUN_100164d0(*(int *)(DAT_100a3968 + 0x90),*(int *)(DAT_100a3968 + 0x94)),
         iVar2 != 0)) {
        DAT_100a3968 = iVar2;
        return;
      }
      iVar2 = FUN_10016470(this,param_1);
    }
    DAT_100a3968 = iVar2;
    if (iVar2 == 0) {
LAB_10016c43:
      DAT_100a3968 = (uint)(fVar4 == fVar1);
      return;
    }
  }
  return;
}

