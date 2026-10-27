
void __fastcall FUN_1000c8b0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 auStack_c [3];
  
  (**(code **)(*param_1 + 0x178))();
  FUN_10009030(auStack_c);
  fVar2 = FUN_10018f40();
  if ((float10)(float)param_1[0x40] <= fVar2) {
    iVar1 = (*DAT_1007f038)(0,1);
    (**(code **)(*param_1 + 0x17c))(iVar1 != 0,1,0);
    fVar2 = FUN_10018fb0(*(int *)(param_1[0x37] + 0x308),10.0,0x41700000);
    param_1[0x40] = (int)(float)fVar2;
  }
  return;
}

