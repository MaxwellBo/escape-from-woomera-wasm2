
undefined4 __thiscall FUN_10038920(void *this,undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  int *piVar4;
  int unaff_EBX;
  char *pcVar5;
  char acStack_48 [20];
  
  acStack_48[0x10] = '3';
  acStack_48[0x11] = -0x77;
  acStack_48[0x12] = '\x03';
  acStack_48[0x13] = '\x10';
  iVar2 = FUN_1001f970(param_2);
  if (param_2 == *(int *)((int)this + 0x108)) {
    acStack_48[0x10] = '?';
    acStack_48[0x11] = '\0';
    acStack_48[0x12] = '\0';
    acStack_48[0x13] = '\0';
    acStack_48[0xc] = -0x10;
    acStack_48[0xd] = '\0';
    acStack_48[0xe] = '\0';
    acStack_48[0xf] = '\0';
    acStack_48[8] = -0x38;
    acStack_48[9] = '\0';
    acStack_48[10] = '\0';
    acStack_48[0xb] = '\0';
    acStack_48[4] = '`';
    acStack_48[5] = -0x77;
    acStack_48[6] = '\x03';
    acStack_48[7] = '\x10';
    (**(code **)(**(int **)((int)this + 0x104) + 0x120))();
  }
  else {
    acStack_48[0x10] = -1;
    acStack_48[0x11] = '\0';
    acStack_48[0x12] = '\0';
    acStack_48[0x13] = '\0';
    acStack_48[0xc] = -1;
    acStack_48[0xd] = '\0';
    acStack_48[0xe] = '\0';
    acStack_48[0xf] = '\0';
    acStack_48[8] = -1;
    acStack_48[9] = '\0';
    acStack_48[10] = '\0';
    acStack_48[0xb] = '\0';
    acStack_48[4] = 'z';
    acStack_48[5] = -0x77;
    acStack_48[6] = '\x03';
    acStack_48[7] = '\x10';
    (**(code **)(**(int **)((int)this + 0x104) + 0x120))();
  }
  acStack_48[4] = -0x38;
  acStack_48[5] = '\0';
  acStack_48[6] = '\0';
  acStack_48[7] = '\0';
  acStack_48[0] = '\0';
  acStack_48[1] = '\0';
  acStack_48[2] = '\0';
  acStack_48[3] = '\0';
  (**(code **)(**(int **)((int)this + 0x104) + 300))(0,0);
  (**(code **)(**(int **)((int)this + 0x104) + 0x21c))(3);
  (**(code **)(**(int **)((int)this + 0x104) + 0x20c))(2);
  if (iVar2 == 0) {
    if ((param_2 == 0) && (unaff_EBX == 0)) {
      bVar1 = FUN_1001f950();
      piVar4 = *(int **)((int)this + 0x104);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        (**(code **)(*piVar4 + 0x200))(piVar4,s_Press__Refresh__to_search_for_se_1007a028);
        return *(undefined4 *)((int)this + 0x104);
      }
      iVar2 = *piVar4;
      pcVar5 = s_Waiting_for_servers_to_respond___1007a054;
    }
    else {
      piVar4 = *(int **)((int)this + 0x104);
      pcVar5 = s_;
      iVar2 = *piVar4;
    }
    goto LAB_10038bae;
  }
  switch(unaff_EBX) {
  case 0:
    pcVar5 = (char *)(**(code **)(DAT_100a5148 + 0x20))(iVar2,s_address_10078a0c);
    if (pcVar5 != (char *)0x0) {
      _strncpy(acStack_48,pcVar5,0x1f);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))(*(int **)((int)this + 0x104),acStack_48);
      return *(undefined4 *)((int)this + 0x104);
    }
    break;
  case 1:
    pcVar5 = (char *)(**(code **)(DAT_100a5148 + 0x20))(iVar2,s_hostname_10078a18);
    if (pcVar5 == (char *)0x0) break;
    _strncpy(acStack_48,pcVar5,0x1f);
    piVar4 = *(int **)((int)this + 0x104);
    pcVar5 = acStack_48;
    iVar2 = *piVar4;
    goto LAB_10038bae;
  case 2:
    pcVar5 = (char *)(**(code **)(DAT_100a5148 + 0x20))(iVar2,&DAT_1007a010);
    if (pcVar5 != (char *)0x0) {
      _strncpy(acStack_48,pcVar5,0x1f);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))(*(int **)((int)this + 0x104),acStack_48);
      return *(undefined4 *)((int)this + 0x104);
    }
    break;
  case 3:
    iVar3 = (**(code **)(DAT_100a5148 + 0x20))(iVar2,s_current_1007a000);
    iVar2 = (**(code **)(DAT_100a5148 + 0x20))(iVar2,&DAT_1007a078);
    if ((iVar3 != 0) && (iVar2 != 0)) {
      FUN_100499f0(acStack_48,(byte *)s__s__s_10077928);
      (**(code **)(**(int **)((int)this + 0x104) + 0x200))(*(int **)((int)this + 0x104),acStack_48);
      return *(undefined4 *)((int)this + 0x104);
    }
    break;
  case 4:
    pcVar5 = (char *)(**(code **)(DAT_100a5148 + 0x20))(iVar2,&DAT_10078a04);
    if (pcVar5 == (char *)0x0) break;
    _strncpy(acStack_48,pcVar5,0x1f);
    piVar4 = *(int **)((int)this + 0x104);
    pcVar5 = acStack_48;
    iVar2 = *piVar4;
LAB_10038bae:
    (**(code **)(iVar2 + 0x200))(piVar4,pcVar5);
  }
  return *(undefined4 *)((int)this + 0x104);
}

