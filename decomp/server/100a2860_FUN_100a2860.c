
void __thiscall FUN_100a2860(void *this,int *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar6;
  byte *pbVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = (**(code **)(*param_1 + 0x74))();
  iVar4 = *(int *)((int)this + 4);
  uVar6 = *(uint *)(iVar4 + 0x1a0);
  if ((((uVar6 & 1) == 0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x1d8) == 8)) {
    if ((uVar6 & 4) == 0) {
      return;
    }
    (*DAT_10121efc)(1,s_DEBUG__env_customize__s_does_not_10119744,
                    *(int *)(iVar4 + 0x1cc) + *(int *)(DAT_10122044 + 0x98));
    return;
  }
  if ((uVar6 & 4) != 0) {
    (*DAT_10121efc)(1,s_DEBUG__env_customize___s__affect_10119714,
                    *(int *)(iVar4 + 0x1cc) + *(int *)(DAT_10122044 + 0x98),
                    *(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1]);
  }
  if (*(int *)((int)this + 0xbc) != 0) {
    iVar4 = param_1[1];
    uStack_c = *(undefined4 *)(iVar4 + 0xdc);
    uStack_8 = *(undefined4 *)(iVar4 + 0xe0);
    uStack_4 = *(undefined4 *)(iVar4 + 0xe4);
    uStack_18 = *(undefined4 *)(iVar4 + 0xe8);
    uStack_14 = *(undefined4 *)(iVar4 + 0xec);
    uStack_10 = *(undefined4 *)(iVar4 + 0xf0);
    (*DAT_10121e10)(*(undefined4 *)(iVar4 + 0x208));
    FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
      (*DAT_10121efc)(1,s_model__s_10119708);
    }
  }
  FUN_100a2fb0(this,*(float *)((int)this + 0xe8),0,param_1);
  FUN_100a2fb0(this,*(float *)((int)this + 0xec),1,param_1);
  FUN_100a2fb0(this,*(float *)((int)this + 0xf0),2,param_1);
  FUN_100a2fb0(this,*(float *)((int)this + 0xf4),3,param_1);
  if ((*(int *)((int)this + 0xe4) != -0x40800000) &&
     (*(int *)(param_1[1] + 0x138) = *(int *)((int)this + 0xe4),
     (*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0)) {
    (*DAT_10121efc)(1,s_framerate__f_101196f8,(double)*(float *)((int)this + 0xe4));
  }
  iVar4 = *(int *)(*(int *)((int)this + 4) + 0x114);
  if ((iVar4 != -1) &&
     (*(int *)(param_1[1] + 0x114) = iVar4, (*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0))
  {
    (*DAT_10121efc)(1,s_body____d_101196ec);
  }
  iVar4 = *(int *)(*(int *)((int)this + 4) + 0x110);
  if (iVar4 != -1) {
    if (iVar4 == -2) {
      iVar4 = param_1[1];
      if (*(int *)(iVar4 + 0x110) == 0) {
        *(undefined4 *)(iVar4 + 0x110) = 1;
        if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
          (*DAT_10121efc)(1);
        }
      }
      else {
        *(undefined4 *)(iVar4 + 0x110) = 0;
        if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
          (*DAT_10121efc)(1);
        }
      }
    }
    else if (iVar4 == -99) {
      *(undefined4 *)(param_1[1] + 0x110) = 0xffffffff;
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
        (*DAT_10121efc)(1);
      }
    }
    else {
      *(int *)(param_1[1] + 0x110) = iVar4;
      if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
        (*DAT_10121efc)(1,s_skin__d_101196c4);
      }
    }
  }
  iVar4 = FUN_100a2f10(this,*(int *)((int)this + 0xd0),~*(uint *)(param_1[1] + 0x118) >> 7 & 1,
                       param_2,s_visible_101196bc);
  if (iVar4 == 1) {
    iVar4 = param_1[1];
    uVar6 = *(uint *)(iVar4 + 0x118) & 0xffffff7f;
LAB_100a2b93:
    *(uint *)(iVar4 + 0x118) = uVar6;
  }
  else if (iVar4 == 2) {
    iVar4 = param_1[1];
    uVar6 = *(uint *)(iVar4 + 0x118) | 0x80;
    goto LAB_100a2b93;
  }
  iVar4 = FUN_100a2f10(this,*(int *)((int)this + 0xd4),(uint)(*(int *)(param_1[1] + 0x10c) != 0),
                       param_2,s_solid_101196b4);
  if (iVar4 == 1) {
    iVar4 = param_1[1];
    if (*(char *)(*(int *)(iVar4 + 0xb8) + *(int *)(DAT_10122044 + 0x98)) == '*') {
      *(undefined4 *)(iVar4 + 0x10c) = 4;
    }
    else {
      *(undefined4 *)(iVar4 + 0x10c) = 3;
    }
  }
  else if (iVar4 == 2) {
    *(undefined4 *)(param_1[1] + 0x10c) = 0;
  }
  if (iVar3 == 0) {
    bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
    goto joined_r0x100a2eec;
  }
  if ((*(int *)((int)this + 0xe0) != 0) &&
     (*(int *)(iVar3 + 0x2d0) = *(int *)((int)this + 0xe0),
     (*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0)) {
    (*DAT_10121efc)(1,s_bloodcolor__d_101196a4);
  }
  if (0 < *(int *)((int)this + 0xdc)) {
    pcVar8 = s_monster_barney_10115c10;
    pbVar7 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)param_1[1]);
    pbVar5 = pbVar7;
    do {
      bVar2 = *pbVar5;
      bVar9 = bVar2 < (byte)*pcVar8;
      if (bVar2 != *pcVar8) {
LAB_100a2c9c:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_100a2ca1;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar5[1];
      bVar9 = bVar2 < (byte)pcVar8[1];
      if (bVar2 != pcVar8[1]) goto LAB_100a2c9c;
      pbVar5 = pbVar5 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_100a2ca1:
    if (iVar4 != 0) {
      pcVar8 = s_monster_scientist_10115c3c;
      pbVar5 = pbVar7;
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < (byte)*pcVar8;
        if (bVar2 != *pcVar8) {
LAB_100a2cd4:
          iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_100a2cd9;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < (byte)pcVar8[1];
        if (bVar2 != pcVar8[1]) goto LAB_100a2cd4;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar2 != 0);
      iVar4 = 0;
LAB_100a2cd9:
      if (iVar4 != 0) {
        pcVar8 = s_monster_sitting_scientist_10115c20;
        do {
          bVar2 = *pbVar7;
          bVar9 = bVar2 < (byte)*pcVar8;
          if (bVar2 != *pcVar8) {
LAB_100a2d0c:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_100a2d11;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar9 = bVar2 < (byte)pcVar8[1];
          if (bVar2 != pcVar8[1]) goto LAB_100a2d0c;
          pbVar7 = pbVar7 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_100a2d11:
        if (iVar4 != 0) {
          if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
            (*DAT_10121efc)(1);
          }
          goto LAB_100a2d66;
        }
      }
    }
    param_1[0xc4] = *(int *)((int)this + 0xdc);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
      (*DAT_10121efc)(1,s_voicePitch_talk___d_10119674);
    }
  }
LAB_100a2d66:
  if (*(int *)((int)this + 0xc0) != 0) {
    *(int *)(iVar3 + 0x300) = *(int *)((int)this + 0xc0);
    if ((*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0) {
      (*DAT_10121efc)(1,s_class__d_10119668);
    }
    bVar9 = FUN_10019450((uint *)(iVar3 + 0x160));
    if (CONCAT31(extraout_var,bVar9) != 0) {
      FUN_10019420((uint *)(iVar3 + 0x160),0);
      *(uint *)(iVar3 + 0x15c) = *(uint *)(iVar3 + 0x15c) | 0x10000;
    }
  }
  if ((*(int *)((int)this + 0xc4) != -1) &&
     (*(int *)(iVar3 + 0x304) = *(int *)((int)this + 0xc4),
     (*(byte *)(*(int *)((int)this + 4) + 0x1a0) & 4) != 0)) {
    (*DAT_10121efc)(1,s_playerreact__d_10119658);
  }
  iVar4 = FUN_100a2f10(this,*(int *)((int)this + 200),*(uint *)(*(int *)(iVar3 + 4) + 0x1a0) & 0x10,
                       param_2,s_prisoner_1011964c);
  if (iVar4 == 1) {
    puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a0);
    *puVar1 = *puVar1 | 0x10;
    bVar9 = FUN_10019450((uint *)(iVar3 + 0x160));
    if (CONCAT31(extraout_var_00,bVar9) != 0) {
      FUN_10019420((uint *)(iVar3 + 0x160),0);
      *(uint *)(iVar3 + 0x15c) = *(uint *)(iVar3 + 0x15c) | 0x10000;
    }
  }
  else if (iVar4 == 2) {
    puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a0);
    *puVar1 = *puVar1 & 0xffffffef;
  }
  iVar4 = FUN_100a2f10(this,*(int *)((int)this + 0xcc),
                       *(uint *)(*(int *)(iVar3 + 4) + 0x1a4) & 0x800000,param_2,
                       s_monsterclip_10119640);
  if (iVar4 == 1) {
    iVar4 = *(int *)(iVar3 + 4);
    uVar6 = *(uint *)(iVar4 + 0x1a4) | 0x800000;
LAB_100a2ea0:
    *(uint *)(iVar4 + 0x1a4) = uVar6;
  }
  else if (iVar4 == 2) {
    iVar4 = *(int *)(iVar3 + 4);
    uVar6 = *(uint *)(iVar4 + 0x1a4) & 0xff7fffff;
    goto LAB_100a2ea0;
  }
  iVar4 = FUN_100a2f10(this,*(int *)((int)this + 0xd8),*(uint *)(iVar3 + 0x2a0) & 1,param_2,
                       s_provoked_10119634);
  if (iVar4 == 1) {
    uVar6 = *(uint *)(iVar3 + 0x2a0) | 1;
LAB_100a2edc:
    *(uint *)(iVar3 + 0x2a0) = uVar6;
  }
  else if (iVar4 == 2) {
    uVar6 = *(uint *)(iVar3 + 0x2a0) & 0xfffffffe;
    goto LAB_100a2edc;
  }
  bVar2 = *(byte *)(*(int *)((int)this + 4) + 0x1a0);
joined_r0x100a2eec:
  if ((bVar2 & 4) != 0) {
    (*DAT_10121efc)(1,&DAT_10119630);
  }
  return;
}

