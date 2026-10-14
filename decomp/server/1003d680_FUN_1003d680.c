
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d680(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_1007ea20(param_1);
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar4 + 0x80;
  }
  uVar1 = *(undefined4 *)(iVar5 + 0xc);
  iVar2 = param_1[1];
  fVar3 = *(float *)(iVar5 + 0x10) + _DAT_100dd618;
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)(iVar2 + 0xc) = uVar1;
  *(float *)(iVar2 + 0x10) = fVar3;
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x74) = DAT_10121dd8;
  *(undefined4 *)(iVar5 + 0x78) = DAT_10121ddc;
  *(undefined4 *)(iVar5 + 0x7c) = DAT_10121de0;
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x20) = DAT_10121dd8;
  *(undefined4 *)(iVar5 + 0x24) = DAT_10121ddc;
  *(undefined4 *)(iVar5 + 0x28) = DAT_10121de0;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar4 + 0x80;
  }
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  iVar5 = param_1[1];
  *(undefined4 *)(iVar5 + 0x68) = DAT_10121dd8;
  *(undefined4 *)(iVar5 + 0x6c) = DAT_10121ddc;
  *(undefined4 *)(iVar5 + 0x70) = DAT_10121de0;
  *(undefined4 *)(param_1[1] + 0xa0) = 1;
  if ((*(byte *)(iVar4 + 0x220) & 1) != 0) {
    DAT_101323b0 = 1;
  }
  return;
}

