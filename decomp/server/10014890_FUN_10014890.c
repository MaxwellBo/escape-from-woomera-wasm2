
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10014890(CBaseEntity *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int iVar5;
  
  FUN_10062050(param_1);
  if (*(int *)(*(int *)(param_1 + 4) + 0x110) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 0;
  }
  iVar4 = (*DAT_10121f70)(0,0x27);
  if (iVar4 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x110) = 1;
  }
  bVar3 = FUN_10019450((uint *)(param_1 + 0x160));
  if ((CONCAT31(extraout_var,bVar3) != 0) && (*(int *)(param_1 + 0x1cc) == 4)) {
    iVar5 = FUN_10019460((uint *)(param_1 + 0x160));
    iVar4 = *(int *)(param_1 + 4);
    fVar1 = *(float *)(iVar4 + 8) - *(float *)(*(int *)(iVar5 + 4) + 8);
    fVar2 = *(float *)(iVar4 + 0xc) - *(float *)(*(int *)(iVar5 + 4) + 0xc);
    if (SQRT(fVar1 * fVar1 + fVar2 * fVar2) < _DAT_100dd658) {
      *(undefined4 *)(iVar4 + 0x138) = 0x3fa00000;
    }
  }
  return;
}

