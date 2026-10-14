
undefined4 __thiscall FUN_100b24e0(void *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  if (0x20 < param_2) {
    param_2 = 0x20;
  }
  *(int *)((int)this + 0x14) = param_2;
  (*DAT_10121e08)(s_sprites_voiceicon_spr_1011b40c);
  uVar1 = (*DAT_10121f34)(s_VoiceMask_1011b400,8);
  *(undefined4 *)((int)this + 8) = uVar1;
  uVar1 = (*DAT_10121f34)(s_ReqState_1011b3f4,0);
  *(undefined4 *)((int)this + 0xc) = uVar1;
  iVar2 = (*DAT_10121fd8)(s_voice_serverdebug_1011b3e0);
  if (iVar2 == 0) {
    (*DAT_10121ee8)(&PTR_s_voice_serverdebug_1011b3a8);
  }
  iVar2 = (*DAT_10121fd8)(s_sv_alltalk_1011b3d4);
  if (iVar2 == 0) {
    iVar2 = (*DAT_10121ee8)(&PTR_s_sv_alltalk_1011b3c0);
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}

