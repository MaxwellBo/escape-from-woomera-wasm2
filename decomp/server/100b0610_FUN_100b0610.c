
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100b0610(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  
  if (((-1 < param_2) && (iVar1 = (&DAT_1011bb7c)[param_2 * 2], -1 < iVar1)) &&
     (*(float *)(param_1 + 0x10) != (float)_DAT_100dd628)) {
    (*DAT_10121ec0)(5,0x17,(undefined4 *)(param_1 + 0x14),0);
    (*DAT_10121ec8)(0x6d);
    (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x14));
    (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x18));
    (*DAT_10121edc)(*(undefined4 *)(param_1 + 0x1c));
    sVar2 = (*DAT_10121f24)(*(undefined4 *)(param_1 + 0x30));
    (*DAT_10121ed0)((int)sVar2);
    (*DAT_10121ec8)(iVar1);
    (*DAT_10121ec4)();
  }
  return;
}

