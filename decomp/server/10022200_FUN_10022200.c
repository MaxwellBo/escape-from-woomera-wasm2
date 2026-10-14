
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10022200(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (SQRT(*(float *)((int)param_1 + 0x380) * *(float *)((int)param_1 + 0x380) +
           *(float *)((int)param_1 + 0x37c) * *(float *)((int)param_1 + 0x37c) +
           *(float *)((int)param_1 + 0x378) * *(float *)((int)param_1 + 0x378)) <
      (float)_DAT_100e1130) {
    FUN_10008160(param_1,&DAT_10106460);
    return;
  }
  FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
  fVar4 = *(float *)((int)param_1 + 0x378) * *(float *)(DAT_10122044 + 0x28) +
          *(float *)(DAT_10122044 + 0x2c) * *(float *)((int)param_1 + 0x37c) +
          *(float *)(DAT_10122044 + 0x30) * *(float *)((int)param_1 + 0x380);
  fVar1 = *(float *)(DAT_10122044 + 0x40) * *(float *)((int)param_1 + 0x378) +
          *(float *)(DAT_10122044 + 0x44) * *(float *)((int)param_1 + 0x37c) +
          *(float *)(DAT_10122044 + 0x48) * *(float *)((int)param_1 + 0x380);
  fVar2 = *(float *)(DAT_10122044 + 0x34) * *(float *)((int)param_1 + 0x378) +
          *(float *)(DAT_10122044 + 0x38) * *(float *)((int)param_1 + 0x37c) +
          *(float *)(DAT_10122044 + 0x3c) * *(float *)((int)param_1 + 0x380);
  fVar5 = ABS(fVar4);
  fVar3 = ABS(fVar1);
  if ((fVar3 < fVar5) && (ABS(fVar2) < fVar5)) {
    if (fVar4 <= _DAT_100dd5f8) {
      FUN_10008160(param_1,(byte *)s_backward_1010644c);
      return;
    }
    FUN_10008160(param_1,(byte *)s_forward_10106458);
    return;
  }
  if (fVar3 <= ABS(fVar2)) {
    if (fVar2 <= _DAT_100dd5f8) {
      FUN_10008160(param_1,&DAT_10106434);
      return;
    }
    FUN_10008160(param_1,&DAT_10106460);
    return;
  }
  if (fVar1 <= _DAT_100dd5f8) {
    FUN_10008160(param_1,&DAT_1010643c);
    return;
  }
  FUN_10008160(param_1,(byte *)s_right_10106444);
  return;
}

