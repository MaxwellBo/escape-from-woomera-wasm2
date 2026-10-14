
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CTestHull::PathFind(void) */

void __thiscall CTestHull::PathFind(CTestHull *this)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int local_c8;
  int aiStack_c4 [49];
  
                    /* 0x6e860  164  ?PathFind@CTestHull@@QAEXXZ */
  if ((DAT_10122780 == 0) || (DAT_10122784 == 0)) {
    pcVar5 = s_Graph_not_ready__101128c4;
  }
  else {
    iVar2 = FUN_1006bcd0(&DAT_10122780,&local_c8,0,0x13,0,0);
    if (iVar2 != 0) {
      (*DAT_10121efc)(2,&DAT_101130d4,iVar2);
      iVar2 = iVar2 + -1;
      if (iVar2 < 1) {
        return;
      }
      piVar3 = aiStack_c4;
      puVar4 = (undefined4 *)(DAT_1012278c + local_c8 * 0x58);
      do {
        puVar1 = (undefined4 *)(DAT_1012278c + *piVar3 * 0x58);
        (*DAT_10121ec0)(0,0x17,0,0);
        (*DAT_10121ec8)(0x66);
        (*DAT_10121edc)(*puVar4);
        (*DAT_10121edc)(puVar4[1]);
        (*DAT_10121edc)((float)puVar4[2] + _DAT_100de45c);
        (*DAT_10121edc)(*puVar1);
        (*DAT_10121edc)(puVar1[1]);
        (*DAT_10121edc)((float)puVar1[2] + _DAT_100de45c);
        (*DAT_10121ec4)();
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -1;
        puVar4 = puVar1;
      } while (iVar2 != 0);
      return;
    }
    pcVar5 = s_No_Path__101130d8;
  }
  (*DAT_10121efc)(2,pcVar5);
  return;
}

