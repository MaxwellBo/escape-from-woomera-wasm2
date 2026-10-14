
undefined4 FUN_100be970(void)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  char *pcVar6;
  void *this;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 in_stack_fffffaf0;
  undefined4 *in_stack_fffffaf4;
  uint uVar14;
  undefined4 uVar15;
  undefined4 local_4f4 [199];
  short sStack_1d6;
  short local_1d4 [200];
  int local_44;
  char *local_40;
  undefined4 local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  short *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  uint local_20;
  short *local_1c;
  char *local_18;
  char *local_14;
  short *local_10;
  char *local_c;
  char local_5;
  
  local_30 = local_1d4;
  local_c = (char *)0x0;
  local_2c = 0;
  local_44 = 0;
  local_1c = &sStack_1d6;
  local_34 = local_4f4;
  local_28 = 200;
  local_20 = 0xfffffffe;
  puVar12 = local_4f4;
  pcVar8 = local_40;
LAB_100be9bc:
  do {
    while( true ) {
      psVar1 = local_30;
      psVar4 = local_1c + 1;
      local_1c = psVar4;
      *psVar4 = (short)local_c;
      if (psVar1 + local_28 + -1 <= psVar4) {
        local_24 = local_34;
        iVar5 = (int)psVar4 - (int)local_30 >> 1;
        local_10 = local_30;
        if (9999 < local_28) {
          FUN_100c2620();
          return 2;
        }
        local_28 = local_28 * 2;
        if (10000 < local_28) {
          local_28 = 10000;
        }
        FUN_100c9600();
        local_30 = (short *)&stack0xfffffb00;
        FUN_100bffa0((undefined1 *)local_10,(int)&stack0xfffffb00,(iVar5 + 1) * 2);
        FUN_100c9600();
        in_stack_fffffaf0 = 0x100bea5e;
        local_34 = (undefined4 *)&stack0xfffffb00;
        FUN_100bffa0((undefined1 *)local_24,(int)&stack0xfffffb00,(iVar5 + 1) * 4);
        puVar12 = local_34 + iVar5;
        local_1c = local_30 + iVar5;
        in_stack_fffffaf4 = local_24;
        if (local_30 + local_28 + -1 <= local_30 + iVar5) {
          return 1;
        }
      }
      local_24 = (undefined4 *)(int)*(short *)(&DAT_100f72a4 + (int)local_c * 2);
      if (local_24 == (undefined4 *)0xffff8000) break;
      if (local_20 == 0xfffffffe) {
        local_20 = FUN_100c2640((int)&local_3c);
      }
      iVar5 = local_2c;
      if ((int)local_20 < 1) {
        iVar9 = 0;
        local_20 = 0;
      }
      else if (local_20 < 0x110) {
        iVar9 = (int)(char)(&DAT_100f706c)[local_20];
      }
      else {
        iVar9 = 0x24;
      }
      iVar10 = (int)local_24 + iVar9;
      if (((iVar10 < 0) || (0x54 < iVar10)) || (*(short *)(&DAT_100f73f0 + iVar10 * 2) != iVar9))
      break;
      iVar9 = (int)*(short *)(&DAT_100f7344 + iVar10 * 2);
      if (iVar9 < 0) {
        if (iVar9 == -0x8000) goto LAB_100bebd1;
LAB_100beb0f:
        local_24 = (undefined4 *)-iVar9;
        goto LAB_100beb14;
      }
      if (iVar9 == 0) goto LAB_100bebd1;
      if (iVar9 == 0x43) {
        return 0;
      }
      if (local_20 != 0) {
        local_20 = 0xfffffffe;
      }
      puVar12 = puVar12 + 1;
      bVar13 = local_2c != 0;
      *puVar12 = local_3c;
      if (bVar13) {
        local_2c = iVar5 + -1;
      }
      local_c = (char *)iVar9;
    }
    local_24 = (undefined4 *)(int)*(short *)(&DAT_100f7204 + (int)local_c * 2);
    if (local_24 == (undefined4 *)0x0) {
LAB_100bebd1:
      if (local_2c == 0) {
        local_44 = local_44 + 1;
        FUN_100c2620();
      }
      else if (local_2c == 3) {
        if (local_20 == 0) {
          return 1;
        }
        local_20 = 0xfffffffe;
      }
      local_2c = 3;
      pcVar11 = local_c;
      do {
        if (((*(short *)(&DAT_100f72a4 + (int)pcVar11 * 2) != -0x8000) &&
            (iVar5 = *(short *)(&DAT_100f72a4 + (int)pcVar11 * 2) + 1, -1 < iVar5)) &&
           ((iVar5 < 0x55 && (*(short *)(&DAT_100f73f0 + iVar5 * 2) == 1)))) {
          iVar9 = (int)*(short *)(&DAT_100f7344 + iVar5 * 2);
          if (iVar9 < 0) {
            if (iVar9 != -0x8000) goto LAB_100beb0f;
          }
          else if (iVar9 != 0) goto LAB_100bec67;
        }
        if (local_1c == local_30) {
          return 1;
        }
        pcVar11 = (char *)(int)local_1c[-1];
        puVar12 = puVar12 + -1;
        local_1c = local_1c + -1;
      } while( true );
    }
LAB_100beb14:
    iVar5 = 0;
    local_40 = (char *)(int)*(short *)(&DAT_100f71c0 + (int)local_24 * 2);
    if (0 < (int)local_40) {
      pcVar8 = (char *)puVar12[1 - (int)local_40];
    }
    switch(local_24) {
    case (undefined4 *)0x1:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) {
LAB_100bec80:
        pcVar8 = (char *)0x0;
        DAT_10132460 = (char *)0x0;
      }
      else {
        local_10 = (short *)*puVar12;
        *pcVar8 = local_5;
        pcVar8[4] = '\0';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        pcVar8[8] = '\0';
        pcVar8[9] = '\0';
        pcVar8[10] = '\0';
        pcVar8[0xb] = '\0';
        pcVar8[0xc] = '\0';
        pcVar8[0xd] = '\0';
        pcVar8[0xe] = '\0';
        pcVar8[0xf] = '\0';
        in_stack_fffffaf4 = (undefined4 *)0x100beb77;
        FUN_100c1250(pcVar8,(undefined4 *)0x0,&local_10);
        DAT_10132460 = pcVar8;
      }
      break;
    case (undefined4 *)0x2:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bec80;
      local_c = (char *)puVar12[-1];
      local_10 = (short *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      if (local_c != (char *)0x0) {
        if (*(int *)((int)local_c + 4) != 0) {
          iVar5 = *(int *)((int)local_c + 8) - *(int *)((int)local_c + 4) >> 2;
        }
        FUN_100c0930(pcVar8,iVar5 + 1);
        FUN_100c09d0(pcVar8,*(undefined4 **)((int)local_c + 4),*(undefined4 **)((int)local_c + 8));
      }
      in_stack_fffffaf4 = (undefined4 *)0x100becf5;
      FUN_100c1250(pcVar8,*(undefined4 **)(pcVar8 + 8),&local_10);
      DAT_10132460 = pcVar8;
      break;
    case (undefined4 *)0x3:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bec80;
      local_10 = (short *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      in_stack_fffffaf4 = (undefined4 *)0x100bed33;
      FUN_100c1250(pcVar8,(undefined4 *)0x0,&local_10);
      DAT_10132460 = pcVar8;
      break;
    case (undefined4 *)0x4:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bec80;
      local_c = (char *)puVar12[-1];
      local_10 = (short *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      if (local_c != (char *)0x0) {
        if (*(int *)((int)local_c + 4) != 0) {
          iVar5 = *(int *)((int)local_c + 8) - *(int *)((int)local_c + 4) >> 2;
        }
        FUN_100c0930(pcVar8,iVar5 + 1);
        FUN_100c09d0(pcVar8,*(undefined4 **)((int)local_c + 4),*(undefined4 **)((int)local_c + 8));
      }
      in_stack_fffffaf4 = (undefined4 *)0x100bedaa;
      FUN_100c1250(pcVar8,*(undefined4 **)(pcVar8 + 8),&local_10);
      DAT_10132460 = pcVar8;
      break;
    case (undefined4 *)0x5:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) {
LAB_100bf745:
        pcVar8 = (char *)0x0;
      }
      else {
        uVar15 = puVar12[-1];
        *(undefined4 *)pcVar8 = *puVar12;
        *(undefined4 *)(pcVar8 + 4) = uVar15;
        pcVar8[8] = '\0';
        pcVar8[0xc] = '\0';
        pcVar8[0xd] = '\0';
        pcVar8[0xe] = '\0';
        pcVar8[0xf] = '\0';
      }
      break;
    case (undefined4 *)0x7:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_10 = (short *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      in_stack_fffffaf4 = (undefined4 *)0x100bee12;
      FUN_100c1070(pcVar8,(undefined4 *)0x0,&local_10);
      break;
    case (undefined4 *)0x8:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_c = (char *)puVar12[-1];
      local_10 = (short *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      if (local_c != (char *)0x0) {
        if (*(int *)((int)local_c + 4) != 0) {
          iVar5 = *(int *)((int)local_c + 8) - *(int *)((int)local_c + 4) >> 2;
        }
        FUN_100c06a0(pcVar8,iVar5 + 1);
        FUN_100c0740(pcVar8,*(undefined4 **)((int)local_c + 4),*(undefined4 **)((int)local_c + 8));
      }
      in_stack_fffffaf4 = (undefined4 *)0x100bee83;
      FUN_100c1070(pcVar8,*(undefined4 **)(pcVar8 + 8),&local_10);
      break;
    case (undefined4 *)0x9:
      local_c = operator_new(0x18);
      if (local_c == (char *)0x0) {
LAB_100bef11:
        pcVar8 = (char *)0x0;
        FUN_100c8cf1((undefined *)*puVar12);
      }
      else {
        pcVar8 = (char *)*puVar12;
        *(undefined4 *)local_c = puVar12[-2];
        local_c[4] = local_5;
        local_18 = pcVar8;
        FUN_100bacf0(local_c + 4,'\0');
        uVar14 = 0xffffffff;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        local_10 = (short *)(~uVar14 - 1);
        in_stack_fffffaf4 = (undefined4 *)0x100beece;
        uVar15 = FUN_100bbb30(local_c + 4,(uint)local_10,'\x01');
        if ((char)uVar15 != '\0') {
          pcVar8 = local_18;
          pcVar11 = *(char **)(local_c + 8);
          for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar11 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_100bbb10(local_c + 4,(int)local_10);
        }
        pcVar8 = local_c;
        local_c[0x14] = '\0';
        local_c[0x15] = '\0';
        local_c[0x16] = '\0';
        local_c[0x17] = '\0';
        FUN_100c8cf1((undefined *)*puVar12);
      }
      break;
    case (undefined4 *)0xa:
      local_c = operator_new(0x18);
      if (local_c == (char *)0x0) goto LAB_100bef11;
      pcVar8 = (char *)*puVar12;
      local_c[0] = '\0';
      local_c[1] = '\0';
      local_c[2] = '\0';
      local_c[3] = '\0';
      pcVar11 = local_c + 4;
      *pcVar11 = local_5;
      local_18 = pcVar8;
      FUN_100bacf0(pcVar11,'\0');
      uVar14 = 0xffffffff;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      local_10 = (short *)(~uVar14 - 1);
      in_stack_fffffaf4 = (undefined4 *)0x100bef69;
      uVar15 = FUN_100bbb30(pcVar11,(uint)local_10,'\x01');
      if ((char)uVar15 != '\0') {
        pcVar8 = local_18;
        pcVar11 = *(char **)(local_c + 8);
        for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar11 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_100bbb10(local_c + 4,(int)local_10);
      }
      pcVar8 = local_c;
      local_c[0x14] = '\0';
      local_c[0x15] = '\0';
      local_c[0x16] = '\0';
      local_c[0x17] = '\0';
      FUN_100c8cf1((undefined *)*puVar12);
      break;
    case (undefined4 *)0xb:
      local_c = operator_new(0x18);
      if (local_c == (char *)0x0) {
LAB_100bf03e:
        pcVar8 = (char *)0x0;
        FUN_100c8cf1((undefined *)*puVar12);
      }
      else {
        local_14 = (char *)puVar12[-5];
        pcVar8 = (char *)*puVar12;
        *(undefined4 *)local_c = puVar12[-2];
        pcVar11 = local_c + 4;
        *pcVar11 = local_5;
        local_18 = pcVar8;
        FUN_100bacf0(pcVar11,'\0');
        uVar14 = 0xffffffff;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        local_10 = (short *)(~uVar14 - 1);
        in_stack_fffffaf4 = (undefined4 *)0x100beffa;
        uVar15 = FUN_100bbb30(pcVar11,(uint)local_10,'\x01');
        if ((char)uVar15 != '\0') {
          pcVar8 = local_18;
          pcVar11 = *(char **)(local_c + 8);
          for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pcVar11 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_100bbb10(local_c + 4,(int)local_10);
        }
        pcVar8 = local_c;
        *(char **)(local_c + 0x14) = local_14;
        FUN_100c8cf1((undefined *)*puVar12);
      }
      break;
    case (undefined4 *)0xc:
      local_c = operator_new(0x18);
      if (local_c == (char *)0x0) goto LAB_100bf03e;
      local_18 = (char *)puVar12[-2];
      pcVar8 = (char *)*puVar12;
      local_c[0] = '\0';
      local_c[1] = '\0';
      local_c[2] = '\0';
      local_c[3] = '\0';
      pcVar11 = local_c + 4;
      *pcVar11 = local_5;
      local_14 = pcVar8;
      FUN_100bacf0(pcVar11,'\0');
      uVar14 = 0xffffffff;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      local_10 = (short *)(~uVar14 - 1);
      in_stack_fffffaf4 = (undefined4 *)0x100bf09c;
      uVar15 = FUN_100bbb30(pcVar11,(uint)local_10,'\x01');
      if ((char)uVar15 != '\0') {
        pcVar8 = local_14;
        pcVar11 = *(char **)(local_c + 8);
        for (uVar14 = (uint)local_10 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar14 = (uint)local_10 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *pcVar11 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_100bbb10(local_c + 4,(int)local_10);
      }
      pcVar8 = local_c;
      *(char **)(local_c + 0x14) = local_18;
      FUN_100c8cf1((undefined *)*puVar12);
      break;
    case (undefined4 *)0xd:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_14 = (char *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      in_stack_fffffaf4 = (undefined4 *)0x100bf113;
      FUN_100be4e0(pcVar8,(undefined4 *)0x0,&local_14);
      break;
    case (undefined4 *)0xe:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_10 = (short *)puVar12[-1];
      local_14 = (char *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      if (local_10 != (short *)0x0) {
        if (*(int *)(local_10 + 2) != 0) {
          iVar5 = *(int *)(local_10 + 4) - *(int *)(local_10 + 2) >> 2;
        }
        FUN_100c0410(pcVar8,iVar5 + 1);
        FUN_100c04b0(pcVar8,*(undefined4 **)(local_10 + 2),*(undefined4 **)(local_10 + 4));
      }
      in_stack_fffffaf4 = (undefined4 *)0x100bf184;
      FUN_100be4e0(pcVar8,*(undefined4 **)(pcVar8 + 8),&local_14);
      break;
    case (undefined4 *)0xf:
      pcVar8 = operator_new(0x18);
      if (pcVar8 == (char *)0x0) {
LAB_100bf1e3:
        pcVar8 = (char *)0x0;
        FUN_100c8cf1((undefined *)puVar12[-3]);
      }
      else {
        pcVar11 = (char *)puVar12[-3];
        uVar15 = puVar12[-5];
        *(undefined4 *)(pcVar8 + 4) = puVar12[-1];
        *(undefined4 *)pcVar8 = uVar15;
        pcVar8[8] = local_5;
        local_14 = pcVar11;
        FUN_100bacf0(pcVar8 + 8,'\0');
        uVar14 = 0xffffffff;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        in_stack_fffffaf4 = (undefined4 *)0x100bf1d0;
        FUN_100bba70(pcVar8 + 8,(undefined4 *)local_14,~uVar14 - 1);
        FUN_100c8cf1((undefined *)puVar12[-3]);
      }
      break;
    case (undefined4 *)0x10:
      pcVar8 = operator_new(0x18);
      if (pcVar8 == (char *)0x0) goto LAB_100bf1e3;
      pcVar11 = (char *)puVar12[-3];
      *(undefined4 *)(pcVar8 + 4) = puVar12[-1];
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8[8] = local_5;
      local_14 = pcVar11;
      FUN_100bacf0(pcVar8 + 8,'\0');
      uVar14 = 0xffffffff;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      in_stack_fffffaf4 = (undefined4 *)0x100bf23e;
      FUN_100bba70(pcVar8 + 8,(undefined4 *)local_14,~uVar14 - 1);
      FUN_100c8cf1((undefined *)puVar12[-3]);
      break;
    case (undefined4 *)0x11:
      pcVar8 = operator_new(0x18);
      if (pcVar8 == (char *)0x0) {
LAB_100bf2aa:
        pcVar8 = (char *)0x0;
        FUN_100c8cf1((undefined *)*puVar12);
      }
      else {
        pcVar11 = (char *)*puVar12;
        *(undefined4 *)pcVar8 = puVar12[-2];
        pcVar8[4] = '\0';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
        pcVar8[8] = local_5;
        local_14 = pcVar11;
        FUN_100bacf0(pcVar8 + 8,'\0');
        uVar14 = 0xffffffff;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        in_stack_fffffaf4 = (undefined4 *)0x100bf298;
        FUN_100bba70(pcVar8 + 8,(undefined4 *)local_14,~uVar14 - 1);
        FUN_100c8cf1((undefined *)*puVar12);
      }
      break;
    case (undefined4 *)0x12:
      pcVar8 = operator_new(0x18);
      if (pcVar8 == (char *)0x0) goto LAB_100bf2aa;
      pcVar11 = (char *)*puVar12;
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = local_5;
      local_14 = pcVar11;
      FUN_100bacf0(pcVar8 + 8,'\0');
      uVar14 = 0xffffffff;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      in_stack_fffffaf4 = (undefined4 *)0x100bf304;
      FUN_100bba70(pcVar8 + 8,(undefined4 *)local_14,~uVar14 - 1);
      FUN_100c8cf1((undefined *)*puVar12);
      break;
    case (undefined4 *)0x13:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      uVar15 = *puVar12;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      *(undefined4 *)pcVar8 = uVar15;
      pcVar8[8] = '\0';
      pcVar8[0xc] = '\x01';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      break;
    case (undefined4 *)0x14:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_14 = (char *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      in_stack_fffffaf4 = (undefined4 *)0x100bf374;
      FUN_100c0e90(pcVar8,(undefined4 *)0x0,&local_14);
      break;
    case (undefined4 *)0x15:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_10 = (short *)puVar12[-1];
      local_14 = (char *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      if (local_10 != (short *)0x0) {
        if (*(int *)(local_10 + 2) != 0) {
          iVar5 = *(int *)(local_10 + 4) - *(int *)(local_10 + 2) >> 2;
        }
        FUN_100c0160(pcVar8,iVar5 + 1);
        FUN_100c0200(pcVar8,*(undefined4 **)(local_10 + 2),*(undefined4 **)(local_10 + 4));
      }
      in_stack_fffffaf4 = (undefined4 *)0x100bf3e5;
      FUN_100c0e90(pcVar8,*(undefined4 **)(pcVar8 + 8),&local_14);
      break;
    case (undefined4 *)0x16:
      pcVar8 = operator_new(0x14);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      pcVar11 = (char *)*puVar12;
      *(undefined ***)pcVar8 = &PTR_LAB_100f74dc;
      pcVar8[4] = local_5;
      local_14 = pcVar11;
      FUN_100bacf0(pcVar8 + 4,'\0');
      uVar14 = 0xffffffff;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      in_stack_fffffaf4 = (undefined4 *)0x100bf42f;
      FUN_100bba70(pcVar8 + 4,(undefined4 *)local_14,~uVar14 - 1);
      *(undefined ***)pcVar8 = &PTR_FUN_100f74d4;
      break;
    case (undefined4 *)0x17:
      pcVar8 = operator_new(4);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      *(undefined ***)pcVar8 = &PTR_LAB_100f74cc;
      break;
    case (undefined4 *)0x18:
      pcVar8 = operator_new(8);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      puVar7 = operator_new(4);
      if (puVar7 == (undefined4 *)0x0) {
        *(undefined ***)pcVar8 = &PTR_FUN_100f74c4;
        pcVar8[4] = '\0';
        pcVar8[5] = '\0';
        pcVar8[6] = '\0';
        pcVar8[7] = '\0';
      }
      else {
        *puVar7 = &PTR_LAB_100f74cc;
        *(undefined4 **)(pcVar8 + 4) = puVar7;
        *(undefined ***)pcVar8 = &PTR_FUN_100f74c4;
      }
      break;
    case (undefined4 *)0x19:
      local_18 = operator_new(8);
      if (local_18 == (char *)0x0) goto LAB_100bf745;
      puVar7 = operator_new(0x14);
      if (puVar7 == (undefined4 *)0x0) {
        local_18[4] = '\0';
        local_18[5] = '\0';
        local_18[6] = '\0';
        local_18[7] = '\0';
        *(undefined ***)local_18 = &PTR_FUN_100f74c4;
        pcVar8 = local_18;
      }
      else {
        pcVar8 = (char *)*puVar12;
        *puVar7 = &PTR_LAB_100f74dc;
        *(char *)(puVar7 + 1) = local_5;
        local_14 = pcVar8;
        FUN_100bacf0(puVar7 + 1,'\0');
        uVar14 = 0xffffffff;
        do {
          if (uVar14 == 0) break;
          uVar14 = uVar14 - 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        in_stack_fffffaf4 = (undefined4 *)0x100bf4f7;
        FUN_100bba70(puVar7 + 1,(undefined4 *)local_14,~uVar14 - 1);
        *puVar7 = &PTR_FUN_100f74d4;
        *(undefined4 **)(local_18 + 4) = puVar7;
        *(undefined ***)local_18 = &PTR_FUN_100f74c4;
        pcVar8 = local_18;
      }
      break;
    case (undefined4 *)0x1a:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_14 = (char *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      in_stack_fffffaf4 = (undefined4 *)0x100bf554;
      FUN_100c1420(pcVar8,(undefined4 *)0x0,&local_14);
      break;
    case (undefined4 *)0x1b:
      pcVar8 = operator_new(0x10);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      local_10 = (short *)puVar12[-1];
      local_14 = (char *)*puVar12;
      *pcVar8 = local_5;
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
      pcVar8[8] = '\0';
      pcVar8[9] = '\0';
      pcVar8[10] = '\0';
      pcVar8[0xb] = '\0';
      pcVar8[0xc] = '\0';
      pcVar8[0xd] = '\0';
      pcVar8[0xe] = '\0';
      pcVar8[0xf] = '\0';
      if (local_10 != (short *)0x0) {
        if (*(int *)(local_10 + 2) != 0) {
          iVar5 = *(int *)(local_10 + 4) - *(int *)(local_10 + 2) >> 2;
        }
        FUN_100c0be0(pcVar8,iVar5 + 1);
        FUN_100c0c80(pcVar8,*(undefined4 **)(local_10 + 2),*(undefined4 **)(local_10 + 4));
      }
      in_stack_fffffaf4 = (undefined4 *)0x100bf5c5;
      FUN_100c1420(pcVar8,*(undefined4 **)(pcVar8 + 8),&local_14);
      break;
    case (undefined4 *)0x1c:
      pcVar8 = operator_new(0x14);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      pcVar11 = (char *)puVar12[-1];
      *(undefined ***)pcVar8 = &PTR_LAB_100f74bc;
      pcVar8[4] = local_5;
      local_14 = pcVar11;
      FUN_100bacf0(pcVar8 + 4,'\0');
      uVar14 = 0xffffffff;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      in_stack_fffffaf4 = (undefined4 *)0x100bf610;
      FUN_100bba70(pcVar8 + 4,(undefined4 *)local_14,~uVar14 - 1);
      *(undefined ***)pcVar8 = &PTR_FUN_100f74b4;
      if (*(int *)(pcVar8 + 0xc) != 0) {
        pcVar11 = pcVar8 + 4;
        pcVar6 = (char *)FUN_100c00c0(pcVar11,*(int *)(pcVar8 + 0xc) - 1);
        if ((*pcVar6 == ' ') ||
           (pcVar6 = (char *)FUN_100c00c0(pcVar11,*(int *)(pcVar8 + 0xc) - 1), *pcVar6 == ')')) {
          iVar5 = FUN_100ba4c0(pcVar11);
          FUN_100bffe0(pcVar11,iVar5 - 1);
        }
      }
      break;
    case (undefined4 *)0x1d:
      pcVar8 = operator_new(0x14);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      pcVar11 = (char *)puVar12[-1];
      *(undefined ***)pcVar8 = &PTR_LAB_100f74bc;
      in_stack_fffffaf4 = (undefined4 *)0x100bf680;
      FUN_100ba310(pcVar8 + 4,pcVar11,&local_5);
      *(undefined ***)pcVar8 = &PTR_FUN_100f74ac;
      if (*(int *)(pcVar8 + 0xc) != 0) {
        pcVar11 = pcVar8 + 4;
        pcVar6 = (char *)FUN_100c00c0(pcVar11,*(int *)(pcVar8 + 0xc) - 1);
        if ((*pcVar6 == ' ') ||
           (pcVar6 = (char *)FUN_100c00c0(pcVar11,*(int *)(pcVar8 + 0xc) - 1), *pcVar6 == ')')) {
          iVar5 = FUN_100ba4c0(pcVar11);
          FUN_100bffe0(pcVar11,iVar5 - 1);
        }
      }
      break;
    case (undefined4 *)0x1e:
      pcVar8 = operator_new(8);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      uVar15 = puVar12[-1];
      *(undefined ***)pcVar8 = &PTR_LAB_100f74a4;
      *(undefined4 *)(pcVar8 + 4) = uVar15;
      break;
    case (undefined4 *)0x1f:
      pcVar8 = operator_new(4);
      if (pcVar8 == (char *)0x0) goto LAB_100bf745;
      *(undefined ***)pcVar8 = &PTR_LAB_100f749c;
      break;
    case (undefined4 *)0x20:
      uVar15 = 0x14;
      uVar14 = 0x100bf706;
      this = operator_new(0x14);
      if (this == (void *)0x0) goto LAB_100bf745;
      FUN_100ba310(&stack0xfffffaf0,(char *)puVar12[-1],&local_35);
      pcVar8 = (char *)FUN_100bfad0(this,(char)in_stack_fffffaf0,in_stack_fffffaf4,uVar14,uVar15);
      break;
    case (undefined4 *)0x21:
      puVar7 = operator_new(4);
      if (puVar7 == (undefined4 *)0x0) goto LAB_100bf745;
      pcVar8 = (char *)FUN_100bfdc0(puVar7);
    }
    psVar1 = local_1c + -(int)local_40;
    puVar12 = puVar12 + (1 - (int)local_40);
    local_1c = psVar1;
    *puVar12 = pcVar8;
    sVar3 = *psVar1;
    iVar5 = (int)*(short *)(&DAT_100f72fc + *(short *)(&DAT_100f717c + (int)local_24 * 2) * 2) +
            (int)sVar3;
    if (((iVar5 < 0) || (0x54 < iVar5)) || (*(short *)(&DAT_100f73f0 + iVar5 * 2) != sVar3)) {
      local_c = (char *)(int)*(short *)(&DAT_100f725c +
                                       *(short *)(&DAT_100f717c + (int)local_24 * 2) * 2);
    }
    else {
      local_c = (char *)(int)*(short *)(&DAT_100f7344 + iVar5 * 2);
    }
  } while( true );
LAB_100bec67:
  if (iVar9 == 0x43) {
    return 0;
  }
  puVar12 = puVar12 + 1;
  local_c = (char *)iVar9;
  *puVar12 = local_3c;
  goto LAB_100be9bc;
}

