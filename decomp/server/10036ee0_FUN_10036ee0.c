
void __fastcall FUN_10036ee0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *this;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 auStack_18 [6];
  
  uVar4 = *(uint *)(param_1 + 200);
  iVar2 = (*DAT_10121f70)(0,2);
  if (iVar2 == 0) {
    iVar2 = (*DAT_10121f70)(0,0x22);
    iVar2 = iVar2 + 0x5f;
  }
  else {
    iVar2 = 100;
  }
  fVar5 = (float10)(*DAT_10121f74)(0x3f400000,0x3f800000);
  fVar6 = (float)fVar5;
  if (uVar4 == 6) {
    iVar2 = (*DAT_10121f70)(0,1);
    if (iVar2 != 0) {
      uVar4 = 2;
    }
  }
  else if (8 < uVar4) {
    if (fVar6 != 0.0) {
      uVar8 = 0;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
      uVar7 = 0x3f4ccccd;
      iVar3 = (*DAT_10121f70)(0,(int)fVar6 + -1);
      FUN_10094b20(this,uVar1,2,(char *)auStack_18[iVar3],fVar6,uVar7,uVar8,iVar2);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x10036f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&DAT_10037054 + uVar4 * 4))();
  return;
}

