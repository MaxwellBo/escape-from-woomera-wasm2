
void __thiscall FUN_1002c7d0(void *this,byte *param_1)

{
  uint uVar1;
  void *this_00;
  void *extraout_ECX;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  pbVar4 = (byte *)((int)this + 0x14);
  this_00 = this;
  do {
    uVar1 = FUN_10056910(this_00,pbVar4,param_1);
    if (uVar1 == 0) {
      puVar5 = (undefined4 *)(iVar3 * 0x30 + 0x14 + (int)this);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      return;
    }
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 0x30;
    this_00 = extraout_ECX;
  } while (iVar3 < 4);
  return;
}

