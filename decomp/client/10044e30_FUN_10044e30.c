
/* WARNING: Removing unreachable block (ram,0x10044ebc) */
/* WARNING: Removing unreachable block (ram,0x10044eca) */
/* WARNING: Removing unreachable block (ram,0x10044eea) */
/* WARNING: Removing unreachable block (ram,0x10044eeb) */
/* WARNING: Removing unreachable block (ram,0x10044f09) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10044e30(void)

{
  int *piVar1;
  int *piVar2;
  
  (*DAT_100a5038)(s_EFW_Cntxt_1007ace4,&LAB_10044950);
  (*DAT_100a5038)(s_EFW_CtPrv_1007acd8,&LAB_10044bd0);
  _DAT_100bc358 = (*DAT_100a4ff0)(s__sprites_ascale_spr_1007896f + 1);
  piVar1 = DAT_100bc330;
  DAT_100bc338 = 0;
  DAT_100bc350 = 0;
  _DAT_100bc354 = 0;
  for (piVar2 = DAT_100bc32c; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    *piVar2 = 0;
  }
  DAT_100bc330 = DAT_100bc32c;
  DAT_100bc348 = DAT_100bc344;
  DAT_100bc384 = 0;
  return;
}

