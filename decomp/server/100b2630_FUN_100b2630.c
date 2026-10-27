
undefined4 __thiscall FUN_100b2630(void *this,int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_01;
  void *this_02;
  void *this_03;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  pbVar9 = param_2;
  iVar1 = iVar1 + -1;
  if ((iVar1 < 0) || (*(int *)((int)this + 0x14) <= iVar1)) {
    uVar5 = FUN_100b2800();
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  uVar2 = FUN_100d8b20(this_00,param_2,&DAT_1011b500);
  this_01 = extraout_ECX;
  if ((uVar2 == 0) && (iVar3 = (*DAT_10121f58)(), this_01 = extraout_ECX_00, 1 < iVar3)) {
    iVar8 = 1;
    iVar3 = (*DAT_10121f58)();
    if (1 < iVar3) {
      puVar7 = &DAT_10131b6c + iVar1;
      do {
        param_2 = (byte *)0x0;
        pbVar9 = &DAT_1011b4fc;
        pcVar4 = (char *)(*DAT_10121f54)(iVar8,&DAT_1011b4fc,&param_2);
        FUN_100c8a86(pcVar4,pbVar9);
        if (iVar8 < 2) {
          FUN_100b2800();
          *puVar7 = param_2;
        }
        else {
          FUN_100b2800();
        }
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
        iVar1 = (*DAT_10121f58)();
      } while (iVar8 < iVar1);
    }
    uVar5 = FUN_100b2860((int)this);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  uVar2 = FUN_100d8b20(this_01,pbVar9,(byte *)s_VModEnable_10105688);
  if ((uVar2 == 0) && (uVar2 = (*DAT_10121f58)(), 1 < (int)uVar2)) {
    pbVar9 = (byte *)(*DAT_10121f54)(1);
    iVar3 = FUN_100c8388(this_02,pbVar9);
    uVar2 = (uint)(iVar3 != 0);
    pcVar4 = s_CVoiceGameMgr__ClientCommand__VM_1011b464;
    FUN_100b2800();
    pbVar9 = (byte *)(*DAT_10121f54)(1,pcVar4,uVar2);
    iVar3 = FUN_100c8388(this_03,pbVar9);
    iVar8 = iVar1 >> 5;
    if (iVar3 == 0) {
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      uVar6 = (&DAT_10131b68)[iVar8] & ~uVar2;
    }
    else {
      uVar2 = 1 << ((byte)iVar1 & 0x1f);
      uVar6 = (&DAT_10131b68)[iVar8] | uVar2;
    }
    (&DAT_10131b68)[iVar8] = uVar6;
    (&DAT_10131c6c)[iVar8] = (&DAT_10131c6c)[iVar8] & ~uVar2;
    uVar5 = FUN_100b2860((int)this);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

