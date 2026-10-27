
void __thiscall FUN_100765d0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x164) = param_1;
  *(uint *)(*(int *)((int)this + 4) + 0x1a0) =
       *(uint *)(*(int *)((int)this + 4) + 0x1a0) & 0xfffffffe;
  return;
}

