
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10094bb0(undefined4 param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 100;
  fVar3 = (float10)(*DAT_10121eec)(s_suitvolume_1011707c);
  iVar1 = (*DAT_10121f70)(0,1);
  if (iVar1 != 0) {
    iVar2 = (*DAT_10121f70)(0,6);
    iVar2 = iVar2 + 0x62;
  }
  if ((float)_DAT_100de4f0 < (float)fVar3) {
    FUN_10094b20(param_2,param_1,6,param_2,(float)fVar3,0x3f4ccccd,0,iVar2);
  }
  return;
}

