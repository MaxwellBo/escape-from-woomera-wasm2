
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000b0c0(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
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
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (0 < *(int *)(param_1 + 0x308)) {
    FUN_100af210((float *)(*(int *)(param_1 + 4) + 0x50));
    FUN_10001d60(&local_3c,*(float *)(DAT_10122044 + 0x34) * _DAT_100de52c,
                 *(float *)(DAT_10122044 + 0x38) * _DAT_100de52c,
                 *(float *)(DAT_10122044 + 0x3c) * _DAT_100de52c);
    FUN_10001d60(&local_60,*(float *)(DAT_10122044 + 0x40) * _DAT_100de528,
                 *(float *)(DAT_10122044 + 0x44) * _DAT_100de528,
                 *(float *)(DAT_10122044 + 0x48) * _DAT_100de528);
    FUN_10001d60(&local_54,local_60 * _DAT_10102ad8,local_5c * _DAT_10102ad8,
                 local_58 * _DAT_10102ad8);
    FUN_10001d60(&local_48,*(float *)(DAT_10122044 + 0x28) * _DAT_100de524,
                 *(float *)(DAT_10122044 + 0x2c) * _DAT_100de524,
                 *(float *)(DAT_10122044 + 0x30) * _DAT_100de524);
    FUN_10001d60(&local_30,local_54 + local_48,local_50 + local_44,local_4c + local_40);
    FUN_10001d60(&local_c,local_3c + local_30,local_38 + local_2c,local_34 + local_28);
    FUN_10002280(&local_c,&local_24,1.5);
    iVar1 = *(int *)(param_1 + 4);
    FUN_10001d60(&local_6c,local_24 + *(float *)(iVar1 + 8),local_20 + *(float *)(iVar1 + 0xc),
                 local_1c + *(float *)(iVar1 + 0x10));
    switch(*(int *)(param_1 + 0x308) % 5) {
    case 0:
      FUN_10001d60(&local_24,*(float *)(DAT_10122044 + 0x40) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x44) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x48) * _DAT_100dd63c);
      FUN_10001d60(&local_30,local_24 + local_6c,local_20 + local_68,local_1c + local_64);
      local_6c = local_30;
      local_68 = local_2c;
      local_64 = local_28;
      break;
    case 1:
      FUN_10001d60(&local_3c,*(float *)(DAT_10122044 + 0x40) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x44) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x48) * _DAT_100dd63c);
      FUN_10001d60(&local_48,local_6c - local_3c,local_68 - local_38,local_64 - local_34);
      local_6c = local_48;
      local_68 = local_44;
      local_64 = local_40;
      break;
    case 2:
      FUN_10001d60(&local_54,*(float *)(DAT_10122044 + 0x34) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x38) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x3c) * _DAT_100dd63c);
      FUN_10001d60(&local_60,local_54 + local_6c,local_50 + local_68,local_4c + local_64);
      local_6c = local_60;
      local_68 = local_5c;
      local_64 = local_58;
      break;
    case 3:
      FUN_10001d60(&local_18,*(float *)(DAT_10122044 + 0x34) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x38) * _DAT_100dd63c,
                   *(float *)(DAT_10122044 + 0x3c) * _DAT_100dd63c);
      FUN_10001d60(&local_c,local_6c - local_18,local_68 - local_14,local_64 - local_10);
      local_6c = local_c;
      local_68 = local_8;
      local_64 = local_4;
    }
    (*DAT_10121ec0)(4,0x17,&local_6c,0);
    (*DAT_10121ec8)(5);
    (*DAT_10121edc)(local_6c);
    (*DAT_10121edc)(local_68);
    (*DAT_10121edc)(local_64);
    (*DAT_10121ed0)((int)DAT_10131cf2);
    (*DAT_10121ec8)(0x14);
    (*DAT_10121ec8)(0xc);
    (*DAT_10121ec4)();
    iVar1 = FUN_1001a1f0(0x10102bcc,&local_6c,(undefined4 *)(*(int *)(param_1 + 4) + 0x50),
                         *(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    if (iVar1 != 0) {
      pfVar2 = (float *)FUN_10002280((void *)(DAT_10122044 + 0x28),&local_c,100.0);
      puVar3 = (undefined4 *)FUN_1000b550((void *)(*(int *)(param_1 + 4) + 0x20),&local_18,pfVar2);
      iVar1 = *(int *)(iVar1 + 4);
      *(undefined4 *)(iVar1 + 0x20) = *puVar3;
      *(undefined4 *)(iVar1 + 0x24) = puVar3[1];
      *(undefined4 *)(iVar1 + 0x28) = puVar3[2];
    }
    *(int *)(param_1 + 0x308) = *(int *)(param_1 + 0x308) + -1;
    _DAT_10102ad8 = -_DAT_10102ad8;
  }
  return;
}

