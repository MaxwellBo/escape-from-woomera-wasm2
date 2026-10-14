
void __fastcall FUN_1004bfc5(int *param_1,char param_2)

{
  char cVar1;
  undefined4 in_EAX;
  float *pfVar3;
  int iVar4;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  undefined2 in_ES;
  longlong lVar5;
  undefined4 uVar6;
  float afStack_114 [4];
  int *piStack_104;
  char *pcVar2;
  
  *(char *)(unaff_EBP + -0x6eeffb41) =
       *(char *)(unaff_EBP + -0x6eeffb41) + param_2 + (*(byte *)(unaff_EDI + -0x405ceffc) < 4);
  cVar1 = (char)in_EAX + ' ';
  pcVar2 = (char *)CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  *pcVar2 = *pcVar2 + cVar1;
  *unaff_ESI = (int)(pcVar2 + *unaff_ESI);
  *unaff_ESI = (int)(pcVar2 + *unaff_ESI);
  piStack_104 = (int *)CONCAT22(piStack_104._2_2_,in_ES);
  uVar6 = 0xbf891004;
  if (*piStack_104 != 0x5d) {
    FUN_10005140(param_1,piStack_104);
    return;
  }
  pfVar3 = (float *)FUN_10002280(param_1 + 0xd3,afStack_114,64.0);
  iVar4 = param_1[1];
  FUN_10060260(param_1,*pfVar3 + *(float *)(iVar4 + 8),pfVar3[1] + *(float *)(iVar4 + 0xc),
               pfVar3[2] + *(float *)(iVar4 + 0x10));
  iVar4 = *param_1;
  lVar5 = __ftol();
  (**(code **)(iVar4 + 0x128))((int)lVar5,uVar6);
  iVar4 = FUN_100617e0((int)param_1);
  if (iVar4 != 0) {
    param_1[0x78] = 4;
  }
  return;
}

