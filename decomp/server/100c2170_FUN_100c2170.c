
uint __thiscall FUN_100c2170(void *this,int param_1)

{
  int iVar1;
  uint local_4;
  
  iVar1 = param_1 * 2;
  if (*(short *)(&DAT_100f74f4 + iVar1) != 0) {
    *(int *)((int)this + 0x48) = param_1;
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x38);
  }
  if (*(short *)(&DAT_100f7d66 + *(short *)(&DAT_100f7a68 + iVar1) * 2) == param_1) {
    local_4 = 1;
  }
  else {
    local_4 = 1;
    do {
      param_1 = (int)*(short *)(&DAT_100f7b30 + iVar1);
      if (0x61 < param_1) {
        local_4 = (uint)(byte)(&DAT_100f79b8)[local_4 * 4];
      }
      iVar1 = param_1 * 2;
    } while (*(short *)(&DAT_100f7d64 + ((int)*(short *)(&DAT_100f7a68 + iVar1) + local_4) * 2) !=
             param_1);
  }
  return -(uint)((int)*(short *)(&DAT_100f7bf8 +
                                ((int)*(short *)(&DAT_100f7a68 + param_1 * 2) + local_4) * 2) !=
                0x61) &
         (int)*(short *)(&DAT_100f7bf8 +
                        ((int)*(short *)(&DAT_100f7a68 + param_1 * 2) + local_4) * 2);
}

