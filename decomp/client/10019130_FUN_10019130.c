
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10019130(int param_1,float param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puStack_2c;
  undefined *puStack_28;
  undefined4 *puStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_10;
  int iStack_c;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar10 = 0;
  puStack_28 = &DAT_100a51d0;
  puStack_2c = &DAT_100a5190;
  iStack_18 = 0x14;
  puStack_24 = (undefined4 *)&DAT_100a522c;
  do {
    iVar9 = DAT_100a5178;
    if (*(int *)((int)&DAT_100a5210 + iVar10) == 0) {
      return 1;
    }
    if (param_2 <= *(float *)((int)&DAT_100a5220 + iVar10)) {
      fVar1 = (float)_DAT_1007841c + DAT_100a3a64;
      if (*(float *)((int)&DAT_100a5220 + iVar10) < fVar1) {
        fVar1 = *(float *)((int)&DAT_100a5220 + iVar10);
      }
      *(float *)((int)&DAT_100a5220 + iVar10) = fVar1;
      if ((iVar9 != 0) && (uVar3 = FUN_1003d4f0(iVar9), (char)uVar3 != '\0')) {
        iStack_20 = *(int *)((int)&DAT_100a5210 + iVar10);
        if (iStack_20 == -1) {
          iStack_20 = *(int *)(param_1 + 0x14);
        }
        (*DAT_100a5064)(puStack_28,&iStack_10,auStack_8);
        iVar8 = iStack_20 * 0x10;
        iVar9 = ((*(int *)(iVar8 + DAT_100a3ab4) - *(int *)(iVar8 + 4 + DAT_100a3ab4)) - iStack_10)
                + DAT_100a4dcc;
        if (*(int *)((int)&DAT_100a5214 + iVar10) == 0) {
          (*DAT_100a5064)(puStack_2c,&iStack_c,auStack_4);
          iVar4 = -5 - iStack_c;
          puVar2 = *(undefined4 **)((int)&DAT_100a5224 + iVar10);
          if (puVar2 != (undefined4 *)0x0) {
            (*DAT_100a5060)(*puVar2,puVar2[1],puVar2[2]);
          }
          iVar9 = (*DAT_100a505c)(iVar9 + iVar4,iStack_18,puStack_2c);
          iVar9 = iVar9 + 5;
        }
        uVar5 = 0xff;
        uVar6 = 0x50;
        uStack_1c = 0;
        if (*(int *)((int)&DAT_100a5218 + iVar10) != 0) {
          uVar5 = 10;
          uVar6 = 0xf0;
          uStack_1c = 10;
        }
        if (iStack_20 < 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(DAT_100a3ab0 + iStack_20 * 4);
        }
        (*DAT_100a5000)(uVar7,uVar5,uVar6,uStack_1c);
        (*DAT_100a500c)(0,iVar9,iStack_18,iVar8 + DAT_100a3ab4);
        iVar4 = *(int *)(iVar8 + 4 + DAT_100a3ab4);
        iVar8 = *(int *)(iVar8 + DAT_100a3ab4);
        if (*(int *)((int)&DAT_100a521c + iVar10) == 0) {
          puVar2 = *(undefined4 **)((int)&DAT_100a5228 + iVar10);
          if (puVar2 != (undefined4 *)0x0) {
            (*DAT_100a5060)(*puVar2,puVar2[1],puVar2[2]);
          }
          (*DAT_100a505c)(iVar9 + (iVar4 - iVar8),iStack_18,puStack_28);
        }
      }
    }
    else {
      FUN_1004a710(puStack_2c,puStack_24,0x270 - iVar10);
      iStack_18 = iStack_18 + -0x14;
      iVar10 = iVar10 + -0x9c;
      puStack_24 = puStack_24 + -0x27;
      puStack_2c = puStack_2c + -0x27;
      puStack_28 = puStack_28 + -0x9c;
    }
    iStack_18 = iStack_18 + 0x14;
    iVar10 = iVar10 + 0x9c;
    puStack_24 = puStack_24 + 0x27;
    puStack_2c = puStack_2c + 0x27;
    puStack_28 = puStack_28 + 0x9c;
  } while (iStack_18 < 100);
  return 1;
}

