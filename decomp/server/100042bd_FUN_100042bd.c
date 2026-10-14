
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100042bd(int *param_1,char param_2)

{
  byte bVar1;
  float fVar2;
  char cVar3;
  int in_EAX;
  uint *puVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *unaff_EDI;
  byte in_AF;
  undefined4 uVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar4 = (uint *)(in_EAX + -1);
  *(char *)param_1 = (char)*param_1 + (char)param_1 + (puVar4 < (uint *)*puVar4);
  bVar1 = 9 < ((byte)puVar4 & 0xf) | in_AF;
  uVar5 = CONCAT31((int3)((uint)puVar4 >> 8),(byte)puVar4 + bVar1 * -6) & 0xffffff0f;
  pcVar6 = (char *)CONCAT22((short)(uVar5 >> 0x10),
                            CONCAT11((char)((uint)puVar4 >> 8) - bVar1,(char)uVar5));
  *pcVar6 = *pcVar6 + param_2;
  *pcVar6 = *pcVar6 + param_2;
  *unaff_EDI = *unaff_EDI + 1;
  *pcVar6 = *pcVar6 + param_2;
  pcVar6 = pcVar6 + 0x54efffbf;
  *pcVar6 = *pcVar6 + param_2 + '\x01';
  cVar3 = (char)pcVar6;
  *pcVar6 = *pcVar6 + cVar3;
  *pcVar6 = *pcVar6 + cVar3;
  cRam01050505 = cRam01050505 + cVar3;
  (**(code **)(*param_1 + 0x2c))();
  iVar7 = param_1[1];
  if (*(int *)(iVar7 + 0xb8) == 0) {
    uVar8 = *(undefined4 *)(iVar7 + 0x208);
    pcVar6 = s_models_agrunt_mdl_10101a84;
  }
  else {
    uVar8 = *(undefined4 *)(iVar7 + 0x208);
    pcVar6 = (char *)((int)DAT_10122044[0x26] + *(int *)(iVar7 + 0xb8));
  }
  (*DAT_10121e10)(uVar8,pcVar6);
  uStack_18 = 0x42000000;
  uStack_14 = 0x42000000;
  uStack_10 = 0x42800000;
  uStack_c = 0xc2000000;
  uStack_8 = 0xc2000000;
  uStack_4 = 0;
  FUN_100afdc0(param_1[1],&uStack_c,&uStack_18);
  *(undefined4 *)(param_1[1] + 0x10c) = 3;
  *(undefined4 *)(param_1[1] + 0x108) = 4;
  param_1[0xb4] = 0xc3;
  *(undefined4 *)(param_1[1] + 0x118) = 0;
  if (*(float *)(param_1[1] + 0x160) == _DAT_100dd5f8) {
    *(undefined4 *)(param_1[1] + 0x160) = DAT_10126a54;
  }
  uStack_18 = 0x41c00000;
  uStack_14 = 0x42800000;
  uStack_10 = 0x42400000;
  param_1[0xbb] = 0x41c00000;
  param_1[0xbc] = 0x42800000;
  param_1[0x70] = 0x3e4ccccd;
  param_1[0x76] = 0;
  param_1[0xae] = 8;
  param_1[0xbd] = 0x42400000;
  iVar7 = (*DAT_10121f70)(0,10);
  fVar2 = (float)iVar7 + *DAT_10122044 + _DAT_100dd63c;
  param_1[0xd4] = (int)fVar2;
  param_1[0xd3] = (int)fVar2;
  (**(code **)(*param_1 + 0x134))();
  return;
}

