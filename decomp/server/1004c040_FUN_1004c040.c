
void __thiscall FUN_1004c040(int *param_1,int *param_2)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  float afStack_c [3];
  
  if (*param_2 != 0x5d) {
    FUN_10005140(param_1,param_2);
    return;
  }
  pfVar1 = (float *)FUN_10002280(param_1 + 0xd3,afStack_c,64.0);
  iVar2 = param_1[1];
  FUN_10060260(param_1,*pfVar1 + *(float *)(iVar2 + 8),pfVar1[1] + *(float *)(iVar2 + 0xc),
               pfVar1[2] + *(float *)(iVar2 + 0x10));
  iVar2 = *param_1;
  lVar3 = __ftol();
  (**(code **)(iVar2 + 0x128))((int)lVar3);
  iVar2 = FUN_100617e0((int)param_1);
  if (iVar2 != 0) {
    param_1[0x78] = 4;
  }
  return;
}

