
void __fastcall FUN_100056d6(int *param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  char in_AL;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  byte *pbVar6;
  char *unaff_EBX;
  uint *unaff_ESI;
  char in_CF;
  
  *param_2 = *param_2 + '\x10' + in_CF;
  cVar4 = (char)param_2;
  *unaff_EBX = *unaff_EBX + cVar4;
  *unaff_EBX = *unaff_EBX + cVar4;
  out(0x52,(char)unaff_EBX);
  *unaff_EBX = *unaff_EBX + cVar4;
  pcVar3 = (char *)((uint)unaff_EBX | 0x1b100052);
  *pcVar3 = *pcVar3 + cVar4;
  pbVar6 = (byte *)(*param_1 * 0x10);
  bVar5 = (byte)pbVar6;
  *pbVar6 = *pbVar6 & bVar5;
  pcVar3 = (char *)CONCAT31((int3)((uint)pcVar3 >> 8),(char)pcVar3 * '\x02');
  *pcVar3 = *pcVar3 + bVar5;
  uVar1 = *unaff_ESI;
  *unaff_ESI = (uint)(pbVar6 + *unaff_ESI);
  pbVar6[-0x6eefffaf] = pbVar6[-0x6eefffaf] + in_AL + CARRY4(uVar1,(uint)pbVar6);
  *pcVar3 = *pcVar3 + bVar5;
  *pcVar3 = *pcVar3 + bVar5;
  out(*unaff_ESI,(short)pbVar6);
  *pcVar3 = *pcVar3 + bVar5;
  out((char)unaff_ESI[1],(short)pbVar6);
  *pcVar3 = *pcVar3 + bVar5;
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

