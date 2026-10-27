
void * __thiscall FUN_100ba9a0(void *this,void *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (*(uint *)((int)param_1 + 8) < param_2) {
    FUN_100d9f8d();
  }
  uVar7 = DAT_100f7054;
  uVar6 = *(uint *)((int)param_1 + 8) - param_2;
  if (param_3 < uVar6) {
    uVar6 = param_3;
  }
  if (this == param_1) {
    uVar6 = uVar6 + param_2;
    if (*(uint *)((int)this + 8) < uVar6) {
      FUN_100d9f8d();
    }
    FUN_100bbc60(this);
    uVar3 = *(int *)((int)this + 8) - uVar6;
    if (uVar3 < uVar7) {
      uVar7 = uVar3;
    }
    if (uVar7 != 0) {
      puVar5 = (undefined4 *)(*(int *)((int)this + 4) + uVar6);
      FUN_100c97a0(puVar5,(undefined4 *)((int)puVar5 + uVar7),uVar3 - uVar7);
      uVar7 = *(int *)((int)this + 8) - uVar7;
      uVar4 = FUN_100bbb30(this,uVar7,'\0');
      if ((char)uVar4 != '\0') {
        *(uint *)((int)this + 8) = uVar7;
        *(undefined1 *)(uVar7 + *(int *)((int)this + 4)) = 0;
      }
    }
    FUN_100bbc60(this);
    uVar7 = *(uint *)((int)this + 8);
    if (uVar7 < param_2) {
      param_2 = uVar7;
    }
    if (param_2 == 0) {
      return this;
    }
    FUN_100c97a0(*(undefined4 **)((int)this + 4),
                 (undefined4 *)((int)*(undefined4 **)((int)this + 4) + param_2),uVar7 - param_2);
    uVar7 = *(int *)((int)this + 8) - param_2;
    uVar4 = FUN_100bbb30(this,uVar7,'\0');
    if ((char)uVar4 == '\0') {
      return this;
    }
    FUN_100bbb10(this,uVar7);
    return this;
  }
  if ((uVar6 != 0) && (uVar6 == *(uint *)((int)param_1 + 8))) {
    puVar5 = *(undefined4 **)((int)param_1 + 4);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = &DAT_100f7058;
    }
    if (*(byte *)((int)puVar5 + -1) < 0xfe) {
      iVar2 = *(int *)((int)this + 4);
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_100c8ce6((char *)(iVar2 + -1));
        }
        else {
          *(char *)(iVar2 + -1) = cVar1 + -1;
        }
      }
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      puVar5 = *(undefined4 **)((int)param_1 + 4);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = &DAT_100f7058;
      }
      *(undefined4 **)((int)this + 4) = puVar5;
      *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)param_1 + 0xc);
      *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
      return this;
    }
  }
  uVar7 = FUN_100bcd20();
  if (uVar7 < uVar6) {
    FUN_100d9d61();
  }
  iVar2 = *(int *)((int)this + 4);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar6 == 0) {
      FUN_100bacf0(this,'\x01');
      return this;
    }
    if ((*(uint *)((int)this + 0xc) < 0x20) && (uVar6 <= *(uint *)((int)this + 0xc)))
    goto LAB_100bab6c;
    FUN_100bacf0(this,'\x01');
  }
  else if (uVar6 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_100bacf0(this,'\0');
    return this;
  }
  FUN_100bcd30(this, uVar6);
LAB_100bab6c:
  puVar5 = *(undefined4 **)((int)param_1 + 4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &DAT_100f7058;
  }
  puVar5 = (undefined4 *)(param_2 + (int)puVar5);
  puVar8 = *(undefined4 **)((int)this + 4);
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar8 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(uint *)((int)this + 8) = uVar6;
  *(undefined1 *)(uVar6 + *(int *)((int)this + 4)) = 0;
  return this;
}

