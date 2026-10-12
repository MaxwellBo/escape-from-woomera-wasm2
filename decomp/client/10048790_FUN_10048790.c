
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Panel * __thiscall
FUN_10048790(void *this,char *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,undefined4 param_8,int param_9)

{
  undefined1 *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  InputSignal *pIVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005868e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  vgui::Panel::Panel(this,param_4,param_5,param_6,param_7);
  this_00 = (undefined1 *)((int)this + 0xd4);
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *this_00 = param_1._0_1_;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  uVar5 = 0xffffffff;
  *(undefined ***)this = &PTR_setPos_10065628;
  pcVar7 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  local_4 = 0;
  uVar3 = FUN_100429c0(&DAT_100baf00,uVar5,'\x01');
  if ((char)uVar3 != '\0') {
    pcVar7 = DAT_100baf04;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar7 = *param_1;
      param_1 = param_1 + 1;
      pcVar7 = pcVar7 + 1;
    }
    DAT_100baf08 = uVar5;
    DAT_100baf04[uVar5] = '\0';
  }
  fVar9 = FUN_10044870();
  _DAT_100baf14 = (float)fVar9;
  pIVar4 = operator_new(4);
  if (pIVar4 == (InputSignal *)0x0) {
    pIVar4 = (InputSignal *)0x0;
  }
  else {
    *(undefined ***)pIVar4 = &PTR_LAB_10064fa0;
  }
  vgui::Panel::addInputSignal(this,pIVar4);
  if (param_9 == 0) {
    ExceptionList = local_c;
    return this;
  }
  pcVar7 = *(char **)(param_9 + 4);
  uVar5 = 0xffffffff;
  pcVar8 = pcVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar5 - 1;
  uVar5 = FUN_10042fe0();
  if (uVar5 < uVar6) {
    FUN_10057251();
  }
  iVar2 = *(int *)((int)this + 0xd8);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar6 == 0) {
      FUN_100424b0(this_00,'\x01');
      ExceptionList = local_c;
      return this;
    }
    if ((*(uint *)((int)this + 0xe0) < 0x20) && (uVar6 <= *(uint *)((int)this + 0xe0)))
    goto LAB_1004890e;
    FUN_100424b0(this_00,'\x01');
  }
  else if (uVar6 == 0) {
    *(char *)(iVar2 + -1) = cVar1 + -1;
    FUN_100424b0(this_00,'\0');
    ExceptionList = local_c;
    return this;
  }
  FUN_10042ff0(uVar6);
LAB_1004890e:
  pcVar8 = *(char **)((int)this + 0xd8);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar8 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  }
  *(uint *)((int)this + 0xdc) = uVar6;
  *(undefined1 *)(*(int *)((int)this + 0xd8) + uVar6) = 0;
  ExceptionList = local_c;
  return this;
}

