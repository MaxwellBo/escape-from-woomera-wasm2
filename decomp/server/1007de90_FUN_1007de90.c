
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1007de90(int *param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  piVar1 = DAT_10122044;
  if (((param_1[0xb0] & 0xffffc000U) != 0) &&
     (lVar7 = __ftol(), uVar5 = (int)(uint)lVar7 >> 0x1f,
     _DAT_100e4138 <= (double)(int)(((uint)lVar7 ^ uVar5) - uVar5))) {
    param_1[0x127] = *piVar1;
    iVar6 = 0;
    do {
      uVar5 = 0x8000 << ((byte)iVar6 & 0x1f);
      if ((param_1[0xb0] & uVar5) != 0) {
        switch(iVar6) {
        case 0:
        case 1:
        case 3:
        case 5:
        case 6:
        case 7:
          uVar2 = 2;
          break;
        case 2:
          (**(code **)(*param_1 + 0x60))(param_1[1],param_1[1],0x40000000,0);
          uVar2 = 5;
          break;
        case 4:
          if (param_1[0x131] < param_1[0x130]) {
            iVar4 = param_1[0x130] - param_1[0x131];
            if (9 < iVar4) {
              iVar4 = 10;
            }
            (**(code **)(*param_1 + 100))((float)iVar4,0);
            param_1[0x131] = param_1[0x131] + iVar4;
          }
          uVar2 = 4;
          break;
        default:
          uVar2 = 0;
        }
        if (*(char *)((int)param_1 + iVar6 + 0x2c4) == '\0') {
          *(undefined1 *)((int)param_1 + iVar6 + 0x2c4) = uVar2;
        }
        else {
          if (iVar6 == 1) {
            if (*(byte *)((int)param_1 + 0x2c5) < 2) {
LAB_1007df88:
              if (param_1[0xd4] != 0) {
                *(undefined1 *)((int)param_1 + iVar6 + 0x2c4) = 0;
                param_1[0xd4] = param_1[0xd4] + -1;
                FUN_1007e210(param_1,(byte *)s__HEV_HEAL4_10114e54,0,0);
              }
            }
          }
          else if ((iVar6 == 2) && (*(byte *)((int)param_1 + 0x2c6) < 5)) goto LAB_1007df88;
          cVar3 = *(char *)((int)param_1 + iVar6 + 0x2c4);
          if ((cVar3 == '\0') ||
             (cVar3 = cVar3 + -1, *(char *)((int)param_1 + iVar6 + 0x2c4) = cVar3, cVar3 == '\0')) {
            *(undefined1 *)((int)param_1 + iVar6 + 0x2c4) = 0;
            param_1[0xb0] = param_1[0xb0] & ~uVar5;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 8);
  }
  return;
}

