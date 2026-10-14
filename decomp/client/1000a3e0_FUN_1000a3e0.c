
undefined4 __thiscall
FUN_1000a3e0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x128))();
  if (iVar1 == 0) {
    return 0;
  }
  (*DAT_100a50e0)(param_1,*(int *)(*(int *)((int)this + 0xdc) + 4) + 0xbc);
  (**(code **)(*(int *)this + 0x17c))(param_3,param_5,param_6);
  *(undefined4 *)(*(int *)((int)this + 0xdc) + 700) = 0x3f000000;
  *(undefined4 *)((int)this + 0x100) = 0x3f800000;
  return 1;
}

