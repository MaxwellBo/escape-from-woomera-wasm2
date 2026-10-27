
void __thiscall FUN_10004e70(void *this,int param_1)

{
  uint uVar1;
  
  *(int *)((int)this + 0x1e4) = param_1;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x2d4) = 0;
  uVar1 = *(uint *)(param_1 + 8) & 0x20000;
  if (uVar1 == 0) {
    if (*(int *)(param_1 + 0xc) == 0) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    (*DAT_10121efc)(2,s_COND_HEAR_SOUND_with_no_sound_ma_10101b4c);
    return;
  }
  if (uVar1 == 0) {
    (*DAT_10121efc)(2,s_Sound_mask_without_COND_HEAR_SOU_10101b24);
  }
  return;
}

