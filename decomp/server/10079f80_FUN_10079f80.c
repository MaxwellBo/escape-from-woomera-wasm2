
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10079f80(int *param_1)

{
  int iVar1;
  int iVar2;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*param_1 + 0xd8))();
  if (iVar2 != 0) {
    FUN_10019420(param_1 + 0x5a,iVar2);
    iVar1 = param_1[1];
    iVar2 = *(int *)(iVar2 + 4);
    fStack_4 = *(float *)(iVar2 + 0x10) -
               (*(float *)(iVar1 + 0xf0) + *(float *)(iVar1 + 0xe4)) * _DAT_100dd614;
    fStack_8 = *(float *)(iVar2 + 0xc) -
               (*(float *)(iVar1 + 0xec) + *(float *)(iVar1 + 0xe0)) * _DAT_100dd614;
    fStack_c = *(float *)(iVar2 + 8) -
               (*(float *)(iVar1 + 0xe8) + *(float *)(iVar1 + 0xdc)) * _DAT_100dd614;
    FUN_100afe10((int)param_1,&fStack_c);
  }
  FUN_10019470(param_1);
  return;
}

