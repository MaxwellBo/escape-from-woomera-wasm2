
undefined4 __fastcall FUN_100b42b0(int param_1)

{
  void *this;
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    this = *(void **)(*(int *)(param_1 + 0xdc) + 4);
    FUN_10094b20(this,*(undefined4 *)((int)this + 0x208),1,s_weapons_357_cock1_wav_101085d8,
                 0x3f4ccccd,0x3f4ccccd,0,100);
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return 0;
}

