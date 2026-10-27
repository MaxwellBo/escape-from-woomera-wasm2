
void __thiscall FUN_10022b40(void *this,byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  
  iVar2 = KB_Find(this,param_1);
  if (iVar2 == 0) {
    puVar3 = _malloc(0x28);
    puVar7 = puVar3;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    uVar4 = 0xffffffff;
    do {
      pbVar6 = param_1;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pbVar6 = param_1 + 1;
      bVar1 = *param_1;
      param_1 = pbVar6;
    } while (bVar1 != 0);
    uVar4 = ~uVar4;
    pbVar6 = pbVar6 + -uVar4;
    pbVar8 = (byte *)(puVar3 + 2);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pbVar8 = *(undefined4 *)pbVar6;
      pbVar6 = pbVar6 + 4;
      pbVar8 = pbVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pbVar8 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      pbVar8 = pbVar8 + 1;
    }
    puVar3[1] = param_2;
    *puVar3 = DAT_100a9994;
    DAT_100a9994 = puVar3;
  }
  return;
}

