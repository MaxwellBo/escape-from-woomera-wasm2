
void __fastcall FUN_100578c6(int *param_1,char param_2)

{
  uint in_EAX;
  int iVar1;
  byte bVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  bVar2 = (byte)((uint)unaff_EBX >> 8);
  *(byte *)(in_EAX + 5) = *(byte *)(in_EAX + 5) ^ bVar2;
  *(char *)(unaff_ESI + 0x78) = *(char *)(unaff_ESI + 0x78) + param_2;
  *(char *)(unaff_EBX + 0x78) = *(char *)(unaff_EBX + 0x78) + bVar2 + (0xfa880aef < in_EAX);
  iVar1 = (**(code **)(*param_1 + 0x58))();
  if (iVar1 == 1) {
    param_1[0x2e] = 2;
    iVar1 = 1;
  }
  else {
    if (iVar1 != 3) goto LAB_1005792f;
    param_1[0x2e] = 0;
    iVar1 = 0;
  }
  FUN_10098c10((uint *)(*(int *)(param_1[1] + 0x1c8) + *(int *)(DAT_10122044 + 0x98)),param_1,
               param_1,iVar1,0);
LAB_1005792f:
  FUN_100577d0(param_1);
  return;
}

