
void __thiscall FUN_100294e0(void *this,uint param_1)

{
  undefined4 uVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x110) =
       (*(uint *)(*(int *)((int)this + 4) + 0x110) & 0xf000) << 0xc | param_1 & 0xfff;
  uVar1 = (*DAT_10121f28)(param_1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x194) = uVar1;
  return;
}

