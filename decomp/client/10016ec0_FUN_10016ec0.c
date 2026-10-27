
undefined4 __thiscall
FUN_10016ec0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_10026030(param_3,param_2);
  uVar3 = FUN_10026090();
  iVar4 = FUN_10026050();
  uVar5 = FUN_10026050();
  if (iVar4 < 1) {
    (*DAT_100a5024)(0,DAT_100a3938,DAT_100a393c,DAT_100a3940,DAT_100a3944,0,0,0);
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 0;
  }
  if ((iVar4 == -1) && (uVar5 == 0xffffffff)) {
    DAT_100a4fe0 = 1;
    DAT_100a3968 = 0;
    return 1;
  }
  DAT_100a4fe0 = 0;
  iVar1 = iVar4 * 0x148;
  if (&DAT_100a0ea8 + iVar4 * 0x52 == (undefined4 *)0x0) {
    return 0;
  }
  if ((int)uVar5 < -1) {
    uVar5 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  }
  *(uint *)(&DAT_100a0f48 + iVar1) = uVar5;
  if (uVar3 == 0) {
    return 1;
  }
  *(undefined4 **)((int)this + 0x1c) = &DAT_100a0ea8 + iVar4 * 0x52;
  iVar4 = DAT_100a1898;
  uVar7 = DAT_100a189c;
  uVar8 = DAT_100a18a0;
  uVar9 = DAT_100a18a4;
  uVar10 = DAT_100a18a8;
  if ((DAT_100a3a94 & 0x10) != 0) goto LAB_100170e2;
  if ((DAT_100a3a94 & 5) != 0) goto LAB_100170eb;
  if (DAT_100a3a98 < 0x5a) {
    if (((int)uVar3 >= 2) && (iVar4 = *(int *)(&DAT_100a0fdc + iVar1), iVar4 != 0)) {
      puVar2 = &DAT_100a0fe0;
      goto LAB_1001708e;
    }
    iVar4 = *(int *)(&DAT_100a0fc8 + iVar1);
    uVar7 = *(undefined4 *)(&DAT_100a0fcc + iVar1);
    uVar8 = *(undefined4 *)(&DAT_100a0fd0 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_100a0fd4 + iVar1);
    uVar10 = *(undefined4 *)(&DAT_100a0fd8 + iVar1);
  }
  else if (((int)uVar3 < 2) || (iVar4 = *(int *)(&DAT_100a0fb4 + iVar1), iVar4 == 0)) {
    iVar4 = *(int *)(&DAT_100a0fa0 + iVar1);
    uVar7 = *(undefined4 *)(&DAT_100a0fa4 + iVar1);
    uVar8 = *(undefined4 *)(&DAT_100a0fa8 + iVar1);
    uVar9 = *(undefined4 *)(&DAT_100a0fac + iVar1);
    uVar10 = *(undefined4 *)(&DAT_100a0fb0 + iVar1);
  }
  else {
    puVar2 = &DAT_100a0fb8;
LAB_1001708e:
    puVar6 = (undefined4 *)(puVar2 + iVar1);
    uVar7 = *puVar6;
    uVar8 = puVar6[1];
    uVar9 = puVar6[2];
    uVar10 = puVar6[3];
  }
LAB_100170e2:
  (*DAT_100a5024)(iVar4,uVar7,uVar8,uVar9,uVar10,0xff,0xff,0xff);
LAB_100170eb:
  *(undefined4 *)((int)this + 0x14) = 0x43480000;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return 1;
}

