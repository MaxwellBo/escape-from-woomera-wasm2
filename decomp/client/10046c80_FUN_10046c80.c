
void * __thiscall FUN_10046c80(void *this,int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  if (*(uint *)(param_1 + 8) < param_2) {
    FUN_1005747d();
  }
  uVar3 = *(int *)(param_1 + 8) - param_2;
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  if ((uint)(DAT_10064d2c - *(int *)((int)this + 8)) <= param_3) {
    FUN_10057251();
  }
  if (param_3 == 0) {
    return this;
  }
  uVar3 = *(int *)((int)this + 8) + param_3;
  if (0xfffffffd < uVar3) {
    FUN_10057251();
  }
  puVar2 = *(undefined1 **)((int)this + 4);
  if (((puVar2 == (undefined1 *)0x0) || (cVar1 = puVar2[-1], cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      if (puVar2 == (undefined1 *)0x0) {
        return this;
      }
      *(undefined4 *)((int)this + 8) = 0;
      *puVar2 = 0;
      return this;
    }
    if (uVar3 <= *(uint *)((int)this + 0xc)) goto LAB_10046d21;
  }
  else if (uVar3 == 0) {
    puVar2[-1] = cVar1 + -1;
    FUN_100424b0(this,'\0');
    return this;
  }
  FUN_10042ff0(this, uVar3);
LAB_10046d21:
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = &DAT_10064d30;
  }
  puVar4 = (undefined4 *)((int)puVar4 + param_2);
  puVar6 = (undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 4));
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar5 = param_3 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  *(uint *)((int)this + 8) = uVar3;
  *(undefined1 *)(*(int *)((int)this + 4) + uVar3) = 0;
  return this;
}

