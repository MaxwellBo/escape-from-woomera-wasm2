
void __thiscall FUN_10069000(void *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined3 extraout_var_00;
  uint *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined1 auStack_18 [12];
  float fStack_c;
  float fStack_8;
  
  iVar6 = 0;
  puVar5 = (uint *)((int)param_1 + 0x388);
  piVar4 = param_3;
  do {
    bVar3 = FUN_10019450(puVar5);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      piVar4 = (int *)FUN_10019460(puVar5);
      piVar4 = (int *)(**(code **)(*piVar4 + 0x74))();
      bVar3 = FUN_10019450((uint *)(piVar4 + 0x58));
      if (CONCAT31(extraout_var_00,bVar3) == 0) break;
    }
    iVar6 = iVar6 + 1;
    puVar5 = puVar5 + 2;
  } while (iVar6 < 0x14);
  if (iVar6 != 0x14) {
    FUN_10008450(param_1,2,auStack_18,&fStack_c);
    FUN_100afe10((int)piVar4,auStack_18);
    (**(code **)(*piVar4 + 0xe4))(param_1,param_1,param_2,param_3);
    fVar7 = (float10)(*DAT_10121f74)(0xc2480000,0x42480000);
    fStack_c = (float)fVar7;
    fVar7 = (float10)(*DAT_10121f74)(0xc2480000,0x42480000);
    fStack_8 = (float)fVar7;
    fVar7 = (float10)(*DAT_10121f74)(0xc2480000,0x42480000);
    fVar8 = (float10)(*DAT_10121f74)(0x42480000,0x42c80000);
    iVar6 = piVar4[1];
    fVar1 = *(float *)((int)param_1 + 0x344);
    fVar2 = *(float *)((int)param_1 + 0x348);
    *(float *)(iVar6 + 0x20) =
         (float)(fVar8 * (float10)*(float *)((int)param_1 + 0x340)) + (float)fVar7;
    *(float *)(iVar6 + 0x24) = (float)(fVar8 * (float10)fVar1) + fStack_8;
    *(float *)(iVar6 + 0x28) = (float)(fVar8 * (float10)fVar2 + (float10)fStack_c);
  }
  return;
}

