
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10081f40(void *this,byte *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  void *this_00;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  int iStack_34;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  float fStack_c;
  
  iVar4 = (**(code **)(*DAT_10121db8 + 0x18))();
  if ((iVar4 == 0) || (_DAT_100dd5f8 < _DAT_101096a4)) {
    return;
  }
  iVar4 = -1;
  pbVar6 = param_1;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  pbVar6 = param_1;
  if (iVar4 == -2) {
    pbVar6 = (byte *)0x0;
  }
  param_1 = (byte *)((int)this + 0x510);
  iStack_34 = 0;
  do {
    for (piVar2 = *(int **)param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x38]) {
      if (pbVar6 == (byte *)0x0) {
        if (piVar2 == *(int **)((int)this + 0x528)) goto LAB_10081fff;
      }
      else {
        pbVar5 = (byte *)(*(int *)piVar2[1] + *(int *)(DAT_10122044 + 0x98));
        pbVar7 = pbVar6;
        do {
          bVar1 = *pbVar7;
          bVar8 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_10081fe0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_10081fe5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar8 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_10081fe0;
          pbVar7 = pbVar7 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_10081fe5:
        if (iVar4 == 0) {
LAB_10081fff:
          if (piVar2 != (int *)0x0) {
            (**(code **)(*DAT_10121db8 + 0x14))(this,piVar2);
            FUN_100af200(*(int *)((int)this + 4) + 0x50);
            *(uint *)(*(int *)((int)this + 4) + 0x168) =
                 *(uint *)(*(int *)((int)this + 4) + 0x168) & ~(1 << ((byte)piVar2[0x39] & 0x1f));
            iVar4 = *(int *)((int)this + 4);
            fStack_24 = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd63c + *(float *)(iVar4 + 0x10);
            fStack_28 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd63c + *(float *)(iVar4 + 0xc);
            fStack_2c = *(float *)(DAT_10122044 + 0x28) * _DAT_100dd63c + *(float *)(iVar4 + 8);
            this_00 = (void *)FUN_1001a1f0(0x10114db8,&fStack_2c,(undefined4 *)(iVar4 + 0x50),
                                           *(undefined4 *)(iVar4 + 0x208));
            *(undefined4 *)(*(int *)((int)this_00 + 4) + 0x50) = 0;
            *(undefined4 *)(*(int *)((int)this_00 + 4) + 0x58) = 0;
            FUN_100b4af0(this_00,piVar2);
            fStack_10 = *(float *)(DAT_10122044 + 0x2c) * _DAT_100dd61c;
            fStack_c = *(float *)(DAT_10122044 + 0x30) * _DAT_100dd61c;
            fStack_1c = *(float *)(DAT_10122044 + 0x2c) * _DAT_100ddae4;
            fStack_18 = *(float *)(DAT_10122044 + 0x30) * _DAT_100ddae4;
            iVar4 = *(int *)((int)this_00 + 4);
            *(float *)(iVar4 + 0x20) =
                 *(float *)(DAT_10122044 + 0x28) * _DAT_100ddae4 +
                 *(float *)(DAT_10122044 + 0x28) * _DAT_100dd61c;
            *(float *)(iVar4 + 0x24) = fStack_1c + fStack_10;
            *(void **)(iVar4 + 0x28) = (void *)(fStack_18 + fStack_c);
            iVar4 = FUN_10080dd0((void *)(fStack_18 + fStack_c),
                                 (byte *)(&DAT_10131e20)[piVar2[0x39] * 0xb]);
            if (iVar4 == -1) {
              return;
            }
            iVar3 = piVar2[0x39];
            if ((*(byte *)(&DAT_10131e3c + iVar3 * 0xb) & 0x10) == 0) {
              FUN_100b4bd0(this_00,(&DAT_10131e20)[iVar3 * 0xb] - *(int *)(DAT_10122044 + 0x98),
                           *(int *)((int)this + iVar4 * 4 + 0x534) / 2);
              *(int *)((int)this + iVar4 * 4 + 0x534) = *(int *)((int)this + iVar4 * 4 + 0x534) / 2;
              return;
            }
            FUN_100b4bd0(this_00,(&DAT_10131e20)[iVar3 * 0xb] - *(int *)(DAT_10122044 + 0x98),
                         *(int *)((int)this + iVar4 * 4 + 0x534));
            *(undefined4 *)((int)this + iVar4 * 4 + 0x534) = 0;
            return;
          }
          break;
        }
      }
    }
    iStack_34 = iStack_34 + 1;
    param_1 = param_1 + 4;
    if (5 < iStack_34) {
      return;
    }
  } while( true );
}

