
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_100561f0(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  int local_34;
  float local_28;
  int local_8;
  
  FUN_100561b0(param_1);
  iVar1 = *(int *)(param_1 + 4);
  local_64 = DAT_10122044[0xb] * _DAT_100ddb08;
  local_60 = DAT_10122044[0xc] * _DAT_100ddb08;
  local_80 = DAT_10122044[10] * _DAT_100ddb08 + *(float *)(iVar1 + 8);
  local_7c = local_64 + *(float *)(iVar1 + 0xc);
  local_78 = local_60 + *(float *)(iVar1 + 0x10);
  local_74 = local_80;
  local_70 = local_7c;
  local_6c = local_78;
  FUN_100afc60((float *)(iVar1 + 8),&local_80,2,*(undefined4 *)(iVar1 + 0x208),local_38);
  if (local_34 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f8) = 0xc1c80000;
  }
  if (local_28 != (float)_DAT_100dd628) {
    if ((param_2 == 0) || (local_8 != *(int *)(*(int *)(param_2 + 4) + 0x208))) goto LAB_10056550;
    if ((float)_DAT_100de4a0 <
        ABS(*(float *)(param_1 + 800) - *(float *)(*(int *)(param_1 + 4) + 0x10))) {
      return (float10)local_28;
    }
  }
  if (*(float *)(param_1 + 0x328) < *DAT_10122044) {
    local_74 = DAT_10122044[10] * _DAT_100ddb08;
    local_70 = DAT_10122044[0xb] * _DAT_100ddb08;
    local_6c = DAT_10122044[0xc] * _DAT_100ddb08;
    FUN_10001d60(&local_68,DAT_10122044[0x10] * _DAT_100dd63c + DAT_10122044[0x10] * _DAT_100dd63c,
                 DAT_10122044[0x11] * _DAT_100dd63c + DAT_10122044[0x11] * _DAT_100dd63c,
                 DAT_10122044[0x12] * _DAT_100dd63c + DAT_10122044[0x12] * _DAT_100dd63c);
    iVar1 = *(int *)(param_1 + 4);
    FUN_10001d60(&local_5c,local_68 + *(float *)(iVar1 + 8),local_64 + *(float *)(iVar1 + 0xc),
                 local_60 + *(float *)(iVar1 + 0x10));
    FUN_10001d60(&local_50,local_5c + local_74,local_58 + local_70,local_54 + local_6c);
    local_78 = local_48;
    local_80 = local_50;
    local_7c = local_4c;
    FUN_100afc60(*(int *)(param_1 + 4) + 8,&local_80,2,
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),local_38);
    if (local_28 != (float)_DAT_100dd628) {
      return (float10)local_28;
    }
    FUN_10001d60(&local_68,DAT_10122044[10] * _DAT_100ddb08,DAT_10122044[0xb] * _DAT_100ddb08,
                 DAT_10122044[0xc] * _DAT_100ddb08);
    FUN_10001d60(&local_50,DAT_10122044[0x10] * _DAT_100dd63c,DAT_10122044[0x11] * _DAT_100dd63c,
                 DAT_10122044[0x12] * _DAT_100dd63c);
    FUN_10001d60(&local_5c,local_50 + local_50,local_4c + local_4c,local_48 + local_48);
    iVar1 = *(int *)(param_1 + 4);
    FUN_10001d60(&local_74,*(float *)(iVar1 + 8) - local_5c,*(float *)(iVar1 + 0xc) - local_58,
                 *(float *)(iVar1 + 0x10) - local_54);
    FUN_10001d60(&local_44,local_68 + local_74,local_64 + local_70,local_60 + local_6c);
    local_7c = (float)local_40;
    local_80 = local_44;
    local_78 = (float)local_3c;
    FUN_100afc60(*(int *)(param_1 + 4) + 8,&local_80,2,
                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x208),local_38);
    if (local_28 != (float)_DAT_100dd628) {
LAB_10056550:
      return (float10)local_28;
    }
    fVar2 = (float10)(*DAT_10121f74)(0x3f000000,0x3f800000);
    *(float *)(param_1 + 0x328) = (float)(fVar2 + (float10)*DAT_10122044);
  }
  return (float10)_DAT_100dd618;
}

