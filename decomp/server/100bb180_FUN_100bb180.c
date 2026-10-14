
int __thiscall FUN_100bb180(void *this,undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  iVar1 = *(int *)((int)this + 4);
  puVar5 = *(undefined1 **)((int)this + 8);
  iVar3 = *(int *)((int)this + 0xc) - (int)puVar5;
  iVar4 = iVar3 >> 0x1f;
  if (iVar3 / 0x18 + iVar4 == iVar4) {
    if ((iVar1 == 0) || (uVar6 = ((int)puVar5 - iVar1) / 0x18, uVar6 < 2)) {
      uVar6 = 1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = ((int)puVar5 - iVar1) / 0x18;
    }
    iVar4 = iVar4 + uVar6;
    iVar3 = iVar4;
    if (iVar4 < 0) {
      iVar3 = 0;
    }
    puVar2 = operator_new(iVar3 * 0x18);
    puVar7 = puVar2;
    for (puVar5 = *(undefined1 **)((int)this + 4); puVar5 != param_1; puVar5 = puVar5 + 0x18) {
      FUN_100be0e0(puVar7,puVar5);
      puVar7 = puVar7 + 0x18;
    }
    FUN_100be0e0(puVar7,param_2);
    FUN_100bd280(param_1,*(undefined1 **)((int)this + 8),puVar7 + 0x18);
    FUN_100bb4d0(*(int *)((int)this + 4),*(int *)((int)this + 8));
    FUN_100c8ce6(*(undefined **)((int)this + 4));
    *(undefined1 **)((int)this + 0xc) = puVar2 + iVar4 * 0x18;
    iVar4 = FUN_100bd150((int)this);
    *(undefined1 **)((int)this + 4) = puVar2;
    *(undefined1 **)((int)this + 8) = puVar2 + (iVar4 + 1) * 0x18;
  }
  else {
    iVar4 = (int)puVar5 - (int)param_1 >> 0x1f;
    if (((int)puVar5 - (int)param_1) / 0x18 + iVar4 == iVar4) {
      FUN_100bd280(param_1,puVar5,param_1 + 0x18);
      FUN_100bd2f0(*(undefined1 **)((int)this + 8),
                   1 - ((int)*(undefined1 **)((int)this + 8) - (int)param_1) / 0x18,param_2);
      FUN_100bdcd0(param_1,*(void **)((int)this + 8),param_2);
    }
    else {
      FUN_100bd280(puVar5 + -0x18,puVar5,puVar5);
      FUN_100bde50(param_1,(void *)((int)*(void **)((int)this + 8) + -0x18),
                   *(void **)((int)this + 8));
      FUN_100bdcd0(param_1,param_1 + 0x18,param_2);
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 0x18;
  }
  return *(int *)((int)this + 4) + (((int)param_1 - iVar1) / 0x18) * 0x18;
}

