
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_1000fbe0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined1 *puVar5;
  float in_stack_ffffffd0;
  float fVar6;
  float fStack_14;
  float fStack_10;
  
  if ((param_3 <= _DAT_100de4b4) && (*(float *)(param_1 + 0x310) < *DAT_10122044)) {
    piVar2 = (int *)FUN_10019410((uint *)(param_1 + 0x160));
    if (piVar2 != (int *)0x0) {
      fStack_14 = *(float *)(*(int *)(param_1 + 4) + 0xc);
      fStack_10 = *(float *)(*(int *)(param_1 + 4) + 0x10) + _DAT_100ddaec;
      fVar6 = 2.543795e-29;
      (*DAT_10121f74)();
      fVar4 = (float)(*(int *)(param_1 + 4) + 8);
      puVar5 = &stack0xffffffd0;
      (**(code **)(*piVar2 + 0x104))();
      puVar3 = (undefined4 *)
               FUN_10010510(&fStack_14,*(int *)(param_1 + 4),(float *)&stack0xffffffe0,(float)puVar5
                            ,fVar4,in_stack_ffffffd0,fVar6);
      iVar1 = *(int *)(param_1 + 4);
      *(undefined4 *)(iVar1 + 0x44) = *puVar3;
      *(undefined4 *)(iVar1 + 0x48) = puVar3[1];
      *(undefined4 *)(iVar1 + 0x4c) = puVar3[2];
      iVar1 = *(int *)(param_1 + 4);
      if (((*(float *)(iVar1 + 0x44) != DAT_10121dd8) || (*(float *)(iVar1 + 0x48) != DAT_10121ddc))
         || (*(float *)(iVar1 + 0x4c) != DAT_10121de0)) {
        return 1;
      }
    }
  }
  return 0;
}

