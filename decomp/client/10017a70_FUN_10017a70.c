
undefined4 __fastcall FUN_10017a70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int *piStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  int iStack_8;
  int local_4;
  
  if (DAT_100a3968 != 0) {
    if (DAT_100a3968 == 1) {
      local_20 = -1;
    }
    else {
      local_20 = *(int *)(DAT_100a3968 + 0x90);
    }
    iVar4 = local_20;
    iVar6 = 10;
    local_4 = param_1;
    if ((0 < local_20) && (iVar1 = FUN_10016470(&DAT_100a0ea8,local_20), iVar1 == 0)) {
      local_20 = -1;
      DAT_100a3968 = 1;
      iVar4 = -1;
    }
    iVar1 = 0;
    do {
      local_28 = DAT_100a3aac >> 8 & 0xff;
      local_2c = DAT_100a3aac >> 0x10 & 0xff;
      local_24 = DAT_100a3aac & 0xff;
      FUN_1001e790(&local_2c,&local_28,&local_24);
      iVar2 = *(int *)(param_1 + 0x20) + iVar1;
      if (iVar2 < 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(DAT_100a3ab0 + iVar2 * 4);
      }
      (*DAT_100a5000)(uVar3,local_2c,local_28,local_24);
      iVar2 = DAT_100a3960;
      if ((iVar1 == iVar4) &&
         (iVar4 = FUN_10016470(&DAT_100a0ea8,iVar4), iVar2 = DAT_100a3960, iVar4 != 0)) {
        iVar2 = *(int *)(iVar4 + 0xb0) - *(int *)(iVar4 + 0xac);
      }
      (*DAT_100a500c)(0,iVar6,10,(*(int *)(param_1 + 0x20) + iVar1) * 0x10 + DAT_100a3ab4);
      iVar1 = iVar1 + 1;
      iVar6 = iVar2 + 5 + iVar6;
      iVar4 = local_20;
    } while (iVar1 < 5);
    iVar6 = 10;
    iStack_10 = 0;
    piStack_c = &DAT_100a37a8;
    iStack_8 = 5;
    do {
      piVar5 = piStack_c;
      iVar4 = DAT_100a396c + 10;
      if (iStack_10 == local_20) {
        iVar1 = FUN_10016470(&DAT_100a0ea8,iStack_10);
        iStack_14 = DAT_100a3960;
        if (iVar1 != 0) {
          iStack_14 = *(int *)(iVar1 + 0xb0) - *(int *)(iVar1 + 0xac);
        }
        iStack_18 = 10;
        do {
          iVar1 = *piVar5;
          piStack_1c = piVar5;
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) != 0)) {
            local_28 = DAT_100a3aac >> 8 & 0xff;
            local_2c = DAT_100a3aac >> 0x10 & 0xff;
            local_24 = DAT_100a3aac & 0xff;
            if (DAT_100a3968 == iVar1) {
              (*DAT_100a5000)(*(undefined4 *)(iVar1 + 0xa8),local_2c,local_28,local_24);
              (*DAT_100a500c)(0,iVar6,iVar4,iVar1 + 0xac);
              if (*(int *)(param_1 + 0x24) < 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = *(undefined4 *)(DAT_100a3ab0 + *(int *)(param_1 + 0x24) * 4);
              }
              (*DAT_100a5000)(uVar3,local_2c,local_28,local_24);
              iVar2 = *(int *)(param_1 + 0x24) * 0x10 + DAT_100a3ab4;
            }
            else {
              iVar2 = FUN_10015ed0(&DAT_100a0ea8,iVar1);
              if (iVar2 == 0) {
                local_2c = 0xff;
                local_28 = 0x10;
                local_24 = 0x10;
              }
              FUN_1001e790(&local_2c,&local_28,&local_24);
              (*DAT_100a5000)(*(undefined4 *)(iVar1 + 0xbc),local_2c,local_28,local_24);
              iVar2 = iVar1 + 0xc0;
            }
            (*DAT_100a500c)(0,iVar6,iVar4,iVar2);
            FUN_100179b0(iVar1,DAT_100a3964 / 2 + iVar6,iVar4,DAT_100a3964,DAT_100a3934);
            iVar4 = iVar4 + 5 + (*(int *)(iVar1 + 0xb8) - *(int *)(iVar1 + 0xb4));
          }
          piVar5 = piStack_1c + 1;
          iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
        iStack_18 = 0;
        iVar4 = iStack_14;
        piStack_1c = piVar5;
      }
      else {
        local_28 = DAT_100a3aac >> 8 & 0xff;
        local_2c = DAT_100a3aac >> 0x10 & 0xff;
        local_24 = DAT_100a3aac & 0xff;
        iStack_14 = 10;
        do {
          iVar1 = *piVar5;
          if ((iVar1 != 0) && (*(int *)(iVar1 + 0x9c) != 0)) {
            iVar1 = FUN_10015ed0(&DAT_100a0ea8,iVar1);
            if (iVar1 == 0) {
              local_2c = 0xff;
              local_28 = 0x10;
              local_24 = 0x10;
              uVar3 = 0x60;
            }
            else {
              local_28 = DAT_100a3aac >> 8 & 0xff;
              local_2c = DAT_100a3aac >> 0x10 & 0xff;
              local_24 = DAT_100a3aac & 0xff;
              uVar3 = 0x80;
            }
            (*DAT_100a501c)(iVar6,iVar4,DAT_100a3960,DAT_100a396c,local_2c,local_28,local_24,uVar3);
            iVar4 = iVar4 + 5 + DAT_100a396c;
          }
          piVar5 = piVar5 + 1;
          iStack_14 = iStack_14 + -1;
        } while (iStack_14 != 0);
        iStack_14 = 0;
        param_1 = local_4;
        iVar4 = DAT_100a3960;
      }
      iVar6 = iVar4 + 5 + iVar6;
      iStack_10 = iStack_10 + 1;
      piStack_c = piStack_c + 0xb;
      iStack_8 = iStack_8 + -1;
    } while (iStack_8 != 0);
    return 1;
  }
  return 0;
}

