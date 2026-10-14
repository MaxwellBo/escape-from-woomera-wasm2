
undefined4 __thiscall FUN_10091ed0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x90))(0xc,s_buckshot_10114df0,0x7d);
  if (iVar1 != -1) {
    FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),3
                 ,s_items_9mmclip1_wav_10106684,0x3f800000,0x3f4ccccd,0,100);
    return 1;
  }
  return 0;
}

