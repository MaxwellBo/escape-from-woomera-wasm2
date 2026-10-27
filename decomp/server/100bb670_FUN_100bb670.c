
void __thiscall FUN_100bb670(void *this,undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  bool bVar6;
  void *local_4;
  
  puVar2 = param_2;
  puVar1 = *(uint **)((int)this + 4);
  puVar4 = (uint *)puVar1[1];
  bVar6 = true;
  puVar5 = puVar1;
  if (puVar4 != DAT_1013244c) {
    do {
      puVar5 = puVar4;
      bVar6 = *param_2 < puVar5[3];
      if (bVar6) {
        puVar4 = (uint *)*puVar5;
      }
      else {
        puVar4 = (uint *)puVar5[2];
      }
    } while (puVar4 != DAT_1013244c);
  }
  local_4 = this;
  if (*(char *)((int)this + 8) != '\0') {
    puVar3 = (undefined4 *)FUN_100bd7b0(this,&local_4,(int)puVar4,(int *)puVar5,param_2);
    *param_1 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  param_2 = puVar5;
  if (bVar6) {
    if (puVar5 == (uint *)*puVar1) {
      puVar3 = (undefined4 *)FUN_100bd7b0(this,&local_4,(int)puVar4,(int *)puVar5,puVar2);
      *param_1 = *puVar3;
      *(undefined1 *)(param_1 + 1) = 1;
      return;
    }
    FUN_100bdb90((int *)&param_2);
  }
  if (param_2[3] < *puVar2) {
    puVar3 = (undefined4 *)FUN_100bd7b0(this,&local_4,(int)puVar4,(int *)puVar5,puVar2);
    *param_1 = *puVar3;
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

