
void __thiscall FUN_10029490(void *this,uint param_1)

{
  undefined4 uVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x128) =
       (*(uint *)(*(int *)((int)this + 4) + 0x128) & 0xf000) << 0xc | param_1 & 0xfff;
  uVar1 = (*DAT_10121f28)(param_1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = uVar1;
  return;
}

