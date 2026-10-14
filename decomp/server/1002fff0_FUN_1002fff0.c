
void __thiscall FUN_1002fff0(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float afStack_c [3];
  
  iVar1 = param_1[1];
  if (*(int *)(iVar1 + 0x1d4) == 0) {
    pfVar5 = (float *)(iVar1 + 8);
  }
  else {
    pfVar5 = FUN_10058750(afStack_c,(int)param_1,param_2,
                          (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar1 + 0x1d4)));
  }
  fVar2 = *pfVar5;
  fVar3 = pfVar5[1];
  fVar4 = pfVar5[2];
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(100);
  (*DAT_10121edc)(fVar2);
  (*DAT_10121edc)(fVar3);
  (*DAT_10121edc)(fVar4);
  (*DAT_10121ed0)(param_1[0x32]);
  (*DAT_10121ed0)((*(byte *)(param_1[1] + 0x1a0) & 1) != 0);
  (*DAT_10121ec4)();
  if ((*(byte *)(param_1[1] + 0x1a0) & 2) == 0) {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(0);
  }
  return;
}

