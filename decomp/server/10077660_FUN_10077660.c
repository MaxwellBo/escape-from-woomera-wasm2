
void __fastcall FUN_10077660(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  void *this;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar2 + 0x1e8);
  if (iVar3 != 0) {
    __ftol();
    if (*(int *)(param_1 + 0xec) == 0) {
      FUN_10094b20(DAT_10122044,*(undefined4 *)(iVar2 + 0x208),3,
                   (char *)(*(int *)(iVar2 + 0x1f0) + *(int *)((int)DAT_10122044 + 0x98)),
                   *(undefined4 *)(param_1 + 0xf4),0x3f4ccccd,0,100);
      iVar2 = *(int *)(param_1 + 4);
      lVar4 = __ftol();
      this = (void *)(*(int *)(iVar2 + 0x1e8) + *(int *)((int)DAT_10122044 + 0x98));
      FUN_10094b20(this,*(undefined4 *)(iVar2 + 0x208),6,this,*(undefined4 *)(param_1 + 0xf4),
                   0x3f4ccccd,0,(int)lVar4);
      *(undefined4 *)(param_1 + 0xec) = 1;
      return;
    }
    if (*(int *)(param_1 + 0xf0) != 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      lVar4 = __ftol();
      bVar1 = *(byte *)(param_1 + 0xf0);
      lVar5 = __ftol();
      (*DAT_10121ff4)(10,*(undefined4 *)(iVar2 + 0x208),*(undefined2 *)(param_1 + 0x118),0,
                      &DAT_10121dd8,&DAT_10121dd8,0,0,
                      ((ushort)lVar4 & 0x3f | (bVar1 & 7) << 6) << 6 | (uint)lVar5 & 0x3f,uVar6,
                      uVar7,uVar8);
      return;
    }
    lVar4 = __ftol();
    FUN_10094b20(*(void **)(iVar2 + 0x208),*(void **)(iVar2 + 0x208),6,
                 (char *)(*(int *)((int)DAT_10122044 + 0x98) + iVar3),
                 *(undefined4 *)(param_1 + 0xf4),0x3f4ccccd,0x80,(int)lVar4);
  }
  return;
}

