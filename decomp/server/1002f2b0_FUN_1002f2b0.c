
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1002f2b0(void *param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  iVar5 = *(int *)((int)param_1 + 4);
  if ((*(byte *)(iVar5 + 0x1a0) & 2) == 0) {
    iVar5 = *(int *)(iVar5 + 0x184);
    lVar6 = __ftol();
    iVar2 = (int)lVar6;
    pfVar3 = FUN_1002f100(param_1,&fStack_44,(int)param_2);
    pfVar4 = FUN_1002f170(param_1,&fStack_50,param_2);
    FUN_100b02a0(pfVar4,pfVar3,iVar5,iVar2);
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x184);
    if (iVar5 == 0xf7) {
      iVar5 = 0x46;
    }
    lVar6 = __ftol();
    iVar2 = (int)lVar6;
    pfVar3 = FUN_1002f100(param_1,&fStack_44,(int)param_2);
    pfVar4 = FUN_1002f170(param_1,&fStack_50,param_2);
    FUN_100b01f0(pfVar4,pfVar3,iVar5,iVar2);
  }
  if ((*(byte *)(*(int *)((int)param_1 + 4) + 0x1a0) & 8) != 0) {
    FUN_1002f100(param_1,&fStack_5c,(int)param_2);
    FUN_1002f170(param_1,&fStack_68,param_2);
    fVar1 = *(float *)(*(int *)((int)param_1 + 4) + 0x1e0);
    fStack_44 = fStack_5c * fVar1 + fStack_5c * fVar1;
    fStack_40 = fStack_58 * fVar1 + fStack_58 * fVar1;
    fStack_50 = fStack_44 + fStack_68;
    fStack_4c = fStack_64 + fStack_40;
    fStack_48 = fStack_60 + fVar1 * fStack_54 + fVar1 * fStack_54;
    FUN_100afc60(&fStack_68,&fStack_50,1,0,auStack_38);
    if (fStack_28 != (float)_DAT_100dd628) {
      FUN_100b0400((int)auStack_38,*(int *)(*(int *)((int)param_1 + 4) + 0x184));
    }
  }
  return;
}

