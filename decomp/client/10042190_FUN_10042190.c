
undefined1 * __thiscall FUN_10042190(void *this,undefined1 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  *(undefined1 *)this = *param_2;
  *(undefined1 *)((int)this + 1) = *param_1;
  *(undefined1 *)((int)this + 8) = 0;
  puVar1 = operator_new(0x30);
  puVar1[1] = 0;
  puVar1[0xb] = 1;
  FUN_100571a0(&param_2);
  if (DAT_100baefc == (undefined4 *)0x0) {
    DAT_100baefc = puVar1;
    *puVar1 = 0;
    puVar1 = (undefined4 *)0x0;
    DAT_100baefc[2] = 0;
  }
  DAT_100baef8 = DAT_100baef8 + 1;
  FUN_1005723c();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10049a73((undefined *)puVar1);
  }
  puVar1 = DAT_100baefc;
  pvVar2 = operator_new(0x30);
  *(undefined4 **)((int)pvVar2 + 4) = puVar1;
  *(undefined4 *)((int)pvVar2 + 0x2c) = 0;
  *(void **)((int)this + 4) = pvVar2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  return this;
}

