
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPendulum::PendulumUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CPendulum::PendulumUse
          (CPendulum *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,float param_4)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float10 fVar4;
  
                    /* 0x12950  165  ?PendulumUse@CPendulum@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = *(int *)(this + 4);
  if (*(float *)(iVar1 + 0x1f8) == _DAT_100dd5f8) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(code **)(this + 0x74) = SwingThink;
    uVar3 = *DAT_10122044;
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(this + 200);
    *(undefined4 *)(this + 0xc0) = uVar3;
    return;
  }
  if ((*(uint *)(iVar1 + 0x1a0) & 0x10) != 0) {
    fVar4 = FUN_10099970((byte)*(uint *)(iVar1 + 0x1a0),(float *)(iVar1 + 0x50),
                         (float *)(this + 0xdc));
    fVar2 = *(float *)(this + 200);
    iVar1 = *(int *)(this + 4);
    FUN_10063ac0((int)this,fVar2 * *(float *)(iVar1 + 0x44),fVar2 * *(float *)(iVar1 + 0x48),
                 fVar2 * *(float *)(iVar1 + 0x4c));
    (**(code **)(*(int *)this + 8))((float)fVar4 / *(float *)(this + 200));
    *(code **)(this + 0x74) = StopThink;
    return;
  }
  *(undefined4 *)(iVar1 + 0x1f8) = 0;
  FUN_10019680((int)this);
  FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  return;
}

