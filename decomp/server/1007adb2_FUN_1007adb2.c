
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

void __fastcall FUN_1007adb2(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  undefined4 *in_EAX;
  byte unaff_BL;
  int unaff_ESI;
  int unaff_EDI;
  byte in_CF;
  bool bVar5;
  
  bVar5 = CARRY1(bRamb51007ab,unaff_BL);
  bVar3 = bRamb51007ab + unaff_BL;
  bRamb51007ab = bVar3 + in_CF;
  *(char *)(unaff_EDI + -0x6feff858) =
       *(char *)(unaff_EDI + -0x6feff858) + (char)((uint)param_1 >> 8) +
       (bVar5 || CARRY1(bVar3,in_CF));
  if (param_1[0x34] == 0) {
    if (param_1[0x35] == 0) {
      in_EAX[1] = s_scripted_trainsequence__ArrivalN_10114464;
      *in_EAX = 4;
      pcVar4 = DAT_10121efc;
      in_EAX[-1] = 0x1007ae0b;
      (*pcVar4)();
    }
  }
  else {
    iVar1 = param_1[0x36];
    iVar2 = *(int *)(param_1[0x34] + 0x168);
    in_EAX[1] = unaff_ESI + 2;
    if (iVar2 == *(int *)(iVar1 + 4)) {
      in_EAX[1] = in_EAX[1];
      *in_EAX = 0x1007ae18;
      FUN_1007ae70(param_1);
      iVar2 = DAT_10122044;
      iVar1 = param_1[1];
      *in_EAX = 0;
      in_EAX[-1] = 3;
      iVar1 = *(int *)(iVar1 + 0x1c8);
      in_EAX[-2] = param_1;
      in_EAX[-3] = param_1;
      in_EAX[-4] = iVar1 + *(int *)(iVar2 + 0x98);
      in_EAX[-5] = 0x1007ae3b;
      FUN_10098c10((uint *)in_EAX[-4],(int *)in_EAX[-3],in_EAX[-2],in_EAX[-1],*in_EAX);
      return;
    }
  }
  return;
}

