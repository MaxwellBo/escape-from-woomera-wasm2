
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10022b6a(undefined4 param_1,undefined4 param_2,float param_3)

{
  char *in_EAX;
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  undefined3 uVar6;
  int unaff_EBP;
  float unaff_retaddr;
  int *piVar5;
  
  uVar6 = (undefined3)((uint)param_2 >> 8);
  cVar4 = (char)param_2 + *in_EAX;
  piVar5 = (int *)CONCAT31(uVar6,cVar4);
  pcVar1 = in_EAX + -*piVar5;
  *(char *)(unaff_EBP + 0x2b) =
       *(char *)(unaff_EBP + 0x2b) + (char)pcVar1 + (in_EAX < (char *)*piVar5);
  cVar4 = cVar4 + *pcVar1;
  piVar5 = (int *)CONCAT31(uVar6,cVar4);
  pcVar2 = pcVar1 + -*piVar5;
  pcVar2[0x2b] = pcVar2[0x2b] + (char)((uint)pcVar2 >> 8) + (pcVar1 < (char *)*piVar5);
  piVar5 = (int *)CONCAT31(uVar6,cVar4 + *pcVar2);
  (&stack0xfffffffc)[(int)pcVar2] = (&stack0xfffffffc)[(int)pcVar2] + (char)pcVar2;
  iVar3 = CONCAT31((int3)((uint)pcVar2 >> 8),(char)pcVar2 + '\n');
  *piVar5 = *piVar5 + iVar3;
  *(int *)(&stack0xfffffffc + iVar3) = *(int *)(&stack0xfffffffc + iVar3) + iVar3;
  if ((((float)_DAT_100dd648 < unaff_retaddr) && (_DAT_100dd658 < param_3)) &&
     (param_3 <= _DAT_100de9b8)) {
    return 1;
  }
  return 0;
}

