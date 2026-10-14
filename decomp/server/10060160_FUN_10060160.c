
int * __fastcall FUN_10060160(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piStack_4;
  
  piStack_4 = (int *)0x0;
  iVar4 = 0;
  iVar3 = 0x2000;
  for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
    iVar2 = (**(code **)(*piVar1 + 0xb8))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x130))(piVar1);
      if (iVar4 < iVar2) {
        iVar4 = (**(code **)(*param_1 + 0x130))(piVar1);
        lVar5 = __ftol();
        iVar3 = (int)lVar5;
        piStack_4 = piVar1;
      }
      else {
        iVar2 = (**(code **)(*param_1 + 0x130))(piVar1);
        if (iVar2 == iVar4) {
          lVar5 = __ftol();
          if ((int)lVar5 <= iVar3) {
            iVar4 = (**(code **)(*param_1 + 0x130))(piVar1);
            iVar3 = (int)lVar5;
            piStack_4 = piVar1;
          }
        }
      }
    }
  }
  return piStack_4;
}

