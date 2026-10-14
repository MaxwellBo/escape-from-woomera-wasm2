
void __fastcall FUN_1003fa40(int *param_1)

{
  if ((char)param_1[0x45] == '\0') {
    (**(code **)(*param_1 + 0x210))();
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*param_1 + 0x178))(0,0,0,param_1[0x2f]);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  return;
}

