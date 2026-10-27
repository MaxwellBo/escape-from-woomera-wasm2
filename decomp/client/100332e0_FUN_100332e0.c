
void __fastcall FUN_100332e0(int *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x248))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x17c))(4);
    (**(code **)(*param_1 + 0x180))(0,0,param_1[3],param_1[4]);
  }
  (**(code **)(*param_1 + 0x17c))(6);
  (**(code **)(*param_1 + 0x184))(0,0,param_1[3],param_1[4]);
  return;
}

