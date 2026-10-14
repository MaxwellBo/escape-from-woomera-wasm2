
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CHGruntRepel::RepelUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CHGruntRepel::RepelUse
          (CHGruntRepel *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  int *piVar2;
  int *this_00;
  uint uVar3;
  float10 fVar4;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [12];
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  
                    /* 0x4cd30  177  ?RepelUse@CHGruntRepel@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar1 = *(int *)(this + 4);
  local_3c = *(float *)(iVar1 + 0x10) - _DAT_100de488;
  local_40 = *(float *)(iVar1 + 0xc);
  local_44 = *(undefined4 *)(iVar1 + 8);
  FUN_100afc60((undefined4 *)(iVar1 + 8),&local_44,0,*(undefined4 *)(iVar1 + 0x208),local_38);
  piVar2 = (int *)FUN_1001a1f0(0x10101a08,(undefined4 *)(*(int *)(this + 4) + 8),
                               (undefined4 *)(*(int *)(this + 4) + 0x50),0);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x74))();
  local_44 = 0;
  local_40 = 0.0;
  *(undefined4 *)(piVar2[1] + 0x108) = 5;
  fVar4 = (float10)(*DAT_10121f74)(0xc3440000,0xc3000000);
  iVar1 = piVar2[1];
  local_3c = (float)fVar4;
  *(undefined4 *)(iVar1 + 0x20) = local_44;
  *(float *)(iVar1 + 0x24) = local_40;
  *(float *)(iVar1 + 0x28) = local_3c;
  (**(code **)(*piVar2 + 0x1a8))(0x33);
  piVar2[0xa4] = iStack_28;
  piVar2[0xa5] = iStack_24;
  piVar2[0xa6] = iStack_20;
  this_00 = FUN_100295c0(0x1010eb94,10);
  local_40 = *(float *)(*(int *)(this + 4) + 0x10) + _DAT_100e8d30;
  local_44 = *(undefined4 *)(*(int *)(this + 4) + 0xc);
  uVar3 = (*DAT_10121f24)(*(undefined4 *)(piVar2[1] + 0x208));
  FUN_10029800(this_00,(undefined4 *)&stack0xffffffb8,uVar3);
  *(uint *)(this_00[1] + 0x148) = *(uint *)(this_00[1] + 0x148) & 0xf | 0x20;
  *(undefined4 *)(this_00[1] + 0x150) = 0x437f0000;
  *(undefined4 *)(this_00[1] + 0x154) = 0x437f0000;
  *(undefined4 *)(this_00[1] + 0x158) = 0x437f0000;
  this_00[0x1d] = (int)CBaseEntity::SUB_Remove;
  (**(code **)(*this_00 + 8))
            ((float)_DAT_100dd648 -
             (fStack_2c * (float)_DAT_100e45b8) / *(float *)(piVar2[1] + 0x28));
  FUN_100b0ef0((int)this);
  return;
}

