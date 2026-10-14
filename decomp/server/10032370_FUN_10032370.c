
void __thiscall FUN_10032370(int *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float afStack_c [2];
  float fStack_4;
  
  if (param_1[0x37] == 0) {
    iVar2 = param_1[1];
    fVar4 = *(float *)(iVar2 + 8);
    fVar3 = *(float *)(iVar2 + 0xc);
    fStack_4 = *(float *)(iVar2 + 0x10);
  }
  else {
    pfVar1 = FUN_10058750(afStack_c,(int)param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1[0x37]));
    fVar4 = *pfVar1;
    fVar3 = pfVar1[1];
    fStack_4 = pfVar1[2];
  }
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    fStack_4 = (float)param_1[0x30] + fStack_4;
  }
  (*DAT_10121ec0)(4,0x17,param_1[1] + 8,0);
  if ((char)param_1[0x36] == '\0') {
    iVar2 = 0x15;
  }
  else {
    iVar2 = (int)(char)param_1[0x36];
  }
  (*DAT_10121ec8)(iVar2);
  (*DAT_10121edc)(fVar4);
  (*DAT_10121edc)(fVar3);
  (*DAT_10121edc)(fStack_4);
  (*DAT_10121edc)(fVar4);
  (*DAT_10121edc)(fVar3);
  (*DAT_10121edc)((float)param_1[0x2f] + fStack_4);
  (*DAT_10121ed0)(param_1[0x35]);
  (*DAT_10121ec8)(param_1[0x34]);
  (*DAT_10121ec8)(param_1[0x33]);
  (*DAT_10121ec8)(param_1[0x2e]);
  (*DAT_10121ec8)(param_1[0x30]);
  (*DAT_10121ec8)(param_1[0x32]);
  lVar5 = __ftol();
  (*DAT_10121ec8)((int)lVar5);
  lVar5 = __ftol();
  (*DAT_10121ec8)((int)lVar5);
  lVar5 = __ftol();
  (*DAT_10121ec8)((int)lVar5);
  lVar5 = __ftol();
  (*DAT_10121ec8)((int)lVar5);
  (*DAT_10121ec8)(param_1[0x31]);
  (*DAT_10121ec4)();
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(0);
  }
  return;
}

