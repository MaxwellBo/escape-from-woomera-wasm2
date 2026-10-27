
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_100178e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float param_5)

{
  int iVar1;
  longlong lVar2;
  
  if ((_DAT_10059a18 <= param_5) && ((_DAT_10059eb0 < param_5 || (param_5 != _DAT_10059a18)))) {
    lVar2 = __ftol();
    iVar1 = (int)lVar2;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    (*DAT_100a501c)(param_1,param_2,iVar1,param_4,0,0xa0,0,0xff);
    param_1 = param_1 + iVar1;
    param_3 = param_3 - iVar1;
  }
  (*DAT_100a501c)(param_1,param_2,param_3,param_4,DAT_100a3aac >> 0x10 & 0xff,
                  DAT_100a3aac >> 8 & 0xff,DAT_100a3aac & 0xff,0x80);
  return param_1 + param_3;
}

