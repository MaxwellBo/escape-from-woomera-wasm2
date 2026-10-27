
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b0560(int param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  
  if (((param_4 != 0) || ((-1 < param_3 && (param_3 = (&DAT_1011bb7c)[param_3 * 2], -1 < param_3))))
     && (*(float *)(param_1 + 0x10) != (float)_DAT_100dd628)) {
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(0x70);
    (*DAT_10121ec8)(param_2);
    (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x14));
    (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x18));
    (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x1c));
    sVar1 = (*DAT_10121f24)(*(undefined4 *)(param_1 + 0x30));
    (*DAT_10121ed0)((int)sVar1);
    (*DAT_10121ec8)(param_3);
    (*DAT_10121ec4)();
  }
  return;
}

