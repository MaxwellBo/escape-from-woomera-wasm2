
void FUN_1000aab0(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  
  pfVar5 = (float *)(DAT_100a5184 + 0x10);
  iVar3 = 0;
  do {
    pfVar1 = pfVar5 + 0x5e;
    fVar2 = *pfVar5;
    iVar4 = iVar3 + 4;
    pfVar5 = pfVar5 + 1;
    *(float *)((int)&DAT_100807e8 + iVar3) = *pfVar1 + fVar2;
    iVar3 = iVar4;
  } while (iVar4 < 0xc);
  return;
}

