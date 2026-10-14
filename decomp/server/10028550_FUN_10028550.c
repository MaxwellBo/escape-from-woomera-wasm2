
void __thiscall FUN_10028550(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = &DAT_10103c44;
  pbVar2 = *(byte **)(param_1 + 4);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_1002858a:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_1002858f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_1002858a;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_1002858f:
  if (iVar3 == 0) {
    FUN_100b0880((float *)(*(int *)((int)this + 4) + 0x44),*(char **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0xc) = 1;
    return;
  }
  FUN_10026880(this,param_1);
  return;
}

