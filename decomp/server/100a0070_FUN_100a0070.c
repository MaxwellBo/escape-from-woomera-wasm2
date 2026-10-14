
void __fastcall FUN_100a0070(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  
  *(undefined4 *)(param_1[1] + 0x10c) = 0;
  param_1[0x1f] = (int)CMultiManager::ManagerUse;
  param_1[0x1d] = (int)CMultiManager::ManagerThink;
  param_1[0x2e] = 0;
  if (0x10 < param_1[0x2f]) {
    (*DAT_10121efc)(1,s_WARNING__multi_manager___s__has_t_1011911c,
                    *(int *)(DAT_10122044 + 0x98) + *(int *)(param_1[1] + 0x1cc),0x10,param_1[0x2f])
    ;
    param_1[0x2f] = 0x10;
  }
  if ((*(uint *)(param_1[1] + 0x1a0) & 0x20000000) == 0) {
    param_1[0x5a] = 3;
  }
  do {
    iVar5 = 1;
    bVar3 = false;
    if (param_1[0x2f] < 2) break;
    pfVar4 = (float *)(param_1 + 0x43);
    do {
      if (*pfVar4 < pfVar4[-1]) {
        fVar2 = pfVar4[-0x10];
        fVar1 = *pfVar4;
        pfVar4[-0x10] = pfVar4[-0x11];
        *pfVar4 = pfVar4[-1];
        pfVar4[-0x11] = fVar2;
        pfVar4[-1] = fVar1;
        bVar3 = true;
      }
      iVar5 = iVar5 + 1;
      pfVar4 = pfVar4 + 1;
    } while (iVar5 < param_1[0x2f]);
  } while (bVar3);
  if ((*(byte *)(param_1[1] + 0x1a0) & 0x10) != 0) {
    param_1[0x1d] = (int)CMultiManager::UseThink;
    param_1[0x1f] = 0;
    FUN_10063370(param_1);
  }
  return;
}

