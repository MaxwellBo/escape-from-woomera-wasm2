
void __thiscall FUN_100b2e30(void *this,byte *param_1)

{
  int iVar1;
  uint uVar2;
  void *extraout_ECX;
  undefined4 *puVar3;
  
  puVar3 = &DAT_10131d10;
  while (((byte *)*puVar3 == (byte *)0x0 ||
         (uVar2 = FUN_100d8b20(this,(byte *)*puVar3,param_1), this = extraout_ECX, uVar2 != 0))) {
    puVar3 = puVar3 + 2;
    if (0x10131e0f < (int)puVar3) {
      DAT_1013239c = DAT_1013239c + 1;
      if (0x1f < DAT_1013239c) {
        DAT_1013239c = 0;
      }
      iVar1 = DAT_1013239c;
      (&DAT_10131d10)[DAT_1013239c * 2] = param_1;
      (&DAT_10131d14)[iVar1 * 2] = iVar1;
      return;
    }
  }
  return;
}

