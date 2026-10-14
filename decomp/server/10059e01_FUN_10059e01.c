
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_10059e01(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,int param_5,
            float param_6,float param_7,float param_8)

{
  char *pcVar1;
  float fVar2;
  uint in_EAX;
  undefined1 *puVar3;
  undefined4 unaff_EBX;
  int unaff_EBP;
  float10 fVar4;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(char *)(unaff_EBP + -0x62a5effb) = *(char *)(unaff_EBP + -0x62a5effb) - (char)unaff_EBX;
  *(char *)(in_EAX + 0xb3b30bd) =
       *(char *)(in_EAX + 0xb3b30bd) + (char)((uint)param_2 >> 8) +
       (0xfa629def < in_EAX + 0x59dcf10);
  pcVar1 = (char *)(unaff_EBP + -0x6f6feffb +
                   CONCAT22((short)((uint)unaff_EBX >> 0x10),
                            CONCAT11((char)((uint)unaff_EBX >> 8) + (char)param_1 +
                                     (0xfa6230ef < in_EAX),(char)unaff_EBX)) * 4);
  *pcVar1 = *pcVar1 + (char)param_1 + (0xfa6281ef < in_EAX + 0xb3b3120);
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) {
    fStack_c = SQRT(param_6 * param_6 + param_7 * param_7 + param_8 * param_8);
    if (fStack_c == _DAT_100dd5f8) {
      fStack_14 = 0.0;
      fStack_10 = 0.0;
      fStack_c = 1.0;
    }
    else {
      fStack_c = _DAT_100dd618 / fStack_c;
      fStack_14 = param_6 * fStack_c;
      fStack_10 = param_7 * fStack_c;
      fStack_c = param_8 * fStack_c;
    }
    param_6 = fStack_14;
    param_7 = fStack_10;
    param_8 = fStack_c;
  }
  puVar3 = (undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
  fVar4 = FUN_100588f0(puVar3,param_5,puVar3);
  fVar2 = (float)fVar4;
  FUN_10058820(&fStack_14,param_1,param_5,
               (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4)));
  fStack_c = fStack_c + param_8 * fVar2;
  if ((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 2) != 0) {
    fStack_c = -fStack_c;
  }
  *param_4 = param_6 * fVar2 + fStack_14;
  param_4[1] = fStack_10 + param_7 * fVar2;
  param_4[2] = fStack_c;
  return;
}

