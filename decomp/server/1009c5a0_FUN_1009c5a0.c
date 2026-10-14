
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __thiscall FUN_1009c5a0(void *this,int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  char *_Dest;
  
  uVar1 = (*DAT_10121fb0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),s_model_10105414);
  pcVar2 = (char *)(*DAT_10121fb4)(uVar1);
  _Dest = (char *)(param_1 + 0x65c);
  _strncpy(_Dest,pcVar2,0x10);
  FUN_1009d020(this,'\0');
  if ((*_Dest != '\0') && (iVar3 = (**(code **)(*(int *)this + 0xd4))(_Dest), iVar3 != 0)) {
    if (_DAT_1010974c == _DAT_100dd5f8) {
      return _Dest;
    }
    _strncpy(_Dest,(char *)&DAT_10131068,0x10);
    return _Dest;
  }
  if (_DAT_1010974c == _DAT_100dd5f8) {
    pcVar2 = (char *)FUN_1009cf70(this);
    _strncpy(_Dest,pcVar2,0x10);
    return _Dest;
  }
  _strncpy(_Dest,(char *)&DAT_10131068,0x10);
  return _Dest;
}

