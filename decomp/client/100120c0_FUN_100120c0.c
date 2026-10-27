
undefined4 * __thiscall FUN_100120c0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  
  puVar4 = operator_new(0x18);
  if (puVar4 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  bVar3 = FUN_10011da0((int)param_1);
  *puVar4 = *param_1;
  puVar4[1] = param_1[1];
  pvVar1 = (void *)((int)this + (uint)bVar3 * 0x18);
  puVar4[2] = param_1[2];
  uVar2 = param_1[3];
  puVar4[5] = pvVar1;
  puVar4[3] = uVar2;
  puVar4[4] = *(undefined4 *)((int)pvVar1 + 0x10);
  *(undefined4 **)((int)pvVar1 + 0x10) = puVar4;
  *(undefined4 **)(puVar4[4] + 0x14) = puVar4;
  return puVar4;
}

