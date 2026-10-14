
void __fastcall FUN_10036510(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 local_30 [48];
  
  if (DAT_100a5178 != -0xab0) {
    FUN_100499f0(local_30,&DAT_10078410);
    (**(code **)(param_1[0x30] + 0x200))(param_1 + 0x30,local_30);
  }
  param_1[0x9a15] = 0;
  FUN_1003dda0(DAT_100a5178);
  iVar1 = 0;
  piVar2 = param_1 + 0x9a60;
  do {
    piVar2[-0x4a] = 0;
    *piVar2 = 0;
    *(undefined1 *)((int)param_1 + iVar1 + 0x26aa8) = 0;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x4a);
  if (DAT_100a3a9c == 0) {
    FUN_100367f0(param_1,0,(byte *)0x0);
  }
  else {
    FUN_100365c0(param_1);
  }
  FUN_10034850(param_1 + 0x26f,param_1[0x9a15]);
  FUN_10036a70(param_1);
  return;
}

