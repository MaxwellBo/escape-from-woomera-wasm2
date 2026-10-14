
undefined4 __thiscall FUN_1008c450(void *this,int *param_1)

{
  void *this_00;
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  iVar1 = (**(code **)(*param_1 + 0x90))((iVar1 != 0) + '\x01',s_rockets_10114de8,5);
  if (iVar1 != -1) {
    this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
    FUN_10094b20(this_00,this_00,3,s_items_9mmclip1_wav_10106684,0x3f800000,0x3f4ccccd,0,100);
    return 1;
  }
  return 0;
}

