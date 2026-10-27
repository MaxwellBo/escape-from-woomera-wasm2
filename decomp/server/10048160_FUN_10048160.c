
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_10048160(int *param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float unaff_ESI;
  float unaff_EDI;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float in_stack_ffffffcc;
  float in_stack_ffffffd0;
  float in_stack_ffffffd4;
  float fStack_18;
  undefined1 auStack_10 [16];
  
  param_1[0xcc] = 0;
  iVar1 = FUN_10019460((uint *)(param_1 + 0x58));
  if (((((*(uint *)(*(int *)(iVar1 + 4) + 0x1a4) & 0x200) != 0) && (2 < param_1[0xce])) &&
      ((float)param_1[200] < *DAT_10122044)) &&
     (((*(byte *)(param_1 + 0x57) & 0x20) == 0 && (param_3 <= _DAT_100de47c)))) {
    piVar2 = (int *)FUN_10019460((uint *)(param_1 + 0x58));
    puVar5 = &stack0xffffffcc;
    (**(code **)(*piVar2 + 0xf8))();
    puVar4 = auStack_10;
    pfVar3 = (float *)(**(code **)(*param_1 + 0x214))();
    FUN_10044b60((float *)&stack0xffffffe0,param_1[1],pfVar3,(float)puVar4,(float)puVar5,
                 in_stack_ffffffcc,in_stack_ffffffd0,in_stack_ffffffd4);
    if ((unaff_EDI != DAT_10121dd8) || ((unaff_ESI != DAT_10121ddc || (fStack_18 != DAT_10121de0))))
    {
      param_1[0xc9] = (int)unaff_EDI;
      param_1[0xca] = (int)unaff_ESI;
      param_1[0xcc] = 1;
      param_1[0xcb] = (int)fStack_18;
      return 1;
    }
  }
  return 0;
}

