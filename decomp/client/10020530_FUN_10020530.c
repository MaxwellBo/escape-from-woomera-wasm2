
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10020530(void *this,int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char local_20 [32];
  
  if ((param_1 < 1) || (5 < param_1)) {
    (*DAT_100a5090)(s_Invalid_spectator_mode__10078c44);
    return;
  }
  if (param_2 != *(int *)((int)this + 0x18)) {
    *(int *)((int)this + 0x18) = param_2;
    FUN_100499f0(local_20,(byte *)s__c_Spec_Mode_Inset_d_10078c70);
    uVar4 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_10030ce0(0,~uVar4,local_20);
  }
  if (param_1 != *(int *)((int)this + 0x14)) {
    switch(param_1) {
    case 2:
    case 4:
      DAT_100b6724 = 4;
      break;
    case 3:
      DAT_100b6724 = 3;
      if (*(int *)((int)this + 0x14) == 2) {
        DAT_100bcdf0 = DAT_100b6f88;
        _DAT_100bcdf4 = DAT_100b6f8c;
        _DAT_100bcdf8 = DAT_100b6f90;
        _DAT_100bcde0 = DAT_100b6764;
        _DAT_100bcde4 = DAT_100b6768;
        _DAT_100bcde8 = DAT_100b676c;
        (*DAT_100a507c)(&DAT_100bcde0);
        DAT_100bcdcc = 1;
      }
      if (*(int *)((int)this + 0x14) == 4) {
        FUN_10040ef0(*(int *)((int)this + 0x950),&DAT_100bcdf0,(float *)&DAT_100bcde0);
        (*DAT_100a507c)(&DAT_100bcde0);
        DAT_100bcdcc = 1;
      }
      *(undefined4 *)((int)this + 0x950) = 0;
      DAT_100b672c = 0;
      DAT_100b6728 = 0;
      break;
    case 5:
      DAT_100b6724 = 4;
      *(undefined4 *)((int)this + 0x954) = *(undefined4 *)((int)this + 0x2c);
      *(undefined4 *)((int)this + 0x958) = *(undefined4 *)((int)this + 0x20);
      *(undefined4 *)((int)this + 0x95c) = *(undefined4 *)((int)this + 0x24);
      *(undefined4 *)((int)this + 0x960) = *(undefined4 *)((int)this + 0x28);
    }
    *(int *)((int)this + 0x14) = param_1;
    FUN_100499f0(local_20,(byte *)s__c_Spec_Mode_d_10078c60);
    uVar4 = 0xffffffff;
    pcVar5 = local_20;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_10030ce0(0,~uVar4,local_20);
    if ((DAT_100b6724 == 4) && (*(int *)((int)this + 0x950) == 0)) {
      piVar2 = (int *)(*DAT_100a50c4)(*(undefined4 *)((int)this + 0xca8));
      uVar3 = FUN_10020820(piVar2);
      if ((char)uVar3 != '\0') {
        DAT_100b672c = *(undefined4 *)((int)this + 0xca8);
        *(undefined4 *)((int)this + 0x950) = DAT_100b672c;
        DAT_100b6728 = *(undefined4 *)((int)this + 0xcac);
      }
    }
    if ((*(int *)((int)this + 0x14) == 3) || (*(int *)((int)this + 0x14) == 4)) {
      uVar11 = 0xff;
      uVar10 = 0xff;
      uVar9 = 0xff;
      _DAT_100a96d8 = 0x18;
      uVar6 = 0x18;
      _DAT_100a96dc = 0x30;
      _DAT_100a96e4 = 0x18;
      uVar3 = *(undefined4 *)((int)this + 0xc94);
      uVar7 = 0x30;
      uVar8 = 0x18;
    }
    else {
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      _DAT_100a96e4 = 0;
      _DAT_100a96d8 = 0;
      _DAT_100a96dc = 0;
      uVar6 = 0;
      uVar3 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    _DAT_100a96e0 = 0;
    (*DAT_100a5024)(uVar3,uVar6,uVar7,0,uVar8,uVar9,uVar10,uVar11);
  }
  if ((*(int *)((int)this + 0x14) != 5) &&
     ((*(int *)((int)this + 0x18) == 1 || (*(int *)((int)this + 0x18) == 2)))) {
    FUN_10020530(this,*(int *)((int)this + 0x14),3);
  }
  if ((*(int *)((int)this + 0x14) == 5) && (*(int *)((int)this + 0x18) == 3)) {
    FUN_10020530(this,5,0);
  }
  FUN_1003cb40(DAT_100a5178);
  return;
}

