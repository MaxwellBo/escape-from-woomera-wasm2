
void * __thiscall FUN_100646b0(void *this,int *param_1)

{
  int iVar1;
  void *this_00;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(2,s_ARgrenades_10111afc,10);
  this_00 = (void *)(uint)(iVar1 != -1);
  if (this_00 != (void *)0x0) {
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),3,
                 s_items_9mmclip1_wav_10106684,0x3f800000,0x3f4ccccd,0,100);
  }
  return this_00;
}

