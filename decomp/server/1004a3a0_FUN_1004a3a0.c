
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1004a3a0(int *param_1,float param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puStack_5c;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  float fStack_34;
  
  if ((((*(byte *)(param_1 + 0x57) & 0x20) == 0) && (param_3 <= _DAT_100de9b8)) &&
     ((float)_DAT_100dd648 <= param_2)) {
    puStack_5c = (undefined1 *)0x1004a3e3;
    iVar1 = FUN_10096a80(param_1);
    if (iVar1 != 0) {
      puStack_5c = (undefined1 *)0x1004a3f8;
      piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
      puStack_5c = (undefined1 *)0x1004a402;
      iVar1 = (**(code **)(*piVar2 + 0xcc))();
      if ((iVar1 != 0) || (_DAT_100ddb10 < param_3)) {
        puStack_5c = auStack_50;
        (**(code **)(*param_1 + 0x214))();
        piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
        uVar7 = 1;
        puVar5 = &stack0xffffffac;
        uVar6 = 1;
        puVar4 = auStack_48;
        uVar3 = (**(code **)(*piVar2 + 0x104))();
        FUN_100afc20(&puStack_5c,uVar3,(int)puVar4,(int)puVar5,uVar6,uVar7);
        if (fStack_34 == (float)_DAT_100dd628) {
          return 1;
        }
      }
    }
  }
  return 0;
}

