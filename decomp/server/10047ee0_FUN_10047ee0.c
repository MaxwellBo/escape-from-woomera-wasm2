
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10047ee0(int param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  undefined3 extraout_var;
  float10 fVar9;
  float10 fVar10;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  float fStack_28;
  
  if ((*(float *)(param_1 + 0x310) < *DAT_10122044) &&
     ((param_3 <= _DAT_100ddaf4 || ((*(uint *)(param_1 + 0x2a0) & 0x80000000) != 0)))) {
    bVar8 = FUN_10019450((uint *)(param_1 + 0x160));
    if (CONCAT31(extraout_var,bVar8) != 0) {
      fVar9 = (float10)(*DAT_10121f74)(0xc2800000,0x42800000);
      fVar10 = (float10)(*DAT_10121f74)(0xc2800000,0x42800000);
      iVar4 = *(int *)(param_1 + 4);
      fVar1 = (float)(fVar10 + (float10)*(float *)(iVar4 + 8));
      fVar5 = (float)fVar9 + *(float *)(iVar4 + 0xc);
      fVar6 = *(float *)(iVar4 + 0x10) + _DAT_100e81f0;
      fStack_48 = fVar6 + _DAT_100e8200;
      fStack_3c = *(float *)(iVar4 + 0x10) + _DAT_100e8200;
      uStack_40 = *(undefined4 *)(iVar4 + 0xc);
      uStack_44 = *(undefined4 *)(iVar4 + 8);
      fStack_50 = fVar1;
      fStack_4c = fVar5;
      FUN_100afc90(&uStack_44,&fStack_50,0,1,*(undefined4 *)(iVar4 + 0x208),auStack_38);
      if ((iStack_34 == 0) && ((float)_DAT_100dd628 <= fStack_28)) {
        iVar4 = *(int *)(param_1 + 4);
        fVar7 = SQRT((float)_DAT_100e81f8 / (*(float *)(DAT_10121dac + 0xc) * (float)_DAT_100dd648))
                * *(float *)(DAT_10121dac + 0xc) * _DAT_100e81f4;
        fVar2 = *(float *)(iVar4 + 0xc);
        fVar3 = *(float *)(iVar4 + 0x10);
        *(float *)(param_1 + 0x314) = (fVar1 - *(float *)(iVar4 + 8)) * fVar7;
        *(float *)(param_1 + 0x318) = (fVar5 - fVar2) * fVar7;
        *(float *)(param_1 + 0x31c) = (fVar6 - fVar3) * fVar7;
        return 1;
      }
    }
  }
  return 0;
}

