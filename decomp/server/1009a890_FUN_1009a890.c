
void __thiscall FUN_1009a890(void *this,int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*param_1 != 0x3ed) {
    if (*param_1 != 0x3f1) {
      FUN_10060620(this,param_1);
      return;
    }
    iVar1 = (*DAT_10121f70)(0,99);
    if (iVar1 < 0x4b) {
      return;
    }
  }
  FUN_1009a740(this);
  iVar1 = *(int *)this;
  fVar2 = (float10)(*DAT_10121f74)(0x40333333,0x4059999a,0x3f800000,0x40000000);
  (**(code **)(iVar1 + 0x198))(param_1[1],(float)fVar2);
  return;
}

