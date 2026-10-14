
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000a4e0(float *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float in_stack_00000024;
  float in_stack_00000028;
  int in_stack_00000040;
  int in_stack_00000044;
  
  fVar1 = param_2;
  fVar2 = 1.4013e-45;
  if (param_2 == 0.0) {
    fVar3 = (float10)0.0;
  }
  else {
    do {
      if (in_stack_00000040 == 0) {
        do {
          fVar3 = (float10)(*DAT_1007f03c)(0xbf000000,0x3f000000);
          fVar4 = (float10)(*DAT_1007f03c)(0xbf000000,0x3f000000);
          param_2 = (float)(fVar4 + (float10)(float)fVar3);
          fVar4 = (float10)(*DAT_1007f03c)(0xbf000000,0x3f000000);
          fVar3 = (float10)(*DAT_1007f03c)(0xbf000000,0x3f000000);
          fVar3 = fVar3 + (float10)(float)fVar4;
        } while ((float10)_DAT_10059eb0 < (float10)param_2 * (float10)param_2 + fVar3 * fVar3);
      }
      else {
        fVar3 = FUN_10018fb0((int)fVar2 + 1U + in_stack_00000044,-0.5,0x3f000000);
        fVar4 = FUN_10018fb0((int)fVar2 + in_stack_00000044,-0.5,0x3f000000);
        param_2 = (float)(fVar4 + (float10)(float)fVar3);
        fVar4 = FUN_10018fb0((int)fVar2 + 3U + in_stack_00000044,-0.5,0x3f000000);
        fVar3 = FUN_10018fb0((int)fVar2 + 2U + in_stack_00000044,-0.5,0x3f000000);
        fVar3 = fVar3 + (float10)(float)fVar4;
      }
      fVar2 = (float)((int)fVar2 + 1);
    } while ((uint)fVar2 <= (uint)fVar1);
  }
  param_1[2] = 0.0;
  *param_1 = in_stack_00000024 * param_2;
  param_1[1] = (float)((float10)in_stack_00000028 * fVar3);
  return;
}

