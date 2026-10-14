
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10052520(int *param_1)

{
  float10 fVar1;
  
  FUN_1005d160(param_1);
  if ((*(int *)(param_1[1] + 0x170) == 0) && (param_1[0x76] != 6)) {
    FUN_10052600(param_1);
    if (((float)param_1[0xcd] < *DAT_10122044) &&
       (*(undefined4 *)(param_1[1] + 0x110) = 2,
       (float)param_1[0xcd] + (float)_DAT_100dd608 < *DAT_10122044)) {
      fVar1 = (float10)(*DAT_10121f74)(0x40400000,0x40800000);
      param_1[0xcd] = (int)(float)(fVar1 + (float10)*DAT_10122044);
      if (param_1[0xcf] != 0) {
        *(undefined4 *)(param_1[1] + 0x110) = 0;
        return;
      }
      *(undefined4 *)(param_1[1] + 0x110) = 1;
    }
  }
  return;
}

