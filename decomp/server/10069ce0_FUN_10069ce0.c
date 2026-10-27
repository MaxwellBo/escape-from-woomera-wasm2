
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10069ce0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  void *this_00;
  float fVar3;
  float fVar4;
  float fStack_8;
  float fStack_4;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0x108) = 5;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x10c) = 2;
  (*DAT_10121e10)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),s_sprites_nhth1_spr_1011258c);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x150) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x154) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x158) = 0x437f0000;
  *(undefined4 *)(*(int *)((int)this + 4) + 0x144) = 0x40000000;
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)(param_1 + 4);
  fVar3 = *(float *)(iVar2 + 8) - *(float *)(iVar1 + 8);
  fStack_8 = *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc);
  fStack_4 = *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10);
  fVar4 = SQRT(fStack_8 * fStack_8 + fVar3 * fVar3 + fStack_4 * fStack_4);
  if (fVar4 == _DAT_100dd5f8) {
    fStack_8 = 0.0;
    fStack_4 = 1.0;
    fVar3 = _DAT_100dd5f8;
  }
  else {
    fVar4 = _DAT_100dd618 / fVar4;
    fVar3 = fVar3 * fVar4;
    fStack_8 = fVar4 * fStack_8;
    fStack_4 = fStack_4 * fVar4;
  }
  fStack_8 = fStack_8 * _DAT_100de484;
  *(float *)(iVar1 + 0x20) = fVar3 * _DAT_100de484;
  fStack_4 = fStack_4 * _DAT_100de484;
  *(float *)(iVar1 + 0x24) = fStack_8;
  *(float *)(iVar1 + 0x28) = fStack_4;
  FUN_10019420((void *)((int)this + 0x160),param_1);
  *(code **)((int)this + 0x74) = CNihilanthHVR::ZapThink;
  *(code **)((int)this + 0x78) = CNihilanthHVR::ZapTouch;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
  FUN_10094b20(this_00,this_00,1,s_debris_zap4_wav_101064c8,0x3f800000,0x3f4ccccd,0,100);
  return;
}

