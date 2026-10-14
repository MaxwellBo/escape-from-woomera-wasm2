
void __fastcall FUN_10017260(CBaseButton *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined3 extraout_var;
  void *this;
  int iVar3;
  CBaseButton *pCVar4;
  int iVar5;
  int iVar6;
  
  this = (void *)(*(int *)(*(int *)(param_1 + 4) + 0x1e8) + *(int *)(DAT_10122044 + 0x98));
  FUN_10094b20(this,*(undefined4 *)(*(int *)(param_1 + 4) + 0x208),2,this,0x3f800000,0x3f4ccccd,0,
               100);
  uVar2 = FUN_10019410((uint *)(param_1 + 0xc0));
  bVar1 = FUN_100b0030(*(int *)(param_1 + 0x158),uVar2);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    FUN_10026660(*(int *)(param_1 + 4),(int *)(param_1 + 0x168),1,1.4013e-45);
    return;
  }
  iVar3 = *(int *)(param_1 + 4);
  pCVar4 = param_1 + 0x168;
  iVar5 = 0;
  FUN_10026660(iVar3,(int *)pCVar4,0,1.4013e-45);
  *(undefined4 *)(param_1 + 0xdc) = 2;
  if (((*(byte *)(*(int *)(param_1 + 4) + 0x1a0) & 1) != 0) && (*(int *)(param_1 + 0x160) == 0)) {
    CBaseButton::TriggerAndWait(param_1);
    return;
  }
  *(code **)(param_1 + 0x130) = CBaseButton::TriggerAndWait;
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x1f8);
  if (*(int *)(param_1 + 0x160) == 0) {
    FUN_10003850(&stack0xffffffe8,(undefined4 *)(param_1 + 0x104));
    FUN_10099340(param_1,iVar3,(int)pCVar4,iVar5,iVar6);
    return;
  }
  FUN_10003850(&stack0xffffffe8,(undefined4 *)(param_1 + 0x11c));
  FUN_10099620(param_1,iVar3,(int)pCVar4,iVar5,iVar6);
  return;
}

