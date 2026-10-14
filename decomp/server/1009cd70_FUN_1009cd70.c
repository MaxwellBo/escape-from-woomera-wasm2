
undefined4 __thiscall FUN_1009cd70(void *this,byte *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  void *this_00;
  
  if ((param_1 != (byte *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_2 + 0xcc))();
    if (iVar1 != 0) {
      pcVar2 = (char *)(**(code **)(*(int *)this + 0xc4))(param_1);
      if (*pcVar2 != '\0') {
        pcVar2 = (char *)(**(code **)(*(int *)this + 0xc4))(param_2);
        if (*pcVar2 != '\0') {
          uVar3 = (**(code **)(*(int *)this + 0xc4))(param_2);
          pbVar4 = (byte *)(**(code **)(*(int *)this + 0xc4))(param_1,uVar3);
          uVar5 = FUN_100d8b20(this_00,pbVar4,param_1);
          if (uVar5 == 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

