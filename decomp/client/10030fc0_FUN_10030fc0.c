
undefined4 __fastcall FUN_10030fc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = FUN_10031300((byte *)s_sprites__d_train_spr_10079b44);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    (*DAT_100a5000)(*(undefined4 *)(param_1 + 0x14),DAT_100a3aac >> 0x10 & 0xff,
                    DAT_100a3aac >> 8 & 0xff,DAT_100a3aac & 0xff);
    iVar2 = (*DAT_100a4ff8)(*(undefined4 *)(param_1 + 0x14),0);
    iVar4 = DAT_100a4dd0 - DAT_100a3aa8;
    iVar3 = (*DAT_100a4ffc)(*(undefined4 *)(param_1 + 0x14),0);
    (*DAT_100a500c)(*(int *)(param_1 + 0x18) + -1,
                    DAT_100a4dcc / 3 + ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2),iVar4 - iVar2,0);
    return 1;
  }
  return 1;
}

