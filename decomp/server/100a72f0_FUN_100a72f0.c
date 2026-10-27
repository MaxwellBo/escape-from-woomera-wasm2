
void __thiscall FUN_100a72f0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = &DAT_10118c2c;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_100a732a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_100a732f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_100a732a;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_100a732f:
  if (iVar3 == 0) {
    uVar4 = (*DAT_10121f14)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)((int)this + 200) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10098a10(this,param_1);
  return;
}

