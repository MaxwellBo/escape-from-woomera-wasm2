
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10072da0(int param_1)

{
  int iVar1;
  float local_c;
  float local_8;
  float fStack_4;
  
  if ((0 < *(int *)(param_1 + 0x598)) ||
     (iVar1 = (*DAT_10121f70)(0,99), *(float *)(param_1 + 0x374) < (float)iVar1)) {
    iVar1 = *(int *)(param_1 + 4);
    fStack_4 = *(float *)(DAT_10122044 + 0x48) * _DAT_100ed950 + *(float *)(iVar1 + 0x10);
    local_8 = *(float *)(DAT_10122044 + 0x44) * _DAT_100ed950 + *(float *)(iVar1 + 0xc);
    local_c = *(float *)(DAT_10122044 + 0x40) * _DAT_100ed950 + *(float *)(iVar1 + 8);
    (*DAT_10121ec0)(4,0x17,&local_c,0);
    (*DAT_10121ec8)(5);
    (*DAT_10121edc)(local_c);
    (*DAT_10121edc)(local_8);
    (*DAT_10121edc)(fStack_4);
    (*DAT_10121ed0)((int)DAT_10131cf2);
    iVar1 = (*DAT_10121f70)(0,9);
    (*DAT_10121ec8)(iVar1 + 0x14);
    (*DAT_10121ec8)(0xc);
    (*DAT_10121ec4)();
    if (0 < *(int *)(param_1 + 0x598)) {
      *(int *)(param_1 + 0x598) = *(int *)(param_1 + 0x598) + -1;
    }
  }
  if ((*(int *)(param_1 + 0x59c) < 1) &&
     (iVar1 = (*DAT_10121f70)(0,99), (float)iVar1 <= *(float *)(param_1 + 0x370))) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  fStack_4 = *(float *)(DAT_10122044 + 0x48) * _DAT_100ed94c + *(float *)(iVar1 + 0x10);
  local_8 = *(float *)(DAT_10122044 + 0x44) * _DAT_100ed94c + *(float *)(iVar1 + 0xc);
  local_c = *(float *)(DAT_10122044 + 0x40) * _DAT_100ed94c + *(float *)(iVar1 + 8);
  (*DAT_10121ec0)(4,0x17,&local_c,0);
  (*DAT_10121ec8)(5);
  (*DAT_10121edc)(local_c);
  (*DAT_10121edc)(local_8);
  (*DAT_10121edc)(fStack_4);
  (*DAT_10121ed0)((int)DAT_10131cf2);
  iVar1 = (*DAT_10121f70)(0,9);
  (*DAT_10121ec8)(iVar1 + 0x14);
  (*DAT_10121ec8)(0xc);
  (*DAT_10121ec4)();
  if (0 < *(int *)(param_1 + 0x59c)) {
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + -1;
  }
  return;
}

