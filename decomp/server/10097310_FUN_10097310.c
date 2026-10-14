
void __fastcall FUN_10097310(int *param_1)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 unaff_retaddr;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  
  *(undefined4 *)(param_1[1] + 0xb8) = 0;
  param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
  param_1[0x1e] = 0;
  (**(code **)(*param_1 + 8))(0x3dcccccd);
  *(undefined4 *)(param_1[1] + 0x16c) = 0;
  FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),3,
               s_squeek_sqk_blast1_wav_1011750c,0x3f800000,0x3f000000,0,100);
  FUN_10095d30(1,(undefined4 *)(param_1[1] + 8),0x200,3.0);
  iVar7 = 0x50;
  iVar3 = (**(code **)(*param_1 + 0x6c))();
  FUN_100b02a0((undefined4 *)(param_1[1] + 8),&DAT_10121dd8,iVar3,iVar7);
  puVar1 = (uint *)(param_1 + 0xcc);
  bVar2 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    fVar4 = (float)param_1[1];
    uVar8 = 0x40;
    iVar3 = 0;
    fVar6 = *(float *)((int)fVar4 + 0x1e0);
    fVar5 = fVar4;
  }
  else {
    uVar8 = 0x40;
    iVar3 = 0;
    fVar6 = *(float *)(param_1[1] + 0x1e0);
    iVar7 = FUN_10019460(puVar1);
    fVar4 = (float)param_1[1];
    fVar5 = *(float *)(iVar7 + 4);
  }
  FUN_1001fe50(param_1,fVar4,fVar5,fVar6,iVar3,uVar8);
  bVar2 = FUN_10019450(puVar1);
  if (CONCAT31(extraout_var_00,bVar2) != 0) {
    iVar3 = FUN_10019460(puVar1);
    *(undefined4 *)(param_1[1] + 0x198) = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x208);
  }
  FUN_1001ec30(param_1,unaff_retaddr,2);
  return;
}

