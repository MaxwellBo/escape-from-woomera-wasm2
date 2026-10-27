
int * __fastcall FUN_100b3640(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 auStack_c [3];
  
  puVar4 = auStack_c;
  iVar5 = param_1;
  puVar1 = (undefined4 *)
           (**(code **)(*DAT_10121db8 + 0x88))
                     (puVar4,param_1,*(int *)(param_1 + 4) + 0x50,
                      *(undefined4 *)(*(int *)(param_1 + 4) + 0x198));
  piVar2 = (int *)FUN_1001a1f0(*(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4),puVar1,puVar4
                               ,iVar5);
  if (piVar2 != (int *)0x0) {
    *(uint *)(piVar2[1] + 0x118) = *(uint *)(piVar2[1] + 0x118) | 0x80;
    piVar2[0x1e] = 0;
    piVar2[0x1d] = (int)CBasePlayerItem::AttemptToMaterialize;
    (*DAT_10121e70)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x208));
    iVar5 = *piVar2;
    fVar3 = (float10)(**(code **)(*DAT_10121db8 + 0x80))(param_1);
    (**(code **)(iVar5 + 0x10))((float)fVar3);
    return piVar2;
  }
  (*DAT_10121efc)(1,s_Respawn_failed_to_create__s__1011ba4c,
                  *(int *)(DAT_10122044 + 0x98) + **(int **)(param_1 + 4));
  return (int *)0x0;
}

