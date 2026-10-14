
int __fastcall FUN_1001ea40(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_100af200(*(int *)((int)param_1 + 4) + 0x50);
  switch(*(undefined4 *)((int)param_1 + 0x1d4)) {
  case 1:
    iVar3 = 0x46;
    break;
  default:
    iVar3 = 0x1a;
    break;
  case 3:
    iVar3 = 0x48;
    break;
  case 4:
    iVar3 = 0x49;
    break;
  case 5:
    iVar3 = 0x4a;
    break;
  case 6:
    iVar3 = 0x4b;
    break;
  case 7:
    iVar3 = 0x4c;
  }
  iVar1 = FUN_10008100(param_1,iVar3);
  iVar2 = 0x1a;
  if (iVar1 != -1) {
    iVar2 = iVar3;
  }
  return iVar2;
}

