
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_100b0dd0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
            undefined4 param_5,float param_6,int param_7)

{
  int iVar1;
  float10 fVar2;
  float local_4;
  
  fVar2 = FUN_100b0c00(&param_1,param_3,param_3 + _DAT_100dd658);
  fVar2 = fVar2 - (float10)param_3;
  if (fVar2 < (float10)_DAT_100de45c) {
    fVar2 = FUN_100b0c00(&param_4,param_6,param_6 + _DAT_100dd658);
    if (fVar2 - (float10)param_6 < (float10)_DAT_100de45c) {
      return;
    }
    fVar2 = ((float10)param_6 + (fVar2 - (float10)param_6)) - (float10)param_3;
  }
  local_4 = (float)fVar2;
  iVar1 = param_7;
  if (0xff < param_7) {
    iVar1 = 0xff;
  }
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(0x72);
  (*DAT_10121edc)(param_1);
  (*DAT_10121edc)(param_2);
  (*DAT_10121edc)(param_3);
  (*DAT_10121edc)(param_4);
  (*DAT_10121edc)(param_5);
  (*DAT_10121edc)(param_6);
  (*DAT_10121edc)(local_4);
  (*DAT_10121ed0)((int)DAT_10132398);
  (*DAT_10121ec8)(iVar1);
  (*DAT_10121edc)(0x41000000);
  (*DAT_10121ec4)();
  return;
}

