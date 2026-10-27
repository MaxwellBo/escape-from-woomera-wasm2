
undefined4 __thiscall
FUN_1003e190(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  FUN_10026030(param_3,param_2);
  uVar1 = FUN_10026090();
  iVar4 = 0;
  *(uint *)((int)this + 0x8b4) = uVar1;
  if (0 < (int)uVar1) {
    piVar3 = (int *)((int)this + 0x840);
    pcVar5 = (char *)((int)this + 0x900);
    do {
      iVar7 = 0x40;
      pcVar6 = pcVar5;
      pcVar2 = FUN_10026180();
      FUN_10030b50(pcVar2,pcVar6,iVar7);
      if ((int *)*piVar3 != (int *)0x0) {
        (**(code **)(*(int *)*piVar3 + 0x264))(pcVar5);
      }
      iVar4 = iVar4 + 1;
      if ((iVar4 < 5) && ((int *)piVar3[7] != (int *)0x0)) {
        (**(code **)(*(int *)piVar3[7] + 0x264))(pcVar5);
      }
      pcVar5 = pcVar5 + 0x40;
      piVar3 = piVar3 + 1;
    } while (iVar4 < *(int *)((int)this + 0x8b4));
  }
  if (*(int **)((int)this + 0xaa4) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0xaa4) + 0x210))();
  }
  return 1;
}

