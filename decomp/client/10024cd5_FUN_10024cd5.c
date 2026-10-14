
void __fastcall FUN_10024cd5(undefined4 param_1,undefined4 param_2,float param_3,int param_4)

{
  char *in_EAX;
  int iVar1;
  
  iVar1 = CONCAT31((int3)((uint)param_2 >> 8),(char)param_2 + (char)((uint)in_EAX >> 8) + *in_EAX) +
          -1;
  in((short)CONCAT31((int3)((uint)iVar1 >> 8),(char)iVar1 + *in_EAX));
  if ((DAT_100a97b4 == 0) && (DAT_100a9abc != 0)) {
    FUN_10024030(param_3,param_4);
  }
  FUN_10024840(param_3,param_4);
  return;
}

