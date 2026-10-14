
undefined4 __thiscall FUN_10049660(void *this,int *param_1)

{
  int iVar1;
  
  if (*(int *)(param_1[1] + 0x170) == 0) {
    iVar1 = (**(code **)(*param_1 + 100))(DAT_10126b74,0);
    if (iVar1 != 0) {
      (*DAT_10121ec0)(1,DAT_101248d0,0,*(undefined4 *)(param_1[1] + 0x208));
      (*DAT_10121ee0)(**(int **)((int)this + 4) + *(int *)(DAT_10122044 + 0x98));
      (*DAT_10121ec4)();
      FUN_10094b20((void *)param_1[1],*(undefined4 *)(param_1[1] + 0x208),3,
                   s_items_smallmedkit1_wav_1010df24,0x3f800000,0x3f4ccccd,0,100);
      iVar1 = (**(code **)(*DAT_10121db8 + 0x94))(this);
      if (iVar1 != 0) {
        (**(code **)(*(int *)this + 0xec))();
        return 1;
      }
      FUN_100b0ef0((int)this);
      return 1;
    }
  }
  return 0;
}

