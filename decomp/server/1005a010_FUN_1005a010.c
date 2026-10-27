
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1005a010(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  longlong lVar8;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float afStack_44 [3];
  undefined1 auStack_38 [20];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  FUN_10058750(&fStack_68,param_1,param_3,
               (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1c8)));
  fVar7 = FUN_100588f0(*(undefined1 **)(param_1 + 4),param_3,
                       (byte *)(*(int *)(DAT_10122044 + 0x98) +
                               *(int *)(*(undefined1 **)(param_1 + 4) + 0x1e8)));
  iVar4 = *(int *)(param_1 + 4);
  fVar1 = (float)fVar7;
  lVar8 = __ftol();
  if ((int)lVar8 == 0) {
    pfVar3 = FUN_10058750(afStack_44,param_1,param_3,
                          (byte *)(*(int *)(iVar4 + 0x1d0) + *(int *)(DAT_10122044 + 0x98)));
    fStack_74 = *pfVar3 - fStack_68;
    fStack_70 = pfVar3[1] - fStack_64;
    fStack_6c = pfVar3[2] - fStack_60;
    fStack_5c = fStack_74;
    fStack_58 = fStack_70;
    fStack_54 = fStack_6c;
  }
  else if ((int)lVar8 == 1) {
    pfVar3 = FUN_10058820(&fStack_50,param_1,param_3,
                          (byte *)(*(int *)(iVar4 + 0x1d0) + *(int *)(DAT_10122044 + 0x98)));
    fStack_74 = *pfVar3;
    fStack_70 = pfVar3[1];
    fStack_6c = pfVar3[2];
  }
  iVar4 = *(int *)(param_1 + 4);
  if (*(float *)(iVar4 + 0x160) != _DAT_100dd5f8) {
    fVar2 = SQRT(fStack_74 * fStack_74 + fStack_6c * fStack_6c + fStack_70 * fStack_70);
    lVar8 = __ftol();
    switch((int)lVar8) {
    case 1:
      fStack_74 = fStack_74 / fVar2;
      fStack_70 = fStack_70 / fVar2;
      fStack_6c = fStack_6c / fVar2;
      break;
    case 2:
      fVar2 = fVar2 * fVar2;
      fStack_74 = fStack_74 / fVar2;
      fStack_70 = fStack_70 / fVar2;
      fStack_6c = fStack_6c / fVar2;
      break;
    case 3:
      fVar2 = fVar2 * fVar2 * fVar2;
      fStack_74 = fStack_74 / fVar2;
      fStack_70 = fStack_70 / fVar2;
      fStack_6c = fStack_6c / fVar2;
      break;
    case 4:
      fStack_74 = fStack_74 * fVar2;
      fStack_70 = fStack_70 * fVar2;
      fStack_6c = fStack_6c * fVar2;
    }
  }
  fStack_74 = fStack_74 * fVar1;
  fStack_70 = fStack_70 * fVar1;
  fStack_6c = fStack_6c * fVar1;
  if (*(float *)(iVar4 + 0x164) == _DAT_100dd5f8) goto LAB_1005a35f;
  iVar6 = 1;
  iVar5 = 1;
  fStack_5c = fStack_74;
  fStack_58 = fStack_70;
  fStack_54 = fStack_6c;
  lVar8 = __ftol();
  iVar4 = (int)lVar8;
  if (iVar4 == 2) {
    iVar6 = 0;
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 != 4) goto LAB_1005a2d9;
      iVar6 = 0;
    }
    iVar5 = 0;
  }
LAB_1005a2d9:
  fStack_50 = fStack_5c + fStack_68;
  fStack_4c = fStack_58 + fStack_64;
  fStack_48 = fStack_54 + fStack_60;
  FUN_100afc20(&fStack_68,&fStack_50,iVar5,iVar6,0,auStack_38);
  FUN_10001d60(&fStack_50,fStack_24 - fStack_68,fStack_20 - fStack_64,fStack_1c - fStack_60);
  fStack_74 = fStack_50;
  fStack_70 = fStack_4c;
  fStack_6c = fStack_48;
LAB_1005a35f:
  *param_2 = fStack_74;
  param_2[1] = fStack_70;
  param_2[2] = fStack_6c;
  return;
}

