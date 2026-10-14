
undefined4 __fastcall FUN_10011de0(undefined *param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_214;
  char local_210 [16];
  CHAR local_200 [512];
  
  FUN_10011ec0(param_1);
  FUN_1004a4b6(local_200,0x200,(byte *)s__s__s_10077928);
  pFVar1 = (FILE *)FUN_1004a4a3(local_200,&DAT_10077924);
  if (pFVar1 == (FILE *)0x0) {
    return 1;
  }
  FUN_1004a35b((char *)&local_214,1,4,(int *)pFVar1);
  if (local_214 == 1) {
    FUN_1004a2a2((int *)pFVar1,0,2);
    iVar2 = FUN_1004a11f((char *)pFVar1);
    FUN_1004a2a2((int *)pFVar1,4,0);
    for (uVar4 = iVar2 - 4U >> 4; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_1004a35b(local_210,1,0x10,(int *)pFVar1);
      FUN_100120c0(param_1,(undefined4 *)local_210);
    }
  }
  uVar3 = FUN_1004a0a2(pFVar1);
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

