
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_10016da0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_10026030(param_3,param_2);
  _DAT_100a3a94 = FUN_10026090();
  if ((_DAT_100a3a94 & 0x10) != 0) {
    (*DAT_100a5024)(DAT_100a14c0,DAT_100a14c4,DAT_100a14c8,DAT_100a14cc,DAT_100a14d0,0xff,0xff,0xff)
    ;
    return 1;
  }
  iVar1 = *(int *)((int)this + 0x1c);
  if ((iVar1 != 0) && ((_DAT_100a3a94 & 5) == 0)) {
    (*DAT_100a5024)(*(undefined4 *)(iVar1 + 0xf8),*(undefined4 *)(iVar1 + 0xfc),
                    *(undefined4 *)(iVar1 + 0x100),*(undefined4 *)(iVar1 + 0x104),
                    *(undefined4 *)(iVar1 + 0x108),0xff,0xff,0xff);
    return 1;
  }
  DAT_100a3968 = 0;
  (*DAT_100a5024)(0,DAT_100a3950,DAT_100a3954,DAT_100a3958,DAT_100a395c,0,0,0);
  return 1;
}

