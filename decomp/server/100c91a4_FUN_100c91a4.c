
uint __thiscall FUN_100c91a4(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint extraout_EAX;
  undefined1 in_ZF;
  ushort in_FPUControlWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  uVar1 = __fload_withFB(param_1,(int)&stack0x00000004);
  if ((bool)in_ZF) {
    if (((uVar1 & 0xfffff) == 0) && (param_2 == 0)) {
LAB_100c922f:
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_100cd83c();
    }
    if (DAT_10134970 == 0) {
      __startOneArgErrorHandling(&DAT_1011e020,0xd,in_FPUControlWord,unaff_retaddr,param_2,param_3);
      return extraout_EAX;
    }
  }
  else {
    fVar2 = extraout_ST0;
    if (in_FPUControlWord != 0x27f) {
      uVar1 = FUN_100cd825();
      fVar2 = extraout_ST0_00;
    }
    if (uVar1 < 0x3ff00000) {
      fpatan(SQRT(((float10)1 - fVar2) * ((float10)1 + fVar2)),fVar2);
    }
    else {
      if ((0x3ff00000 < uVar1) || ((param_3 & 0xfffff) != 0 || param_2 != 0)) goto LAB_100c922f;
      uVar1 = 0;
    }
    if (DAT_10134970 == 0) {
      uVar1 = __math_exit(&DAT_1011e020,0xd,unaff_retaddr,param_2,param_3);
      return uVar1;
    }
  }
  return uVar1;
}

