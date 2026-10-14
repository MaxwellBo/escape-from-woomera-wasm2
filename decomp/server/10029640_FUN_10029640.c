
void __thiscall FUN_10029640(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(uint *)(*(int *)((int)this + 4) + 0x1a4) =
       *(uint *)(*(int *)((int)this + 4) + 0x1a4) | 0x20000000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x150) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x154) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x158) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14c) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x114) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x134) = 0;
  *(int *)(*(int *)((int)this + 4) + 0xb8) = param_1 - *(int *)(DAT_10122044 + 0x98);
  uVar1 = (*DAT_10121e08)(param_1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0xb4) = uVar1;
  *(float *)(*(int *)((int)this + 4) + 0x144) = (float)param_2;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x110) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x128) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x148) = 0;
  return;
}

