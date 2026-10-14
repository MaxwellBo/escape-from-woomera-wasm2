
void __thiscall FUN_100badb0(void *this,undefined4 *param_1,int *param_2)

{
  int *this_00;
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  void *local_4;
  
  this_00 = param_2;
  piVar4 = *(int **)((int)this + 4);
  bVar5 = true;
  piVar3 = (int *)piVar4[1];
  local_4 = this;
  if (piVar3 != DAT_1013243c) {
    do {
      piVar4 = piVar3;
      uVar1 = FUN_100be360(this_00,(int)(piVar4 + 3));
      bVar5 = (int)uVar1 < 0;
      if (bVar5) {
        piVar3 = (int *)*piVar4;
      }
      else {
        piVar3 = (int *)piVar4[2];
      }
    } while (piVar3 != DAT_1013243c);
  }
  if (*(char *)((int)this + 8) != '\0') {
    puVar2 = (undefined4 *)FUN_100bce50(this,&local_4,(int)piVar3,piVar4,(undefined1 *)this_00);
    *param_1 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  param_2 = piVar4;
  if (bVar5) {
    if (piVar4 == (int *)**(int **)((int)this + 4)) {
      puVar2 = (undefined4 *)FUN_100bce50(this,&local_4,(int)piVar3,piVar4,(undefined1 *)this_00);
      *param_1 = *puVar2;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_100bda30((int *)&param_2);
  }
  uVar1 = FUN_100be360(param_2 + 3,(int)this_00);
  if ((int)uVar1 < 0) {
    puVar2 = (undefined4 *)FUN_100bce50(this,&local_4,(int)piVar3,piVar4,(undefined1 *)this_00);
    *param_1 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

