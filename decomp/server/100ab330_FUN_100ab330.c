
void __thiscall FUN_100ab330(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  float10 fVar2;
  
  *(undefined4 *)(*(int *)((int)this + 4) + 0x16c) = 0;
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x1a4) & 8) != 0)) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x198) = *(undefined4 *)(param_1 + 0x208);
  }
  iVar1 = *(int *)this;
  *(code **)((int)this + 0x74) = CTripmineGrenade::DelayDeathThink;
  fVar2 = (float10)(*DAT_10121f74)(0x3dcccccd,0x3e99999a);
  (**(code **)(iVar1 + 8))((float)fVar2);
  this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
  FUN_10094b20(this_00,this_00,4,s_common_null_wav_10103c74,0x3f000000,0x3f4ccccd,0,100);
  return;
}

