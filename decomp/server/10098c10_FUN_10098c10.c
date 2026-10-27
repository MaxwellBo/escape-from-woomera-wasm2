
void __cdecl
FUN_10098c10(uint *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  size_t _Count;
  int iVar6;
  uint *_Source;
  uint auStack_50 [20];
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  if (param_4 == 6) {
    return;
  }
  if ((char)*param_1 == '+') {
    param_4 = 1;
    _Source = (uint *)((int)param_1 + 1);
  }
  else {
    _Source = param_1;
    if ((char)*param_1 == '-') {
      _Source = (uint *)((int)param_1 + 1);
      param_4 = 0;
    }
  }
  FUN_100c7da0(_Source,param_2,param_3);
  (*DAT_10121efc)(2,s_Firing____s__101178fc,_Source);
  piVar3 = (int *)FUN_100af060(0,(byte *)_Source,(int)param_2);
  piVar5 = param_2;
  if (piVar3 == (int *)0x0) {
    cVar2 = (char)*_Source;
    _Count = 0;
    if (cVar2 == '\0') {
      return;
    }
    while (cVar2 != '(') {
      cVar2 = *(char *)(_Count + 1 + (int)_Source);
      _Count = _Count + 1;
      if (cVar2 == '\0') {
        return;
      }
    }
    iVar6 = _Count + 1;
    cVar2 = *(char *)(iVar6 + (int)_Source);
    iVar4 = iVar6;
    while( true ) {
      if (cVar2 == '\0') {
        (*DAT_10121efc)(4,s_Missing_____in_target_value___s__101178d8,param_1);
        return;
      }
      if (cVar2 == ')') break;
      cVar2 = *(char *)(iVar4 + 1 + (int)_Source);
      iVar4 = iVar4 + 1;
    }
    _strncpy((char *)auStack_50,(char *)(iVar6 + (int)_Source),iVar4 - iVar6);
    *(undefined1 *)((int)auStack_50 + (iVar4 - iVar6)) = 0;
    piVar5 = (int *)FUN_100af060(0,(byte *)auStack_50,(int)param_2);
    if (piVar5 == (int *)0x0) {
      return;
    }
    _strncpy((char *)auStack_50,(char *)_Source,_Count);
    *(undefined1 *)((int)auStack_50 + _Count) = 0;
    _Source = auStack_50;
    piVar3 = (int *)FUN_100af060(0,(byte *)auStack_50,(int)param_2);
    if (piVar3 == (int *)0x0) {
      return;
    }
  }
  do {
    piVar1 = (int *)piVar3[1];
    if ((piVar1[0x69] & 0x40000000U) == 0) {
      if (param_4 == 4) {
        (*DAT_10121efc)(2,s_Use_kill_on__s_101178c8,*(int *)(DAT_10122044 + 0x98) + *piVar1);
        FUN_100b0ef0((int)piVar3);
      }
      else {
        (*DAT_10121efc)(2,s_Found___s__firing___s__101178b0,*(int *)(DAT_10122044 + 0x98) + *piVar1,
                        _Source);
        (**(code **)(*piVar3 + 0xe4))(piVar5,param_3,param_4,param_5);
      }
    }
    piVar3 = (int *)FUN_100af060((int)piVar3,(byte *)_Source,(int)param_2);
  } while (piVar3 != (int *)0x0);
  FUN_100aec60();
  return;
}

