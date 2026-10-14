
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10049ac0(void *this,int *param_1)

{
  void *this_00;
  float *this_01;
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0xcc))();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)((int)this + 0x164) < 1) {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x130) = 0x3f800000;
    iVar1 = *(int *)((int)this + 0x60);
    if (iVar1 < 0x20) {
      if (iVar1 < -0x1f) {
        puVar2 = &DAT_10103c18;
        iVar1 = -iVar1;
        goto LAB_10049b14;
      }
    }
    else {
      puVar2 = &DAT_10103c14;
LAB_10049b14:
      (*DAT_10121eb4)(iVar1,puVar2);
    }
    CWallHealth::Off(this);
    if (*(int *)((int)this + 0x164) < 1) goto LAB_10049c40;
  }
  if ((*(uint *)(param_1[1] + 0x168) & 0x80000000) != 0) {
    (**(code **)(*(int *)this + 8))(0x3e800000);
    *(code **)((int)this + 0x74) = CWallHealth::Off;
    this_01 = DAT_10122044;
    if (*DAT_10122044 <= *(float *)((int)this + 0x15c)) {
      return;
    }
    if (*(int *)((int)this + 0x168) == 0) {
      *(undefined4 *)((int)this + 0x168) = 1;
      FUN_10094b20(this_01,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),3,
                   s_items_medshot4_wav_1010df78,0x3f800000,0x3f4ccccd,0,100);
      *(float *)((int)this + 0x16c) = *DAT_10122044 + (float)_DAT_100e6250;
    }
    if ((*(int *)((int)this + 0x168) == 1) && (*(float *)((int)this + 0x16c) <= *DAT_10122044)) {
      *(undefined4 *)((int)this + 0x168) = 2;
      this_00 = *(void **)(*(int *)((int)this + 4) + 0x208);
      FUN_10094b20(this_00,this_00,6,s_items_medcharge4_wav_1010df48,0x3f800000,0x3f4ccccd,0,100);
    }
    iVar1 = (**(code **)(*param_1 + 100))(0x3f800000,0);
    if (iVar1 != 0) {
      *(int *)((int)this + 0x164) = *(int *)((int)this + 0x164) + -1;
    }
    *(float *)((int)this + 0x15c) = *DAT_10122044 + (float)_DAT_100dfb80;
    return;
  }
LAB_10049c40:
  if (*(float *)((int)this + 0x16c) <= *DAT_10122044) {
    *(float *)((int)this + 0x16c) = *DAT_10122044 + (float)_DAT_100e6248;
    FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),3
                 ,s_items_medshotno1_wav_1010df60,0x3f800000,0x3f4ccccd,0,100);
  }
  return;
}

