
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x1000b3f7) overlaps instruction at (ram,0x1000b3f5)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall
FUN_1000b422(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  char *in_EAX;
  char *pcVar6;
  byte *pbVar7;
  byte bVar9;
  int unaff_EBX;
  undefined1 *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined2 in_SS;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  float10 fVar10;
  int unaff_retaddr;
  int iStack_4;
  undefined3 uVar8;
  
  iStack_4 = CONCAT22(iStack_4._2_2_,in_SS);
  *unaff_EDI = in_EAX;
  *in_EAX = *in_EAX + param_2;
  *in_EAX = *in_EAX + param_2;
  uVar8 = (undefined3)((uint)in_EAX >> 8);
  pcVar6 = (char *)CONCAT31(uVar8,*unaff_ESI);
  *pcVar6 = *pcVar6 + param_2;
  bVar9 = param_2 - 1;
  unaff_EDI[1] = pcVar6;
  *pcVar6 = *pcVar6 + bVar9;
  unaff_EDI[2] = pcVar6;
  *pcVar6 = *pcVar6 + bVar9;
  unaff_EDI[3] = pcVar6;
  cVar1 = *pcVar6;
  *pcVar6 = *pcVar6 + bVar9;
  if (!SCARRY1(cVar1,bVar9)) {
    bVar9 = (byte)param_1 & 7;
    bRamd9e9de10 = bRamd9e9de10 << bVar9 | bRamd9e9de10 >> 8 - bVar9;
    if ((in_FPUStatusWord & 0x100) != 0) {
      *(int *)(pcVar6 + 0x2f8) = param_1;
    }
    fVar10 = (float10)FUN_1000aab0();
    DAT_100a5184 = 0;
    return fVar10;
  }
  cVar1 = *pcVar6;
  *pcVar6 = *pcVar6 + bVar9;
  if (*pcVar6 != '\0' && SCARRY1(cVar1,bVar9) == *pcVar6 < '\0') {
    *pcVar6 = *pcVar6 + bVar9;
    *pcVar6 = *pcVar6 + bVar9;
    uVar4 = unaff_ESI[1];
    pbVar7 = (byte *)CONCAT31(uVar8,uVar4);
    unaff_EDI[4] = pbVar7;
    *pbVar7 = *pbVar7 + bVar9;
    puVar5 = unaff_EDI + 6;
    uRamb61000ab = uVar4;
    unaff_EDI[5] = pbVar7;
    bVar2 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar9;
    *(undefined1 *)(unaff_EBX + -0x5435f000) = *(undefined1 *)(unaff_EBX + -0x5435f000);
    pcVar6 = (char *)CONCAT22((short)((uint)in_EAX >> 0x10),
                              CONCAT11((char)((uint)in_EAX >> 8) + bVar9 + CARRY1(bVar2,bVar9),uVar4
                                      ));
    *puVar5 = pcVar6;
    *pcVar6 = *pcVar6 + bVar9;
    sVar3 = *(short *)(unaff_EBX + -0x5417f000);
    *pcVar6 = *pcVar6 + bVar9;
    for (; puVar5 = puVar5 + 1, param_1 != 0; param_1 = param_1 + -1) {
      *puVar5 = pcVar6;
    }
    *pcVar6 = *pcVar6 + bVar9;
    *puVar5 = pcVar6;
    *pcVar6 = *pcVar6 + bVar9;
    pbVar7 = (byte *)CONCAT31((int3)((uint)pcVar6 >> 8),unaff_ESI[2]);
    bVar2 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar9;
    pcVar6 = (char *)((int)pbVar7 * 2 + -0x6f6f6ff0);
    *pcVar6 = *pcVar6 + CARRY1(bVar2,bVar9);
    DAT_100a5180 = param_3;
    if ((DAT_100a9584 != 0) && (*(float *)(DAT_100a9584 + 0xc) != _DAT_10059a18)) {
      fVar10 = (float10)FUN_1000aae0(unaff_EDI + 2,iStack_4,unaff_retaddr,
                                     (double)CONCAT44(param_5,param_4),param_6);
      DAT_100a9588 = *(undefined4 *)(iStack_4 + 0x1b4);
      return fVar10;
    }
    *(undefined4 *)(iStack_4 + 0x1b4) = DAT_100a9588;
    DAT_100a9588 = *(undefined4 *)(iStack_4 + 0x1b4);
    return (float10)sVar3 - in_ST0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

