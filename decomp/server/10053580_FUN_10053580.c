
void __thiscall
FUN_10053580(void *this,undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *this_00;
  int iVar7;
  undefined4 *puVar8;
  
  iVar7 = *(int *)(*(int *)((int)this + 4) + 0x1d0);
  if (iVar7 != 0) {
    piVar6 = (int *)FUN_100aebf0(0,s_netname_1010f984,*(int *)(DAT_10122044 + 0x98) + iVar7);
    puVar5 = param_5;
    for (; piVar6 != (int *)0x0;
        piVar6 = (int *)FUN_100aebf0((int)piVar6,s_netname_1010f984,
                                     *(int *)(DAT_10122044 + 0x98) +
                                     *(int *)(*(int *)((int)this + 4) + 0x1d0))) {
      iVar7 = *(int *)((int)this + 4);
      iVar1 = piVar6[1];
      fVar2 = *(float *)(iVar7 + 8) - *(float *)(iVar1 + 8);
      fVar3 = *(float *)(iVar7 + 0xc) - *(float *)(iVar1 + 0xc);
      fVar4 = *(float *)(iVar7 + 0x10) - *(float *)(iVar1 + 0x10);
      if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4) < param_2) &&
         (this_00 = (void *)(**(code **)(*piVar6 + 0x74))(), this_00 != (void *)0x0)) {
        *(uint *)((int)this_00 + 0x2a0) = *(uint *)((int)this_00 + 0x2a0) | 1;
        puVar8 = puVar5;
        iVar7 = FUN_10019410(&param_3);
        FUN_1005e010(this_00,iVar7,puVar8);
      }
    }
  }
  return;
}

