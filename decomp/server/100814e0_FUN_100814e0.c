
void __thiscall FUN_100814e0(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    *(uint *)(*(int *)((int)this + 4) + 0x1a4) = *(uint *)(*(int *)((int)this + 4) + 0x1a4) | 0x1000
    ;
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar1 + 0x20) = DAT_10121dd8;
    *(undefined4 *)(iVar1 + 0x24) = DAT_10121ddc;
    *(undefined4 *)(iVar1 + 0x28) = DAT_10121de0;
    return;
  }
  *(uint *)(*(int *)((int)this + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0xffffefff;
  return;
}

