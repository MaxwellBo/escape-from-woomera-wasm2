
void __thiscall FUN_100378d0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  int unaff_retaddr;
  undefined1 local_8 [4];
  int local_4;
  
  (**(code **)(*(int *)this + 0xc))(local_8,&local_4);
  *param_1 = 0;
  *param_2 = 0;
  switch(*(undefined4 *)((int)this + 0xc4)) {
  case 0:
  case 3:
  case 6:
    *param_1 = 0;
    break;
  case 1:
  case 4:
  case 7:
    local_4 = (unaff_EDI - local_4) / 2;
    goto LAB_10037931;
  case 2:
  case 5:
  case 8:
    local_4 = unaff_EDI - local_4;
LAB_10037931:
    *param_1 = local_4;
  }
  switch(*(undefined4 *)((int)this + 0xc4)) {
  case 0:
  case 1:
  case 2:
    *param_2 = 0;
    goto switchD_10037946_default;
  case 3:
  case 4:
  case 5:
    iVar1 = (unaff_ESI - unaff_retaddr) / 2;
    break;
  case 6:
  case 7:
  case 8:
    iVar1 = unaff_ESI - unaff_retaddr;
    break;
  default:
    goto switchD_10037946_default;
  }
  *param_2 = iVar1;
switchD_10037946_default:
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  *param_1 = *param_1 + *(int *)((int)this + 0xdc);
  *param_2 = *param_2 + *(int *)((int)this + 0xe0);
  return;
}

