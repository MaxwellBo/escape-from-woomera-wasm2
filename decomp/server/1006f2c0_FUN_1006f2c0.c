
void __fastcall FUN_1006f2c0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;
  undefined1 local_4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x10) + iVar4;
      if (*(int *)(iVar2 + 8) != 0) {
        local_8 = *(undefined4 *)(iVar2 + 0xc);
        local_4 = 0;
        iVar2 = FUN_100aebf0(0,s_model_10105414,&local_8);
        if (iVar2 == 0) {
          (*DAT_10121efc)(2,s___Could_not_find_model__s_10113270,&local_8);
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 8 + iVar4) = 0;
        }
        else {
          *(undefined4 *)(*(int *)(param_1 + 0x10) + 8 + iVar4) = *(undefined4 *)(iVar2 + 4);
          iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 8 + iVar4);
          uVar1 = *(uint *)(iVar2 + 0x1a4);
          if ((uVar1 & 0x10000) == 0) {
            *(uint *)(iVar2 + 0x1a4) = uVar1 + 0x10000;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 4) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

