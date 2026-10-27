
undefined4 FUN_1001edc0(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  void *this;
  
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_2 + 0x1c)) {
    return 1;
  }
  if (((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c)) && (*(int *)(param_1 + 0x18) != 0)) &&
     (*(int *)(param_2 + 0x18) != 0)) {
    pbVar1 = (byte *)(**(code **)(DAT_100a5148 + 0x20))
                               (*(int *)(param_1 + 0x18),s_hostname_10078a18);
    pbVar2 = (byte *)(**(code **)(DAT_100a5148 + 0x20))
                               (*(undefined4 *)(param_2 + 0x18),s_hostname_10078a18);
    if ((pbVar1 != (byte *)0x0) && (pbVar2 != (byte *)0x0)) {
      uVar3 = FUN_10056910(this,pbVar1,pbVar2);
      if ((int)uVar3 < 0) {
        return 1;
      }
    }
  }
  return 0;
}

