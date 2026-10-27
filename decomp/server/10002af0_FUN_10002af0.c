
void __thiscall FUN_10002af0(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  
  iVar4 = FUN_10002bf0((int)this);
  if (iVar4 < 3) {
    FUN_10002c20((int)this);
    return;
  }
  if ((void *)param_1 != this) {
    pvVar3 = *(void **)((int)this + 0x30c);
    while (pvVar2 = pvVar3, pvVar2 != (void *)param_1) {
      this = pvVar2;
      pvVar3 = *(void **)((int)pvVar2 + 0x30c);
    }
    *(undefined4 *)((int)this + 0x30c) = *(undefined4 *)(param_1 + 0x30c);
    FUN_10002aa0(param_1);
    return;
  }
  iVar4 = *(int *)((int)this + 0x30c);
  *(undefined4 *)(iVar4 + 0x2a8) = *(undefined4 *)((int)this + 0x2a8);
  *(undefined4 *)(iVar4 + 0x2ac) = *(undefined4 *)((int)this + 0x2ac);
  *(undefined4 *)(iVar4 + 0x2b0) = *(undefined4 *)((int)this + 0x2b0);
  for (iVar1 = iVar4; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x30c)) {
    *(int *)(iVar1 + 0x308) = iVar4;
  }
  FUN_10002aa0((int)this);
  return;
}

