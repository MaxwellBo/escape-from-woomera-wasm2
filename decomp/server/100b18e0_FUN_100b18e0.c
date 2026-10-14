
undefined4 __thiscall
FUN_100b18e0(void *this,undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  int local_110;
  int local_10c;
  int local_104;
  int local_100 [64];
  
  local_110 = 0;
  if (0 < param_5) {
    psVar4 = (short *)(param_4 + 0xc);
    iVar3 = param_5;
    do {
      iVar1 = FUN_100b1bf0(*(int *)(psVar4 + -2) + param_3,
                           *(int *)(&DAT_1011ad80 + *(int *)(psVar4 + -6) * 4) * (int)*psVar4);
      if (iVar1 != 0) {
        local_110 = local_110 + 1;
      }
      psVar4 = psVar4 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_104 = param_5 - local_110;
  FUN_100b1440(this,param_2,&local_104,1);
  if (0 < param_5) {
    local_10c = param_5;
    psVar4 = (short *)(param_4 + 0xc);
    do {
      pfVar2 = (float *)(*(int *)(psVar4 + -2) + param_3);
      iVar3 = FUN_100b1bf0((int)pfVar2,
                           *(int *)(&DAT_1011ad80 + *(int *)(psVar4 + -6) * 4) * (int)*psVar4);
      if (iVar3 == 0) {
        switch(*(undefined4 *)(psVar4 + -6)) {
        case 0:
          FUN_100b1460(this,*(byte **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 1:
        case 0x10:
        case 0x11:
          FUN_100b1510(this,*(byte **)(psVar4 + -4),(int *)pfVar2,(int)*psVar4);
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          if (0x40 < *psVar4) {
            (*DAT_10121efc)(4,s_Can_t_save_more_than__d_entities_1011b2e8,0x40);
          }
          local_110 = 0;
          if (0 < *psVar4) {
            piVar5 = local_100;
            iVar3 = (int)pfVar2 - (int)local_100;
            do {
              switch(*(undefined4 *)(psVar4 + -6)) {
              case 2:
                iVar1 = FUN_100b11e0(this,*(undefined4 *)((int)piVar5 + iVar3));
                break;
              case 3:
                iVar1 = *(int *)((int)piVar5 + iVar3);
                goto LAB_100b1a70;
              case 4:
                iVar1 = FUN_10019410((uint *)pfVar2);
LAB_100b1a70:
                iVar1 = FUN_100b11a0(this,iVar1);
                break;
              case 5:
                iVar1 = FUN_100b11c0(this,*(int *)((int)piVar5 + iVar3));
                break;
              case 6:
                iVar1 = FUN_100b1200(this,*(int *)((int)piVar5 + iVar3));
                break;
              default:
                goto switchD_100b1a36_default;
              }
              *piVar5 = iVar1;
switchD_100b1a36_default:
              local_110 = local_110 + 1;
              pfVar2 = pfVar2 + 2;
              piVar5 = piVar5 + 1;
            } while (local_110 < *psVar4);
          }
          FUN_100b1440(this,*(byte **)(psVar4 + -4),local_100,(int)*psVar4);
          break;
        case 7:
          FUN_100b15c0(this,*(byte **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 8:
          FUN_100b1660(this,*(byte **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 9:
        case 10:
        case 0xc:
          FUN_100b1440(this,*(byte **)(psVar4 + -4),pfVar2,(int)*psVar4);
          break;
        case 0xb:
          FUN_100b1710(this,param_1,*(byte **)(psVar4 + -4),pfVar2);
          break;
        case 0xd:
          FUN_100b1400(this,*(byte **)(psVar4 + -4),(int)*psVar4 << 1,pfVar2);
          break;
        case 0xe:
          FUN_100b1400(this,*(byte **)(psVar4 + -4),(int)*psVar4,pfVar2);
          break;
        case 0xf:
          FUN_100b1480(this,*(byte **)(psVar4 + -4),pfVar2,(float)(int)*psVar4);
          break;
        default:
          (*DAT_10121efc)(4,s_Bad_field_type_1011b2d8);
        }
      }
      psVar4 = psVar4 + 8;
      local_10c = local_10c + -1;
    } while (local_10c != 0);
  }
  return 1;
}

