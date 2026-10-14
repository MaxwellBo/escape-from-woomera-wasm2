
void FUN_10030f49(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  undefined4 unaff_retaddr;
  
  SegmentLimit(*(undefined4 *)CONCAT31((int3)((uint)in_EAX >> 8),uRam0b10030e));
  FUN_10031080(&DAT_100a3c30,unaff_retaddr,param_1,param_2);
  return;
}

