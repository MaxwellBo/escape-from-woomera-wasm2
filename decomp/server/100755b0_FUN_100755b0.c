
void __thiscall FUN_100755b0(CFuncTrain *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = FUN_1001a170(param_1,param_4);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    uVar1 = *(uint *)(iVar3 + 0x1a0);
    if ((uVar1 & 1) != 0) {
      *(uint *)(iVar3 + 0x1a0) = uVar1 & 0xfffffffe;
      CFuncTrain::Next(param_1);
      return;
    }
    *(uint *)(iVar3 + 0x1a0) = uVar1 | 1;
    iVar3 = *(int *)(*(int *)(param_1 + 4) + 400);
    if (iVar3 != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c8) = *(undefined4 *)(iVar3 + 0x24c);
    }
    FUN_10019680((int)param_1);
    FUN_100638f0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    FUN_10063ac0((int)param_1,DAT_10121dd8,DAT_10121ddc,DAT_10121de0);
    *(undefined4 *)(param_1 + 0x170) = 0;
    pvVar2 = *(void **)(*(int *)(param_1 + 4) + 0x1e8);
    if (pvVar2 != (void *)0x0) {
      FUN_10094b20(pvVar2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),6,
                   (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar2),0,0,0x20,100);
    }
    pvVar2 = *(void **)(*(int *)(param_1 + 4) + 0x1ec);
    if (pvVar2 != (void *)0x0) {
      FUN_10094b20(pvVar2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,
                   (char *)(*(int *)(DAT_10122044 + 0x98) + (int)pvVar2),
                   *(undefined4 *)(param_1 + 0x160),0x3f4ccccd,0,100);
    }
  }
  return;
}

