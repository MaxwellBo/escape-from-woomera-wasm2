
void __thiscall FUN_1007d2d0(void *this)

{
  int iVar1;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  *(uint *)((int)this + 0x364) = *(uint *)((int)this + 0x364) | 0x20;
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x174) = DAT_10121dd8;
  *(undefined4 *)(iVar1 + 0x178) = DAT_10121ddc;
  *(undefined4 *)(iVar1 + 0x17c) = DAT_10121de0;
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x74) = in_stack_00000010;
  *(undefined4 *)(iVar1 + 0x78) = in_stack_00000014;
  *(undefined4 *)(iVar1 + 0x7c) = in_stack_00000018;
  iVar1 = *(int *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x74);
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar1 + 0x78);
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(iVar1 + 0x7c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xa0) = 1;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb4) = 0;
  FUN_100afe10((int)this,&stack0x00000004);
  return;
}

