
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10004610(void *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [8];
  float fStack_30;
  int iStack_10;
  
  if (*DAT_10122044 < *(float *)((int)param_1 + 0x344)) {
    return *(undefined4 *)((int)param_1 + 0x340);
  }
  if (((((*(byte *)((int)param_1 + 0x15c) & 0x10) != 0) && (_DAT_100dd61c <= param_3)) &&
      (param_3 <= _DAT_100ddaf0)) && ((float)_DAT_100dd648 <= param_2)) {
    iVar3 = FUN_10096a80(param_1);
    if (iVar3 != 0) {
      FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
      FUN_10008450(param_1,0,auStack_5c,auStack_50);
      piVar4 = (int *)FUN_10019460((uint *)((int)param_1 + 0x160));
      puVar10 = auStack_38;
      puVar8 = auStack_5c;
      uVar9 = 0;
      puVar7 = auStack_44;
      uVar5 = (**(code **)(*piVar4 + 0x104))();
      FUN_100afc60(&stack0xffffff9c,uVar5,(int)puVar7,puVar8,uVar9);
      if (fStack_30 != (float)_DAT_100dd628) {
        iVar3 = FUN_10019460((uint *)((int)param_1 + 0x160));
        if (iStack_10 != *(int *)(*(int *)(iVar3 + 4) + 0x208)) goto LAB_10004755;
      }
      fVar6 = (float10)(*DAT_10121f74)(0x40000000,0x40a00000,puVar10);
      fVar1 = *DAT_10122044;
      *(undefined4 *)((int)param_1 + 0x340) = 1;
      *(float *)((int)param_1 + 0x344) = (float)(fVar6 + (float10)fVar1);
      return 1;
    }
  }
LAB_10004755:
  fVar1 = *DAT_10122044;
  fVar2 = (float)_DAT_100dd608;
  *(undefined4 *)((int)param_1 + 0x340) = 0;
  *(float *)((int)param_1 + 0x344) = fVar1 + fVar2;
  return 0;
}

