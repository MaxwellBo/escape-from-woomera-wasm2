
void __fastcall FUN_100a62a2(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  short in_AX;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  char unaff_BH;
  char in_CF;
  
  pbVar3 = (byte *)(int)in_AX;
  *(char *)(param_2 + 0x60) = *(char *)(param_2 + 0x60) + unaff_BH + in_CF;
  bVar1 = *pbVar3;
  *(char *)param_1 = (char)*param_1 + (char)in_AX;
  *param_1 = (int)(pbVar3 + *param_1);
  *param_1 = (int)(pbVar3 + *param_1);
  *(byte **)pbVar3 = pbVar3 + *(int *)pbVar3;
  *(char *)param_1 = (char)*param_1 + (char)in_AX;
  *param_1 = (int)(pbVar3 + *param_1);
  pbVar3[-0x6f6f6f70] = pbVar3[-0x6f6f6f70] + ((byte)param_2 | bVar1);
  if ((param_3 == 0) && (iVar4 = (*DAT_10121e5c)(), iVar4 != 0)) {
    param_3 = iVar4 + 0x80;
  }
  iVar4 = *(int *)(param_3 + 0x208);
  if (((iVar4 == 0) || (iVar2 = iRam00000004, *(int *)(iVar4 + 0x7c) == 0)) &&
     (puVar5 = (undefined4 *)(*DAT_10121f04)(iVar4,0x15c), iVar2 = param_3,
     puVar5 != (undefined4 *)0x0)) {
    *puVar5 = &PTR_FUN_100f4588;
    puVar5[1] = param_3;
    return;
  }
  iRam00000004 = iVar2;
  return;
}

