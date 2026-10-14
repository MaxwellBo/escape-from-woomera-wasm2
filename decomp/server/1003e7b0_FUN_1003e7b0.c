
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1003e7b0(void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *this;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_38 [16];
  float fStack_28;
  float local_24 [9];
  
  FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
  FUN_10001d60(&local_68,*(float *)(DAT_10122044 + 0x28) * _DAT_100e5448,
               *(float *)(DAT_10122044 + 0x2c) * _DAT_100e5448,
               *(float *)(DAT_10122044 + 0x30) * _DAT_100e5448);
  iVar2 = *(int *)((int)param_1 + 4);
  local_58 = *(float *)(iVar2 + 0xc);
  local_54 = *(float *)(iVar2 + 0x10) + _DAT_100de498;
  local_74 = local_68 + *(float *)(iVar2 + 8);
  local_70 = local_64 + local_58;
  local_6c = local_60 + local_54;
  FUN_10061590(param_1,&local_50,&local_74);
  local_58 = local_4c * _DAT_100ddaf0;
  local_54 = local_48 * _DAT_100ddaf0;
  local_44 = local_50 * _DAT_100ddaf0 + local_74;
  local_40 = local_58 + local_70;
  local_3c = local_54 + local_6c;
  FUN_100afc60(&local_74,&local_44,1,*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208),local_38);
  FUN_1003df10(&local_74,local_24,0);
  FUN_100af360((float *)(*(int *)((int)param_1 + 4) + 8),12.0,0x42c80000,0x40000000,1000.0);
  uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208);
  iVar2 = (*DAT_10121f70)(0xfffffff6,10);
  iVar2 = iVar2 + 100;
  uVar6 = 0;
  uVar5 = 0x3f4ccccd;
  uVar4 = 0x3f800000;
  iVar3 = (*DAT_10121f70)(0,0);
  FUN_10094b20(this,uVar1,1,(&PTR_s_garg_gar_stomp1_wav_1010cce8)[iVar3],uVar4,uVar5,uVar6,iVar2);
  iVar2 = *(int *)((int)param_1 + 4);
  local_54 = *(float *)(iVar2 + 0x10) - _DAT_100ddacc;
  local_58 = *(float *)(iVar2 + 0xc);
  uStack_5c = *(undefined4 *)(iVar2 + 8);
  FUN_100afc60((undefined4 *)(iVar2 + 8),&uStack_5c,1,*(undefined4 *)(iVar2 + 0x208),local_38);
  if (fStack_28 < (float)_DAT_100dd628) {
    FUN_100b0450((int)local_38,0x24);
  }
  return;
}

