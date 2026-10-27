
/* WARNING: Instruction at (ram,0x100379c2) overlaps instruction at (ram,0x100379c1)
    */

Label * __fastcall FUN_1003799d(Label *param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar5;
  uint *in_EAX;
  byte bVar6;
  Image *this;
  TextImage *pTVar3;
  undefined4 uVar4;
  byte bVar7;
  uint uVar8;
  int *piVar9;
  int unaff_EBP;
  byte *unaff_ESI;
  byte *unaff_EDI;
  byte in_CF;
  bool bVar10;
  bool bVar11;
  byte in_AF;
  bool in_SF;
  undefined4 in_stack_ffffffc4;
  undefined4 uVar12;
  char *pcVar13;
  void *pvStack_1c;
  code *pcStack_18;
  undefined4 uStack_14;
  
  bVar7 = (byte)param_1;
  if (in_SF) {
    bVar1 = *unaff_ESI + (byte)param_2;
    bVar10 = CARRY1(*unaff_ESI,(byte)param_2) || CARRY1(bVar1,in_CF);
    *unaff_ESI = bVar1 + in_CF;
    if ((char)*unaff_ESI < '\0') goto code_r0x100379a7;
    bVar11 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
code_r0x100379ab:
    bVar10 = CARRY1(*unaff_ESI,bVar7) || CARRY1(*unaff_ESI + bVar7,bVar11);
    *unaff_ESI = *unaff_ESI + bVar7 + bVar11;
    if ((char)*unaff_ESI < '\0') goto code_r0x100379af;
    bVar11 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
    bVar1 = (byte)in_EAX;
    in_AF = 9 < (bVar1 & 0xf) | in_AF;
    bVar11 = 0x99 < bVar1 || bVar11;
    in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar1 + in_AF * '\x06' + bVar11 * '`');
code_r0x100379b3:
    bVar5 = (byte)((uint)in_EAX >> 8);
    bVar1 = *unaff_EDI + bVar5;
    bVar10 = CARRY1(*unaff_EDI,bVar5) || CARRY1(bVar1,bVar11);
    *unaff_EDI = bVar1 + bVar11;
    if ((char)*unaff_EDI < '\0') goto code_r0x100379b7;
    bVar11 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
code_r0x100379bb:
    bVar1 = *unaff_ESI + (byte)param_2;
    bVar10 = CARRY1(*unaff_ESI,(byte)param_2) || CARRY1(bVar1,bVar11);
    *unaff_ESI = bVar1 + bVar11;
    if (-1 < (char)*unaff_ESI) {
      uVar8 = param_2 + *in_EAX;
      if (unaff_EBP + -1 < 0) {
        *(char *)(unaff_EBP + 0x78) =
             *(char *)(unaff_EBP + 0x78) + (char)uVar8 + CARRY4(param_2,*in_EAX);
      }
      piVar9 = (int *)(uVar8 + *in_EAX);
      if ((int)piVar9 < 0) {
        cVar2 = (char)in_EAX;
        *(char *)in_EAX = (char)*in_EAX + cVar2 + CARRY4(uVar8,*in_EAX);
        *(char *)in_EAX = (char)*in_EAX + cVar2;
        *(char **)param_1 = (char *)(*(int *)param_1 + (int)in_EAX);
        *piVar9 = (int)(*piVar9 + (int)in_EAX);
        in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),cVar2 + (char)*piVar9);
      }
      goto code_r0x100379d2;
    }
  }
  else {
    bVar10 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
    bVar1 = (byte)in_EAX;
    in_AF = 9 < (bVar1 & 0xf) | in_AF;
    bVar10 = 0x99 < bVar1 || bVar10;
    in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),bVar1 + in_AF * '\x06' + bVar10 * '`');
code_r0x100379a7:
    bVar5 = (byte)((uint)in_EAX >> 8);
    bVar1 = *unaff_EDI + bVar5;
    bVar11 = CARRY1(*unaff_EDI,bVar5) || CARRY1(bVar1,bVar10);
    *unaff_EDI = bVar1 + bVar10;
    if ((char)*unaff_EDI < '\0') goto code_r0x100379ab;
    bVar10 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
