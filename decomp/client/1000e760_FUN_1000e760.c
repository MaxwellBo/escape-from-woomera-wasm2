
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000e760(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [12];
  float *pfStack_4;
  
  pfVar5 = (float *)(**(code **)(*param_1 + 0xfc))();
  fVar1 = *pfVar5 * _DAT_1005dc08;
  fVar2 = pfVar5[1] * _DAT_1005dc08;
  pfVar5 = (float *)(**(code **)(*param_1 + 0xf8))(auStack_10);
  fVar3 = pfVar5[1] * _DAT_1005dc04;
  fVar4 = pfVar5[2] * _DAT_1005dc04;
  *pfStack_4 = *pfVar5 * _DAT_1005dc04 + (float)auStack_18;
  pfStack_4[1] = fVar3 + fVar1;
  pfStack_4[2] = fVar4 + fVar2;
  return;
}

