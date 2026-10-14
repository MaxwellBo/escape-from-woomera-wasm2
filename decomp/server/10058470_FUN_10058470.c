
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10058470(int param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  void *this;
  char *pcVar9;
  bool bVar10;
  
  this = (void *)0x0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x1c8) != 0) {
    while (((this = (void *)FUN_100af060((int)this,
                                         (byte *)((int)DAT_10122044[0x26] +
                                                 *(int *)(*(int *)(param_1 + 4) + 0x1c8)),param_2),
            this != (void *)0x0 && (iVar4 = *(int *)(*(int *)((int)this + 4) + 0x208), iVar4 != 0))
           && (iVar4 = (*DAT_10121f20)(iVar4), iVar4 != 0))) {
      iVar4 = *(int *)(param_1 + 0xb8);
      if (iVar4 == 0) {
        iVar4 = FUN_100570c0(*(undefined4 *)(param_1 + 0x60));
      }
      pcVar9 = s_light_10110268;
      pbVar7 = (byte *)(**(int **)((int)this + 4) + (int)DAT_10122044[0x26]);
      pbVar5 = pbVar7;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar9;
        if (bVar1 != *pcVar9) {
LAB_10058541:
          iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_10058546;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar9[1];
        if (bVar1 != pcVar9[1]) goto LAB_10058541;
        pbVar5 = pbVar5 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar1 != 0);
      iVar6 = 0;
LAB_10058546:
      if (iVar6 == 0) {
LAB_100585d8:
        if (*(int *)(param_1 + 0xbc) == 0) {
          FUN_100577a0(this,iVar4);
          if (*(int *)(param_1 + 0xc0) != -1) {
            iVar4 = (*DAT_10121e5c)();
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 0x80;
            }
            iVar6 = *(int *)(iVar4 + 0x208);
            if ((iVar6 == 0) || (piVar8 = *(int **)(iVar6 + 0x7c), piVar8 == (int *)0x0)) {
              piVar8 = (int *)(*DAT_10121f04)(iVar6,0xd0);
              if (piVar8 == (int *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                *piVar8 = (int)&PTR_FUN_100ea948;
              }
              piVar8[1] = iVar4;
            }
            piVar8[0x2e] = (int)this;
            piVar8[0x1d] = (int)CLightFader::WaitThink;
            (**(code **)(*piVar8 + 8))((float)*(int *)(param_1 + 0xc0));
          }
        }
        else {
          iVar6 = (*DAT_10121e5c)();
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = iVar6 + 0x80;
          }
          iVar3 = *(int *)(iVar6 + 0x208);
          if ((iVar3 == 0) || (piVar8 = *(int **)(iVar3 + 0x7c), piVar8 == (int *)0x0)) {
            piVar8 = (int *)(*DAT_10121f04)(iVar3,0xd0);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = (int)&PTR_FUN_100ea948;
            }
            piVar8[1] = iVar6;
          }
          piVar8[0x2e] = (int)this;
          *(undefined1 *)(piVar8 + 0x2f) =
               *(undefined1 *)((int)DAT_10122044[0x26] + *(int *)((int)this + 0xd8));
          uVar2 = *(undefined1 *)((int)DAT_10122044[0x26] + iVar4);
          piVar8[0x31] = iVar4;
          *(undefined1 *)((int)piVar8 + 0xbd) = uVar2;
          piVar8[0x30] = (int)((float)*(int *)(param_1 + 0xbc) + *DAT_10122044);
          piVar8[0x32] = (int)(_DAT_100dd618 / (float)*(int *)(param_1 + 0xbc));
          iVar4 = *(int *)(param_1 + 0xc0);
          piVar8[0x1d] = (int)CLightFader::FadeThink;
          piVar8[0x33] = iVar4;
          (**(code **)(*piVar8 + 8))(0x3dcccccd);
        }
      }
      else {
        pcVar9 = s_light_spot_1011025c;
        pbVar5 = pbVar7;
        do {
          bVar1 = *pbVar5;
          bVar10 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_10058579:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_1005857e;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar10 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_10058579;
          pbVar5 = pbVar5 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_1005857e:
        if (iVar6 == 0) goto LAB_100585d8;
        pcVar9 = s_light_environment_10110248;
        do {
          bVar1 = *pbVar7;
          bVar10 = bVar1 < (byte)*pcVar9;
          if (bVar1 != *pcVar9) {
LAB_100585ad:
            iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
            goto LAB_100585b2;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar10 = bVar1 < (byte)pcVar9[1];
          if (bVar1 != pcVar9[1]) goto LAB_100585ad;
          pbVar7 = pbVar7 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_100585b2:
        if (iVar6 == 0) goto LAB_100585d8;
        if (0x1f < *(int *)((int)this + 0x60)) {
          (*DAT_10121eb4)(*(int *)((int)this + 0x60),(int)DAT_10122044[0x26] + iVar4);
        }
      }
    }
  }
  return;
}

