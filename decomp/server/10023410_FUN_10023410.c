
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10023410(int param_1,float *param_2,undefined4 *param_3,int param_4,float *param_5)

{
  float fVar1;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  uStack_50 = *param_3;
  uStack_4c = param_3[1];
  fStack_48 = (float)param_3[2] + _DAT_100ddac8;
  fStack_44 = *param_2;
  fStack_40 = param_2[1];
  fStack_3c = param_2[2] + _DAT_100ddac8;
  FUN_100afc90(&fStack_44,&uStack_50,0,2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),auStack_38);
  if (param_5 != (float *)0x0) {
    fVar1 = (fStack_1c - _DAT_100ddac8) - param_2[2];
    *param_5 = SQRT((fStack_24 - *param_2) * (fStack_24 - *param_2) +
                    (fStack_20 - param_2[1]) * (fStack_20 - param_2[1]) + fVar1 * fVar1);
  }
  if ((iStack_34 == 0) && ((float)_DAT_100dd628 <= fStack_28)) {
    return 2;
  }
  if ((param_4 != 0) && (*(int *)(*(int *)(param_4 + 4) + 0x208) == *(int *)(DAT_10122044 + 0x74)))
  {
    return 2;
  }
  return 0;
}

