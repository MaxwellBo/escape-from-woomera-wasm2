
void __thiscall FUN_10047030(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = *(undefined4 **)((int)this + 8);
  if (param_2 <= (uint)((*(int *)((int)this + 0xc) - (int)puVar6) / 0xc)) {
    if (param_2 <= (uint)(((int)puVar6 - (int)param_1) / 0xc)) {
      if (param_2 != 0) {
        puVar7 = puVar6;
        for (puVar3 = puVar6 + param_2 * -3; puVar3 != puVar6; puVar3 = puVar3 + 3) {
          FUN_100475e0(puVar7,puVar3);
          puVar7 = puVar7 + 3;
        }
        puVar6 = *(undefined4 **)((int)this + 8);
        puVar7 = *(undefined4 **)((int)this + 8) + param_2 * -3;
        while (param_1 != puVar7) {
          puVar6[-3] = puVar7[-3];
          puVar6[-2] = puVar7[-2];
          puVar6[-1] = puVar7[-1];
          puVar6 = puVar6 + -3;
          puVar7 = puVar7 + -3;
        }
        puVar6 = param_1 + param_2 * 3;
        for (; param_1 != puVar6; param_1 = param_1 + 3) {
          *param_1 = *param_3;
          param_1[1] = param_3[1];
          param_1[2] = param_3[2];
        }
        *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0xc;
      }
      return;
    }
    puVar7 = param_1 + param_2 * 3;
    for (puVar3 = param_1; puVar3 != puVar6; puVar3 = puVar3 + 3) {
      FUN_100475e0(puVar7,puVar3);
      puVar7 = puVar7 + 3;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    for (iVar5 = param_2 - ((int)puVar6 - (int)param_1) / 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_100475e0(puVar6,param_3);
      puVar6 = puVar6 + 3;
    }
    puVar6 = *(undefined4 **)((int)this + 8);
    for (; param_1 != puVar6; param_1 = param_1 + 3) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    *(uint *)((int)this + 8) = *(int *)((int)this + 8) + param_2 * 0xc;
    return;
  }
  iVar5 = *(int *)((int)this + 4);
  if ((iVar5 == 0) || (uVar4 = ((int)puVar6 - iVar5) / 0xc, uVar4 <= param_2)) {
    uVar4 = param_2;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = ((int)puVar6 - iVar5) / 0xc;
  }
  iVar5 = iVar5 + uVar4;
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 * 0xc);
  puVar6 = puVar3;
  for (puVar7 = *(undefined4 **)((int)this + 4); uVar4 = param_2, puVar1 = puVar6, puVar7 != param_1
      ; puVar7 = puVar7 + 3) {
    FUN_100475e0(puVar6,puVar7);
    puVar6 = puVar6 + 3;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_100475e0(puVar1,param_3);
    puVar1 = puVar1 + 3;
  }
  puVar6 = puVar6 + param_2 * 3;
  puVar7 = *(undefined4 **)((int)this + 8);
  for (; param_1 != puVar7; param_1 = param_1 + 3) {
    FUN_100475e0(puVar6,param_1);
    puVar6 = puVar6 + 3;
  }
  FUN_10049a73(*(undefined **)((int)this + 4));
  *(undefined4 **)((int)this + 0xc) = puVar3 + iVar5 * 3;
  iVar5 = *(int *)((int)this + 4);
  if (iVar5 != 0) {
    *(undefined4 **)((int)this + 4) = puVar3;
    *(undefined4 **)((int)this + 8) =
         puVar3 + (param_2 + (*(int *)((int)this + 8) - iVar5) / 0xc) * 3;
    return;
  }
  *(undefined4 **)((int)this + 4) = puVar3;
  *(undefined4 **)((int)this + 8) = puVar3 + param_2 * 3;
  return;
}

