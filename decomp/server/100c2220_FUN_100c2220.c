
void __thiscall FUN_100c2220(void *this,undefined1 param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  puVar6 = *(undefined1 **)((int)this + 0x38);
  *puVar6 = *(undefined1 *)((int)this + 0x30);
  uVar3 = *(uint *)(*(int *)((int)this + 0x2c) + 4);
  if (puVar6 < (undefined1 *)(uVar3 + 2)) {
    puVar5 = (undefined1 *)(*(int *)(*(int *)((int)this + 0x2c) + 0xc) + 2 + uVar3);
    uVar4 = uVar3 + 2 + *(int *)((int)this + 0x34);
    if (uVar3 < uVar4) {
      do {
        puVar1 = (undefined1 *)(uVar4 - 1);
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar1;
      } while (*(uint *)(*(int *)((int)this + 0x2c) + 4) < uVar4);
    }
    puVar6 = puVar6 + ((int)puVar5 - uVar4);
    param_2 = param_2 + ((int)puVar5 - uVar4);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(*(int *)((int)this + 0x2c) + 0xc);
    if (puVar6 < (undefined1 *)(*(int *)(*(int *)((int)this + 0x2c) + 4) + 2)) {
      (**(code **)(*(int *)this + 0x24))(s_flex_scanner_push_back_overflow_1011c5a0);
    }
  }
  puVar6 = puVar6 + -1;
  *puVar6 = param_1;
  *(int *)((int)this + 4) = param_2;
  uVar2 = *puVar6;
  *(undefined1 **)((int)this + 0x38) = puVar6;
  *(undefined1 *)((int)this + 0x30) = uVar2;
  return;
}

