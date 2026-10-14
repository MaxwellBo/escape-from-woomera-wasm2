
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_100612e0(void *this,float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float local_28;
  
  FUN_100af200(*(int *)((int)this + 4) + 0x50);
  iVar1 = *(int *)((int)this + 4);
  local_74 = *(float *)(DAT_10122044 + 0x40) * _DAT_100e8afc;
  iVar2 = 0;
  local_a4 = *(float *)(iVar1 + 8);
  local_70 = *(float *)(DAT_10122044 + 0x44) * _DAT_100e8afc;
  local_a0 = *(float *)(iVar1 + 0xc);
  local_9c = *(float *)(iVar1 + 0x10);
  local_98 = local_a4;
  local_94 = local_a0;
  local_90 = local_9c;
  while( true ) {
    local_98 = local_98 - local_74;
    local_94 = local_94 - local_70;
    local_84 = local_90;
    local_a4 = local_a4 + local_74;
    local_a0 = local_a0 + local_70;
    iVar1 = *(int *)((int)this + 4);
    local_78 = local_9c;
    local_3c = local_90 + *(float *)(iVar1 + 0x17c);
    local_40 = local_94 + *(float *)(iVar1 + 0x178);
    local_44 = local_98 + *(float *)(iVar1 + 0x174);
    local_68 = *param_1 + *param_2;
    local_64 = param_1[1] + param_2[1];
    local_60 = param_1[2] + param_2[2];
    local_8c = local_98;
    local_88 = local_94;
    local_80 = local_a4;
    local_7c = local_a0;
    FUN_100afc20(&local_68,&local_44,1,1,*(undefined4 *)(iVar1 + 0x208),local_38);
    if ((((local_28 != (float)_DAT_100dd628) &&
         (iVar1 = (**(code **)(*(int *)this + 0x1c4))(&local_98), iVar1 != 0)) &&
        (iVar1 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,&local_98,0,0),
        iVar1 == 2)) && (iVar1 = FUN_1005d4b0(this,4,0,&local_98), iVar1 != 0)) break;
    iVar1 = *(int *)((int)this + 4);
    fStack_54 = local_9c + *(float *)(iVar1 + 0x17c);
    local_58 = local_a0 + *(float *)(iVar1 + 0x178);
    local_5c = local_a4 + *(float *)(iVar1 + 0x174);
    local_50 = *param_1 + *param_2;
    fStack_4c = param_1[1] + param_2[1];
    fStack_48 = param_1[2] + param_2[2];
    FUN_100afc20(&local_50,&local_5c,1,1,*(undefined4 *)(iVar1 + 0x208),local_38);
    if (((local_28 != (float)_DAT_100dd628) &&
        (iVar1 = (**(code **)(*(int *)this + 0x1c4))(&local_a4), iVar1 != 0)) &&
       ((iVar1 = (**(code **)(*(int *)this + 0x150))(*(int *)((int)this + 4) + 8,&local_a4,0,0),
        iVar1 == 2 && (iVar1 = FUN_1005d4b0(this,4,0,&local_a4), iVar1 != 0)))) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (4 < iVar2) {
      return 0;
    }
  }
  return 1;
}

