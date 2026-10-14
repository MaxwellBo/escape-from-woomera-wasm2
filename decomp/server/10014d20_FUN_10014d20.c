
void __thiscall FUN_10014d20(int *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (*param_2 != 0x5d) {
    FUN_10005140(param_1,param_2);
    return;
  }
  FUN_10060260(param_1,(float)param_1[0xaa],(float)param_1[0xab],(float)param_1[0xac]);
  iVar1 = *param_1;
  lVar2 = __ftol();
  (**(code **)(iVar1 + 0x128))((int)lVar2);
  if (param_1[0x35] != 0) {
    param_1[0x78] = 4;
  }
  return;
}

