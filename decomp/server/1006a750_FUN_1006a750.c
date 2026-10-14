
void __fastcall FUN_1006a750(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(code **)(param_1 + 0x74) = CNihilanthHVR::DissipateThink;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x14c) = 0x437f0000;
  (*DAT_10121ec0)(0,0x17,0,0);
  (*DAT_10121ec8)(8);
  uVar1 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
  (*DAT_10121ed0)(uVar1);
  iVar2 = FUN_10019460((uint *)(param_1 + 0x168));
  iVar2 = (*DAT_10121f24)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x208));
  (*DAT_10121ed0)(iVar2 + 0x1000);
  (*DAT_10121ed0)((int)DAT_10131d06);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0);
  (*DAT_10121ec8)(0x32);
  (*DAT_10121ec8)(0x50);
  (*DAT_10121ec8)(0x50);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0x80);
  (*DAT_10121ec8)(0x40);
  (*DAT_10121ec8)(0xff);
  (*DAT_10121ec8)(0x1e);
  (*DAT_10121ec4)();
  return;
}