code_r0x100379af:
    bVar1 = *unaff_ESI + (byte)param_2;
    bVar11 = CARRY1(*unaff_ESI,(byte)param_2) || CARRY1(bVar1,bVar10);
    *unaff_ESI = bVar1 + bVar10;
    if ((char)*unaff_ESI < '\0') goto code_r0x100379b3;
    bVar10 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
code_r0x100379b7:
    bVar11 = CARRY1(*unaff_ESI,bVar7) || CARRY1(*unaff_ESI + bVar7,bVar10);
    *unaff_ESI = *unaff_ESI + bVar7 + bVar10;
    if ((char)*unaff_ESI < '\0') goto code_r0x100379bb;
    bVar10 = CARRY4(param_2,*in_EAX);
    param_2 = param_2 + *in_EAX;
    bVar1 = (byte)in_EAX;
    bVar10 = 0x99 < bVar1 || bVar10;
    in_EAX = (uint *)CONCAT31((int3)((uint)in_EAX >> 8),
                              bVar1 + (9 < (bVar1 & 0xf) | in_AF) * '\x06' + bVar10 * '`');
  }
  bVar1 = *unaff_EDI;
  bVar6 = (byte)((uint)in_EAX >> 8);
  bVar5 = *unaff_EDI;
  *unaff_EDI = bVar5 + bVar6 + bVar10;
  if ((char)*unaff_EDI < '\0') {
    *(char *)(unaff_EBP + 0x79) =
         *(char *)(unaff_EBP + 0x79) + bVar7 + (CARRY1(bVar1,bVar6) || CARRY1(bVar5 + bVar6,bVar10))
    ;
  }
  if ((int)(param_2 + *in_EAX) < 0) {
    unaff_ESI[0x79] = unaff_ESI[0x79] + bVar6 + CARRY4(param_2,*in_EAX);
  }
  *(char *)in_EAX = (char)*in_EAX + (char)in_EAX;
code_r0x100379d2:
  *param_1 = (Label)((char)*param_1 + (char)in_EAX);
  *(char **)param_1 = (char *)(*(int *)param_1 + (int)in_EAX);
  uStack_14 = 0xffffffff;
  pcStack_18 = FUN_10057ca1;
  pvStack_1c = ExceptionList;
  ExceptionList = &pvStack_1c;
  vgui::Label::Label(param_1,s_);
  pcVar13 = (char *)0x2c;
  *(undefined ***)param_1 = &PTR_setPos_10062724;
  uVar12 = 0x10037a14;
  this = operator_new(0x2c);
  uStack_14 = 0;
  if (this == (Image *)0x0) {
    this = (Image *)0x0;
  }
  else {
    vgui::Image::Image(this);
    *(undefined ***)this = &PTR_FUN_100626c4;
    pTVar3 = operator_new(0x48);
    uStack_14._0_1_ = 1;
    if (pTVar3 == (TextImage *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar12 = vgui::TextImage::TextImage(pTVar3,s_);
    }
    pcVar13 = (char *)0x48;
    uStack_14._0_1_ = 0;
    *(undefined4 *)(this + 0x24) = uVar12;
    uVar12 = 0x10037a69;
    pTVar3 = operator_new(0x48);
    uStack_14 = CONCAT31(uStack_14._1_3_,2);
    if (pTVar3 == (TextImage *)0x0) {
      *(undefined4 *)(this + 0x28) = 0;
    }
    else {
      pcVar13 = s_;
      uVar12 = 0x10037a85;
      uVar4 = vgui::TextImage::TextImage(pTVar3,s_);
      *(undefined4 *)(this + 0x28) = uVar4;
    }
  }
  uStack_14 = 0xffffffff;
  *(Image **)(param_1 + 0xd0) = this;
  vgui::Color::Color((Color *)&stack0xffffffc4,0xff,0xaa,0,0);
  FUN_10037c30(*(void **)(param_1 + 0xd0),in_stack_ffffffc4,uVar12,pcVar13);
  *(undefined4 *)(param_1 + 0xd4) = 0xfffffffe;
  param_1[0xe4] = (Label)0x1;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  ExceptionList = pvStack_1c;
  return param_1;
}

