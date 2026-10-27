
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CCrossbowBolt::BoltTouch(class CBaseEntity *) */

void __thiscall CCrossbowBolt::BoltTouch(CCrossbowBolt *this,CBaseEntity *param_1)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  void *extraout_ECX;
  void *this_00;
  void *this_01;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_38 [8];
  float fStack_18;
  
                    /* 0x246f0  20  ?BoltTouch@CCrossbowBolt@@AAEXPAVCBaseEntity@@@Z */
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  if (*(float *)(*(int *)(param_1 + 4) + 0x16c) == _DAT_100dd5f8) {
    uVar10 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
    iVar7 = (*DAT_10121f70)();
    iVar7 = iVar7 + 0x62;
    uVar13 = 0;
    uVar12 = 0x3f4ccccd;
    fVar9 = (float10)(*DAT_10121f74)();
    FUN_10094b20(this_01,uVar10,4,s_weapons_xbow_hit1_wav_10106534,(float)fVar9,uVar12,uVar13,iVar7)
    ;
    *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))();
    pcVar11 = s_worldspawn_10101338;
    pbVar5 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4));
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_100248f1:
        iVar7 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_100248f6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_100248f1;
      pbVar5 = pbVar5 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_100248f6:
    if (iVar7 == 0) {
      iVar7 = *(int *)(this + 4);
      fVar3 = SQRT(*(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28) +
                   *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                   *(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20));
      if (fVar3 != _DAT_100dd5f8) {
        fStack_18 = _DAT_100dd618 / fVar3;
      }
      FUN_100afe10((int)this,&stack0xffffffa0);
      puVar6 = (undefined4 *)FUN_100ae830((undefined4 *)&stack0xffffffa0,&stack0xffffff94);
      iVar7 = *(int *)(this + 4);
      *(undefined4 *)(iVar7 + 0x50) = *puVar6;
      *(undefined4 *)(iVar7 + 0x54) = puVar6[1];
      *(undefined4 *)(iVar7 + 0x58) = puVar6[2];
      *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 0x108) = 5;
      iVar7 = *(int *)(this + 4);
      *(undefined4 *)(iVar7 + 0x20) = 0;
      *(undefined4 *)(iVar7 + 0x24) = 0;
      *(undefined4 *)(iVar7 + 0x28) = 0;
      *(undefined4 *)(*(int *)(this + 4) + 100) = 0;
      fStack_18 = (float)(*DAT_10121f70)(0,0x168);
      *(float *)(*(int *)(this + 4) + 0x58) = (float)(int)fStack_18;
      (**(code **)(*(int *)this + 8))(0x41200000);
    }
    iVar7 = FUN_100b01e0(*(int *)(this + 4) + 8);
    if (iVar7 != -3) {
      FUN_100b06a0((undefined4 *)(*(int *)(this + 4) + 8));
    }
    goto LAB_10024a87;
  }
  FUN_100afcf0(local_38);
  if (*(int *)(*(int *)(this + 4) + 0x198) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(*(int *)(this + 4) + 0x198) + 0x80;
  }
  FUN_100b2bd0();
  iVar4 = (**(code **)(*(int *)param_1 + 0xcc))();
  iVar2 = *(int *)param_1;
  if (iVar4 == 0) {
    FUN_1001fdd0((void *)(*(int *)(this + 4) + 0x20),(float *)&stack0xffffff8c);
    uVar10 = DAT_10126b34;
  }
  else {
    FUN_1001fdd0((void *)(*(int *)(this + 4) + 0x20),(float *)&stack0xffffff8c);
    uVar10 = DAT_10126b30;
  }
  (**(code **)(iVar2 + 0x5c))(iVar7,uVar10);
  FUN_100b2bf0(*(undefined4 *)(this + 4),iVar7);
  iVar7 = *(int *)(this + 4);
  *(undefined4 *)(iVar7 + 0x20) = 0;
  *(undefined4 *)(iVar7 + 0x24) = 0;
  *(undefined4 *)(iVar7 + 0x28) = 0;
  iVar7 = (*DAT_10121f70)(0,1);
  if (iVar7 == 0) {
    this_00 = *(void **)(this + 4);
    uVar10 = *(undefined4 *)((int)this_00 + 0x208);
    pcVar11 = s_weapons_xbow_hitbod1_wav_10106580;
LAB_10024833:
    FUN_10094b20(this_00,uVar10,4,pcVar11,0x3f800000,0x3f4ccccd,0,100);
  }
  else if (iVar7 == 1) {
    uVar10 = *(undefined4 *)(*(int *)(this + 4) + 0x208);
    pcVar11 = s_weapons_xbow_hitbod2_wav_10106564;
    this_00 = extraout_ECX;
    goto LAB_10024833;
  }
  iVar7 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar7 == 0) {
    (**(code **)(*(int *)this + 0x68))(*(undefined4 *)(this + 4),1);
  }
LAB_10024a87:
  iVar7 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar7 != 0) {
    *(code **)(this + 0x74) = ExplodeThink;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
  }
  return;
}

