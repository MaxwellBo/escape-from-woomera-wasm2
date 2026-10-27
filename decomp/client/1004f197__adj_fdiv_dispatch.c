
float10 _adj_fdiv_dispatch(void)

{
  code *pcVar1;
  uint in_EAX;
  float10 in_ST0;
  float10 fVar2;
  float10 in_ST1;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  
  switch(in_EAX & 0x3f) {
  case 0:
    return in_ST0 / in_ST0;
  case 1:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 2:
    return in_ST0 / in_ST0;
  case 3:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 4:
    return in_ST0 / in_ST0;
  case 5:
    return in_ST1;
  case 6:
    return in_ST0 / in_ST0;
  case 7:
    return in_ST1;
  case 8:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 9:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 10:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0xb:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0xc:
    FUN_1004f080();
    return in_ST0;
  case 0xd:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0xe:
    FUN_1004f080();
    return in_ST0;
  case 0xf:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x10:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x11:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 0x12:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x13:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0x14:
    FUN_1004f080();
    return in_ST0;
  case 0x15:
    FUN_1004f080();
    return extraout_ST1;
  case 0x16:
    FUN_1004f080();
    return in_ST0;
  case 0x17:
    FUN_1004f080();
    return extraout_ST1_00;
  case 0x18:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x19:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 0x1a:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x1b:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0x1c:
    FUN_1004f080();
    return in_ST0;
  case 0x1d:
    FUN_1004f080();
    return in_ST4;
  case 0x1e:
    FUN_1004f080();
    return in_ST0;
  case 0x1f:
    FUN_1004f080();
    return in_ST4;
  case 0x20:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x21:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 0x22:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x23:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0x24:
    FUN_1004f080();
    return in_ST0;
  case 0x25:
    FUN_1004f080();
    return in_ST5;
  case 0x26:
    FUN_1004f080();
    return in_ST0;
  case 0x27:
    FUN_1004f080();
    return in_ST5;
  case 0x28:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x29:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 0x2a:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x2b:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0x2c:
    FUN_1004f080();
    return in_ST0;
  case 0x2d:
    FUN_1004f080();
    return in_ST6;
  case 0x2e:
    FUN_1004f080();
    return in_ST0;
  case 0x2f:
    FUN_1004f080();
    return in_ST6;
  case 0x30:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x31:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 0x32:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x33:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0x34:
    FUN_1004f080();
    return in_ST0;
  case 0x35:
    FUN_1004f080();
    return in_ST7;
  case 0x36:
    FUN_1004f080();
    return in_ST0;
  case 0x37:
    FUN_1004f080();
    return in_ST7;
  case 0x38:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x39:
    pcVar1 = (code *)swi(6);
    (*pcVar1)();
  case 0x3a:
    fVar2 = (float10)FUN_1004f080();
    return fVar2;
  case 0x3b:
    pcVar1 = (code *)swi(6);
    in_ST0 = (float10)(*pcVar1)();
  case 0x3c:
    FUN_1004f080();
    return in_ST0;
  case 0x3d:
    FUN_1004f080();
    return in_ST7;
  case 0x3e:
    FUN_1004f080();
    return in_ST0;
  case 0x3f:
    FUN_1004f080();
    return in_ST7;
  }
}

