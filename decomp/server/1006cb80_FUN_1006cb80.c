
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_1006cb80(void *this,int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  int local_58;
  int iStack_54;
  int local_50;
  int local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  float fStack_28;
  int iStack_8;
  
  *param_3 = 0;
  if (*(int *)((int)this + 0x18) < 1) {
    (*DAT_10121efc)(2,s_No_Nodes__10112bf4);
    return 0;
  }
  if (param_2 == (int *)0x0) {
    (*DAT_10121efc)(2,s___LinkVisibleNodes__can_t_write_t_10112bc8);
  }
  else {
    FUN_100c8f17(param_2,(byte *)s__________________________________10112b78);
    FUN_100c8f17(param_2,(byte *)s_LinkVisibleNodes___Initial_Conne_10112b50);
    FUN_100c8f17(param_2,(byte *)s__________________________________10112b78);
  }
  iVar5 = 0;
  local_3c = 0;
  local_48 = 0;
  local_50 = 0;
  if (0 < *(int *)((int)this + 0x18)) {
    local_58 = 0;
    do {
      local_44 = 0;
      if (param_2 != (int *)0x0) {
        FUN_100c8f17(param_2,(byte *)s_Node___4d__10112b40);
      }
      piVar6 = (int *)(param_1 + 8 + iVar5 * 0x18);
      iVar3 = 0x80;
      piVar4 = piVar6;
      do {
        piVar4[-2] = local_50;
        piVar4[-1] = 0;
        *piVar4 = 0;
        piVar4 = piVar4 + 6;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)(local_58 + 0x24 + *(int *)((int)this + 0xc)) = iVar5;
      iStack_54 = 0;
      if (0 < *(int *)((int)this + 0x18)) {
        iStack_40 = 0;
        do {
          if (iStack_54 != local_50) {
            iVar3 = iStack_40 + *(int *)((int)this + 0xc);
            iVar5 = *(int *)((int)this + 0xc) + local_58;
            if (((*(uint *)(iVar5 + 0x1c) ^ *(uint *)(iVar3 + 0x1c)) & 7) == 0) {
              iStack_8 = 0;
              FUN_100afc60(iVar5,iVar3,1,DAT_101323a0,auStack_38);
              iVar5 = iStack_8;
              if (iStack_34 == 0) {
                if (fStack_28 == (float)_DAT_100dd628) {
LAB_1006cdd5:
                  if (param_2 != (int *)0x0) {
                    FUN_100c8f17(param_2,&DAT_10112b3c);
                    if ((*piVar6 != 0) &&
                       (iVar5 = (*DAT_10121f20)(*(undefined4 *)(*piVar6 + 0x208)), iVar5 != 0)) {
                      FUN_100c8f17(param_2,(byte *)s_Entity_on_connection___s__name____10112b0c);
                    }
                    FUN_100c8f17(param_2,&DAT_1010541c);
                  }
                  piVar6[-1] = iStack_54;
                  local_44 = local_44 + 1;
                  local_48 = local_48 + 1;
                  piVar6 = piVar6 + 6;
                  if (local_44 == 0x80) {
                    (*DAT_10121efc)(2,s___LinkVisibleNodes__Node__d_has_N_10112a10,local_50);
                    FUN_100c8f17(param_2,(byte *)s____NODE__d_HAS_NodeLinks_>_MAX_N_101129d8);
                    *param_3 = local_50;
                    return 0;
                  }
                  if (*(int *)((int)this + 0x18) * 0x80 < local_48) {
                    (*DAT_10121efc)(2,s___LinkVisibleNodes__TotalLinks_>_10112994);
                    *param_3 = local_50;
                    return 0;
                  }
                  if (local_44 == 0) {
                    FUN_100c8f17(param_2,(byte *)s___NO_INITIAL_LINKS___10112af4);
                  }
                  *(int *)(local_58 + 0x20 + DAT_1012278c) = local_44;
                  if (local_3c < local_44) {
                    local_3c = local_44;
                  }
                }
                else {
                  FUN_100afc60(iStack_40 + *(int *)((int)this + 0xc),
                               local_58 + *(int *)((int)this + 0xc),1,DAT_101323a0,auStack_38);
                  if (iStack_8 == iVar5) {
                    if (iStack_8 == 0) {
                      piVar4 = (int *)0x0;
                    }
                    else {
                      piVar4 = (int *)(iStack_8 + 0x80);
                    }
                    pcVar7 = s_worldspawn_10101338;
                    pbVar2 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar4);
                    do {
                      bVar1 = *pbVar2;
                      bVar8 = bVar1 < (byte)*pcVar7;
                      if (bVar1 != *pcVar7) {
LAB_1006cd61:
                        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                        goto LAB_1006cd66;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar2[1];
                      bVar8 = bVar1 < (byte)pcVar7[1];
                      if (bVar1 != pcVar7[1]) goto LAB_1006cd61;
                      pbVar2 = pbVar2 + 2;
                      pcVar7 = pcVar7 + 2;
                    } while (bVar1 != 0);
                    iVar5 = 0;
LAB_1006cd66:
                    if (iVar5 != 0) {
                      if (iStack_8 == 0) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = iStack_8 + 0x80;
                      }
                      *piVar6 = iVar5;
                      if (iStack_8 == 0) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = iStack_8 + 0x80;
                      }
                      piVar6[1] = *(int *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(iVar5 + 0xb8));
                      if (iStack_8 == 0) {
                        iVar5 = 0;
                      }
                      else {
                        iVar5 = iStack_8 + 0x80;
                      }
                      if ((*(uint *)(iVar5 + 0x1a4) & 0x10000) == 0) {
                        if (iStack_8 == 0) {
                          iVar5 = 0;
                        }
                        else {
                          iVar5 = iStack_8 + 0x80;
                        }
                        *(int *)(iVar5 + 0x1a4) = *(int *)(iVar5 + 0x1a4) + 0x10000;
                      }
                      goto LAB_1006cdd5;
                    }
                  }
                }
              }
            }
          }
          iStack_54 = iStack_54 + 1;
          iStack_40 = iStack_40 + 0x58;
          iVar5 = local_48;
        } while (iStack_54 < *(int *)((int)this + 0x18));
      }
      if (param_2 != (int *)0x0) {
        FUN_100c8f17(param_2,(byte *)s__________________________________10112b78);
      }
      local_50 = local_50 + 1;
      local_58 = local_58 + 0x58;
    } while (local_50 < *(int *)((int)this + 0x18));
  }
  FUN_100c8f17(param_2,(byte *)s__4d_Total_Initial_Connections_____10112aa4);
  FUN_100c8f17(param_2,(byte *)s__________________________________10112a54);
  return iVar5;
}

