
void __thiscall FUN_100baec0(void *this,undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  bool bVar10;
  bool bVar11;
  
  puVar8 = *(undefined4 **)((int)this + 4);
  puVar5 = (undefined4 *)puVar8[1];
  if ((undefined4 *)puVar8[1] != DAT_1013243c) {
    do {
      uVar2 = FUN_100be360(puVar5 + 3,param_2);
      if ((int)uVar2 < 0) {
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        puVar6 = (undefined4 *)*puVar5;
        puVar8 = puVar5;
      }
      puVar5 = puVar6;
    } while (puVar6 != DAT_1013243c);
  }
  if (puVar8 != *(undefined4 **)((int)this + 4)) {
    uVar2 = puVar8[5];
    pbVar9 = (byte *)puVar8[4];
    if (pbVar9 == (byte *)0x0) {
      pbVar9 = (byte *)&DAT_100f7058;
    }
    uVar1 = *(uint *)(param_2 + 8);
    uVar4 = uVar1;
    if (uVar2 <= uVar1) {
      uVar4 = uVar2;
    }
    bVar10 = false;
    uVar3 = 0;
    bVar11 = true;
    pbVar7 = *(byte **)(param_2 + 4);
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar10 = *pbVar7 < *pbVar9;
      bVar11 = *pbVar7 == *pbVar9;
      pbVar7 = pbVar7 + 1;
      pbVar9 = pbVar9 + 1;
    } while (bVar11);
    if (!bVar11) {
      uVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
    }
    if (uVar3 == 0) {
      if (uVar1 < uVar2) goto LAB_100baf58;
      uVar3 = (uint)(uVar1 != uVar2);
    }
    if (-1 < (int)uVar3) {
      *param_1 = puVar8;
      return;
    }
  }
LAB_100baf58:
  *param_1 = *(undefined4 **)((int)this + 4);
  return;
}

