
undefined1 * __thiscall
FUN_10054e2b(void *this,byte *param_1,int *param_2,undefined1 *param_3,uint param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  DWORD *pDVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *local_c;
  byte *local_8;
  
  local_c = (undefined1 *)0x0;
  bVar7 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_1007bcf4 < 2) {
      uVar3 = (byte)PTR_DAT_1007bae8[(uint)bVar7 * 2] & 8;
      this = PTR_DAT_1007bae8;
    }
    else {
      puVar8 = &DAT_00000008;
      uVar3 = FUN_1004b6c6(this,(uint)bVar7,8);
      this = puVar8;
    }
    if (uVar3 == 0) break;
    bVar7 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar7 == 0x2d) {
    param_4 = param_4 | 2;
LAB_10054e86:
    bVar7 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar7 == 0x2b) goto LAB_10054e86;
  if ((((int)param_3 < 0) || (param_3 == (undefined1 *)0x1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return (undefined1 *)0x0;
  }
  puVar8 = (undefined1 *)0x10;
  if (param_3 == (undefined1 *)0x0) {
    if (bVar7 != 0x30) {
      param_3 = (undefined1 *)0xa;
      goto LAB_10054ef0;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = &DAT_00000008;
      goto LAB_10054ef0;
    }
    param_3 = (undefined1 *)0x10;
  }
  if (((param_3 == (undefined1 *)0x10) && (bVar7 == 0x30)) &&
     ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar7 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_10054ef0:
  puVar4 = (undefined1 *)(0xffffffff / ZEXT48(param_3));
  do {
    uVar3 = (uint)bVar7;
    if (DAT_1007bcf4 < 2) {
      uVar5 = (byte)PTR_DAT_1007bae8[uVar3 * 2] & 4;
    }
    else {
      puVar2 = &DAT_00000004;
      uVar5 = FUN_1004b6c6(puVar8,uVar3,4);
      puVar8 = puVar2;
    }
    if (uVar5 == 0) {
      if (DAT_1007bcf4 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_1007bae8 + uVar3 * 2) & 0x103;
      }
      else {
        uVar3 = FUN_1004b6c6(puVar8,uVar3,0x103);
      }
      if (uVar3 == 0) {
LAB_10054f9c:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = (undefined1 *)0x0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && ((undefined1 *)0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && ((undefined1 *)0x7fffffff < local_c)))))))) {
          pDVar6 = FUN_1004ddc4();
          *pDVar6 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = (undefined1 *)(((param_4 & 2) != 0) + 0x7fffffff);
          }
          else {
            local_c = (undefined1 *)0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return (undefined1 *)-(int)local_c;
      }
      uVar3 = FUN_1004b58b((int)(char)bVar7);
      puVar8 = (undefined1 *)(uVar3 - 0x37);
    }
    else {
      puVar8 = (undefined1 *)((char)bVar7 + -0x30);
    }
    if (param_3 <= puVar8) goto LAB_10054f9c;
    if ((local_c < puVar4) ||
       ((local_c == puVar4 && (puVar8 <= (undefined1 *)(0xffffffff % ZEXT48(param_3)))))) {
      local_c = puVar8 + (int)local_c * (int)param_3;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar7 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

