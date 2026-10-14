
undefined4 * __thiscall FUN_100a46c0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_10019410((uint *)((int)this + 0xc0));
  if (piVar2 == param_1) {
    return this;
  }
  if (*(void **)((int)this + 0xbc) != (void *)0x0) {
    puVar3 = FUN_100a46c0(*(void **)((int)this + 0xbc),param_1);
    *(undefined4 **)((int)this + 0xbc) = puVar3;
    return this;
  }
  iVar4 = (*DAT_10121e5c)();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x80;
  }
  iVar1 = *(int *)(iVar4 + 0x208);
  if ((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 0x7c), puVar3 == (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)(*DAT_10121f04)(iVar1,200);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_100f3cb4;
    }
    puVar3[1] = iVar4;
  }
  FUN_10019420(puVar3 + 0x30,(int)param_1);
  puVar3[0x2f] = this;
  puVar3[0x2e] = *(undefined4 *)((int)this + 0xb8);
  *(int *)puVar3[1] = (int)s_inout_register_10119854 - *(int *)(DAT_10122044 + 0x98);
  FUN_100a4b50(*(void **)((int)this + 0xb8),param_1);
  return puVar3;
}

