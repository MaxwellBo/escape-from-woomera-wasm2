
undefined4 __fastcall
FUN_100cf734(undefined4 param_1,undefined4 param_2,int param_3,PVOID param_4,undefined4 param_5)

{
  byte *in_EAX;
  int iVar1;
  int extraout_ECX;
  undefined1 *puVar2;
  byte *unaff_ESI;
  int iVar3;
  undefined1 *puVar4;
  int iStack_c;
  undefined4 uStack_8;
  
  *unaff_ESI = *unaff_ESI ^ (byte)((uint)param_2 >> 8) ^ *in_EAX;
  puVar4 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  if ((*(uint *)(param_3 + 4) & 6) == 0) {
    iStack_c = param_3;
    uStack_8 = param_5;
    *(int **)((int)param_4 + -4) = &iStack_c;
    iVar1 = *(int *)((int)param_4 + 8);
    for (iVar3 = *(int *)((int)param_4 + 0xc); iVar3 != -1; iVar3 = *(int *)(iVar1 + iVar3 * 0xc)) {
      if (*(int *)(iVar1 + 4 + iVar3 * 0xc) != 0) {
        iVar1 = (**(code **)(iVar1 + 4 + iVar3 * 0xc))(puVar2,iVar3,puVar4);
        param_4 = *(PVOID *)(puVar2 + 0xc);
        if (iVar1 != 0) {
          if (iVar1 < 0) {
            return 0;
          }
          iVar1 = *(int *)((int)param_4 + 8);
          __global_unwind2(param_4);
          puVar2 = (undefined1 *)((int)param_4 + 0x10);
          __local_unwind2((int)param_4,iVar3);
          FUN_100c9f62();
          *(undefined4 *)((int)param_4 + 0xc) = *(undefined4 *)(iVar1 + extraout_ECX * 4);
          (**(code **)(iVar1 + 8 + extraout_ECX * 4))();
        }
      }
      iVar1 = *(int *)((int)param_4 + 8);
    }
  }
  else {
    __local_unwind2((int)param_4,-1);
  }
  return 1;
}

