
void __cdecl FUN_10029b70(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (**(code **)(DAT_100acc38 + 0x4f55c))(DAT_100acc38 + 0x38,0);
  if (iVar4 != -1) {
    iVar4 = 0;
    uVar1 = *(undefined4 *)(DAT_100acc38 + 0x38);
    uVar2 = *(undefined4 *)(DAT_100acc38 + 0x3c);
    uVar3 = *(undefined4 *)(DAT_100acc38 + 0x40);
    do {
      *(float *)(DAT_100acc38 + 0x40) = (float)param_1 + *(float *)(DAT_100acc38 + 0x40);
      iVar5 = (**(code **)(DAT_100acc38 + 0x4f55c))(DAT_100acc38 + 0x38,0);
      if (iVar5 == -1) {
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x24);
    *(undefined4 *)(DAT_100acc38 + 0x38) = uVar1;
    *(undefined4 *)(DAT_100acc38 + 0x3c) = uVar2;
    *(undefined4 *)(DAT_100acc38 + 0x40) = uVar3;
  }
  return;
}

