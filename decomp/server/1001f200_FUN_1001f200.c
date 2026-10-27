
void __thiscall FUN_1001f200(void *this,undefined4 param_1)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 10;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x120) = 0x3f0ccccd;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x14c) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x148) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x15c) = 0;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 1;
  **(int **)((int)this + 4) = (int)&DAT_10106014 - *(int *)(DAT_10122044 + 0x98);
  (*DAT_10121e10)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),param_1);
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)((int)this + 4),&uStack_c,&uStack_18);
  (**(code **)(*(int *)this + 8))(0x40800000);
  *(undefined4 *)((int)this + 0xc4) = 0x41c80000;
  *(code **)((int)this + 0x74) = CGib::WaitTillLand;
  *(code **)((int)this + 0x78) = CGib::BounceGibTouch;
  *(undefined4 *)((int)this + 0xc0) = 9;
  *(undefined4 *)((int)this + 0xbc) = 5;
  return;
}

