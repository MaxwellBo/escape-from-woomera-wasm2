
void FUN_10029c10(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float local_94 [4];
  int iStack_84;
  undefined1 auStack_44 [68];
  
  pfVar4 = (float *)&stack0xffffff68;
  local_94[0] = *(float *)(DAT_100acc38 + 0x38);
  local_94[1] = (float)*(undefined4 *)(DAT_100acc38 + 0x3c);
  local_94[2] = (float)*(undefined4 *)(DAT_100acc38 + 0x40);
  if (*(int *)(DAT_100acc38 + 0xe0) != -1) {
    pfVar3 = (float *)(DAT_100acc38 + 0x4f4f4);
    iVar5 = 3;
    do {
      pfVar4 = pfVar4 + 1;
      pfVar1 = pfVar3 + 3;
      fVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar5 = iVar5 + -1;
      *pfVar4 = (*pfVar1 - fVar2) + *pfVar4;
    } while (iVar5 != 0);
  }
  pfVar4 = (float *)(**(code **)(DAT_100acc38 + 0x4f580))
                              (local_94 + 3,local_94,local_94,0,0xffffffff);
  pfVar3 = local_94 + 3;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar3 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
  }
  if (iStack_84 == 0) {
    *(undefined4 *)(DAT_100acc38 + 0xbc) = 0;
    pfVar4 = (float *)(**(code **)(DAT_100acc38 + 0x4f580))
                                (auStack_44,local_94,local_94,0,0xffffffff);
    pfVar3 = local_94 + 3;
    for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar3 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 1;
    }
    if (iStack_84 != 0) {
      *(undefined4 *)(DAT_100acc38 + 0xbc) = 1;
      return;
    }
    *(uint *)(DAT_100acc38 + 0xb8) = *(uint *)(DAT_100acc38 + 0xb8) & 0xffffbfff;
    *(undefined4 *)(DAT_100acc38 + 0x90) = 0;
    *(undefined4 *)(DAT_100acc38 + 0x88) = 0x41e00000;
    *(undefined4 *)(DAT_100acc38 + 0x8c) = 0;
    *(float *)(DAT_100acc38 + 0x38) = local_94[0];
    *(float *)(DAT_100acc38 + 0x3c) = local_94[1];
    *(float *)(DAT_100acc38 + 0x40) = local_94[2];
    FUN_10028df0();
  }
  return;
}

