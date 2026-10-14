
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1006a330(void *this,int param_1,int param_2,int param_3,int param_4)

{
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 2;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x150) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x154) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x158) = 0x437f0000;
  *(float *)(*(int *)((int)this + 4) + 0x28) =
       *(float *)(*(int *)((int)this + 4) + 0x28) * (float)_DAT_100dd608;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),s_sprites_exit1_spr_10112578);
  *(int *)((int)this + 0x318) = param_1;
  FUN_10019420((void *)((int)this + 0x160),param_2);
  FUN_10019420((void *)((int)this + 0x168),param_3);
  FUN_10019420((void *)((int)this + 0x31c),param_4);
  *(code **)((int)this + 0x74) = CNihilanthHVR::TeleportThink;
  *(code **)((int)this + 0x78) = CNihilanthHVR::TeleportTouch;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),1,
               s_x_x_teleattack1_wav_10112530,0x3f800000,0x3e4ccccd,0,100);
  return;
}

