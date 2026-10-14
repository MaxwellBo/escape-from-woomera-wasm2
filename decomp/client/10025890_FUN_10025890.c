
void __thiscall FUN_10025890(void *this,int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  int extraout_EDX;
  int iVar6;
  byte *pbVar7;
  byte abStack_50 [80];
  
  iVar5 = 0;
  iVar6 = 0;
  pcVar4 = *(char **)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xb0) = 1;
  *(int *)((int)this + 0x98) = param_2;
  *(int *)((int)this + 0x94) = param_1;
  *(undefined4 *)((int)this + 0xa4) = 0;
  cVar2 = *pcVar4;
  while (cVar2 != '\0') {
    if (cVar2 == '\n') {
      *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
      if (*(int *)((int)this + 0xa4) < iVar5) {
        *(int *)((int)this + 0xa4) = iVar5;
      }
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + *(short *)(&DAT_100a4ddc + cVar2 * 2);
    }
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    iVar6 = iVar6 + 1;
    cVar2 = *pcVar1;
  }
  *(int *)((int)this + 0xb8) = iVar6;
  iVar5 = *(int *)((int)this + 0xb0) * DAT_100a4dd8;
  *(int *)((int)this + 0xa8) = iVar5;
  iVar5 = FUN_100254b0(*(float *)(param_1 + 0x10),iVar5);
  *(int *)((int)this + 0xa0) = iVar5;
  pbVar7 = *(byte **)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xd0) = 0;
  FUN_10025720((int)this,extraout_EDX);
  param_2 = 0;
  if (0 < *(int *)((int)this + 0xb0)) {
    do {
      iVar5 = 0;
      *(undefined4 *)((int)this + 0xb4) = 0;
      *(undefined4 *)((int)this + 0xac) = 0;
      bVar3 = *pbVar7;
      while ((bVar3 != 0 && (bVar3 != 10))) {
        iVar6 = *(int *)((int)this + 0xb4);
        abStack_50[iVar6] = bVar3;
        pbVar7 = pbVar7 + 1;
        *(int *)((int)this + 0xac) =
             *(int *)((int)this + 0xac) + (int)*(short *)(&DAT_100a4ddc + (uint)bVar3 * 2);
        *(int *)((int)this + 0xb4) = iVar6 + 1;
        bVar3 = *pbVar7;
      }
      iVar6 = *(int *)((int)this + 0xac);
      abStack_50[*(int *)((int)this + 0xb4)] = 0;
      pbVar7 = pbVar7 + 1;
      iVar6 = FUN_10025430(*(float *)(param_1 + 0xc),iVar6);
      *(int *)((int)this + 0x9c) = iVar6;
      if (0 < *(int *)((int)this + 0xb4)) {
        do {
          bVar3 = abStack_50[iVar5];
          *(uint *)((int)this + 200) = (uint)bVar3;
          iVar6 = (int)*(short *)(&DAT_100a4ddc + (uint)bVar3 * 2) + *(int *)((int)this + 0x9c);
          FUN_10025540((int)this);
          if (((-1 < *(int *)((int)this + 0x9c)) && (-1 < *(int *)((int)this + 0xa0))) &&
             (iVar6 <= DAT_100a4dcc)) {
            (*DAT_100a5058)(*(int *)((int)this + 0x9c),*(int *)((int)this + 0xa0),
                            *(undefined4 *)((int)this + 200),*(undefined4 *)((int)this + 0xbc),
                            *(undefined4 *)((int)this + 0xc0),*(undefined4 *)((int)this + 0xc4));
          }
          iVar5 = iVar5 + 1;
          *(int *)((int)this + 0x9c) = iVar6;
        } while (iVar5 < *(int *)((int)this + 0xb4));
      }
      *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + DAT_100a4dd8;
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)((int)this + 0xb0));
  }
  return;
}

