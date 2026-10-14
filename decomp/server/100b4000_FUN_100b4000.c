
bool __thiscall FUN_100b4000(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)((int)this + 0xdc) + 0x90))(param_1,param_2,param_3);
  if (0 < iVar1) {
    *(int *)((int)this + 0x108) = iVar1;
    this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
    FUN_10094b20(this_00,this_00,3,s_items_9mmclip1_wav_10106684,0x3f800000,0x3f4ccccd,0,100);
  }
  return 0 < iVar1;
}

