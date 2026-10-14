
/* WARNING: Instruction at (ram,0x1009d873) overlaps instruction at (ram,0x1009d872)
    */
/* WARNING: Removing unreachable block (ram,0x1009d86a) */

uint * __fastcall FUN_1009d886(int *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 in_EAX;
  uint *puVar3;
  int unaff_EBP;
  byte in_CF;
  
  bVar1 = (byte)in_EAX - 9;
  cVar2 = bVar1 - in_CF;
  puVar3 = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *(char *)(unaff_EBP + -0x28) =
       *(char *)(unaff_EBP + -0x28) + (char)((uint)param_1 >> 8) +
       ((byte)in_EAX < 9 || bVar1 < in_CF);
  *puVar3 = *puVar3 | (uint)param_2;
  *puVar3 = *puVar3 | (uint)param_2;
  if (*puVar3 == 0) {
    *puVar3 = (uint)(*puVar3 + (int)puVar3);
    *(char *)puVar3 = (char)*puVar3 + cVar2;
    return puVar3;
  }
  *puVar3 = *puVar3 | (uint)param_2;
  if ((int)*puVar3 < 0) {
    *(char *)puVar3 = (char)*puVar3 + cVar2;
    return (uint *)0x2;
  }
  *puVar3 = *puVar3 | (uint)param_2;
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_2 = (int)(*param_2 + (int)puVar3);
  *(undefined4 *)(param_1[1] + 0x128) = 7;
  *(undefined4 *)(param_1[1] + 0x138) = 0;
  FUN_10007fc0((int)param_1,0.0);
  puVar3 = (uint *)(**(code **)(*param_1 + 8))(0x3dcccccd);
  return puVar3;
}

