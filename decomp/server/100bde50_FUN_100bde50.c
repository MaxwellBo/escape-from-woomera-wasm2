
void * __cdecl FUN_100bde50(void *param_1,void *param_2,void *param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  void *this;
  void *pvVar9;
  undefined4 *puVar10;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    uVar7 = *(uint *)((int)param_2 + -0x10);
    pvVar9 = (void *)((int)param_2 + -0x18);
    this = (void *)((int)param_3 + -0x18);
    uVar8 = uVar7;
    if (DAT_100f7054 < uVar7) {
      uVar8 = DAT_100f7054;
    }
    if (this == pvVar9) {
      FUN_100bb060(this,uVar8,DAT_100f7054);
      FUN_100bb060(this,0,0);
    }
    else {
      if ((uVar8 != 0) && (uVar8 == uVar7)) {
        puVar5 = *(undefined4 **)((int)param_2 + -0x14);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_100f7058;
        }
        if (*(byte *)((int)puVar5 + -1) < 0xfe) {
          iVar3 = *(int *)((int)param_3 + -0x14);
          if (iVar3 != 0) {
            cVar2 = *(char *)(iVar3 + -1);
            if ((cVar2 == '\0') || (cVar2 == -1)) {
              FUN_100c8ce6((char *)(iVar3 + -1));
            }
            else {
              *(char *)(iVar3 + -1) = cVar2 + -1;
            }
          }
          *(undefined4 *)((int)param_3 + -0x14) = 0;
          *(undefined4 *)((int)param_3 + -0x10) = 0;
          *(undefined4 *)((int)param_3 + -0xc) = 0;
          puVar5 = *(undefined4 **)((int)param_2 + -0x14);
          if (puVar5 == (undefined4 *)0x0) {
            puVar5 = &DAT_100f7058;
          }
          *(undefined4 **)((int)param_3 + -0x14) = puVar5;
          *(undefined4 *)((int)param_3 + -0x10) = *(undefined4 *)((int)param_2 + -0x10);
          *(undefined4 *)((int)param_3 + -0xc) = *(undefined4 *)((int)param_2 + -0xc);
          *(char *)((int)puVar5 + -1) = *(char *)((int)puVar5 + -1) + '\x01';
          goto LAB_100bdf46;
        }
      }
      uVar6 = FUN_100bbb30(this,uVar8,'\x01');
      if ((char)uVar6 != '\0') {
        puVar5 = *(undefined4 **)((int)param_2 + -0x14);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = &DAT_100f7058;
        }
        puVar10 = *(undefined4 **)((int)param_3 + -0x14);
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_100bbb10(this,uVar8);
      }
    }
LAB_100bdf46:
    pcVar1 = (char *)((int)param_3 + -8);
    if (pcVar1 != (char *)((int)param_2 + -8)) {
      puVar4 = *(undefined **)((int)param_3 + -4);
      if (puVar4 == *(undefined **)((int)param_2 + -4)) {
        if (*(char *)((int)param_2 + -8) != '\0') {
          *pcVar1 = '\x01';
        }
      }
      else {
        if ((*pcVar1 != '\0') && (puVar4 != (undefined *)0x0)) {
          puVar5 = *(undefined4 **)(puVar4 + 4);
          if (puVar5 != *(undefined4 **)(puVar4 + 8)) {
            do {
              puVar10 = (undefined4 *)*puVar5;
              if (puVar10 != (undefined4 *)0x0) {
                FUN_100bd180(puVar10);
                FUN_100c8ce6((undefined *)puVar10);
              }
              puVar5 = puVar5 + 1;
            } while (puVar5 != *(undefined4 **)(puVar4 + 8));
          }
          FUN_100bccf0((int)puVar4);
          FUN_100c8ce6(puVar4);
        }
        *(undefined1 *)((int)param_3 + -8) = *(undefined1 *)((int)param_2 + -8);
      }
      *(undefined1 *)((int)param_2 + -8) = 0;
      *(undefined4 *)((int)param_3 + -4) = *(undefined4 *)((int)param_2 + -4);
    }
    param_3 = this;
    param_2 = pvVar9;
    if (pvVar9 == param_1) {
      return this;
    }
  } while( true );
}

