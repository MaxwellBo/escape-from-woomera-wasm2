
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100218e0(void *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  void *this;
  undefined4 uVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [3];
  undefined1 auStack_c [12];
  
  switch(*param_2) {
  case 1:
    FUN_10008450(param_1,0,&uStack_24,auStack_18);
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(0x1c);
    iVar5 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
    (*DAT_10121ed0)(iVar5 + 0x1000);
    (*DAT_10121edc)(uStack_24);
    (*DAT_10121edc)(uStack_20);
    (*DAT_10121edc)(uStack_1c);
    (*DAT_10121edc)(0x3f800000);
    (*DAT_10121ec8)(0xff);
    (*DAT_10121ec8)(0xc0);
    (*DAT_10121ec8)(0x40);
    (*DAT_10121ec8)(0x14);
    (*DAT_10121edc)(0xc2000000);
    (*DAT_10121ec4)();
    *(undefined4 *)((int)param_1 + 0x354) = 0xc0;
    iVar5 = FUN_100c8388(this,(byte *)param_2[1]);
    pfVar3 = DAT_10122044;
    fVar2 = (float)_DAT_100e1120;
    fVar1 = *DAT_10122044;
    *(undefined4 *)((int)param_1 + 0x358) = 0xff;
    *(float *)((int)param_1 + 0x35c) = (float)iVar5 * fVar2 + fVar1;
    iVar5 = FUN_100c8388(pfVar3,(byte *)param_2[1]);
    break;
  case 2:
    FUN_10008450(param_1,0,auStack_18,auStack_c);
    (*DAT_10121ec0)(0,0x17,0,0);
    (*DAT_10121ec8)(0x1c);
    iVar5 = (*DAT_10121f24)(*(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
    (*DAT_10121ed0)(iVar5 + 0x1000);
    (*DAT_10121edc)(0);
    (*DAT_10121edc)(0);
    (*DAT_10121edc)(0);
    (*DAT_10121edc)(0x42000000);
    (*DAT_10121ec8)(0xff);
    (*DAT_10121ec8)(0xc0);
    (*DAT_10121ec8)(0x40);
    (*DAT_10121ec8)(10);
    (*DAT_10121edc)(0x42000000);
    (*DAT_10121ec4)();
    iVar4 = FUN_1001a1f0(0x101063d8,auStack_18,(undefined4 *)(*(int *)((int)param_1 + 4) + 0x50),
                         *(undefined4 *)(*(int *)((int)param_1 + 4) + 0x208));
    iVar5 = *(int *)(iVar4 + 4);
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    *(undefined4 *)(iVar5 + 0x28) = 0x42000000;
    if (*(int *)((int)param_1 + 0x2fc) == 0) {
      *(undefined4 *)(iVar4 + 0x160) = *(undefined4 *)((int)param_1 + 0x160);
      uVar6 = *(undefined4 *)((int)param_1 + 0x164);
    }
    else {
      *(undefined4 *)(iVar4 + 0x160) = *(undefined4 *)((int)param_1 + 0x168);
      uVar6 = *(undefined4 *)((int)param_1 + 0x16c);
    }
    *(undefined4 *)(iVar4 + 0x164) = uVar6;
    *(undefined4 *)((int)param_1 + 0x354) = 0;
    *(undefined4 *)((int)param_1 + 0x358) = 0;
    return;
  case 3:
    FUN_10021840((int)param_1);
    *(float *)((int)param_1 + 0x344) = *DAT_10122044;
    iVar5 = FUN_100c8388((void *)param_2[1],(void *)param_2[1]);
    *(float *)((int)param_1 + 0x348) =
         (float)iVar5 * (float)_DAT_100e1120 + *(float *)((int)param_1 + 0x344);
    return;
  case 4:
    *(undefined4 *)((int)param_1 + 0x354) = 0xff;
    iVar5 = FUN_100c8388(param_1,(byte *)param_2[1]);
    fVar2 = (float)_DAT_100e1120;
    fVar1 = *DAT_10122044;
    *(undefined4 *)((int)param_1 + 0x358) = 0xff;
    *(float *)((int)param_1 + 0x35c) = (float)iVar5 * fVar2 + fVar1;
    iVar5 = FUN_100c8388((void *)param_2[1],(void *)param_2[1]);
    *(float *)((int)param_1 + 0x360) = (float)iVar5 * (float)_DAT_100e1120 + *DAT_10122044;
    return;
  case 5:
    *(undefined4 *)((int)param_1 + 0x354) = 0xc0;
    iVar5 = FUN_100c8388(param_1,(byte *)param_2[1]);
    pfVar3 = DAT_10122044;
    fVar2 = (float)_DAT_100e1120;
    fVar1 = *DAT_10122044;
    *(undefined4 *)((int)param_1 + 0x358) = 0xc0;
    *(float *)((int)param_1 + 0x35c) = (float)iVar5 * fVar2 + fVar1;
    iVar5 = FUN_100c8388(pfVar3,(byte *)param_2[1]);
    break;
  default:
    FUN_10060620(param_1,param_2);
    return;
  }
  *(float *)((int)param_1 + 0x360) = (float)iVar5 * (float)_DAT_100e1120 + *DAT_10122044;
  return;
}

