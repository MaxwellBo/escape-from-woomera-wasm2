
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CFuncTrackChange::Find(void) */

void __thiscall CFuncTrackChange::Find(CFuncTrackChange *this)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
                    /* 0x79020  101  ?Find@CFuncTrackChange@@QAEXXZ */
  iVar4 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x188)));
  if (iVar4 != 0) {
    pcVar7 = s_path_track_101137c0;
    pbVar5 = (byte *)(**(int **)(iVar4 + 4) + *(int *)(DAT_10122044 + 0x98));
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_1007908a:
        iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_1007908f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_1007908a;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_1007908f:
    if (iVar6 == 0) {
      *(int *)(this + 0x17c) = iVar4;
      iVar4 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x18c)));
      if (iVar4 != 0) {
        pcVar7 = s_path_track_101137c0;
        pbVar5 = (byte *)(**(int **)(iVar4 + 4) + *(int *)(DAT_10122044 + 0x98));
        do {
          bVar1 = *pbVar5;
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_10079100:
            iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_10079105;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_10079100;
          pbVar5 = pbVar5 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_10079105:
        if (iVar6 == 0) {
          *(int *)(this + 0x180) = iVar4;
          iVar4 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)(this + 400)));
          if (iVar4 != 0) {
            pcVar7 = s_func_tracktrain_10114240;
            pbVar5 = (byte *)(**(int **)(iVar4 + 4) + *(int *)(DAT_10122044 + 0x98));
            do {
              bVar1 = *pbVar5;
              bVar8 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_10079176:
                iVar6 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_1007917b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar5[1];
              bVar8 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_10079176;
              pbVar5 = pbVar5 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_1007917b:
            if (iVar6 == 0) {
              iVar6 = *(int *)(this + 4);
              *(int *)(this + 0x184) = iVar4;
              fVar2 = (*(float *)(iVar6 + 0xc4) + *(float *)(iVar6 + 0xd0)) * _DAT_100dd614;
              fVar3 = (*(float *)(iVar6 + 0xd4) + *(float *)(iVar6 + 200)) * _DAT_100dd614;
              iVar4 = FUN_10073de0(*(void **)(this + 0x180),fVar2,fVar3);
              *(int *)(this + 0x180) = iVar4;
              iVar4 = FUN_10073de0(*(void **)(this + 0x17c),fVar2,fVar3);
              *(int *)(this + 0x17c) = iVar4;
              (**(code **)(*(int *)this + 0x130))(*(undefined4 *)(this + 0xdc));
              *(undefined4 *)(this + 0x74) = 0;
              return;
            }
          }
          (*DAT_10121efc)(4,s_Can_t_find_train_for_track_chang_10114304,
                          *(int *)(DAT_10122044 + 0x98) + *(int *)(this + 400));
          return;
        }
      }
      (*DAT_10121efc)(4,s_Can_t_find_bottom_track_for_trac_101142d4,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x18c));
      return;
    }
  }
  (*DAT_10121efc)(4,s_Can_t_find_top_track_for_track_c_101142a8,
                  *(int *)(DAT_10122044 + 0x98) + *(int *)(this + 0x188));
  return;
}

