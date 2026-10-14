
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100c54e0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  int iVar6;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 auStack_24 [3];
  undefined4 auStack_18 [3];
  undefined4 auStack_c [3];
  
  cVar1 = FUN_100c7490();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1[1] + 0x138) = 0;
    *(float *)(param_1[1] + 0x104) = *DAT_10122044 + _DAT_100f9398;
    return;
  }
  *(undefined4 *)(param_1[1] + 0x138) = 0x3f800000;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  uVar2 = FUN_100c5e30((int)param_1);
  if ((char)uVar2 != '\0') {
    FUN_100c80d0();
  }
  switch(param_1[0xe6]) {
  case 0:
    iVar4 = FUN_100c6980();
    uVar2 = FUN_100c5c50((int)param_1,iVar4);
    if (((char)uVar2 != '\0') || (uVar2 = FUN_100c5e30((int)param_1), (char)uVar2 != '\0')) {
      param_1[0xe6] = 1;
      iVar4 = FUN_100c6980();
      piVar3 = (int *)FUN_100c5c30(&fStack_30,iVar4);
      param_1[0xe7] = *piVar3;
      param_1[0xe8] = piVar3[1];
      param_1[0xe9] = piVar3[2];
      fVar5 = FUN_100c5b60();
      param_1[0xea] = (int)(float)fVar5;
      param_1[0xeb] = (int)(float)fVar5;
    }
    break;
  case 1:
    iVar4 = FUN_100c6980();
    uVar2 = FUN_100c5c50((int)param_1,iVar4);
    if (((char)uVar2 != '\0') && (uVar2 = FUN_100c5e30((int)param_1), (char)uVar2 == '\0')) {
      fVar5 = FUN_100c5b60();
      if ((float10)_DAT_100e0d94 <= fVar5 - (float10)(float)param_1[0xea]) {
        FUN_100ba040((byte *)(*(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26]),
                     s_Hey__what_was_that__I_thought_I_s_1011cec4,10);
        iVar4 = FUN_100c6980();
        piVar3 = (int *)FUN_100c5c30(auStack_24,iVar4);
        param_1[0xe7] = *piVar3;
        param_1[0xe8] = piVar3[1];
        param_1[0xe9] = piVar3[2];
        fVar5 = FUN_100c5b60();
        param_1[0xea] = (int)(float)fVar5;
        param_1[0xeb] = (int)(float)fVar5;
        param_1[0xe6] = 3;
      }
      break;
    }
    goto LAB_100c56fb;
  case 2:
    iVar4 = FUN_100c6980();
    uVar2 = FUN_100c5c50((int)param_1,iVar4);
    if (((char)uVar2 != '\0') || (uVar2 = FUN_100c5e30((int)param_1), (char)uVar2 != '\0')) {
      FUN_100ba040((byte *)(*(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26]),s_Hmmm__1011cea0
                   ,10);
      param_1[0xe6] = 3;
      fVar5 = FUN_100c5b60();
      param_1[0xeb] = (int)(float)fVar5;
      break;
    }
    fVar5 = FUN_100c5b60();
    if ((fVar5 - (float10)(float)param_1[0xea] < (float10)_DAT_100dd5d8) ||
       (fVar5 = FUN_100c5b60(), fVar5 - (float10)(float)param_1[0xeb] < (float10)_DAT_100dd618))
    break;
    FUN_100ba040((byte *)(*(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26]),
                 s_Ah__guess_it_was_nothing____1011cea8,10);
LAB_100c56fb:
    param_1[0xe6] = 0;
    break;
  case 3:
    iVar4 = FUN_100c6980();
    uVar2 = FUN_100c5c50((int)param_1,iVar4);
    if (((char)uVar2 == '\0') || (uVar2 = FUN_100c5e30((int)param_1), (char)uVar2 != '\0')) {
      fVar5 = FUN_100c5b60();
      param_1[0xeb] = (int)(float)fVar5;
      param_1[0xe6] = 2;
    }
    else {
      iVar4 = FUN_100c6980();
      piVar3 = (int *)FUN_100c5c30(auStack_18,iVar4);
      param_1[0xe7] = *piVar3;
      param_1[0xe8] = piVar3[1];
      param_1[0xe9] = piVar3[2];
      fVar5 = FUN_100c5b60();
      if (fVar5 - (float10)(float)param_1[0xeb] < (float10)_DAT_100dd618) {
        iVar4 = FUN_100c6980();
        fVar5 = FUN_100c5e50((int)param_1,iVar4);
        if ((float10)_DAT_100ddaf4 <= fVar5) break;
      }
      FUN_100ba040((byte *)(*(int *)(param_1[1] + 0x1cc) + (int)DAT_10122044[0x26]),
                   s_Halt__Put_your_hands_up__and_get_1011ce68,10);
      fVar5 = FUN_100c5b60();
      param_1[0xeb] = (int)(float)fVar5;
      FUN_100c5480();
      iVar4 = FUN_100c6980();
      FUN_10019420(param_1 + 0x5a,iVar4);
      FUN_1005d500(param_1,4,0);
    }
    break;
  case 4:
    iVar4 = FUN_100c6980();
    piVar3 = (int *)FUN_100c5c30(auStack_c,iVar4);
    param_1[0xe7] = *piVar3;
    param_1[0xe8] = piVar3[1];
    param_1[0xe9] = piVar3[2];
    iVar4 = FUN_100c6980();
    fVar5 = FUN_100c5e50((int)param_1,iVar4);
    if (fVar5 < (float10)_DAT_100e45b4) {
      FUN_100c4d10(10.0);
      iVar6 = 0x46;
      iVar4 = FUN_100c6980();
      FUN_100c81d0(iVar4,iVar6);
    }
  }
  iVar4 = param_1[0xe6];
  if (iVar4 == 4) {
    FUN_1009b420(param_1,(float *)(param_1 + 0xe7));
    if (param_1[0x9b] == 0) {
      iVar4 = FUN_100c6980();
      FUN_10019420(param_1 + 0x5a,iVar4);
      FUN_1005d500(param_1,4,0);
    }
  }
  else if ((iVar4 == 2) || (iVar4 == 3)) {
    FUN_1009b420(param_1,(float *)(param_1 + 0xe7));
    fStack_30 = (float)param_1[0xe7];
    iStack_2c = param_1[0xe8];
    iStack_28 = param_1[0xe9];
    iVar4 = FUN_100c5c30(auStack_c,(int)param_1);
    iStack_28 = *(undefined4 *)(iVar4 + 8);
    FUN_1005d4b0(param_1,(param_1[0xe6] == 4) + 3,0,&fStack_30);
    iVar4 = FUN_100c6980();
    FUN_10019420(param_1 + 0x5a,iVar4);
  }
  FUN_1005d160(param_1);
  (**(code **)(*param_1 + 8))(0x3ccccccd);
  return;
}

