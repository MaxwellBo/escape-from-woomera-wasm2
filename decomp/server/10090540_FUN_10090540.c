
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_10090540(CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  iVar5 = *(int *)(param_1 + 0x2fc);
  if (iVar5 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 4;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 3;
  }
  else {
    FUN_10019420((void *)(iVar5 + 0x168),0);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) =
         *(undefined4 *)(*(int *)(param_1 + 0x2fc) + 0x350);
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2fc) + 4) + 0x1a0) & 0x100) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  FUN_10019420(param_1 + 0x168,0);
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(*(int *)(param_1 + 4) + 0x170) == 1) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x160) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
    FUN_10062000(param_1,8);
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 2;
    iVar1 = *(int *)(param_1 + 4);
    local_10 = *(float *)(iVar1 + 0xe4) + _DAT_100de4ac;
    local_14 = *(float *)(iVar1 + 0xec);
    local_18 = *(float *)(iVar1 + 0xe8);
    FUN_100afdc0(iVar1,iVar1 + 0xdc,&local_18);
    if ((iVar5 == 0) || ((*(byte *)(*(int *)(iVar5 + 4) + 0x1a0) & 8) == 0)) {
      CBaseEntity::SUB_StartFadeOut(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x138) = 0;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x108) = 0;
    *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
    return 0;
  }
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x310) != 0)) {
    if ((*(byte *)(*(int *)(iVar5 + 4) + 0x1a0) & 0x80) == 0) {
      FUN_10008420(param_1,0,&local_18,local_c);
      iVar5 = *(int *)(param_1 + 4);
      fVar2 = *(float *)(iVar5 + 8);
      fVar3 = *(float *)(iVar5 + 0xc);
      uVar4 = *(undefined4 *)(iVar5 + 0x10);
      if (SQRT((fVar2 - local_18) * (fVar2 - local_18) + (fVar3 - local_14) * (fVar3 - local_14)) <
          (float)_DAT_100f0fb0) {
        local_18 = fVar2;
        local_14 = fVar3;
        local_10 = (float)uVar4;
      }
      *(float *)(iVar5 + 8) = local_18;
      *(float *)(*(int *)(param_1 + 4) + 0xc) = local_14;
      *(float *)(*(int *)(param_1 + 4) + 0x10) =
           *(float *)(*(int *)(param_1 + 4) + 0x10) + _DAT_100dd618;
      *(uint *)(*(int *)(param_1 + 4) + 0x1a4) = *(uint *)(*(int *)(param_1 + 4) + 0x1a4) | 0x200;
      iVar5 = (*DAT_10121e70)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
      if (iVar5 < 0) {
        iVar5 = *(int *)(param_1 + 4);
        *(float *)(iVar5 + 8) = fVar2;
        *(float *)(iVar5 + 0xc) = fVar3;
        *(undefined4 *)(iVar5 + 0x10) = uVar4;
      }
      else if (iVar5 == 0) {
        *(float *)(*(int *)(param_1 + 4) + 0x10) = local_10;
        *(uint *)(*(int *)(param_1 + 4) + 0x1a4) =
             *(uint *)(*(int *)(param_1 + 4) + 0x1a4) & 0xfffffdff;
      }
      FUN_100afe10((int)param_1,*(int *)(param_1 + 4) + 8);
      *(uint *)(*(int *)(param_1 + 4) + 0x118) = *(uint *)(*(int *)(param_1 + 4) + 0x118) | 0x20;
    }
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 400) = 0;
  if (_DAT_100dd5f8 < *(float *)(*(int *)(param_1 + 4) + 0x160)) {
    *(undefined4 *)(param_1 + 0x1dc) = 1;
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1dc) = 8;
  *(uint *)(param_1 + 0x15c) = *(uint *)(param_1 + 0x15c) | 0x100;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 1;
  FUN_10061070((int *)param_1);
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x170) = 0;
  return 1;
}

