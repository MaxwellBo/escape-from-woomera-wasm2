
float10 __cdecl
FUN_100d6d22(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_100d7112(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_100d6e5f(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_100d73fe((byte)param_1);
  if ((DAT_101215c8 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_100d7329(iVar2,param_2);
    return fVar3;
  }
  FUN_100d73b1(iVar2);
  FUN_100d744b();
  return (float10)param_4;
}

