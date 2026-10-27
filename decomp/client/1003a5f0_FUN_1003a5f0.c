
Panel * __thiscall FUN_1003a5f0(void *this,undefined4 param_1,int param_2)

{
  Panel *this_00;
  Button *pBVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  Button BVar10;
  char local_10c [256];
  void *pvStack_c;
  code *pcStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  pcStack_8 = FUN_10057dce;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this_00 = FUN_100392d0(param_1,param_2);
  ppuVar6 = &PTR_s__Scout_1007a108;
  *(Panel **)((int)this + *(int *)((int)this + 0x214) * 4 + 200) = this_00;
  *(int *)((int)this + 0x214) = *(int *)((int)this + 0x214) + 1;
  do {
    pBVar1 = operator_new(300);
    local_4 = 0;
    if (pBVar1 == (Button *)0x0) {
      pBVar1 = (Button *)0x0;
    }
    else {
      lVar7 = __ftol();
      iVar2 = (int)lVar7;
      BVar10 = (Button)0x0;
      iVar9 = iVar2;
      lVar7 = __ftol();
      iVar3 = (int)lVar7;
      iVar8 = 0;
      pcVar4 = FUN_10030c20(*ppuVar6);
      pBVar1 = FUN_10033020(pBVar1,pcVar4,iVar8,iVar2,iVar3,iVar9,BVar10);
    }
    local_4 = 0xffffffff;
    FUN_100499f0(local_10c,(byte *)s__s__d_1007a424);
    puVar5 = operator_new(0x108);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = &PTR_FUN_10060a40;
      _strncpy((char *)(puVar5 + 1),local_10c,0x100);
      *(undefined1 *)((int)puVar5 + 0x103) = 0;
      puVar5[0x41] = 0;
    }
    (**(code **)(*(int *)pBVar1 + 0x240))(puVar5);
    FUN_10038f20(this_00,(int *)pBVar1);
    ppuVar6 = ppuVar6 + 1;
  } while ((int)ppuVar6 < 0x1007a129);
  ExceptionList = pvStack_c;
  return this_00;
}

