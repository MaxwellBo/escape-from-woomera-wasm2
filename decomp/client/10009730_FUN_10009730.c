
void __fastcall FUN_10009730(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float unaff_ESI;
  float10 fVar6;
  float *unaff_retaddr;
  undefined1 auStack_c [12];
  
  fVar6 = (float10)(*DAT_1007f03c)(0x3f000000,0x3f8ccccd);
  fVar1 = *(float *)(param_1[1] + 0x174);
  fVar2 = *(float *)(param_1[1] + 0x178);
  pfVar5 = (float *)(**(code **)(*param_1 + 0xf8))(auStack_c);
  fVar3 = pfVar5[2];
  fVar4 = pfVar5[1];
  *unaff_retaddr = unaff_ESI + *pfVar5;
  unaff_retaddr[1] = (float)(fVar6 * (float10)fVar1) + fVar4;
  unaff_retaddr[2] = (float)(fVar6 * (float10)fVar2) + fVar3;
  return;
}

