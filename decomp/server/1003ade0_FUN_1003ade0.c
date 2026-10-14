
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_1003ade0(void *this,float *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  do {
    fVar2 = (float10)(*DAT_10121f74)(0xbf000000,0x3f000000);
    fVar3 = (float10)(*DAT_10121f74)(0xbf000000,0x3f000000);
    fVar1 = (float)(fVar3 + (float10)(float)fVar2);
    fVar2 = (float10)(*DAT_10121f74)(0xbf000000,0x3f000000);
    fVar3 = (float10)(*DAT_10121f74)(0xbf000000,0x3f000000);
    fVar3 = fVar3 + (float10)(float)fVar2;
  } while ((float10)_DAT_100dd618 < (float10)fVar1 * (float10)fVar1 + fVar3 * fVar3);
  fVar3 = fVar3 * (float10)param_3[1];
  fVar2 = (float10)fVar1 * (float10)*param_3;
  fStack_c = ((float)(fVar2 * (float10)*(float *)(DAT_10122044 + 0x40)) + *param_2 +
             (float)(fVar3 * (float10)*(float *)(DAT_10122044 + 0x34))) * _DAT_100de488 + *param_1;
  fStack_8 = ((float)(fVar2 * (float10)*(float *)(DAT_10122044 + 0x44)) + param_2[1] +
             (float)(fVar3 * (float10)*(float *)(DAT_10122044 + 0x38))) * _DAT_100de488 + param_1[1]
  ;
  fStack_4 = (float)((fVar2 * (float10)*(float *)(DAT_10122044 + 0x48) + (float10)param_2[2] +
                     fVar3 * (float10)*(float *)(DAT_10122044 + 0x3c)) * (float10)_DAT_100de488 +
                    (float10)param_1[2]);
  FUN_100afc60(param_1,&fStack_c,0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),param_4);
  return;
}

