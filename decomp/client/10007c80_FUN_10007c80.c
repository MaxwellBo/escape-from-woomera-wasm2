
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10007c80(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1[0x37] + 4);
  (*DAT_1007f0bc)(6,*(undefined4 *)(iVar1 + 0x208),
                  CONCAT22((short)((uint)(iVar1 + 0x50) >> 0x10),(short)param_1[0x4d]),0x3c23d70a,
                  iVar1 + 8,iVar1 + 0x50,0,0,0,0,0,1);
  fVar2 = FUN_10018f40();
  *(float *)(param_1[0x37] + 700) = (float)(fVar2 + (float10)_DAT_100599f0);
  (**(code **)(*param_1 + 0x17c))(7,1,0);
  param_1[0x2c] = 0;
  return;
}

