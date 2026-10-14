
void __thiscall FUN_10060620(void *this,int *param_1)

{
  int iVar1;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *this_00;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < 0x7d2) {
    if (iVar1 != 0x7d1) {
      switch(iVar1) {
      case 1000:
        if (*(int *)((int)this + 0x1d8) != 6) {
          return;
        }
        *(undefined4 *)(*(int *)((int)this + 4) + 0x170) = 1;
        *(undefined4 *)(*(int *)((int)this + 4) + 0x160) = 0;
        return;
      case 0x3e9:
        if (*(void **)((int)this + 0x2fc) == (void *)0x0) {
          return;
        }
        FUN_1008fff0(*(void **)((int)this + 0x2fc),0);
        return;
      case 0x3ea:
        if (*(void **)((int)this + 0x2fc) == (void *)0x0) {
          return;
        }
        FUN_1008fff0(*(void **)((int)this + 0x2fc),1);
        return;
      case 0x3eb:
        FUN_10098c10((uint *)param_1[1],this,this,3,0);
        return;
      case 0x3ec:
        if (((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) &&
           (*(int *)((int)this + 0x1d8) == 1)) {
          return;
        }
        FUN_10094b20((void *)param_1[1],*(undefined4 *)(*(int *)((int)this + 4) + 0x208),4,
                     (void *)param_1[1],0x3f800000,0x40000000,0,100);
        return;
      case 0x3f0:
        if (((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 2) != 0) &&
           (*(int *)((int)this + 0x1d8) == 1)) {
          return;
        }
        FUN_10094b20((void *)param_1[1],*(undefined4 *)(*(int *)((int)this + 4) + 0x208),2,
                     (void *)param_1[1],0x3f800000,0x40000000,0,100);
        return;
      case 0x3f1:
        iVar1 = (*DAT_10121f70)(0,2);
        if (iVar1 == 0) {
          return;
        }
      case 0x3ed:
        FUN_100945d0(*(undefined4 *)(*(int *)((int)this + 4) + 0x208),(byte *)param_1[1]);
        return;
      case 0x3f2:
        if (*(int *)((int)this + 0x1d8) != 6) {
          return;
        }
        *(undefined4 *)(*(int *)((int)this + 4) + 0x170) = 0;
        *(undefined4 *)(*(int *)((int)this + 4) + 0x160) =
             *(undefined4 *)(*(int *)((int)this + 4) + 0x1b0);
        return;
      }
switchD_1006064a_caseD_3ee:
      (*DAT_10121efc)(2,s_Unhandled_animation_event__d_for_1011140c,iVar1,
                      **(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
      return;
    }
    if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x200) == 0) {
      return;
    }
    iVar1 = (*DAT_10121f70)(0,1);
    uVar2 = 100;
    this_00 = extraout_ECX;
  }
  else {
    if (iVar1 != 0x7d2) {
      if (iVar1 == 0x7da) {
        FUN_10094b20((void *)0x0,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),4,
                     s_zombie_claw_miss2_wav_10101910,0x3f800000,0x3f4ccccd,0,100);
        return;
      }
      goto switchD_1006064a_caseD_3ee;
    }
    if ((*(uint *)(*(int *)((int)this + 4) + 0x1a4) & 0x200) == 0) {
      return;
    }
    iVar1 = (*DAT_10121f70)(0,1);
    uVar2 = 0x5a;
    this_00 = extraout_ECX_00;
  }
  if (iVar1 != 0) {
    FUN_10094b20(*(void **)((int)this + 4),*(undefined4 *)((int)*(void **)((int)this + 4) + 0x208),4
                 ,s_common_bodydrop4_wav_101113dc,0x3f800000,0x3f4ccccd,0,uVar2);
    return;
  }
  FUN_10094b20(this_00,*(undefined4 *)(*(int *)((int)this + 4) + 0x208),4,
               s_common_bodydrop3_wav_101113f4,0x3f800000,0x3f4ccccd,0,uVar2);
  return;
}

