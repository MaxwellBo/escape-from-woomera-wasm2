
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_10036400(undefined4 *param_1)

{
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  float fStack_1c;
  
  uStack_44 = *param_1;
  uStack_40 = param_1[1];
  fStack_3c = (float)param_1[2] - _DAT_100de9b8;
  FUN_100afc60(param_1,&uStack_44,1,0,auStack_38);
  if (fStack_28 != (float)_DAT_100dd628) {
    return (float10)fStack_1c;
  }
  return (float10)fStack_3c;
}

