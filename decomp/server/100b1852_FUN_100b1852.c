
void __fastcall
FUN_100b1852(char *param_1,uint param_2,undefined4 param_3,byte *param_4,int *param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint *in_EAX;
  undefined3 uVar8;
  undefined4 unaff_EBX;
  
  uVar2 = *in_EAX;
  uVar3 = *in_EAX;
  *(char *)in_EAX = (char)*in_EAX - (char)unaff_EBX;
  uVar4 = *in_EAX;
  uVar5 = *in_EAX;
  uVar6 = *in_EAX;
  *param_1 = *param_1 + (char)in_EAX;
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  cVar7 = (char)in_EAX + '\n';
  cVar7 = cVar7 + *(char *)(CONCAT22((short)((uint)unaff_EBX >> 0x10),CONCAT11(0x17,(char)unaff_EBX)
                                    ) + CONCAT31(uVar8,cVar7)) + '\b';
  *param_1 = *param_1 + cVar7;
  piVar1 = (int *)(CONCAT31(uVar8,cVar7) + -0x6f6f6f70);
  *piVar1 = *piVar1 + (param_2 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6);
  if (param_5[0x73] != 0) {
    FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + param_5[0x73],param_4,(int)param_5,
                 0x1011a820,0x56);
    return;
  }
  FUN_100b18e0(param_1,*(int *)(DAT_10122044 + 0x98) + *param_5,param_4,(int)param_5,0x1011a820,0x56
              );
  return;
}

