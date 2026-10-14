
void __thiscall
FUN_1005e890(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(uint *)(*(int *)((int)this + 0x270) * 0x10 + 0x1f8 + (int)this);
  iVar3 = 7;
  puVar2 = (undefined4 *)((int)this + 0x25c);
  do {
    iVar3 = iVar3 + -1;
    *puVar2 = puVar2[-4];
    puVar2[1] = puVar2[-3];
    puVar2[2] = puVar2[-2];
    puVar2[3] = puVar2[-1];
    puVar2 = puVar2 + -4;
  } while (iVar3 != 0);
  puVar2 = (undefined4 *)(*(int *)((int)this + 0x270) * 0x10 + 0x1ec + (int)this);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  *(uint *)(*(int *)((int)this + 0x270) * 0x10 + 0x1f8 + (int)this) = uVar1 & 0xfffffe7f | param_4;
  return;
}

