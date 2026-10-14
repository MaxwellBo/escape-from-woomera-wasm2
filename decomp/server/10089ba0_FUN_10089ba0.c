
void __fastcall FUN_10089ba0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*DAT_10121db8 + 0x18))();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1[1] + 0x114) = 0;
  }
  else {
    *(undefined4 *)(param_1[1] + 0x114) = 1;
  }
  uVar3 = *(undefined4 *)(param_1[1] + 0x114);
  uVar2 = (**(code **)(*param_1 + 0x19c))();
  FUN_100b4130(param_1,0x101153f4,0x101153e0,5,s_python_10115408,uVar2,uVar3);
  return;
}

