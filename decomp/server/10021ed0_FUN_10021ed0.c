
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10021ed0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined1 auStack_24 [12];
  int iStack_18;
  
  if (*param_1 == 8) {
    iVar2 = FUN_10019410((uint *)((int)this + 0x160));
    if (iVar2 == 0) goto LAB_10022025;
    iStack_18 = param_1[1];
    iVar1 = *(int *)this;
    uStack_2c = 0x10021ff4;
    FUN_10003850(auStack_24,(undefined4 *)(*(int *)(iVar2 + 4) + 0x174));
    FUN_10003850(auStack_30,(undefined4 *)(*(int *)(iVar2 + 4) + 8));
    iVar2 = (**(code **)(iVar1 + 0x1bc))();
    if (iVar2 != 0) goto LAB_10021f61;
    pcVar3 = s_GetPathToEnemy_failed___10101c7c;
  }
  else {
    if (*param_1 != 9) {
      iStack_18 = 0x10021ef1;
      FUN_100057f0(this,param_1);
      return;
    }
    iStack_18 = param_1[1];
    iVar2 = *(int *)this;
    uStack_2c = 0x10021f4a;
    FUN_10003850(auStack_24,(undefined4 *)(*(int *)((int)this + 4) + 0x174));
    FUN_10003850(auStack_30,(undefined4 *)((int)this + 0x2a8));
    iVar2 = (**(code **)(iVar2 + 0x1bc))();
    if (iVar2 != 0) {
LAB_10021f61:
      if ((*(uint *)((int)this + 0x15c) & 0x40000000) != 0) {
        return;
      }
      *(undefined4 *)((int)this + 0x1e0) = 4;
      return;
    }
    pcVar3 = s_GetPathToEnemyLKP_failed___10101c98;
  }
  (*DAT_10121efc)(2,pcVar3);
LAB_10022025:
  *(uint *)((int)this + 0x15c) = *(uint *)((int)this + 0x15c) | 0x40000000;
  return;
}

