
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1004c2c0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  (*DAT_10121f30)(*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
  switch(param_1) {
  case 1:
    if (*(int *)((int)this + 0x1d8) == 2) {
      param_1 = 0x2f;
    }
    break;
  case 3:
    if (_DAT_100ddacc < *(float *)(*(int *)((int)this + 4) + 0x160)) break;
    iVar2 = 0x30;
    goto LAB_1004c3dc;
  case 4:
    if (*(float *)(*(int *)((int)this + 4) + 0x160) <= _DAT_100ddacc) {
      iVar2 = 0x31;
      goto LAB_1004c3dc;
    }
    break;
  case 0x1c:
    if ((*(byte *)(*(int *)((int)this + 4) + 0x168) & 1) == 0) {
      if (*(int *)((int)this + 0x35c) == 0) {
        iVar2 = FUN_10008160(this,(byte *)s_crouching_shotgun_1010eb28);
      }
      else {
        iVar2 = FUN_10008160(this,(byte *)s_standing_shotgun_1010eb3c);
      }
    }
    else if (*(int *)((int)this + 0x35c) == 0) {
      iVar2 = FUN_10008160(this,(byte *)s_crouching_mp5_1010eb50);
    }
    else {
      iVar2 = FUN_10008160(this,(byte *)s_standing_mp5_1010eb60);
    }
    goto LAB_1004c3e5;
  case 0x1d:
    uVar1 = *(uint *)(*(int *)((int)this + 4) + 0x168);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        (*DAT_10121efc)(1,s_No_grenades_available__1010eaf0);
      }
      else {
        iVar2 = FUN_10008160(this,(byte *)s_launchgrenade_1010eb08);
      }
    }
    else {
      iVar2 = FUN_10008160(this,(byte *)s_throwgrenade_1010eb18);
    }
    goto LAB_1004c3e5;
  }
  iVar2 = param_1;
LAB_1004c3dc:
  iVar2 = FUN_10008100(this,iVar2);
LAB_1004c3e5:
  *(int *)((int)this + 0x1cc) = param_1;
  if (-1 < iVar2) {
    if ((*(int *)(*(int *)((int)this + 4) + 0x128) != iVar2) || (*(int *)((int)this + 0xd8) == 0)) {
      *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0;
    }
    *(int *)(*(int *)((int)this + 4) + 0x128) = iVar2;
    FUN_10008190((int)this);
    (**(code **)(*(int *)this + 0x1b8))();
    return;
  }
  (*DAT_10121efc)(1,s__s_has_no_sequence_for_act__d_10103954,
                  *(int *)(DAT_10122044 + 0x98) + **(int **)((int)this + 4),param_1);
  *(undefined4 *)(*(int *)((int)this + 4) + 0x128) = 0;
  return;
}

