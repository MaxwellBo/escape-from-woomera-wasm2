
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10027f30(CBaseDoor *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  CBaseDoor *this;
  int iVar6;
  void *this_00;
  char *pcVar7;
  int *piVar8;
  bool bVar9;
  
  iVar3 = *(int *)(param_1 + 4);
  if (*(float *)(iVar3 + 0x1e0) != _DAT_100dd5f8) {
    (**(code **)(*param_2 + 0x60))(iVar3,iVar3,*(float *)(iVar3 + 0x1e0),1);
  }
  if (_DAT_100dd5f8 <= *(float *)(param_1 + 0xe8)) {
    iVar3 = *(int *)(param_1 + 4);
    if ((*(uint *)(iVar3 + 0x1a0) & 0x80000000) == 0) {
      this_00 = (void *)(*(int *)(iVar3 + 0x1ec) + *(int *)(DAT_10122044 + 0x98));
      FUN_10094b20(this_00,*(undefined4 *)(iVar3 + 0x208),6,this_00,0,0,0x20,100);
    }
    if (*(int *)(param_1 + 0xdc) == 3) {
      CBaseDoor::DoorGoUp(param_1);
    }
    else {
      CBaseDoor::DoorGoDown(param_1);
    }
  }
  if ((*(int *)(param_1 + 0x18c) == 0) && (*(int *)(*(int *)(param_1 + 4) + 0x1cc) != 0)) {
    for (iVar3 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                        *(int *)(*(int *)(param_1 + 4) + 0x1cc))); iVar3 != 0;
        iVar3 = FUN_100af030(iVar3,(byte *)(*(int *)(DAT_10122044 + 0x98) +
                                           *(int *)(*(int *)(param_1 + 4) + 0x1cc)))) {
      piVar8 = *(int **)(iVar3 + 4);
      if (piVar8 == *(int **)(param_1 + 4)) {
LAB_1002806e:
        pcVar7 = s_func_door_rotating_101076a8;
        pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar8);
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_100280a6:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_100280ab;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_100280a6;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_100280ab:
        if (iVar5 == 0) goto LAB_100280b3;
      }
      else {
        pcVar7 = s_func_door_101076bc;
        pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + *piVar8);
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_10028065:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_1002806a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_10028065;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_1002806a:
        if (iVar5 != 0) goto LAB_1002806e;
LAB_100280b3:
        if ((piVar8 == (int *)0x0) && (iVar5 = (*DAT_10121e5c)(), iVar5 != 0)) {
          piVar8 = (int *)(iVar5 + 0x80);
        }
        iVar5 = piVar8[0x82];
        if ((iVar5 == 0) || (this = *(CBaseDoor **)(iVar5 + 0x7c), this == (CBaseDoor *)0x0)) {
          this = (CBaseDoor *)(*DAT_10121f04)(iVar5,0x194);
          if (this == (CBaseDoor *)0x0) {
            this = (CBaseDoor *)0x0;
          }
          else {
            FUN_10002f30((undefined4 *)this);
            *(undefined ***)this = &PTR_FUN_100e1b38;
          }
          *(int **)(this + 4) = piVar8;
        }
        if (_DAT_100dd5f8 <= *(float *)(this + 0xe8)) {
          iVar5 = *(int *)(this + 4);
          iVar2 = *(int *)(param_1 + 4);
          if ((((*(float *)(iVar5 + 0x20) == *(float *)(iVar2 + 0x20)) &&
               (*(float *)(iVar5 + 0x24) == *(float *)(iVar2 + 0x24))) &&
              (*(float *)(iVar5 + 0x28) == *(float *)(iVar2 + 0x28))) &&
             (((*(float *)(iVar5 + 0x5c) == *(float *)(iVar2 + 0x20) &&
               (*(float *)(iVar5 + 0x60) == *(float *)(iVar2 + 0x24))) &&
              (*(float *)(iVar5 + 100) == *(float *)(iVar2 + 0x28))))) {
            pcVar7 = s_func_door_101076bc;
            pbVar4 = (byte *)(*(int *)(DAT_10122044 + 0x98) + **(int **)(iVar3 + 4));
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_100281c5:
                iVar6 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_100281ca;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_100281c5;
              pbVar4 = pbVar4 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_100281ca:
            if (iVar6 == 0) {
              *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 8);
              *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
              *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
              FUN_100638f0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
            }
            else {
              *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
              *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
              *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
              FUN_10063ac0((int)this,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
            }
          }
          if (*(int *)(this + 0xdc) == 3) {
            CBaseDoor::DoorGoUp(this);
          }
          else {
            CBaseDoor::DoorGoDown(this);
          }
        }
      }
    }
  }
  return;
}

