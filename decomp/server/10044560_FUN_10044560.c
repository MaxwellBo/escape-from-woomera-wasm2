
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10044560(int param_1,int param_2,float *param_3,float param_4)

{
  int iVar1;
  float10 fVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  if (((*(int *)(param_1 + 0x1c0) == 3) || (*(int *)(param_2 + 0x1c0) != 3)) &&
     ((*(int *)(param_1 + 0x1c0) != 3 || (*(int *)(param_2 + 0x1c0) != 0)))) {
    local_44 = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 8);
    iVar1 = 0;
    local_40 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0xc);
    local_3c = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x10);
    do {
      local_4c = *(float *)(param_2 + 0xc);
      local_50 = *(float *)(param_2 + 8);
      local_48 = *(float *)(param_2 + 0x10);
      fVar2 = (float10)(*DAT_10121f74)(param_4 + *(float *)(param_2 + 0xdc),
                                       *(float *)(param_2 + 0xe8) - param_4);
      local_50 = (float)(fVar2 + (float10)local_50);
      fVar2 = (float10)(*DAT_10121f74)(param_4 + *(float *)(param_2 + 0xe0),
                                       *(float *)(param_2 + 0xec) - param_4);
      local_4c = (float)(fVar2 + (float10)local_4c);
      fVar2 = (float10)(*DAT_10121f74)(param_4 + *(float *)(param_2 + 0xe4),
                                       *(float *)(param_2 + 0xf0) - param_4);
      local_48 = (float)(fVar2 + (float10)local_48);
      FUN_100afc20(&local_44,&local_50,1,1,*(undefined4 *)(param_1 + 0x208),auStack_38);
      if (fStack_28 == (float)_DAT_100dd628) {
        *param_3 = local_50;
        param_3[1] = local_4c;
        param_3[2] = local_48;
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
  }
  return 0;
}

