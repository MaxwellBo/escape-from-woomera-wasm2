
void __thiscall FUN_100b22a0(void *this,undefined4 *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] - *piVar1 < piVar1[3]) {
      if (piVar1[3] < (int)(piVar1[2] + param_2)) {
        (*DAT_10121efc)(4,s_Restore_overflow__1011b390);
        *(undefined4 *)(*(int *)this + 8) = *(undefined4 *)(*(int *)this + 0xc);
        return;
      }
      if (param_1 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)piVar1[1];
        for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
          *param_1 = *puVar3;
          puVar3 = puVar3 + 1;
          param_1 = param_1 + 1;
        }
        for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *(undefined1 *)param_1 = *(undefined1 *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
          param_1 = (undefined4 *)((int)param_1 + 1);
        }
      }
      *(uint *)(*(int *)this + 4) = *(int *)(*(int *)this + 4) + param_2;
      *(int *)(*(int *)this + 8) = *(int *)(*(int *)this + 8) + param_2;
    }
  }
  return;
}

