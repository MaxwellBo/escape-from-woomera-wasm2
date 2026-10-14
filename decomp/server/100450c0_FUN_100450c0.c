
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100450c0(void *this,int param_1)

{
  uint *this_00;
  byte bVar1;
  void *this_01;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  undefined *puVar7;
  
  pcVar5 = s_player_10101c54;
  pbVar2 = (byte *)((int)DAT_10122044[0x26] + **(int **)(param_1 + 4));
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_10045104:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_10045109;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_10045104;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_10045109:
  if (iVar3 != 0) {
    return;
  }
  if (*(int *)((int)this + 0x164) < 1) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0x3f800000;
    iVar3 = *(int *)((int)this + 0x60);
    if (iVar3 < 0x20) {
      if (iVar3 < -0x1f) {
        puVar7 = &DAT_10103c18;
        iVar3 = -iVar3;
        goto LAB_10045143;
      }
    }
    else {
      puVar7 = &DAT_10103c14;
LAB_10045143:
      (*DAT_10121eb4)(iVar3,puVar7);
    }
    CRecharge::Off(this);
    if (*(int *)((int)this + 0x164) < 1) goto LAB_10045303;
  }
  if ((*(uint *)(*(int *)(param_1 + 4) + 0x168) & 0x80000000) != 0) {
    (**(code **)(*(int *)this + 8))(0x3e800000);
    *(code **)((int)this + 0x74) = CRecharge::Off;
    if (*DAT_10122044 <= *(float *)((int)this + 0x15c)) {
      return;
    }
    if (param_1 == 0) {
      return;
    }
    this_00 = (uint *)((int)this + 0xc0);
    FUN_10019420(this_00,param_1);
    piVar4 = (int *)FUN_10019460(this_00);
    iVar3 = (**(code **)(*piVar4 + 0xcc))();
    if (iVar3 == 0) {
      return;
    }
    if (*(int *)((int)this + 0x168) == 0) {
      *(undefined4 *)((int)this + 0x168) = 1;
      this_01 = *(void **)(*(int *)((int)this + 4) + 0x208);
      FUN_10094b20(this_01,this_01,3,s_items_suitchargeok1_wav_1010d4a8,0x3f59999a,0x3f4ccccd,0,100)
      ;
      *(float *)((int)this + 0x16c) = *DAT_10122044 + (float)_DAT_100e6250;
    }
    if ((*(int *)((int)this + 0x168) == 1) && (*(float *)((int)this + 0x16c) <= *DAT_10122044)) {
      *(undefined4 *)((int)this + 0x168) = 2;
      FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208)
                   ,6,s_items_suitcharge1_wav_1010d4d8,0x3f59999a,0x3f4ccccd,0,100);
    }
    iVar3 = FUN_10019460(this_00);
    if (*(float *)(*(int *)(iVar3 + 4) + 0x1bc) < _DAT_100dd61c) {
      *(int *)((int)this + 0x164) = *(int *)((int)this + 0x164) + -1;
      iVar3 = FUN_10019460(this_00);
      *(float *)(*(int *)(iVar3 + 4) + 0x1bc) =
           *(float *)(*(int *)(iVar3 + 4) + 0x1bc) + _DAT_100dd618;
      iVar3 = FUN_10019460(this_00);
      if (_DAT_100dd61c < *(float *)(*(int *)(iVar3 + 4) + 0x1bc)) {
        iVar3 = FUN_10019460(this_00);
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x1bc) = 0x42c80000;
      }
    }
    *(float *)((int)this + 0x15c) = *DAT_10122044 + (float)_DAT_100dfb80;
    return;
  }
LAB_10045303:
  if (*(float *)((int)this + 0x16c) <= *DAT_10122044) {
    *(float *)((int)this + 0x16c) = *DAT_10122044 + (float)_DAT_100e6248;
    FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),3
                 ,s_items_suitchargeno1_wav_1010d4c0,0x3f59999a,0x3f4ccccd,0,100);
  }
  return;
}

