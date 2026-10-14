
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1006ca10(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(int *)this == 0) || (*(int *)((int)this + 4) == 0)) {
    (*DAT_10121efc)(2,s_Graph_not_ready__101128c4);
  }
  else {
    if (param_1 < 0) {
      (*DAT_10121efc)(2,s_Can_t_show_connections_for_node___10112970,param_1);
      return;
    }
    iVar7 = param_1 * 0x58;
    iVar6 = *(int *)((int)this + 0xc) + iVar7;
    FUN_100afe30(iVar6,&DAT_10121dd8,0xff,0x14);
    if (*(int *)(iVar6 + 0x20) < 1) {
      (*DAT_10121efc)(2,s___No_Connections__1011295c);
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar6 + 0x20)) {
      do {
        puVar1 = (undefined4 *)
                 (*(int *)((int)this + 0xc) +
                 *(int *)(*(int *)((int)this + 0x10) + 4 +
                         (*(int *)(*(int *)((int)this + 0xc) + 0x24 + iVar7) + iVar5) * 0x18) * 0x58
                 );
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        fVar4 = (float)puVar1[2];
        (*DAT_10121ec0)(0,0x17,0,0);
        (*DAT_10121ec8)(0x66);
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 0xc) + iVar7));
        (*DAT_10121edc)(*(undefined4 *)(*(int *)((int)this + 0xc) + 4 + iVar7));
        (*DAT_10121edc)(*(float *)(*(int *)((int)this + 0xc) + 8 + iVar7) + _DAT_100de45c);
        (*DAT_10121edc)(uVar2);
        (*DAT_10121edc)(uVar3);
        (*DAT_10121edc)(fVar4 + _DAT_100de45c);
        (*DAT_10121ec4)();
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar6 + 0x20));
      return;
    }
  }
  return;
}

