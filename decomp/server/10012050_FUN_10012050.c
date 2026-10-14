
void __fastcall FUN_10012050(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_1 + 4);
  fVar1 = *(float *)(param_1 + 0xcc);
  fVar2 = *(float *)(iVar4 + 0x1f8);
  fVar3 = *(float *)(param_1 + 0xc0);
  lVar6 = __ftol();
  iVar5 = (int)lVar6;
  if (iVar5 == 100) {
    iVar5 = 99;
  }
  FUN_10094b20(*(void **)(iVar4 + 0x208),*(void **)(iVar4 + 0x208),6,
               (char *)(*(int *)(iVar4 + 500) + *(int *)(DAT_10122044 + 0x98)),
               (fVar1 / fVar2) * fVar3,*(undefined4 *)(param_1 + 0xbc),0xc0,iVar5);
  return;
}

