
undefined4 __fastcall FUN_10068f00(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *(undefined4 *)(param_1 + 0x428) = 0;
  iVar6 = 0;
  puVar4 = (uint *)(param_1 + 0x388);
  iVar2 = 0;
  do {
    bVar1 = FUN_10019450(puVar4);
    iVar5 = iVar6;
    if (CONCAT31(extraout_var,bVar1) != 0) {
      *(int *)(param_1 + 0x428) = *(int *)(param_1 + 0x428) + 1;
      iVar5 = iVar2;
    }
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 2;
    iVar2 = iVar5;
  } while (iVar6 < 0x14);
  if (*(int *)(param_1 + 0x428) < 0x14) {
    iVar2 = FUN_10019460((uint *)(param_1 + 0x380));
    iVar2 = *(int *)(iVar2 + 4);
    local_18 = *(float *)(iVar2 + 8);
    local_14 = *(float *)(iVar2 + 0xc);
    local_10 = *(float *)(iVar2 + 0x10);
    piVar3 = (int *)FUN_1001a1f0(0x10112448,&local_18,(undefined4 *)(*(int *)(param_1 + 4) + 0x50),
                                 *(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    iVar2 = *(int *)(param_1 + 4);
    iVar6 = piVar3[1];
    local_c = *(float *)(iVar2 + 8) - local_18;
    local_8 = *(float *)(iVar2 + 0xc) - local_14;
    local_4 = *(float *)(iVar2 + 0x10) - local_10;
    *(float *)(iVar6 + 0x20) = local_c;
    *(float *)(iVar6 + 0x24) = local_8;
    *(float *)(iVar6 + 0x28) = local_4;
    FUN_10069ac0(piVar3);
    FUN_10019420((void *)(param_1 + 0x388 + iVar5 * 8),(int)piVar3);
    return 1;
  }
  return 0;
}

