
undefined4 __thiscall FUN_1006ec50(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  char *pcVar12;
  int iStack_210;
  int *piStack_20c;
  char local_208 [260];
  char acStack_104 [260];
  
  (*DAT_10121f94)(local_208);
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_101130ac;
  do {
    pcVar12 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar12;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = local_208;
  do {
    pcVar11 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  pcVar8 = pcVar12 + -uVar4;
  pcVar12 = pcVar11 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar12 = pcVar12 + 1;
  }
  CreateDirectoryA(local_208,(LPSECURITY_ATTRIBUTES)0x0);
  uVar4 = 0xffffffff;
  pcVar8 = s__graphs_101130a4;
  do {
    pcVar12 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar12;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = local_208;
  do {
    pcVar11 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  pcVar8 = pcVar12 + -uVar4;
  pcVar12 = pcVar11 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar12 = pcVar12 + 1;
  }
  CreateDirectoryA(local_208,(LPSECURITY_ATTRIBUTES)0x0);
  uVar4 = 0xffffffff;
  pcVar8 = s_maps_graphs__10113234;
  do {
    pcVar12 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar12;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar8 = pcVar12 + -uVar4;
  pcVar12 = acStack_104;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar8 = param_1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar8 = param_1 + 1;
    cVar1 = *param_1;
    param_1 = pcVar8;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar12 = acStack_104;
  do {
    pcVar11 = pcVar12;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar11;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + -uVar4;
  pcVar12 = pcVar11 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar12 = pcVar12 + 1;
  }
  uVar4 = 0xffffffff;
  pcVar8 = &DAT_1011322c;
  do {
    pcVar12 = pcVar8;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar12 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar12;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  iVar5 = -1;
  pcVar8 = acStack_104;
  do {
    pcVar11 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar11 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar11;
  } while (cVar1 != '\0');
  pcVar8 = pcVar12 + -uVar4;
  pcVar12 = pcVar11 + -1;
  for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar12 = pcVar12 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar12 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar12 = pcVar12 + 1;
  }
  piStack_20c = (int *)(*DAT_10121f84)(acStack_104,&iStack_210);
  if (piStack_20c == (int *)0x0) {
    return 0;
  }
  iVar5 = iStack_210 + -4;
  if (-1 < iVar5) {
    if (*piStack_20c == 0x10) {
      iStack_210 = iStack_210 + -0x20d0;
      iVar5 = iStack_210;
      if (-1 < iStack_210) {
        piVar10 = piStack_20c + 0x834;
        piVar9 = this;
        piVar3 = piStack_20c;
        for (iVar5 = 0x833; piVar3 = piVar3 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar9 = *piVar3;
          piVar9 = piVar9 + 1;
        }
        *(undefined4 *)((int)this + 0xc) = 0;
        *(undefined4 *)((int)this + 0x10) = 0;
        *(undefined4 *)((int)this + 0x24) = 0;
        *(undefined4 *)((int)this + 0x14) = 0;
        *(undefined4 *)((int)this + 0x20bc) = 0;
        piVar3 = FUN_100c8dda(0x58,*(int *)((int)this + 0x18));
        *(int **)((int)this + 0xc) = piVar3;
        if (piVar3 == (int *)0x0) {
          (*DAT_10121efc)(2,s___ERROR___Couldn_t_malloc__d_nod_10112864,
                          *(undefined4 *)((int)this + 0x18));
          iVar5 = iStack_210;
        }
        else {
          iStack_210 = iStack_210 + *(int *)((int)this + 0x18) * -0x58;
          iVar5 = iStack_210;
          if (-1 < iStack_210) {
            piVar9 = piVar10;
            for (iVar5 = (*(int *)((int)this + 0x18) * 0xb & 0x1fffffffU) << 1; iVar5 != 0;
                iVar5 = iVar5 + -1) {
              *piVar3 = *piVar9;
              piVar9 = piVar9 + 1;
              piVar3 = piVar3 + 1;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(char *)piVar3 = (char)*piVar9;
              piVar9 = (int *)((int)piVar9 + 1);
              piVar3 = (int *)((int)piVar3 + 1);
            }
            piVar10 = piVar10 + *(int *)((int)this + 0x18) * 0x16;
            piVar3 = FUN_100c8dda(0x18,*(int *)((int)this + 0x1c));
            iVar2 = *(int *)((int)this + 0x1c);
            *(int **)((int)this + 0x10) = piVar3;
            if (piVar3 == (int *)0x0) {
              (*DAT_10121efc)(2,s___ERROR___Couldn_t_malloc__d_lin_101131dc,iVar2);
              iVar5 = iStack_210;
            }
            else {
              iStack_210 = iStack_210 + iVar2 * -0x18;
              iVar5 = iStack_210;
              if (-1 < iStack_210) {
                piVar9 = piVar10;
                for (iVar5 = (iVar2 * 3 & 0x1fffffffU) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar3 = *piVar9;
                  piVar9 = piVar9 + 1;
                  piVar3 = piVar3 + 1;
                }
                for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *(char *)piVar3 = (char)*piVar9;
                  piVar9 = (int *)((int)piVar9 + 1);
                  piVar3 = (int *)((int)piVar3 + 1);
                }
                piVar10 = piVar10 + *(int *)((int)this + 0x1c) * 6;
                piVar3 = FUN_100c8dda(0x10,*(int *)((int)this + 0x18));
                *(int **)((int)this + 0x24) = piVar3;
                if (piVar3 == (int *)0x0) {
                  (*DAT_10121efc)(2,s____ERROR___Couldn_t_malloc__d_en_101131a4,
                                  *(undefined4 *)((int)this + 0x18));
                  iVar5 = iStack_210;
                }
                else {
                  iStack_210 = iStack_210 + *(uint *)((int)this + 0x18) * -0x10;
                  iVar5 = iStack_210;
                  if (-1 < iStack_210) {
                    piVar9 = piVar10;
                    for (iVar5 = (*(uint *)((int)this + 0x18) & 0xfffffff) << 2; iVar5 != 0;
                        iVar5 = iVar5 + -1) {
                      *piVar3 = *piVar9;
                      piVar9 = piVar9 + 1;
                      piVar3 = piVar3 + 1;
                    }
                    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
                      *(char *)piVar3 = (char)*piVar9;
                      piVar9 = (int *)((int)piVar9 + 1);
                      piVar3 = (int *)((int)piVar3 + 1);
                    }
                    iVar2 = *(int *)((int)this + 0x18);
                    *(undefined4 *)((int)this + 8) = 0;
                    piVar3 = FUN_100c8dda(1,*(int *)((int)this + 0x20));
                    *(int **)((int)this + 0x14) = piVar3;
                    if (piVar3 == (int *)0x0) {
                      (*DAT_10121efc)(2,s____ERROR___Counldn_t_malloc__d_r_10113174,
                                      *(undefined4 *)((int)this + 0x20));
                      iVar5 = iStack_210;
                    }
                    else {
                      iVar5 = 0;
                      *(undefined4 *)((int)this + 0x1860) = 0;
                      if (0 < *(int *)((int)this + 0x18)) {
                        iVar7 = 0;
                        do {
                          iVar5 = iVar5 + 1;
                          *(undefined4 *)(iVar7 + 0xc + *(int *)((int)this + 0x24)) = 0;
                          iVar7 = iVar7 + 0x10;
                        } while (iVar5 < *(int *)((int)this + 0x18));
                      }
                      uVar4 = *(uint *)((int)this + 0x20);
                      iStack_210 = iStack_210 - uVar4;
                      iVar5 = iStack_210;
                      if (-1 < iStack_210) {
                        piVar3 = piVar10 + iVar2 * 4;
                        piVar9 = *(int **)((int)this + 0x14);
                        for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                          *piVar9 = *piVar3;
                          piVar3 = piVar3 + 1;
                          piVar9 = piVar9 + 1;
                        }
                        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                          *(char *)piVar9 = (char)*piVar3;
                          piVar3 = (int *)((int)piVar3 + 1);
                          piVar9 = (int *)((int)piVar9 + 1);
                        }
                        iVar7 = *(int *)((int)this + 0x20);
                        *(undefined4 *)((int)this + 8) = 1;
                        piVar3 = FUN_100c8dda(2,*(int *)((int)this + 0x20c0));
                        uVar4 = *(uint *)((int)this + 0x20c0);
                        *(int **)((int)this + 0x20bc) = piVar3;
                        if (piVar3 == (int *)0x0) {
                          (*DAT_10121efc)(2,s____ERROR___Counldn_t_malloc__d_h_10113140,uVar4);
                          iVar5 = iStack_210;
                        }
                        else {
                          iStack_210 = iStack_210 + uVar4 * -2;
                          iVar5 = iStack_210;
                          if (-1 < iStack_210) {
                            piVar10 = (int *)((int)(piVar10 + iVar2 * 4) + iVar7);
                            for (uVar6 = (uVar4 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                              *piVar3 = *piVar10;
                              piVar10 = piVar10 + 1;
                              piVar3 = piVar3 + 1;
                            }
                            for (uVar4 = uVar4 * 2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                              *(char *)piVar3 = (char)*piVar10;
                              piVar10 = (int *)((int)piVar10 + 1);
                              piVar3 = (int *)((int)piVar3 + 1);
                            }
                            *(undefined4 *)this = 1;
                            *(undefined4 *)((int)this + 4) = 0;
                            (*DAT_10121f88)(piStack_20c);
                            if (iStack_210 != 0) {
                              (*DAT_10121efc)(2,s____WARNING____Node_graph_was_lon_101130fc,
                                              iStack_210);
                            }
                            return 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      iStack_210 = iVar5;
      (*DAT_10121efc)(2,s___ERROR___Graph_version_is__d__e_10113200,*piStack_20c,0x10);
      iVar5 = iStack_210;
    }
  }
  iStack_210 = iVar5;
  (*DAT_10121f88)(piStack_20c);
  return 0;
}

