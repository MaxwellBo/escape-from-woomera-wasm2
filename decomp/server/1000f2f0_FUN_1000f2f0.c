
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1000f2f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined1 auStack_38 [56];
  
  iVar2 = *(int *)(param_1 + 4);
  iVar2 = FUN_1001a1f0(0x10103874,(undefined4 *)(iVar2 + 8),(undefined4 *)(iVar2 + 0x50),
                       *(undefined4 *)(iVar2 + 0x208));
  *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) = *(uint *)(*(int *)(iVar2 + 4) + 0x1a0) | 0x80000000;
  if ((*(uint *)(param_1 + 0x2a0) & 0x80000000) == 0) {
    fVar5 = (float10)(*DAT_10121f74)(0x3f000000,0x40200000);
    uVar3 = *(uint *)(param_1 + 0x2a0) | 0x80000000;
    *(float *)(param_1 + 0x30c) = (float)(fVar5 + (float10)*DAT_10122044);
  }
  else {
    fVar5 = (float10)(*DAT_10121f74)(0x40a00000,0x41200000);
    uVar3 = *(uint *)(param_1 + 0x2a0) & 0x7fffffff;
    *(float *)(param_1 + 0x30c) = (float)(fVar5 + (float10)*DAT_10122044);
  }
  *(uint *)(param_1 + 0x2a0) = uVar3;
  iVar2 = *(int *)(param_1 + 4);
  fStack_3c = *(float *)(iVar2 + 0x10) - _DAT_100dd61c;
  uStack_40 = *(undefined4 *)(iVar2 + 0xc);
  uStack_44 = *(undefined4 *)(iVar2 + 8);
  FUN_100afc60((undefined4 *)(iVar2 + 8),&uStack_44,1,*(undefined4 *)(iVar2 + 0x208),auStack_38);
  FUN_100b0450((int)auStack_38,0x28);
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x208);
  iVar2 = (*DAT_10121f70)(0xfffffffb,5);
  iVar2 = iVar2 + 100;
  uVar8 = 0;
  uVar7 = 0x3f4ccccd;
  uVar6 = 0x3f800000;
  iVar4 = (*DAT_10121f70)(0,2);
  FUN_10094b20((&PTR_s_gonarch_gon_birth1_wav_1010348c)[iVar4],uVar1,1,
               (&PTR_s_gonarch_gon_birth1_wav_1010348c)[iVar4],uVar6,uVar7,uVar8,iVar2);
  *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + 1;
  return;
}

