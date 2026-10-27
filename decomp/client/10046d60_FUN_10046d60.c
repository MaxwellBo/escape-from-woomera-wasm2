
void * __thiscall FUN_10046d60(void *this,undefined4 *param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((uint)(DAT_10064d2c - *(int *)((int)this + 8)) <= param_2) {
    FUN_10057251();
  }
  if (param_2 == 0) {
    return this;
  }
  uVar4 = param_2 + *(int *)((int)this + 8);
  if (0xfffffffd < uVar4) {
    FUN_10057251();
  }
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar4 == 0) {
      if (iVar2 == 0) {
        return this;
      }
      FUN_100429a0(this,0);
      return this;
    }
    if (uVar4 <= *(uint *)((int)this + 0xc)) goto LAB_10046deb;
  }
  else if (uVar4 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return this;
  }
  FUN_10042ff0(this, uVar4);
LAB_10046deb:
  puVar5 = (undefined4 *)(*(int *)((int)this + 4) + *(int *)((int)this + 8));
  for (uVar3 = param_2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *param_1;
    param_1 = param_1 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)((int)this + 8) = uVar4;
  *(undefined1 *)(*(int *)((int)this + 4) + uVar4) = 0;
  return this;
}

