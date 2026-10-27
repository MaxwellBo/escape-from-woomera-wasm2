
/* WARNING: Removing unreachable block (ram,0x100a434e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100a42c0(void *this,int *param_1)

{
  byte bVar1;
  void *this_00;
  bool bVar2;
  undefined3 extraout_var;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  if (*DAT_10122044 < *(float *)((int)this + 0x54)) {
    return;
  }
  bVar2 = FUN_100b0030(*(int *)((int)this + 0x158),param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  pcVar6 = s_trigger_secret_10119834;
  pbVar3 = (byte *)((int)DAT_10122044[0x26] + **(int **)((int)this + 4));
  do {
    bVar1 = *pbVar3;
    bVar2 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100a4335:
      iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
      goto LAB_100a433a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar2 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100a4335;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_100a433a:
  if (iVar4 == 0) {
    iVar4 = (*(int **)((int)this + 4))[100];
    if (iVar4 == 0) {
      return;
    }
    pcVar6 = s_player_10101c54;
    pbVar3 = (byte *)(*(int *)(iVar4 + 0x80) + (int)DAT_10122044[0x26]);
    do {
      bVar1 = *pbVar3;
      bVar2 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100a4388:
        iVar4 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
        goto LAB_100a438d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar2 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100a4388;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_100a438d:
    if (iVar4 != 0) {
      return;
    }
    DAT_10122044[9] = DAT_10122044[9] + _DAT_100dd618;
  }
  this_00 = *(void **)(*(int *)((int)this + 4) + 0x1e8);
  if (this_00 != (void *)0x0) {
    FUN_10094b20(this_00,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),2,
                 (char *)((int)DAT_10122044[0x26] + (int)this_00),0x3f800000,0x3f4ccccd,0,100);
  }
  FUN_10019420((uint *)((int)this + 0xc0),(int)param_1);
  uVar7 = 0;
  iVar4 = 3;
  piVar5 = (int *)FUN_10019410((uint *)((int)this + 0xc0));
  FUN_10098e40(this,piVar5,iVar4,uVar7);
  if ((*(int *)(*(int *)((int)this + 4) + 0x1d4) != 0) &&
     (iVar4 = (**(code **)(*param_1 + 0xcc))(), iVar4 != 0)) {
    FUN_100afb80(*(int *)(*(int *)((int)this + 4) + 0x1d4) + (int)DAT_10122044[0x26],param_1);
    (*DAT_10121f48)(*(undefined4 *)(param_1[1] + 0x208),1,
                    *(int *)(*(int *)((int)this + 4) + 0x1d4) + (int)DAT_10122044[0x26]);
    FUN_100c80d0();
  }
  if (*(float *)((int)this + 0xe8) <= _DAT_100dd5f8) {
    *(undefined4 *)((int)this + 0x78) = 0;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(code **)((int)this + 0x74) = CBaseEntity::SUB_Remove;
    return;
  }
  *(code **)((int)this + 0x74) = CTriggerMultiple::MultiWaitOver;
  (**(code **)(*(int *)this + 8))(*(float *)((int)this + 0xe8));
  return;
}

