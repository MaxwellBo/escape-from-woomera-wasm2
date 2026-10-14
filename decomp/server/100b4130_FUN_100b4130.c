
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_100b4130(void *this,int param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  
  iVar2 = (**(code **)(*(int *)this + 0x128))();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_1007c980(*(void **)((int)this + 0xdc));
  *(int *)(*(int *)(*(int *)((int)this + 0xdc) + 4) + 0xbc) =
       param_1 - *(int *)(DAT_10122044 + 0x98);
  *(int *)(*(int *)(*(int *)((int)this + 0xdc) + 4) + 0xc0) =
       param_2 - *(int *)(DAT_10122044 + 0x98);
  uVar3 = 0xffffffff;
  do {
    pcVar5 = param_4;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_4 + 1;
    cVar1 = *param_4;
    param_4 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  pcVar6 = (char *)(*(int *)((int)this + 0xdc) + 0x66c);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  (**(code **)(*(int *)this + 0x17c))(param_3,param_5,param_6);
  fVar7 = FUN_100ae400();
  *(float *)(*(int *)((int)this + 0xdc) + 700) = (float)(fVar7 + (float10)_DAT_100dd648);
  fVar7 = FUN_100ae400();
  *(float *)((int)this + 0x100) = (float)(fVar7 + (float10)_DAT_100dd628);
  return 1;
}

