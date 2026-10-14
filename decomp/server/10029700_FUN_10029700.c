
void __thiscall FUN_10029700(void *this,undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  
  *(uint *)(*(int *)((int)this + 4) + 0x148) = *(uint *)(*(int *)((int)this + 4) + 0x148) & 0xf0;
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 8) = *param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_1[1];
  *(undefined4 *)(iVar2 + 0x10) = param_1[2];
  iVar2 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar2 + 0x50) = *param_2;
  *(undefined4 *)(iVar2 + 0x54) = param_2[1];
  *(undefined4 *)(iVar2 + 0x58) = param_2[2];
  *(uint *)(*(int *)((int)this + 4) + 0x128) = *(uint *)(*(int *)((int)this + 4) + 0x128) & 0xfff;
  puVar1 = (uint *)(*(int *)((int)this + 4) + 0x110);
  *puVar1 = *puVar1 & 0xfff;
  FUN_100298f0((int)this);
  return;
}

