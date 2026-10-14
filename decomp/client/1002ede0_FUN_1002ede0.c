
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1002ede0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint unaff_retaddr;
  undefined4 auStack_154 [4];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_fc;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  iVar1 = (*DAT_100b2110)();
  param_1[0xc] = iVar1;
  (*DAT_100b2120)(param_1 + 8,param_1 + 2,param_1 + 4);
  (*DAT_100b2128)(param_1 + 0x1023,param_1 + 0x101a,param_1 + 0x101d,param_1 + 0x1020);
  (*DAT_100b2134)(param_1 + 0x1018,param_1 + 0x1019);
  iVar1 = param_1[0xc];
  if (*(int *)(iVar1 + 0x304) == 0x11) {
    if (0 < *(int *)(iVar1 + 0x2fc)) {
      iVar1 = *(int *)(iVar1 + 0x2fc);
      iVar2 = (*DAT_100a5080)();
      if (iVar1 <= iVar2) {
        puVar3 = (undefined4 *)(*DAT_100b2118)(iVar1 + -1);
        iVar1 = param_1[0xc];
        puVar8 = auStack_154;
        for (iVar2 = 0x55; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        auStack_154[1] = *(undefined4 *)(iVar1 + 0x2fc);
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_fc = 0;
        uStack_138 = *(undefined4 *)(iVar1 + 0x2cc);
        uStack_134 = *(undefined4 *)(iVar1 + 0x2d0);
        uStack_130 = *(undefined4 *)(iVar1 + 0x2d4);
        uStack_144 = *(undefined4 *)(iVar1 + 0x2c0);
        uStack_140 = *(undefined4 *)(iVar1 + 0x2c4);
        uStack_13c = *(undefined4 *)(iVar1 + 0x2c8);
        iVar1 = param_1[6];
        param_1[6] = 0;
        uVar4 = (**(code **)(*param_1 + 0xc))(param_2,auStack_154);
        param_1[6] = iVar1;
        return uVar4;
      }
    }
    return 0;
  }
  iVar1 = *(int *)(iVar1 + 0xb94);
  param_1[0xd] = iVar1;
  iVar1 = (*DAT_100b2108)(iVar1);
  param_1[0x11] = iVar1;
  (*DAT_100b2184)(iVar1);
  (*DAT_100b2188)(param_1[0xd]);
  (**(code **)(*param_1 + 0x14))(0);
  uVar7 = unaff_retaddr & 1;
  if (uVar7 != 0) {
    iVar1 = (*DAT_100b214c)();
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)param_1[0x1027] = *(int *)param_1[0x1027] + 1;
    *(int *)param_1[0x1026] = *(int *)param_1[0x1026] + 1;
    if (*(int *)(param_1[0x11] + 0xcc) == 0) {
      return 1;
    }
  }
  if (*(int *)(param_1[0xc] + 0x308) == 0xc) {
    (**(code **)(*param_1 + 0x24))(param_1[0xd]);
  }
  else {
    (**(code **)(*param_1 + 0x18))();
  }
  (**(code **)(*param_1 + 0x20))();
  if ((unaff_retaddr & 2) != 0) {
    (**(code **)(*param_1 + 0x1c))();
    (*DAT_100b2178)();
    if (0 < *(int *)param_1[0xc]) {
      iVar1 = (*DAT_100a50c4)(*(int *)param_1[0xc]);
      puVar3 = (undefined4 *)(param_1[0xc] + 0xb60);
      puVar8 = (undefined4 *)(iVar1 + 0xb60);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar8 = puVar8 + 1;
      }
    }
  }
  if (uVar7 != 0) {
    (*DAT_100b2150)(param_1[0xc],&stack0xfffffe80);
    (*DAT_100b2154)(&stack0xfffffe80);
    (*DAT_100b2158)(&stack0xfffffe80);
    uVar6 = *(uint *)(param_1[0xc] + 0x2e4) & 0xff;
    param_1[0x14] = uVar6;
    uVar5 = *(int *)(param_1[0xc] + 0x2e4) >> 8 & 0xff;
    param_1[0x15] = uVar5;
    (*DAT_100b2170)(uVar6,uVar5);
    (**(code **)(*param_1 + 0x48))();
  }
  if (*(int *)(param_1[0xc] + 0x304) == 0x15) {
    *(undefined4 *)(param_1[0xc] + 0x304) = 0;
    *(float *)(param_1[0x1028] + 0x28) = *(float *)(param_1[0x1028] + 0x28) * _DAT_100601b0;
    (**(code **)(DAT_100a5138 + 0x28))(1);
    if (uVar7 != 0) {
      iVar1 = (*DAT_100b214c)();
      if (iVar1 == 0) {
        return 0;
      }
      *(int *)param_1[0x1027] = *(int *)param_1[0x1027] + 1;
      *(int *)param_1[0x1026] = *(int *)param_1[0x1026] + 1;
      if (*(int *)(param_1[0x11] + 0xcc) == 0) {
        return 1;
      }
    }
    if (*(int *)(param_1[0xc] + 0x308) == 0xc) {
      (**(code **)(*param_1 + 0x24))(param_1[0xd]);
    }
    else {
      (**(code **)(*param_1 + 0x18))();
    }
    (**(code **)(*param_1 + 0x20))();
    if ((unaff_retaddr & 2) != 0) {
      (**(code **)(*param_1 + 0x1c))();
      (*DAT_100b2178)();
      if (0 < *(int *)param_1[0xc]) {
        iVar1 = (*DAT_100a50c4)(*(int *)param_1[0xc]);
        puVar3 = (undefined4 *)(param_1[0xc] + 0xb60);
        puVar8 = (undefined4 *)(iVar1 + 0xb60);
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    if (uVar7 != 0) {
      (*DAT_100b2150)(param_1[0xc],&stack0xfffffe7c);
      (*DAT_100b2154)(&stack0xfffffe7c);
      (*DAT_100b2158)(&stack0xfffffe7c);
      uVar5 = *(uint *)(param_1[0xc] + 0x2e4) & 0xff;
      param_1[0x14] = uVar5;
      uVar7 = *(int *)(param_1[0xc] + 0x2e4) >> 8 & 0xff;
      param_1[0x15] = uVar7;
      (*DAT_100b2170)(uVar5,uVar7);
      (**(code **)(*param_1 + 0x48))();
    }
    (**(code **)(DAT_100a5138 + 0x28))(0);
    *(undefined4 *)(param_1[0xc] + 0x304) = 0x15;
  }
  return 1;
}

