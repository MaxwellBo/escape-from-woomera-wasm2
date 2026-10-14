
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083a40(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float afStack_80 [12];
  float afStack_50 [3];
  undefined4 auStack_44 [12];
  int iStack_14;
  
  FUN_10083b20((float *)(DAT_10126a38 + 0x44),afStack_80 + 3,afStack_50,afStack_80 + 9);
  afStack_80[0] = *(float *)(DAT_10126a38 + 0x38);
  afStack_80[1] = (float)*(undefined4 *)(DAT_10126a38 + 0x3c);
  afStack_80[2] = (float)*(undefined4 *)(DAT_10126a38 + 0x40);
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 4;
    *(float *)((int)afStack_80 + iVar3 + 0x18) =
         *(float *)((int)afStack_80 + iVar3 + 0xc) * _DAT_100dd658 +
         *(float *)((int)afStack_80 + iVar3);
    iVar3 = iVar1;
  } while (iVar1 < 0xc);
  puVar2 = (undefined4 *)
           (**(code **)(DAT_10126a38 + 0x4f580))(auStack_44,afStack_80,afStack_80 + 6,2,0xffffffff);
  puVar4 = auStack_44;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (0 < iStack_14) {
    FUN_100836a0(iStack_14,0x6f,0x3e99999a);
  }
  return;
}

