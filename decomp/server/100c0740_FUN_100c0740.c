
/* WARNING: Removing unreachable block (ram,0x100c0755) */

void __thiscall FUN_100c0740(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  puVar6 = *(undefined4 **)((int)this + 4);
  puVar8 = *(undefined4 **)((int)this + 4);
  uVar7 = (int)param_2 - (int)param_1 >> 2;
  *(undefined4 **)((int)this + 8) = puVar6;
  if ((uint)(*(int *)((int)this + 0xc) - (int)puVar6 >> 2) < uVar7) {
    if ((puVar8 == (undefined4 *)0x0) || (uVar4 = (int)puVar6 - (int)puVar8 >> 2, uVar4 <= uVar7)) {
      uVar4 = uVar7;
    }
    if (puVar8 == (undefined4 *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)puVar6 - (int)puVar8 >> 2;
    }
    iVar1 = iVar1 + uVar4;
    iVar2 = iVar1;
    if (iVar1 < 0) {
      iVar2 = 0;
    }
    puVar3 = operator_new(iVar2 << 2);
    puVar5 = puVar3;
    for (puVar6 = *(undefined4 **)((int)this + 4); puVar6 != puVar8; puVar6 = puVar6 + 1) {
      FUN_100c17d0(puVar5,puVar6);
      puVar5 = puVar5 + 1;
    }
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      FUN_100c17d0(puVar5,param_1);
      puVar5 = puVar5 + 1;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    if (puVar8 != puVar6) {
      iVar2 = (int)puVar5 - (int)puVar8;
      do {
        FUN_100c17d0((undefined4 *)(iVar2 + (int)puVar8),puVar8);
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar6);
    }
    FUN_100c1210();
    FUN_100c8ce6(*(undefined **)((int)this + 4));
    *(undefined4 **)((int)this + 0xc) = puVar3 + iVar1;
    iVar1 = FUN_100bad90((int)this);
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) = puVar3 + iVar1 + uVar7;
    return;
  }
  if ((uint)((int)puVar6 - (int)puVar8 >> 2) < uVar7) {
    FUN_100c1220(puVar8,puVar6,puVar8 + uVar7);
    FUN_100c1220(param_1 + ((int)*(undefined4 **)((int)this + 8) - (int)puVar8 >> 2),param_2,
                 *(undefined4 **)((int)this + 8));
    param_2 = param_1 + (*(int *)((int)this + 8) - (int)puVar8 >> 2);
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_100c1220(puVar6 + -uVar7,puVar6,puVar6);
    puVar6 = *(undefined4 **)((int)this + 8);
    for (puVar5 = puVar6 + -uVar7; puVar8 != puVar5; puVar5 = puVar5 + -1) {
      puVar6 = puVar6 + -1;
      *puVar6 = puVar5[-1];
    }
  }
  FUN_100c1720(param_1,param_2,puVar8);
  *(uint *)((int)this + 8) = *(int *)((int)this + 8) + uVar7 * 4;
  return;
}

