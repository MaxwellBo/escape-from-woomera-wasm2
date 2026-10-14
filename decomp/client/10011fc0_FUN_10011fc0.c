
void __thiscall FUN_10011fc0(void *this,int *param_1,char param_2)

{
  bool bVar1;
  int *piVar2;
  
  if (param_2 == '\0') {
    piVar2 = FUN_10012070(this,param_1);
    if (piVar2 != (int *)0x0) {
      *(int *)(piVar2[4] + 0x14) = piVar2[5];
      *(int *)(piVar2[5] + 0x10) = piVar2[4];
      FUN_10049a73((undefined *)piVar2);
    }
  }
  else {
    bVar1 = FUN_10011fa0(this,param_1);
    if (!bVar1) {
      FUN_100120c0(this,param_1);
      return;
    }
  }
  return;
}

