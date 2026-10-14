
int * __fastcall FUN_100a4790(int *param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    while( true ) {
      puVar1 = (uint *)(param_1 + 0x30);
      bVar2 = FUN_10019450(puVar1);
      if (CONCAT31(extraout_var,bVar2) == 0) break;
      iVar3 = FUN_10019410(puVar1);
      iVar3 = FUN_10019f50((void *)param_1[0x2e],iVar3);
      if (iVar3 != 0) {
        piVar4 = FUN_100a4790((int *)param_1[0x2f]);
        param_1[0x2f] = (int)piVar4;
        return param_1;
      }
      piVar4 = (int *)FUN_10019410(puVar1);
      FUN_100a4bc0((void *)param_1[0x2e],piVar4);
      param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
      (**(code **)(*param_1 + 8))(0x3dcccccd);
      param_1 = (int *)param_1[0x2f];
    }
    if (param_1[0x2f] == 0) break;
    param_1[0x1d] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(0x3dcccccd);
    param_1 = (int *)param_1[0x2f];
  }
  return param_1;
}

