
void __thiscall FUN_100505f0(void *this,int *param_1)

{
  *(undefined4 *)((int)this + 0x1e0) = 1;
  switch(*param_1) {
  case 0x23:
    *(undefined4 *)((int)this + 0x1d0) = 0x1c;
    return;
  default:
    FUN_100057f0(this,param_1);
    return;
  case 0x2d:
    *(undefined4 *)((int)this + 0x1d0) = 0x3c;
    return;
  case 0x31:
    *(undefined4 *)((int)this + 0x1d0) = 2;
    return;
  case 0x5d:
    *(undefined4 *)(*(int *)((int)this + 4) + 0x110) = 0;
    *(undefined4 *)((int)this + 0x348) = 1;
    return;
  case 0x5e:
    *(undefined4 *)((int)this + 0x348) = 0;
    *(undefined4 *)((int)this + 0x1e0) = 4;
    return;
  case 0x5f:
    *(undefined4 *)((int)this + 0x1d0) = 0x2f;
    return;
  case 0x60:
    *(undefined4 *)((int)this + 0x344) = 1;
    *(undefined4 *)((int)this + 0x1e0) = 4;
    return;
  case 0x61:
    *(undefined4 *)((int)this + 0x344) = 0;
    *(undefined4 *)((int)this + 0x1e0) = 4;
    return;
  case 0x62:
    *(undefined4 *)((int)this + 0x1d0) = 8;
    return;
  }
}

