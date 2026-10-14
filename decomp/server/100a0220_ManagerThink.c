
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMultiManager::ManagerThink(void) */

void __thiscall CMultiManager::ManagerThink(CMultiManager *this)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  CMultiManager *pCVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CMultiManager *pCVar9;
  float10 fVar10;
  undefined4 uVar11;
  
                    /* 0xa0220  143  ?ManagerThink@CMultiManager@@QAEXXZ */
  if (*(int *)(this + 0x154) != 0) {
    uVar2 = *(uint *)(*(int *)(this + 4) + 0x1a0);
    if ((uVar2 & 4) == 0) {
      if (((uVar2 & 0x80000000) == 0) && ((uVar2 & 8) == 0)) {
        if ((uVar2 & 0x20) != 0) {
          (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___last_b_101192c8);
        }
        *(undefined4 *)(this + 0xb8) = 0;
        *(undefined4 *)(this + 0x74) = 0;
        *(code **)(this + 0x7c) = ManagerUse;
      }
      else {
        if ((uVar2 & 0x20) != 0) {
          (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___kille_101192a4);
        }
        *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
        (**(code **)(*(int *)this + 8))();
        *(undefined4 *)(this + 0x7c) = 0;
      }
    }
    else {
      if (*(float *)(this + 0x14c) == _DAT_100dd5f8) {
        if (*(float *)(this + 0x148) == _DAT_100dd5f8) {
          *(undefined4 *)(this + 0xc4) = 0;
        }
        else {
          *(undefined4 *)(this + 0xc4) = *(undefined4 *)(this + 0x148);
        }
      }
      else {
        fVar10 = (float10)(*DAT_10121f74)(*(undefined4 *)(this + 0x148));
        *(float *)(this + 0xc4) = (float)fVar10;
      }
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___resta_101192f0);
      }
      (**(code **)(*(int *)this + 8))();
      *(undefined4 *)(this + 0xb8) = 1;
      *(undefined4 *)(this + 0xc4) = *(undefined4 *)(this + 0x54);
    }
    iVar8 = *(int *)(this + 0x154);
    if (iVar8 == 1) {
      iVar8 = *(int *)(this + 0xbc);
      if (0 < iVar8) {
        pCVar9 = this + 0x108;
        pCVar4 = pCVar9;
        fVar3 = _DAT_100dd5f8;
        do {
          fVar3 = fVar3 + *(float *)pCVar4;
          pCVar4 = pCVar4 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        if (fVar3 != _DAT_100dd5f8) {
          fVar10 = (float10)(*DAT_10121f74)(0);
          iVar8 = 0;
          fVar3 = _DAT_100dd5f8;
          if (*(int *)(this + 0xbc) < 1) {
            return;
          }
          do {
            fVar1 = *(float *)pCVar9;
            if ((float)fVar10 <= fVar3 + fVar1) {
              if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
                (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___firin_10119224,
                                *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26]);
              }
              iVar6 = *(int *)(this + 0x168);
              uVar11 = 0;
              pCVar9 = this;
              piVar5 = (int *)FUN_10019410((uint *)(this + 0x160));
              FUN_10098c10((uint *)(*(int *)(this + iVar8 * 4 + 200) + (int)DAT_10122044[0x26]),
                           piVar5,pCVar9,iVar6,uVar11);
              return;
            }
            iVar8 = iVar8 + 1;
            pCVar9 = pCVar9 + 4;
            fVar3 = fVar3 + fVar1;
          } while (iVar8 < *(int *)(this + 0xbc));
          return;
        }
      }
      fVar3 = DAT_10122044[0x26];
      iVar8 = (*DAT_10121f70)(0);
      iVar8 = *(int *)(this + iVar8 * 4 + 200);
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___firin_10119268,
                        *(int *)(*(int *)(this + 4) + 0x1cc) + (int)fVar3);
      }
      iVar6 = *(int *)(this + 0x168);
      uVar11 = 0;
      piVar5 = (int *)FUN_10019410((uint *)(this + 0x160));
      FUN_10098c10((uint *)(iVar8 + (int)fVar3),piVar5,this,iVar6,uVar11);
      return;
    }
    if (iVar8 == 2) {
      iVar8 = 0;
      if (*(int *)(this + 0xbc) < 1) {
        return;
      }
      pCVar9 = this + 200;
      do {
        iVar6 = (*DAT_10121f70)(0);
        if ((float)iVar6 <= *(float *)(pCVar9 + 0x40)) {
          if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
            (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___firin_101191ec,
                            *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26],
                            (int)DAT_10122044[0x26] + *(int *)pCVar9,
                            (double)*(float *)(pCVar9 + 0x40));
          }
          iVar6 = *(int *)(this + 0x168);
          uVar11 = 0;
          pCVar4 = this;
          piVar5 = (int *)FUN_10019410((uint *)(this + 0x160));
          FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)pCVar9),piVar5,pCVar4,iVar6,uVar11
                      );
        }
        iVar8 = iVar8 + 1;
        pCVar9 = pCVar9 + 4;
      } while (iVar8 < *(int *)(this + 0xbc));
      return;
    }
    if (iVar8 != 3) {
      return;
    }
    iVar8 = 0;
    if (*(int *)(this + 0xbc) < 1) {
      return;
    }
    pCVar9 = this + 200;
    do {
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___firin_101191b4,
                        *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26]);
      }
      iVar6 = *(int *)(this + 0x168);
      uVar11 = 0;
      pCVar4 = this;
      piVar5 = (int *)FUN_10019410((uint *)(this + 0x160));
      FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)pCVar9),piVar5,pCVar4,iVar6,uVar11);
      iVar8 = iVar8 + 1;
      pCVar9 = pCVar9 + 4;
    } while (iVar8 < *(int *)(this + 0xbc));
    return;
  }
  iVar8 = *(int *)(this + 0xc0);
  fVar3 = *DAT_10122044;
  fVar1 = *(float *)(this + 0xc4);
  iVar6 = *(int *)(this + 0xbc);
  if (iVar8 < iVar6) {
    pCVar9 = this + iVar8 * 4 + 0x108;
    iVar7 = iVar8;
    do {
      if (fVar3 - fVar1 < *(float *)pCVar9) break;
      iVar7 = iVar7 + 1;
      pCVar9 = pCVar9 + 4;
    } while (iVar7 < iVar6);
    if (iVar7 < iVar6) {
      *(int *)(this + 0xc0) = iVar7;
      *(undefined4 *)(this + 0xb8) = 2;
      (**(code **)(*(int *)this + 0x10))();
      goto LAB_100a083f;
    }
  }
  iVar6 = *(int *)(this + 4);
  if ((*(byte *)(iVar6 + 0x1a0) & 4) == 0) {
    *(undefined4 *)(this + 0xb8) = 0;
    if (((*(uint *)(iVar6 + 0x1a0) & 0x80000000) == 0) && ((*(uint *)(iVar6 + 0x1a0) & 8) == 0)) {
      *(undefined4 *)(this + 0x74) = 0;
      *(code **)(this + 0x7c) = ManagerUse;
      if ((*(byte *)(iVar6 + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___last_b_101192c8);
      }
    }
    else {
      *(code **)(this + 0x74) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))();
      *(undefined4 *)(this + 0x7c) = 0;
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___kille_101192a4);
      }
    }
  }
  else {
    *(undefined4 *)(this + 0xc0) = 0;
    if (*(float *)(this + 0x14c) == _DAT_100dd5f8) {
      if (*(float *)(this + 0x148) == _DAT_100dd5f8) {
        *(undefined4 *)(this + 0xc4) = 0;
        *(undefined4 *)(this + 0xb8) = 2;
      }
      else {
        *(undefined4 *)(this + 0xb8) = 1;
        *(undefined4 *)(this + 0xc4) = *(undefined4 *)(this + 0x148);
      }
    }
    else {
      fVar10 = (float10)(*DAT_10121f74)(*(undefined4 *)(this + 0x148));
      *(float *)(this + 0xc4) = (float)fVar10;
      *(undefined4 *)(this + 0xb8) = 1;
    }
    if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
      (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___resta_101192f0);
    }
    (**(code **)(*(int *)this + 8))();
    *(float *)(this + 0xc4) = *(float *)(this + 0xc4) + *DAT_10122044;
  }
LAB_100a083f:
  if (iVar8 < *(int *)(this + 0xbc)) {
    pCVar9 = this + iVar8 * 4 + 200;
    while (*(float *)(pCVar9 + 0x40) <= fVar3 - fVar1) {
      if ((*(byte *)(*(int *)(this + 4) + 0x1a0) & 0x20) != 0) {
        (*DAT_10121efc)(1,s_DEBUG__multi_manager___s___firin_10119188,
                        *(int *)(*(int *)(this + 4) + 0x1cc) + (int)DAT_10122044[0x26]);
      }
      FUN_100c80d0();
      iVar6 = *(int *)(this + 0x168);
      uVar11 = 0;
      pCVar4 = this;
      piVar5 = (int *)FUN_10019410((uint *)(this + 0x160));
      FUN_10098c10((uint *)((int)DAT_10122044[0x26] + *(int *)pCVar9),piVar5,pCVar4,iVar6,uVar11);
      iVar8 = iVar8 + 1;
      pCVar9 = pCVar9 + 4;
      if (*(int *)(this + 0xbc) <= iVar8) {
        return;
      }
    }
  }
  return;
}

