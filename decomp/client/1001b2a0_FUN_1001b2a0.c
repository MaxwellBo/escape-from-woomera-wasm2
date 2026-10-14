
undefined4 __thiscall
FUN_1001b2a0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float local_c [3];
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  uVar2 = FUN_10026090();
  uVar3 = FUN_10026120();
  pfVar4 = local_c;
  iVar5 = 3;
  do {
    fVar6 = FUN_100261e0();
    *pfVar4 = (float)fVar6;
    pfVar4 = pfVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_1001b5f0(this,DAT_100a3a64,uVar3);
  if ((0 < (int)uVar2) || (0 < (int)uVar1)) {
    FUN_1001b340(this,local_c[0],local_c[1],local_c[2]);
  }
  return 1;
}

