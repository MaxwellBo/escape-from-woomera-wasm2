
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_10001eb0(int param_1)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_5c [12];
  float local_50 [3];
  undefined1 local_44 [16];
  float local_34;
  float local_c [3];
  
  if (*DAT_10122044 < *(float *)(param_1 + 0x33c)) {
    *(float *)(param_1 + 0x338) = *DAT_10122044;
    return true;
  }
  FUN_100af200(*(int *)(param_1 + 4) + 0x50);
  iVar6 = *(int *)(param_1 + 4);
  local_7c = DAT_10122044[0xc] * _DAT_100dd630 + *(float *)(iVar6 + 0x10);
  local_80 = DAT_10122044[0xb] * _DAT_100dd630 + *(float *)(iVar6 + 0xc);
  local_84 = DAT_10122044[10] * _DAT_100dd630 + *(float *)(iVar6 + 8);
  FUN_100afc60((float *)(iVar6 + 8),&local_84,1,*(undefined4 *)(iVar6 + 0x208),local_44);
  bVar1 = local_34 != (float)_DAT_100dd628;
  if (bVar1) {
    *(float *)(param_1 + 0x338) = *DAT_10122044;
  }
  iVar6 = *(int *)(param_1 + 4);
  local_84 = DAT_10122044[10] * _DAT_100dd630;
  uVar7 = *(undefined4 *)(iVar6 + 0x208);
  local_80 = DAT_10122044[0xb] * _DAT_100dd630;
  local_7c = DAT_10122044[0xc] * _DAT_100dd630;
  FUN_10001d60(&local_6c,DAT_10122044[0x10] * _DAT_100dd624 + *(float *)(iVar6 + 8),
               DAT_10122044[0x11] * _DAT_100dd624 + *(float *)(iVar6 + 0xc),
               DAT_10122044[0x12] * _DAT_100dd624 + *(float *)(iVar6 + 0x10));
  FUN_10001d60(local_50,local_6c + local_84,local_68 + local_80,local_64 + local_7c);
  FUN_10001d60(&local_78,DAT_10122044[0x10] * _DAT_100dd624,DAT_10122044[0x11] * _DAT_100dd624,
               DAT_10122044[0x12] * _DAT_100dd624);
  iVar6 = *(int *)(param_1 + 4);
  FUN_10001d60(local_5c,local_78 + *(float *)(iVar6 + 8),local_74 + *(float *)(iVar6 + 0xc),
               local_70 + *(float *)(iVar6 + 0x10));
  FUN_100afc60(local_5c,local_50,1,uVar7,local_44);
  bVar2 = local_34 != (float)_DAT_100dd628;
  if (bVar2) {
    *(float *)(param_1 + 0x338) = *DAT_10122044;
  }
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  FUN_10001d60(&local_6c,DAT_10122044[10] * _DAT_100dd630,DAT_10122044[0xb] * _DAT_100dd630,
               DAT_10122044[0xc] * _DAT_100dd630);
  FUN_10001d60(&local_78,DAT_10122044[0x10] * _DAT_100dd624,DAT_10122044[0x11] * _DAT_100dd624,
               DAT_10122044[0x12] * _DAT_100dd624);
  iVar6 = *(int *)(param_1 + 4);
  FUN_10001d60(&local_84,*(float *)(iVar6 + 8) - local_78,*(float *)(iVar6 + 0xc) - local_74,
               *(float *)(iVar6 + 0x10) - local_70);
  FUN_10001d60(local_5c,local_6c + local_84,local_68 + local_80,local_64 + local_7c);
  puVar8 = local_44;
  puVar5 = local_5c;
  iVar6 = 1;
  pfVar3 = (float *)FUN_10002280(DAT_10122044 + 0x10,local_50,12.0);
  uVar4 = FUN_10002250((void *)(*(int *)(param_1 + 4) + 8),local_c,pfVar3);
  FUN_100afc60(uVar4,puVar5,iVar6,uVar7,puVar8);
  if (local_34 != (float)_DAT_100dd628) {
    *(float *)(param_1 + 0x338) = *DAT_10122044;
    return true;
  }
  if ((!bVar2 && !bVar1) && (_DAT_100dd620 < *DAT_10122044 - *(float *)(param_1 + 0x338))) {
    iVar6 = (*DAT_10121f70)(1,3);
    *(float *)(param_1 + 0x33c) = (float)iVar6 + *DAT_10122044;
  }
  return bVar2 || bVar1;
}

