
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncRotating::RotatingUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncRotating::RotatingUse
          (CFuncRotating *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  void *this_00;
  int iVar1;
  float fVar2;
  
                    /* 0x12310  187
                       ?RotatingUse@CFuncRotating@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  this_00 = *(void **)(this + 4);
  if ((*(byte *)((int)this_00 + 0x1a0) & 0x10) == 0) {
    if (*(float *)(this + 0xcc) == _DAT_100dd5f8) {
      *(undefined4 *)(this + 0xd0) = 2;
      FUN_10094b20(*(void **)((int)this_00 + 0x208),*(void **)((int)this_00 + 0x208),6,
                   (char *)(*(int *)((int)this_00 + 500) + *(int *)(DAT_10122044 + 0x98)),
                   *(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 0xbc),0,100);
      iVar1 = *(int *)(this + 4);
      *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar1 + 0x1f8);
      fVar2 = *(float *)(iVar1 + 0x1f8);
      FUN_10063ac0((int)this,fVar2 * *(float *)(iVar1 + 0x44),fVar2 * *(float *)(iVar1 + 0x48),
                   fVar2 * *(float *)(iVar1 + 0x4c));
      *(code **)(this + 0x74) = Rotate;
      Rotate(this);
      return;
    }
    *(undefined4 *)(this + 0xd0) = 0;
  }
  else {
    if (*(float *)(this + 0xcc) == _DAT_100dd5f8) {
      *(undefined4 *)(this + 0xd0) = 1;
      *(code **)(this + 0x74) = SpinUp;
      FUN_10094b20(this_00,*(undefined4 *)((int)this_00 + 0x208),6,
                   (char *)(*(int *)((int)this_00 + 500) + *(int *)(DAT_10122044 + 0x98)),0x3c23d70a
                   ,*(undefined4 *)(this + 0xbc),0,0x1e);
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      return;
    }
    *(undefined4 *)(this + 0xd0) = 3;
  }
  *(code **)(this + 0x74) = SpinDown;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

