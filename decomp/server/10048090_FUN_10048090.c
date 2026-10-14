
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10048090(int *param_1,undefined4 param_2,float param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puStack_5c;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  float fStack_34;
  int iStack_14;
  
  puStack_5c = auStack_50;
  if ((((*(byte *)(param_1 + 0x57) & 0x20) == 0) && (_DAT_100ddb10 < param_3)) &&
     (param_3 <= _DAT_100de9b8)) {
    (**(code **)(*param_1 + 0x214))();
    piVar1 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
    puVar5 = &stack0xffffffac;
    uVar6 = 0;
    puVar4 = auStack_48;
    uVar2 = (**(code **)(*piVar1 + 0x104))();
    FUN_100afc60(&puStack_5c,uVar2,(int)puVar4,puVar5,uVar6);
    if ((fStack_34 != _DAT_100dd618) &&
       (iVar3 = FUN_10019460((uint *)(param_1 + 0x58)),
       iStack_14 != *(int *)(*(int *)(iVar3 + 4) + 0x208))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

