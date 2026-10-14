
void __thiscall FUN_10078ab0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0xb8) = param_1;
  *(uint *)(*(int *)((int)this + 4) + 0x1a0) =
       *(uint *)(*(int *)((int)this + 4) + 0x1a0) & 0xfffffffe;
  return;
}

