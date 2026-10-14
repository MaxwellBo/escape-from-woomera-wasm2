
void __thiscall
FUN_10061810(int *param_1,byte *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 != (byte *)0x0) {
    iVar1 = (**(code **)(*param_1 + 0xb8))();
    if (iVar1 != 0) {
      if (*param_2 == 0x21) {
        FUN_10094b20(*(void **)(param_1[1] + 0x208),*(void **)(param_1[1] + 0x208),2,(char *)param_2
                     ,param_4,param_5,0,100);
        return;
      }
      FUN_100945d0(*(undefined4 *)(param_1[1] + 0x208),param_2);
    }
  }
  return;
}

