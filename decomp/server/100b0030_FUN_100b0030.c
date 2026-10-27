
bool __cdecl FUN_100b0030(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  size_t sVar3;
  int *piVar4;
  int iVar5;
  byte *_Source;
  size_t _Count;
  byte local_50 [80];
  
  if (param_1 == 0) {
    return true;
  }
  _Source = (byte *)(*(int *)(DAT_10122044 + 0x98) + param_1);
  bVar1 = *_Source;
  if (bVar1 == 0x7e) {
    _Source = _Source + 1;
  }
  piVar4 = (int *)FUN_100af030(0,_Source);
  if (piVar4 == (int *)0x0) {
    bVar2 = *_Source;
    _Count = 0;
    while( true ) {
      if (bVar2 == 0) {
        (*DAT_10121efc)(1,s_Master___s__not_found__1011b17c,_Source);
        return true;
      }
      if (bVar2 == 0x28) break;
      bVar2 = _Source[_Count + 1];
      _Count = _Count + 1;
    }
    bVar2 = _Source[_Count + 1];
    sVar3 = _Count;
    while( true ) {
      if (bVar2 == 0) {
        (*DAT_10121efc)(4,s_Missing_____in_master___s__1011b160,_Source);
        return false;
      }
      if (bVar2 == 0x29) break;
      bVar2 = _Source[sVar3 + 2];
      sVar3 = sVar3 + 1;
    }
    iVar5 = (sVar3 + 1) - _Count;
    _strncpy((char *)local_50,(char *)(_Source + _Count + 1),iVar5 - 1);
    local_50[iVar5 + -1] = 0;
    param_2 = FUN_100af030(0,local_50);
    _strncpy((char *)local_50,(char *)_Source,_Count);
    local_50[_Count] = 0;
    piVar4 = (int *)FUN_100af030(0,local_50);
    if (piVar4 == (int *)0x0) {
      return true;
    }
  }
  if (bVar1 == 0x7e) {
    iVar5 = (**(code **)(*piVar4 + 0x54))();
    return iVar5 != 2;
  }
  iVar5 = (**(code **)(*piVar4 + 0x54))(param_2);
  return iVar5 == 2;
}

