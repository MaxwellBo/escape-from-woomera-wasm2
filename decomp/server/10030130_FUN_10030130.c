
void __thiscall FUN_10030130(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
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
  (*DAT_10121ec8)(*(undefined4 *)(param_1[1] + 0x184));
  (*DAT_10121edc)(fVar2);
  (*DAT_10121edc)(fVar3);
  (*DAT_10121edc)(fVar4);
  if (*(int *)(param_1[1] + 0x184) == 0x7a) {
    lVar6 = __ftol();
    (*DAT_10121ed0)((int)lVar6);
    lVar6 = __ftol();
    (*DAT_10121ec8)((int)lVar6);
    lVar6 = __ftol();
    (*DAT_10121ec8)((int)lVar6);
  }
  else if (*(int *)(param_1[1] + 0x184) == 0xc) {
    (*DAT_10121ec8)(0);
    (*DAT_10121ec8)(1);
  }
  (*DAT_10121ec4)();
  if ((*(byte *)(param_1[1] + 0x1a0) & 1) == 0) {
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(0);
  }
  return;
}

