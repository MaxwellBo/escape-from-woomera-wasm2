
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10030820(void *this,int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  int **ppiVar8;
  char *pcVar9;
  undefined *puVar10;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0xcc))();
  if (iVar3 == 0) {
    return;
  }
  cVar2 = (*DAT_10121f24)(*(undefined4 *)(piVar1[1] + 0x208));
  uVar4 = 1 << (cVar2 - 1U & 0x1f);
  iVar3 = *(int *)((int)this + 4);
  if ((*(byte *)(iVar3 + 0x1a0) & 1) != 0) {
LAB_100309c0:
    *(uint *)(iVar3 + 0x184) = *(uint *)(iVar3 + 0x184) | uVar4;
    if (*(float *)(*(int *)((int)this + 4) + 0x164) == _DAT_100dd5f8) {
      iVar3 = *(int *)(*(int *)((int)this + 4) + 0x1e8);
      if (iVar3 != 0) {
        (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083e8,
                        *(int *)(DAT_10122044 + 0x98) + iVar3);
      }
    }
    else {
      lVar7 = __ftol();
      uVar5 = (undefined4)lVar7;
      ppiVar8 = &param_1;
      puVar10 = &DAT_101083c8;
      FUN_100c8506((undefined1 *)ppiVar8,&DAT_101083c8);
      (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),s_stype_101083f0,&param_1,ppiVar8,puVar10,
                      uVar5);
    }
    iVar3 = *(int *)(*(int *)((int)this + 4) + 0x1ec);
    if (iVar3 != 0) {
      (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083e0,
                      *(int *)(DAT_10122044 + 0x98) + iVar3);
    }
    iVar3 = *(int *)(*(int *)((int)this + 4) + 0x1f0);
    if (iVar3 != 0) {
      (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083d8,
                      *(int *)(DAT_10122044 + 0x98) + iVar3);
    }
    iVar3 = *(int *)(*(int *)((int)this + 4) + 500);
    if (iVar3 != 0) {
      (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083d0,
                      *(int *)(DAT_10122044 + 0x98) + iVar3);
    }
    (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083cc,&DAT_101083f8);
    uVar4 = *(uint *)(*(int *)((int)this + 4) + 0x1a0);
    if (((uVar4 & 1) != 0) && ((uVar4 & 2) != 0)) {
      FUN_100b0ef0((int)this);
    }
    return;
  }
  uVar6 = *(uint *)(iVar3 + 0x184) & uVar4;
  if ((uVar6 == 0) && ((param_3 == 1 || (param_3 == 3)))) goto LAB_100309c0;
  if (uVar6 == 0) {
    return;
  }
  if ((param_3 != 0) && (param_3 != 3)) {
    return;
  }
  *(uint *)(iVar3 + 0x184) = ~uVar4 & *(uint *)(iVar3 + 0x184);
  if (*(float *)(*(int *)((int)this + 4) + 0x164) == _DAT_100dd5f8) {
    if (*(int *)(*(int *)((int)this + 4) + 0x1e8) == 0) goto LAB_10030905;
    pcVar9 = &DAT_101083e8;
    uVar5 = *(undefined4 *)(piVar1[1] + 0x208);
  }
  else {
    pcVar9 = s_stype_101083f0;
    uVar5 = *(undefined4 *)(piVar1[1] + 0x208);
  }
  (*DAT_10121fe8)(uVar5,pcVar9,&DAT_101083f8);
LAB_10030905:
  if (*(int *)(*(int *)((int)this + 4) + 0x1ec) != 0) {
    (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083e0,&DAT_101083f8);
  }
  if (*(int *)(*(int *)((int)this + 4) + 0x1f0) != 0) {
    (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083d8,&DAT_101083f8);
  }
  if (*(int *)(*(int *)((int)this + 4) + 500) != 0) {
    (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083d0,&DAT_101083f8);
  }
  (*DAT_10121fe8)(*(undefined4 *)(piVar1[1] + 0x208),&DAT_101083cc,&DAT_101083f8);
  if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) == 0) {
    return;
  }
  FUN_100b0ef0((int)this);
  return;
}

