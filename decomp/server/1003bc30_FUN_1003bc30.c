
void __thiscall FUN_1003bc30(void *this,int *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined3 extraout_var;
  void *pvVar10;
  byte *pbVar11;
  uint uVar12;
  char *pcVar13;
  
  if ((*(int *)((int)this + 200) == 0) && (param_3 != 0)) {
    if (((param_1 != (int *)0x0) && (iVar9 = (**(code **)(*param_1 + 0xcc))(), iVar9 != 0)) &&
       (*(int *)((int)this + 0xb8) == 0)) {
      bVar8 = FUN_10019450((uint *)(param_1 + 0x137));
      if (CONCAT31(extraout_var,bVar8) == 0) {
        for (pvVar10 = (void *)FUN_100af030(0,(byte *)(*(int *)(*(int *)((int)this + 4) + 0x1c8) +
                                                      *(int *)(DAT_10122044 + 0x98)));
            pvVar10 != (void *)0x0;
            pvVar10 = (void *)FUN_100af030((int)pvVar10,
                                           (byte *)(*(int *)(*(int *)((int)this + 4) + 0x1c8) +
                                                   *(int *)(DAT_10122044 + 0x98)))) {
          iVar9 = _strncmp((char *)(**(int **)((int)pvVar10 + 4) + *(int *)(DAT_10122044 + 0x98)),
                           s_func_tank_10109554,9);
          if ((iVar9 == 0) && (iVar9 = FUN_10039370(pvVar10,param_1,(int)this), iVar9 != 0)) {
            *(undefined4 *)((int)this + 0xb8) = 1;
          }
        }
        if (*(int *)((int)this + 0xb8) != 0) {
          *(int **)((int)this + 200) = param_1;
          FUN_10019420(param_1 + 0x137,(int)this);
          piVar6 = *(int **)(*(int *)((int)this + 200) + 0x528);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x134))(0);
            *(undefined4 *)(*(int *)(*(int *)((int)this + 200) + 4) + 0xc0) = 0;
            *(undefined4 *)(*(int *)(*(int *)((int)this + 200) + 4) + 0xbc) = 0;
          }
          uVar12 = *(uint *)(*(int *)((int)this + 200) + 0x500);
          if (*(int *)((int)this + 0xcc) == 0) {
            uVar12 = uVar12 | 1;
          }
          else {
            uVar12 = uVar12 | 0x11;
          }
          *(uint *)(*(int *)((int)this + 200) + 0x500) = uVar12;
          if (*(int *)((int)this + 0x10) == 0) {
            iVar9 = *(int *)(*(int *)((int)this + 200) + 4);
            *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(iVar9 + 8);
            *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(iVar9 + 0xc);
            *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(iVar9 + 0x10);
            return;
          }
          iVar9 = *(int *)(*(int *)((int)this + 0x10) + 4);
          iVar7 = *(int *)(*(int *)((int)this + 200) + 4);
          fVar1 = *(float *)(iVar7 + 0xc);
          fVar2 = *(float *)(iVar9 + 0xc);
          fVar3 = *(float *)(iVar7 + 0x10);
          fVar4 = *(float *)(iVar9 + 0x10);
          *(float *)((int)this + 0xbc) = *(float *)(iVar7 + 8) - *(float *)(iVar9 + 8);
          *(float *)((int)this + 0xc0) = fVar1 - fVar2;
          *(float *)((int)this + 0xc4) = fVar3 - fVar4;
          return;
        }
      }
    }
  }
  else if ((*(int *)((int)this + 200) != 0) && (param_3 != 1)) {
    for (pvVar10 = (void *)FUN_100af030(0,(byte *)(*(int *)(*(int *)((int)this + 4) + 0x1c8) +
                                                  *(int *)(DAT_10122044 + 0x98)));
        pvVar10 != (void *)0x0;
        pvVar10 = (void *)FUN_100af030((int)pvVar10,
                                       (byte *)(*(int *)(*(int *)((int)this + 4) + 0x1c8) +
                                               *(int *)(DAT_10122044 + 0x98)))) {
      pcVar13 = s_func_tank_10109554;
      pbVar11 = (byte *)(**(int **)((int)pvVar10 + 4) + *(int *)(DAT_10122044 + 0x98));
      do {
        bVar5 = *pbVar11;
        bVar8 = bVar5 < (byte)*pcVar13;
        if (bVar5 != *pcVar13) {
LAB_1003be95:
          iVar9 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_1003be9a;
        }
        if (bVar5 == 0) break;
        bVar5 = pbVar11[1];
        bVar8 = bVar5 < (byte)pcVar13[1];
        if (bVar5 != pcVar13[1]) goto LAB_1003be95;
        pbVar11 = pbVar11 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar5 != 0);
      iVar9 = 0;
LAB_1003be9a:
      if (iVar9 == 0) {
        FUN_100393e0(pvVar10,(int)this);
      }
    }
    piVar6 = *(int **)(*(int *)((int)this + 200) + 0x528);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 300))();
    }
    *(uint *)(*(int *)((int)this + 200) + 0x500) =
         *(uint *)(*(int *)((int)this + 200) + 0x500) & 0xffffffee;
    FUN_10019420((void *)(*(int *)((int)this + 200) + 0x4dc),0);
    *(undefined4 *)((int)this + 200) = 0;
    *(undefined4 *)((int)this + 0xb8) = 0;
  }
  return;
}

