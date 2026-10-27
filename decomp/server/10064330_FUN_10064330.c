
void __fastcall FUN_10064330(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10081540((void *)param_1[0x37],auStack_c);
  fVar2 = FUN_100ae400();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    iVar1 = (*DAT_10121f70)(0,1);
    (**(code **)(*param_1 + 0x17c))(iVar1 != 0,1,0);
    fVar2 = FUN_100ae4b0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    param_1[0x40] = (int)(float)fVar2;
  }
  return;
}

