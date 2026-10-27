
void __fastcall FUN_1004c4a0(CBaseEntity *param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  CBaseEntity *pCVar4;
  CBaseEntity *pCVar5;
  undefined3 extraout_var_00;
  int *piVar6;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x374) = 0xffffffff;
  if ((*(int *)(iVar3 + 0x108) == 5) && (*(int *)(param_1 + 0x1d8) != 5)) {
    if ((*(uint *)(iVar3 + 0x1a4) & 0x200) != 0) {
      *(undefined4 *)(iVar3 + 0x108) = 4;
      (**(code **)(*(int *)param_1 + 0x184))(0x32);
      return;
    }
    if (*(int *)(param_1 + 0x1d8) == 2) {
      (**(code **)(*(int *)param_1 + 0x184))(0x31);
      return;
    }
    (**(code **)(*(int *)param_1 + 0x184))(0x30);
    return;
  }
  if ((*(uint *)(param_1 + 0x15c) & 0x20000) != 0) {
    iVar3 = (**(code **)(*(int *)param_1 + 0x1e4))();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0xc) & 0x20) != 0)) {
      iVar3 = FUN_1004a210((int)param_1);
      if (iVar3 != 0) {
        FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HG_GREN_1010e8e4);
        FUN_1004a250((int)param_1);
      }
      (**(code **)(*(int *)param_1 + 0x184))(0x13);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x1d8) != 2) ||
     (uVar1 = *(uint *)(param_1 + 0x15c), (uVar1 & 0x100000) != 0)) goto LAB_1004c948;
  if ((uVar1 & 0x10000) == 0) {
    if ((uVar1 & 1) != 0) {
      (**(code **)(*(int *)param_1 + 0x184))(0x2d);
      return;
    }
    if ((uVar1 & 0x100) != 0) {
      iVar3 = (*DAT_10121f70)(0,99);
      if (iVar3 < 0x5b) {
        bVar2 = FUN_10019450((uint *)(param_1 + 0x160));
        if (CONCAT31(extraout_var_02,bVar2) != 0) {
          iVar3 = FUN_1004a210((int)param_1);
          if (iVar3 != 0) {
            *(undefined4 *)(param_1 + 0x374) = 3;
          }
          goto LAB_1004c72b;
        }
      }
      (**(code **)(*(int *)param_1 + 0x184))(0x11);
      return;
    }
    if ((uVar1 & 0x800) != 0) {
      (**(code **)(*(int *)param_1 + 0x184))(0x16);
      return;
    }
    if (((*(byte *)(*(int *)(param_1 + 4) + 0x168) & 4) != 0) && ((uVar1 & 0x1000) != 0)) {
      iVar3 = FUN_100961f0(param_1,0xc);
      if (iVar3 != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(0x19);
        return;
      }
    }
    uVar1 = *(uint *)(param_1 + 0x15c);
    if ((uVar1 & 0x400) != 0) {
      pCVar5 = param_1 + 0x308;
      bVar2 = FUN_10019450((uint *)pCVar5);
      if (CONCAT31(extraout_var_03,bVar2) != 0) {
        pCVar4 = (CBaseEntity *)FUN_10019410((uint *)pCVar5);
        if (pCVar4 == (CBaseEntity *)0x0) {
          pCVar4 = param_1;
        }
        if ((*(int *)(pCVar4 + 0x338) != 0) && ((*(uint *)(param_1 + 0x15c) & 0x80000) == 0)) {
          pCVar5 = (CBaseEntity *)FUN_10019410((uint *)pCVar5);
          if (pCVar5 == (CBaseEntity *)0x0) {
            pCVar5 = param_1;
          }
          *(undefined4 *)(pCVar5 + 0x338) = 0;
          (**(code **)(*(int *)param_1 + 0x184))(0x2f);
          return;
        }
      }
      iVar3 = FUN_100961f0(param_1,3);
      if (iVar3 != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(0x18);
        return;
      }
      if ((*(uint *)(param_1 + 0x15c) & 0x1000) != 0) {
        iVar3 = FUN_100961f0(param_1,0xc);
        if (iVar3 != 0) {
          (**(code **)(*(int *)param_1 + 0x184))(0x19);
          return;
        }
      }
LAB_1004c72b:
      (**(code **)(*(int *)param_1 + 0x184))(0x12);
      return;
    }
    if ((uVar1 & 0x20) != 0) {
      if ((uVar1 & 0x1000) != 0) {
        iVar3 = FUN_100961f0(param_1,0xc);
        if (iVar3 != 0) {
          iVar3 = FUN_1004a210((int)param_1);
          if (iVar3 != 0) {
            FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HG_THROW_1010e8b4)
            ;
            FUN_1004a250((int)param_1);
          }
          (**(code **)(*(int *)param_1 + 0x184))(0x19);
          return;
        }
      }
      iVar3 = FUN_100961f0(param_1,3);
      if (iVar3 != 0) {
        iVar3 = FUN_1004a210((int)param_1);
        if (iVar3 != 0) {
          *(undefined4 *)(param_1 + 0x374) = 5;
        }
        (**(code **)(*(int *)param_1 + 0x184))(0x2c);
        return;
      }
      iVar3 = FUN_1004a210((int)param_1);
      if (iVar3 != 0) {
        iVar3 = (*DAT_10121f70)(0,1);
        if (iVar3 != 0) {
          FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)s_HG_TAUNT_1010e89c);
          FUN_1004a250((int)param_1);
        }
      }
      (**(code **)(*(int *)param_1 + 0x184))(0x1c);
      return;
    }
  }
  else {
    pCVar5 = param_1 + 0x308;
    bVar2 = FUN_10019450((uint *)pCVar5);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      pCVar4 = (CBaseEntity *)FUN_10019410((uint *)pCVar5);
      if (pCVar4 == (CBaseEntity *)0x0) {
        pCVar4 = param_1;
      }
      *(undefined4 *)(pCVar4 + 0x338) = 0;
      pCVar5 = (CBaseEntity *)FUN_10019410((uint *)pCVar5);
      if (pCVar5 != param_1) {
        (**(code **)(*(int *)param_1 + 0x184))(0x12);
        return;
      }
      (*DAT_10121efc)(2,s_leader_spotted_player__1010eb7c);
      iVar3 = FUN_1004a210((int)param_1);
      if (iVar3 != 0) {
        pCVar5 = param_1 + 0x160;
        bVar2 = FUN_10019450((uint *)pCVar5);
        if (CONCAT31(extraout_var_00,bVar2) == 0) {
LAB_1004c64a:
          bVar2 = FUN_10019450((uint *)pCVar5);
          if (CONCAT31(extraout_var_01,bVar2) != 0) {
            piVar6 = (int *)FUN_10019460((uint *)pCVar5);
            iVar3 = (**(code **)(*piVar6 + 0x4c))();
            if (iVar3 != 0xb) {
              piVar6 = (int *)FUN_10019460((uint *)pCVar5);
              iVar3 = (**(code **)(*piVar6 + 0x4c))();
              if (iVar3 != 3) {
                piVar6 = (int *)FUN_10019460((uint *)pCVar5);
                iVar3 = (**(code **)(*piVar6 + 0x4c))();
                if (iVar3 != 1) {
                  pcVar7 = s_HG_MONST_1010eb70;
                  goto LAB_1004c6a6;
                }
              }
            }
          }
        }
        else {
          piVar6 = (int *)FUN_10019460((uint *)pCVar5);
          iVar3 = (**(code **)(*piVar6 + 0xcc))();
          if (iVar3 == 0) goto LAB_1004c64a;
          pcVar7 = s_HG_ALERT_1010e8d8;
LAB_1004c6a6:
          FUN_100945d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),(byte *)pcVar7);
        }
        FUN_1004a250((int)param_1);
      }
      if ((*(uint *)(param_1 + 0x15c) & 0x400) != 0) {
        (**(code **)(*(int *)param_1 + 0x184))(0x2b);
        return;
      }
      goto LAB_1004c939;
    }
  }
  if (((*(uint *)(param_1 + 0x15c) & 0x10) == 0) || ((*(uint *)(param_1 + 0x15c) & 0x400) != 0)) {
LAB_1004c948:
    FUN_10006c50(param_1);
    return;
  }
LAB_1004c939:
  (**(code **)(*(int *)param_1 + 0x184))(0x2c);
  return;
}

