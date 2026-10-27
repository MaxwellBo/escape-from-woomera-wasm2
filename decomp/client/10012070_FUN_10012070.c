
int * __thiscall FUN_10012070(void *this,int *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  bVar2 = FUN_10011da0((int)param_1);
  piVar1 = *(int **)((int)this + (uint)bVar2 * 0x18 + 0x14);
  do {
    if (piVar1 == (int *)((int)this + (uint)bVar2 * 0x18)) {
      return (int *)0x0;
    }
    iVar3 = 4;
    bVar6 = true;
    piVar4 = param_1;
    piVar5 = piVar1;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *piVar4 == *piVar5;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      return piVar1;
    }
    piVar1 = (int *)piVar1[5];
  } while( true );
}

