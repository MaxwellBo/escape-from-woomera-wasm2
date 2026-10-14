
void __thiscall FUN_10074e60(int *param_1,int *param_2)

{
  void *this;
  
  (*DAT_10121efc)(2,s__s_Blocked_by__s_10113e54,*(int *)param_1[1] + *(int *)(DAT_10122044 + 0x98),
                  *(int *)param_2[1] + *(int *)(DAT_10122044 + 0x98));
  (**(code **)(*param_2 + 0x60))(param_1[1],param_1[1],0x3f800000,1);
  this = *(void **)(param_1[1] + 0x1e8);
  if (this != (void *)0x0) {
    FUN_10094b20(this,*(undefined4 *)(param_1[1] + 0x208),6,
                 (char *)(*(int *)(DAT_10122044 + 0x98) + (int)this),0,0,0x20,100);
  }
  if (param_1[0x37] == 2) {
    (**(code **)(*param_1 + 8))(0);
    param_1[0x1d] = (int)FUN_1007af10;
    return;
  }
  if (param_1[0x37] == 3) {
    (**(code **)(*param_1 + 8))(0);
    param_1[0x1d] = (int)FUN_1007af00;
  }
  return;
}

