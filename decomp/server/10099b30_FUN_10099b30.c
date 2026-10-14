
void __thiscall FUN_10099b30(void *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  
  iVar9 = FUN_1001a170(param_1,param_4);
  if (iVar9 != 0) {
    iVar9 = *(int *)((int)param_1 + 0x10);
    if (iVar9 != 0) {
      pvVar5 = *(void **)(iVar9 + 0x18);
      if (pvVar5 == param_1) {
        *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)((int)param_1 + 0x1c);
      }
      else {
        for (pvVar8 = *(void **)((int)pvVar5 + 0x1c); (pvVar8 != (void *)0x0 && (pvVar8 != param_1))
            ; pvVar8 = *(void **)((int)pvVar8 + 0x1c)) {
          pvVar5 = pvVar8;
        }
        if (*(void **)((int)pvVar5 + 0x1c) != param_1) {
          (*DAT_10121efc)(4,s_info_movewith_can_t_find_itself_10117934);
          return;
        }
        *(undefined4 *)((int)pvVar5 + 0x1c) = *(undefined4 *)((int)param_1 + 0x1c);
      }
      *(undefined4 *)((int)param_1 + 0x10) = 0;
      *(undefined4 *)((int)param_1 + 0x1c) = 0;
    }
    iVar9 = *(int *)((int)param_1 + 4);
    uVar6 = *(uint *)(iVar9 + 0x1a0);
    if ((uVar6 & 1) == 0) {
      *(uint *)(iVar9 + 0x1a0) = uVar6 | 1;
      *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x1d0);
    }
    else {
      *(uint *)(iVar9 + 0x1a0) = uVar6 & 0xfffffffe;
      *(undefined4 *)((int)param_1 + 0x14) = *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x1c8);
    }
    if (*(int *)((int)param_1 + 0x14) == 0) {
      FUN_100638f0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
      return;
    }
    iVar9 = FUN_100af030(0,(byte *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0x14)));
    *(int *)((int)param_1 + 0x10) = iVar9;
    if (iVar9 == 0) {
      (*DAT_10121efc)(1,s_Missing_movewith_entity__s_101050d4,
                      *(int *)(DAT_10122044 + 0x98) + *(int *)((int)param_1 + 0x14));
      return;
    }
    for (pvVar5 = *(void **)(iVar9 + 0x18); pvVar5 != (void *)0x0;
        pvVar5 = *(void **)((int)pvVar5 + 0x1c)) {
      if (pvVar5 == param_1) {
        return;
      }
    }
    *(undefined4 *)((int)param_1 + 0x1c) = *(undefined4 *)(iVar9 + 0x18);
    *(void **)(iVar9 + 0x18) = param_1;
    iVar9 = *(int *)((int)param_1 + 4);
    iVar7 = *(int *)(*(int *)((int)param_1 + 0x10) + 4);
    fVar1 = *(float *)(iVar9 + 0xc);
    fVar2 = *(float *)(iVar7 + 0xc);
    fVar3 = *(float *)(iVar9 + 0x10);
    fVar4 = *(float *)(iVar7 + 0x10);
    *(float *)((int)param_1 + 0x20) = *(float *)(iVar9 + 8) - *(float *)(iVar7 + 8);
    *(float *)((int)param_1 + 0x24) = fVar1 - fVar2;
    *(float *)((int)param_1 + 0x28) = fVar3 - fVar4;
    FUN_100638f0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
  }
  return;
}

