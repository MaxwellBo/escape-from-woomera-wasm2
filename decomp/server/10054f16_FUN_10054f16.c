
void __fastcall FUN_10054f16(int param_1,undefined2 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  uint in_EAX;
  int iVar3;
  char unaff_BL;
  int unaff_ESI;
  int iVar4;
  undefined1 *unaff_EDI;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = in(param_2);
  *unaff_EDI = uVar1;
  iVar4 = unaff_ESI + -1;
  *(char *)(in_EAX + 0x54e805e) = *(char *)(in_EAX + 0x54e805e) + unaff_BL + (0xfab17fef < in_EAX);
  *(char *)(in_EAX + 0x9b2da4b0) =
       *(char *)(in_EAX + 0x9b2da4b0) + (char)param_2 + (0xfab16bef < in_EAX + 0x54e8010);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 6;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 1;
  FUN_100afe10(param_1,*(int *)(param_1 + 4) + 8);
  uStack_18 = 0x41800000;
  uStack_14 = 0x41800000;
  uStack_10 = 0x41800000;
  uStack_c = 0xc1800000;
  uStack_8 = 0xc1800000;
  uStack_4 = 0;
  FUN_100afdc0(*(int *)(param_1 + 4),&uStack_c,&uStack_18);
  *(code **)(param_1 + 0x78) = CItem::ItemTouch;
  iVar3 = (*DAT_10121e70)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  if (iVar3 == 0) {
    piVar2 = *(int **)(param_1 + 4);
    (*DAT_10121efc)(4,s_Item__s_fell_out_of_level_at__f__1010fa50,
                    *(int *)(DAT_10122044 + 0x98) + *piVar2,(double)(float)piVar2[2],
                    (double)(float)piVar2[3],(double)(float)piVar2[4],iVar4);
    FUN_100b0ef0(param_1);
  }
  return;
}

