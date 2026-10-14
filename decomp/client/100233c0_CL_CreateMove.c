
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl CL_CreateMove(float param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
                    /* 0x233c0  473  CL_CreateMove */
  if ((DAT_100a97f4 & 1) == 0) {
    DAT_100a97f4 = DAT_100a97f4 | 1;
    FUN_10049c8a(FUN_100236a0);
  }
  if (param_3 != 0) {
    (*DAT_100a5078)(&local_c);
    FUN_10023220(param_1,&local_c);
    puVar6 = param_2;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    (*DAT_100a507c)(&local_c);
    if ((DAT_100a9920 & 1) != 0) {
      fVar7 = FUN_100231a0(0x100a98b8);
      param_2[5] = (float)(fVar7 * (float10)*(float *)(DAT_100a9934 + 0xc) +
                          (float10)(float)param_2[5]);
      fVar7 = FUN_100231a0(0x100a98a8);
      param_2[5] = (float)((float10)(float)param_2[5] -
                          fVar7 * (float10)*(float *)(DAT_100a9934 + 0xc));
    }
    fVar7 = FUN_100231a0(0x100a9928);
    param_2[5] = (float)(fVar7 * (float10)*(float *)(DAT_100a9934 + 0xc) +
                        (float10)(float)param_2[5]);
    fVar7 = FUN_100231a0(0x100a98d8);
    param_2[5] = (float)((float10)(float)param_2[5] -
                        fVar7 * (float10)*(float *)(DAT_100a9934 + 0xc));
    fVar7 = FUN_100231a0(0x100a9820);
    param_2[6] = (float)(fVar7 * (float10)*(float *)(DAT_100a9974 + 0xc) +
                        (float10)(float)param_2[6]);
    fVar7 = FUN_100231a0(0x100a9848);
    param_2[6] = (float)((float10)(float)param_2[6] -
                        fVar7 * (float10)*(float *)(DAT_100a9974 + 0xc));
    if ((DAT_100a9988 & 1) == 0) {
      fVar7 = FUN_100231a0(0x100a9898);
      param_2[4] = (float)(fVar7 * (float10)*(float *)(DAT_100a9840 + 0xc) +
                          (float10)(float)param_2[4]);
      fVar7 = FUN_100231a0(0x100a9948);
      param_2[4] = (float)((float10)(float)param_2[4] -
                          fVar7 * (float10)*(float *)(DAT_100a9964 + 0xc));
    }
    if ((DAT_100a9808 & 1) != 0) {
      param_2[4] = *(float *)(DAT_100a980c + 0xc) * (float)param_2[4];
      param_2[5] = *(float *)(DAT_100a980c + 0xc) * (float)param_2[5];
      param_2[6] = *(float *)(DAT_100a980c + 0xc) * (float)param_2[6];
    }
    fVar7 = (float10)(*DAT_100a50a8)();
    if ((fVar7 != (float10)_DAT_1005d2a8) &&
       (fVar1 = SQRT((float)param_2[5] * (float)param_2[5] +
                     (float)param_2[6] * (float)param_2[6] + (float)param_2[4] * (float)param_2[4]),
       (float)fVar7 < fVar1)) {
      fVar1 = (float)fVar7 / fVar1;
      param_2[4] = fVar1 * (float)param_2[4];
      param_2[5] = fVar1 * (float)param_2[5];
      param_2[6] = fVar1 * (float)param_2[6];
    }
    FUN_10024cf0(param_1,(int)param_2);
  }
  *(undefined1 *)(param_2 + 8) = DAT_100a998c;
  _DAT_100a998c = 0;
  *(undefined1 *)((int)param_2 + 0x21) = DAT_100a3970;
  _DAT_100a3970 = 0;
  uVar3 = FUN_100236c0(1);
  *(short *)((int)param_2 + 0x1e) = (short)uVar3;
  puVar4 = FUN_10012170();
  cVar2 = FUN_100133d0((int)puVar4);
  if (cVar2 != '\0') {
    *(ushort *)((int)param_2 + 0x1e) = *(ushort *)((int)param_2 + 0x1e) & 0xfffe;
  }
  if (*(float *)(DAT_100a99e8 + 0xc) != _DAT_10059a18) {
    if ((float)param_2[4] <= _DAT_10059a18) {
      if ((float)param_2[4] < _DAT_10059a18) {
        *(byte *)((int)param_2 + 0x1e) = *(byte *)((int)param_2 + 0x1e) | 0x10;
      }
    }
    else {
      *(byte *)((int)param_2 + 0x1e) = *(byte *)((int)param_2 + 0x1e) | 8;
    }
  }
  (*DAT_100a5078)(&local_c);
  if (DAT_10078530 == 0) {
    param_2[1] = DAT_100a9958;
    param_2[2] = DAT_100a995c;
    param_2[3] = DAT_100a9960;
    return;
  }
  param_2[1] = local_c;
  param_2[2] = uStack_8;
  param_2[3] = uStack_4;
  DAT_100a9958 = local_c;
  DAT_100a995c = uStack_8;
  DAT_100a9960 = uStack_4;
  return;
}

