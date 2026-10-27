
void __thiscall FUN_100b1ca0(void *this,undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) < (int)(*(int *)(iVar1 + 8) + param_2)) {
      (*DAT_10121efc)(4,s_Save_Restore_overflow__1011b354);
      *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
      return;
    }
    puVar3 = *(undefined4 **)(iVar1 + 4);
    for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    *(uint *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
    *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
  }
  return;
}

