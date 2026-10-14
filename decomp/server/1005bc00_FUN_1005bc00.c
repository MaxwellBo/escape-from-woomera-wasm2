
void __thiscall
FUN_1005bc00(void *this,int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  int local_40;
  int local_3c;
  undefined1 local_38 [4];
  int local_34;
  
  piVar1 = param_1;
  local_40 = 0;
  local_3c = 0;
  bVar2 = FUN_1005ae40(this,(int)param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    param_1 = (int *)0x1;
    if (0 < *(int *)(DAT_10122044 + 0x90)) {
      do {
        piVar3 = (int *)FUN_100af1c0((int)param_1);
        if (piVar3 != (int *)0x0) {
          iVar5 = *(int *)((int)this + 4);
          if (((*(float *)(iVar5 + 8) == DAT_10121dd8) && (*(float *)(iVar5 + 0xc) == DAT_10121ddc))
             && (*(float *)(iVar5 + 0x10) == DAT_10121de0)) {
            uVar6 = 1;
            if ((*(uint *)(piVar3[1] + 0x1a4) & 0x4000) != 0) {
              uVar6 = 3;
            }
            iVar4 = piVar3[1] + 8;
            FUN_100afcc0(iVar4,iVar4,uVar6,*(undefined4 *)(iVar5 + 0x208),local_38);
            iVar5 = local_34;
          }
          else {
            iVar5 = FUN_10019f50(this,(int)piVar3);
          }
          if (iVar5 == 0) {
            local_3c = local_3c + 1;
            if (*(int *)((int)this + 0xc0) != 0) {
              puVar7 = (uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xc0));
              goto LAB_1005bd2c;
            }
          }
          else {
            local_40 = local_40 + 1;
            if (*(int *)((int)this + 0xbc) != 0) {
              puVar7 = (uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xbc));
LAB_1005bd2c:
              FUN_10098c10(puVar7,piVar3,piVar1,param_3,param_4);
            }
          }
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 <= *(int *)(DAT_10122044 + 0x90));
    }
    if (*(int *)((int)this + 0xc4) != 0) {
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 0xc4)),piVar1,this,
                   2,(float)local_40);
    }
    if (*(int *)((int)this + 200) != 0) {
      FUN_10098c10((uint *)(*(int *)(DAT_10122044 + 0x98) + *(int *)((int)this + 200)),piVar1,this,2
                   ,(float)local_3c);
    }
  }
  return;
}

