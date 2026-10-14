
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
FUN_100030b0(int param_1,float *param_2,undefined4 param_3,int param_4,float *param_5,
            undefined4 param_6,int param_7,int *param_8)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  bool bVar5;
  float afStack_18 [4];
  int iStack_8;
  undefined4 uStack_4;
  
  bVar5 = false;
  if ((param_1 < 1) || (iVar2 = (*DAT_100a5080)(), iVar2 < param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_7 != 0) {
    iVar2 = *param_8 % param_7;
    *param_8 = *param_8 + 1;
    if (iVar2 == 0) {
      if (bVar1) {
        afStack_18[3] = (float)iVar2;
        iStack_8 = iVar2;
        uStack_4 = 0xc0800000;
        iVar2 = 3;
        pfVar3 = param_5;
        do {
          pfVar4 = pfVar3 + 1;
          iVar2 = iVar2 + -1;
          *(float *)(&stack0xffffffe4 + -(int)param_5 + (int)pfVar4) =
               *pfVar3 + *pfVar3 +
               *(float *)((param_4 - (int)param_5) + (int)pfVar3) * _DAT_1005a184 +
               *(float *)((int)afStack_18 + (8 - (int)param_5) + (int)pfVar4) +
               *(float *)((int)param_2 + (-4 - (int)param_5) + (int)pfVar4);
          pfVar3 = pfVar4;
        } while (iVar2 != 0);
      }
      else {
        afStack_18[0] = *param_2;
        afStack_18[1] = param_2[1];
        afStack_18[2] = param_2[2];
      }
      bVar5 = param_7 != 1;
      FUN_1001a740(afStack_18,param_3);
    }
  }
  return bVar5;
}

