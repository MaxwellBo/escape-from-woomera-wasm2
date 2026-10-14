
int __thiscall FUN_10061e00(void *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = s_DropItem_____No_item_name__10111638;
  }
  else {
    iVar3 = FUN_1001a1f0(param_1,param_2,param_3,*(undefined4 *)(*(int *)((int)this + 4) + 0x208));
    if (iVar3 != 0) {
      iVar1 = *(int *)((int)this + 4);
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
      *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar1 + 0x28);
      fVar4 = (float10)(*DAT_10121f74)(0,0x42c80000);
      iVar1 = *(int *)(iVar3 + 4);
      *(undefined4 *)(iVar1 + 0x5c) = 0;
      *(float *)(iVar1 + 0x60) = (float)fVar4;
      *(undefined4 *)(iVar1 + 100) = 0;
      return iVar3;
    }
    pcVar5 = s_DropItem_____Didn_t_create__10111618;
  }
  (*DAT_10121efc)(1,pcVar5);
  return 0;
}

