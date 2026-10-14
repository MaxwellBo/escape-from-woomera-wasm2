
void __fastcall FUN_1009e20a(int *param_1,uint param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  byte unaff_BL;
  int unaff_EBP;
  byte in_CF;
  bool bVar5;
  float10 in_ST0;
  uint *puVar3;
  
  bVar5 = unaff_BL < 9 || (byte)(unaff_BL - 9) < in_CF;
  bVar1 = (byte)in_EAX + (byte)param_1;
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  cVar2 = bVar1 + bVar5;
  puVar3 = (uint *)CONCAT31(uVar4,cVar2);
  *param_1 = (int)in_ST0;
  *(char *)puVar3 =
       (char)*puVar3 + cVar2 + (CARRY1((byte)in_EAX,(byte)param_1) || CARRY1(bVar1,bVar5));
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *puVar3 = (uint)(*puVar3 + (int)puVar3);
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *puVar3 = (uint)(*puVar3 + (int)puVar3);
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *param_1 = (int)(*param_1 + (int)puVar3);
  *puVar3 = (uint)(*puVar3 + (int)puVar3);
  *(char *)(unaff_EBP + -0x21) = *(char *)(unaff_EBP + -0x21) + (char)(param_2 >> 8);
  *puVar3 = *puVar3 | param_2;
  puVar3 = (uint *)(CONCAT31(uVar4,cVar2) | 0xe1);
  *puVar3 = *puVar3 | param_2;
  cVar2 = (char)puVar3;
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *(char *)param_1 = (char)*param_1 + cVar2;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *param_1 = *param_1 + (int)puVar3;
  *(char *)(puVar3 + -0x1bdbdbdc) = (char)puVar3[-0x1bdbdbdc] + (char)param_2;
  if (param_5 == 0) {
    *(undefined4 *)(param_1[1] + 0x16c) = 0;
    param_1[0x1d] = (int)CTentacle::DieThink;
    param_1[0xc3] = 0x30;
  }
  else if (param_5 == 1) {
    if (param_3 != 0) {
      FUN_10095d30(2,(undefined4 *)(*(int *)(param_3 + 4) + 8),0x400,1.0);
      return;
    }
  }
  else if (param_5 == 3) {
    *(undefined4 *)(param_1[1] + 0x16c) = 0;
    param_1[0x1d] = (int)CTentacle::DieThink;
    param_1[0xc3] = 0x2c;
    return;
  }
  return;
}

