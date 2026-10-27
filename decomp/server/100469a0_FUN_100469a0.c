
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100469a0(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  FUN_10007fc0((int)param_1,0.0);
  (**(code **)(*param_1 + 8))(0x3e4ccccd);
  iVar2 = param_1[1];
  pfVar1 = (float *)(iVar2 + 0x1e4);
  if (*(float *)(iVar2 + 0x1e4) != _DAT_100dd5f8) {
    if (*pfVar1 < *DAT_10122044) {
      FUN_100b0ef0((int)param_1);
      return;
    }
    iVar2 = param_1[1];
    fVar3 = (float10)(*DAT_10121f74)(0,*pfVar1 - (float)param_1[0xc2]);
    if ((float10)*(float *)(iVar2 + 0x1e4) - (float10)*DAT_10122044 < fVar3) {
      return;
    }
  }
  fVar3 = (float10)(*DAT_10121f74)(*(undefined4 *)(iVar2 + 0xc4),*(undefined4 *)(iVar2 + 0xd0));
  fVar4 = (float10)(*DAT_10121f74)(*(undefined4 *)(param_1[1] + 200),
                                   *(undefined4 *)(param_1[1] + 0xd4));
  fVar5 = (float10)(*DAT_10121f74)(*(undefined4 *)(param_1[1] + 0xcc),
                                   *(undefined4 *)(param_1[1] + 0xd8));
  (*DAT_10121ec0)(4,0x17,&stack0xfffffff0,0);
  (*DAT_10121ec8)(5);
  (*DAT_10121edc)((float)fVar3);
  (*DAT_10121edc)((float)fVar4);
  (*DAT_10121edc)((float)fVar5);
  (*DAT_10121ed0)((int)DAT_10131cf2);
  iVar2 = (*DAT_10121f70)(0,0x31);
  (*DAT_10121ec8)(iVar2 + 0x32);
  iVar2 = (*DAT_10121f70)(0,3);
  (*DAT_10121ec8)(iVar2 + 8);
  (*DAT_10121ec4)();
  return;
}

