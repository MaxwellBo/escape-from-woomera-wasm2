
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrackTrain::Find(void) */

void __thiscall CFuncTrackTrain::Find(CFuncTrackTrain *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int *piVar5;
  float fVar6;
  void *this_00;
  byte *pbVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x78630  102  ?Find@CFuncTrackTrain@@QAEXXZ */
  this_00 = (void *)FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                           *(int *)(*(int *)(this + 4) + 0x1c8)));
  *(void **)(this + 0xbc) = this_00;
  if (this_00 != (void *)0x0) {
    piVar5 = *(int **)((int)this_00 + 4);
    pcVar9 = s_path_track_101137c0;
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar5);
    do {
      bVar4 = *pbVar7;
      bVar10 = bVar4 < (byte)*pcVar9;
      if (bVar4 != *pcVar9) {
LAB_100786a4:
        iVar8 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_100786a9;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar7[1];
      bVar10 = bVar4 < (byte)pcVar9[1];
      if (bVar4 != pcVar9[1]) goto LAB_100786a4;
      pbVar7 = pbVar7 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar4 != 0);
    iVar8 = 0;
LAB_100786a9:
    if (iVar8 != 0) {
      (*DAT_10121efc)(4,s_func_track_train_must_be_on_a_pa_101141cc);
      *(undefined4 *)(this + 0xbc) = 0;
      return;
    }
    fVar1 = (float)piVar5[2];
    fVar6 = (float)piVar5[3];
    fVar2 = (float)piVar5[4];
    fVar3 = *(float *)(this + 0xc4);
    local_1c = (fVar2 + fVar3) - *(float *)(this + 0xc4);
    local_24 = fVar1;
    local_20 = fVar6;
    FUN_10073a20(this_00,&local_24,*(float *)(this + 0xc0),0);
    local_1c = local_1c + *(float *)(this + 0xc4);
    local_c = local_24 - fVar1;
    local_8 = local_20 - fVar6;
    local_4 = local_1c - (fVar2 + fVar3);
    FUN_100ae830(&local_18,&local_c);
    local_14 = local_14 + _DAT_100ddaec;
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 1) != 0) {
      local_18 = 0;
    }
    FUN_100635b0((int)this);
    FUN_10063390((int)this);
    FUN_10077160(this,0x3dcccccd,0);
    *(code **)(this + 0x74) = PostponeNext;
    *(undefined4 *)(*(int *)(this + 4) + 0x1f8) = *(undefined4 *)(this + 0xd0);
    FUN_10077660((int)this);
  }
  return;
}

