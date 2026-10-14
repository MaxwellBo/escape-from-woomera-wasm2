
void __fastcall FUN_100365c0(void *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  byte *pbVar7;
  int iVar8;
  char *local_4;
  
  iVar3 = 1;
  if (0 < *(int *)((int)param_1 + 0x26848)) {
    puVar1 = &DAT_100b5002;
    do {
      if (*(int *)(puVar1 + 7) == 0) {
        *puVar1 = 0;
        puVar1[-1] = 0;
      }
      puVar1[2] = 0;
      puVar1[1] = 0;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 0x14;
    } while (iVar3 <= *(int *)((int)param_1 + 0x26848));
  }
  psVar6 = &DAT_100b5a08;
  local_4 = &DAT_100b6028;
  do {
    if (((*(int *)(psVar6 + -2) != 0) && (*local_4 != '\0')) &&
       (iVar3 = 1, 0 < *(int *)((int)param_1 + 0x26848))) {
      pbVar7 = &DAT_100b4ff0;
      do {
        uVar2 = FUN_10056910(local_4,(byte *)local_4,pbVar7);
        if (uVar2 == 0) break;
        iVar3 = iVar3 + 1;
        pbVar7 = pbVar7 + 0x28;
      } while (iVar3 <= *(int *)((int)param_1 + 0x26848));
      if (iVar3 <= *(int *)((int)param_1 + 0x26848)) {
        iVar3 = iVar3 * 0x28;
        if (*(int *)(iVar3 + 0x100b4fe8) == 0) {
          *(short *)(&DAT_100b4fd8 + iVar3) =
               *(short *)(&DAT_100b4fd8 + iVar3) + *(short *)(local_4 + -8);
          *(short *)(&DAT_100b4fda + iVar3) =
               *(short *)(&DAT_100b4fda + iVar3) + *(short *)(local_4 + -6);
        }
        *(short *)(&DAT_100b4fdc + iVar3) = *(short *)(&DAT_100b4fdc + iVar3) + *psVar6;
        *(short *)(iVar3 + 0x100b4fde) =
             *(short *)(iVar3 + 0x100b4fde) + (ushort)*(byte *)(psVar6 + 2);
        if ((char)psVar6[1] == '\0') {
          *(undefined2 *)(iVar3 + 0x100b4fe0) = 0;
        }
        else {
          *(undefined2 *)(iVar3 + 0x100b4fe0) = 1;
        }
        *(int *)(&DAT_100b4fec + iVar3) = (int)*(short *)(local_4 + -2);
      }
    }
    psVar6 = psVar6 + 10;
    local_4 = local_4 + 0x18;
  } while ((int)psVar6 < 0x100b5ef4);
  iVar3 = 1;
  if (0 < *(int *)((int)param_1 + 0x26848)) {
    psVar6 = &DAT_100b500a;
    do {
      psVar6[1] = 0;
      psVar6[2] = 0;
      if (0 < *psVar6) {
        psVar6[-3] = psVar6[-3] / *psVar6;
        psVar6[-2] = psVar6[-2] / *psVar6;
      }
      iVar3 = iVar3 + 1;
      psVar6 = psVar6 + 0x14;
    } while (iVar3 <= *(int *)((int)param_1 + 0x26848));
  }
  while( true ) {
    iVar4 = 1;
    iVar8 = 0;
    iVar3 = -99999;
    local_4 = (char *)0x1869f;
    if (*(int *)((int)param_1 + 0x26848) < 1) break;
    psVar6 = &DAT_100b5002;
    do {
      if (((0 < psVar6[4]) && (*(int *)(psVar6 + 5) == 0)) &&
         ((iVar5 = (int)psVar6[-1], iVar3 <= iVar5 &&
          ((iVar3 < iVar5 || ((int)*psVar6 < (int)local_4)))))) {
        local_4 = (char *)(int)*psVar6;
        iVar3 = iVar5;
        iVar8 = iVar4;
      }
      iVar4 = iVar4 + 1;
      psVar6 = psVar6 + 0x14;
    } while (iVar4 <= *(int *)((int)param_1 + 0x26848));
    if (iVar8 == 0) break;
    *(int *)((int)param_1 + *(int *)((int)param_1 + 0x26854) * 4 + 0x26858) = iVar8;
    *(undefined4 *)((int)param_1 + *(int *)((int)param_1 + 0x26854) * 4 + 0x26980) = 1;
    (&DAT_100b4fe4)[iVar8 * 10] = 1;
    *(int *)((int)param_1 + 0x26854) = *(int *)((int)param_1 + 0x26854) + 1;
    FUN_100367f0(param_1,0,(byte *)(&DAT_100b4fc8 + iVar8 * 10));
  }
  FUN_100367f0(param_1,2,(byte *)0x0);
  return;
}

