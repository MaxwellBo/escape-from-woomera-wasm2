
void __fastcall FUN_10037b00(int *param_1)

{
  int unaff_ESI;
  int unaff_EDI;
  int *piStack_c;
  int *piStack_8;
  
  (**(code **)(*(int *)param_1[9] + 100))();
  (**(code **)(*(int *)param_1[10] + 100))(&stack0xffffffec,&piStack_c);
  *piStack_c = (int)&stack0x00000000 * 2 + -0x18;
  if (unaff_EDI <= unaff_ESI) {
    unaff_EDI = unaff_ESI;
  }
  *piStack_8 = unaff_EDI;
  (**(code **)(*param_1 + 0x14))(*piStack_c,unaff_EDI);
  return;
}

