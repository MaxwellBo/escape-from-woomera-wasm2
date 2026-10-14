
/* public: void __thiscall CBaseButton::ButtonTouch(class CBaseEntity *) */

void __thiscall CBaseButton::ButtonTouch(CBaseButton *this,CBaseEntity *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  void *this_00;
  char *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  
                    /* 0x17140  31  ?ButtonTouch@CBaseButton@@QAEXPAVCBaseEntity@@@Z */
  pcVar5 = s_player_10101c54;
  pbVar2 = (byte *)(**(int **)(param_1 + 4) + *(int *)(DAT_10122044 + 0x98));
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1001718a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_1001718f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1001718a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1001718f:
  if (iVar3 == 0) {
    FUN_10019420(this + 0xc0,(int)param_1);
    iVar3 = FUN_100170e0((int)this);
    if (iVar3 != 0) {
      bVar6 = FUN_100b0030(*(int *)(this + 0x158),param_1);
      if (CONCAT31(extraout_var,bVar6) == 0) {
        FUN_10026660(*(int *)(this + 4),(int *)(this + 0x168),1,1.4013e-45);
        return;
      }
      *(undefined4 *)(this + 0x78) = 0;
      if (iVar3 == 2) {
        this_00 = (void *)(*(int *)(*(int *)(this + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
        FUN_10094b20(this_00,*(undefined4 *)(*(int *)(this + 4) + 0x208),2,this_00,0x3f800000,
                     0x3f4ccccd,0,100);
        uVar7 = 0;
        iVar3 = 3;
        piVar4 = (int *)FUN_10019410((uint *)(this + 0xc0));
        FUN_10098e40(this,piVar4,iVar3,uVar7);
        ButtonReturn(this);
        return;
      }
      FUN_10017260(this);
    }
  }
  return;
}

