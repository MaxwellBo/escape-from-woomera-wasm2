
void FUN_10018e60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_2;
  if (((param_1 != 0) && (piVar2 = *(int **)(param_1 + 0x7c), piVar2 != (int *)0x0)) &&
     (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x1c) * 0x18;
    if (*(int *)(*(int *)(param_2 + 0x28) + 4 + *(int *)(param_2 + 0x1c) * 0x18) != param_1) {
      (*DAT_10121efc)(4,s_ENTITY_TABLE_OR_INDEX_IS_WRONG___10105048);
    }
    uVar6 = (**(code **)(*piVar2 + 0x3c))();
    if ((uVar6 & 0x80000000) == 0) {
      iVar3 = piVar2[1];
      if (*(int *)(iVar3 + 0x108) == 7) {
        fVar4 = *DAT_10122044 - *(float *)(iVar3 + 0x100);
        *(float *)(iVar3 + 0x100) = fVar4 + *(float *)(iVar3 + 0x100);
        *(float *)(piVar2[1] + 0x104) = fVar4 + *(float *)(piVar2[1] + 0x104);
        piVar2[0x16] = *(int *)(piVar2[1] + 0x104);
        piVar2[0x15] = (int)(fVar4 + (float)piVar2[0x15]);
      }
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)piVar2[1];
      FUN_100b1180(&param_1,iVar5);
      (**(code **)(*piVar2 + 0x34))(&param_1);
      *(int *)(iVar1 + 0xc) = *(int *)(iVar5 + 8) - *(int *)(iVar1 + 8);
      FUN_100b1190();
    }
  }
  return;
}

