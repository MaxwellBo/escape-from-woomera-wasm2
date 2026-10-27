
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ae530(int param_1,float param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_stack_00000020;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [20];
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pfVar1 = (float *)(param_1 + 0x8c);
  *pfVar1 = param_2;
  *(undefined4 *)(param_1 + 0x90) = param_3;
  *(undefined4 *)(param_1 + 0x94) = param_4;
  FUN_100af200(&stack0x00000014);
  fStack_44 = DAT_10122044[10] * _DAT_100e185c + *pfVar1;
  fStack_40 = DAT_10122044[0xb] * _DAT_100e185c + *(float *)(param_1 + 0x90);
  fStack_3c = DAT_10122044[0xc] * _DAT_100e185c + *(float *)(param_1 + 0x94);
  FUN_100afc60(pfVar1,&fStack_44,1,in_stack_00000020,auStack_38);
  *(float *)(param_1 + 0x80) = fStack_24;
  *(undefined4 *)(param_1 + 0x84) = uStack_20;
  *(undefined4 *)(param_1 + 0x88) = uStack_1c;
  fVar2 = *(float *)(param_1 + 0x80) - *pfVar1;
  fVar3 = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0x90);
  fVar4 = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x94);
  fVar5 = _DAT_100dd5f8;
  if (_DAT_100dd5f8 <
      SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
           *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
           *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20))) {
    fVar5 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) /
            SQRT(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                 *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                 *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20));
  }
  *(float *)(param_1 + 0x9c) = *DAT_10122044;
  *(float *)(param_1 + 0x98) = fVar5 + *DAT_10122044;
  return;
}

