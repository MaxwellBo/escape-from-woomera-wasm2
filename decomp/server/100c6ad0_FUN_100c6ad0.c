
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6ad0(void)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  int iVar4;
  
  fVar2 = FUN_100c5b70();
  fVar3 = FUN_100c8190(1);
  fVar3 = fVar3 - (float10)(float)fVar2 * (float10)_DAT_100f95dc;
  if ((float10)_DAT_100dd5f8 <= fVar3) {
    if ((float10)_DAT_100dd61c < fVar3) {
      fVar3 = (float10)_DAT_100dd61c;
    }
  }
  else {
    fVar3 = (float10)_DAT_100dd5f8;
  }
  FUN_100c8180(1,(float)fVar3);
  fVar2 = FUN_100c8190(1);
  if (fVar2 <= (float10)_DAT_100dd5f8) {
    iVar4 = 0x4d;
    iVar1 = FUN_100c6980();
    FUN_100c81d0(iVar1,iVar4);
    FUN_100c80d0();
  }
  return;
}

