
byte __thiscall FUN_10039870(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x4c))();
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 0x13c);
    if (iVar1 == 0) {
      return (iVar2 != 2) - 1U & 2;
    }
    if (iVar1 == 0xb) {
      switch(iVar2) {
      case 1:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
switchD_100398ad_caseD_1:
        return 2;
      }
    }
    else if (iVar1 == 4) {
      switch(iVar2) {
      case 2:
      case 5:
      case 7:
      case 8:
      case 9:
      case 0xb:
        goto switchD_100398ad_caseD_1;
      case 3:
switchD_100398ca_caseD_3:
        return 1;
      }
    }
    else if (iVar1 == 5) {
      switch(iVar2) {
      case 2:
      case 4:
      case 0xb:
        goto switchD_100398ad_caseD_1;
      case 3:
        goto switchD_100398ca_caseD_3;
      }
    }
  }
  return 0;
}

