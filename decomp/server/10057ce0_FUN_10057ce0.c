
void __fastcall FUN_10057ce0(void *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined1 auStack_40 [64];
  
  FUN_100af210((float *)(*(int *)((int)param_1 + 4) + 0x50));
  puVar1 = auStack_40;
  dVar3 = (double)*(float *)(DAT_10122044 + 0x28);
  puVar2 = &DAT_10110224;
  FUN_100c8506(puVar1,&DAT_10110224);
  (*DAT_10121ef8)(s_sv_skyvec_x_10110218,auStack_40,puVar1,puVar2,dVar3);
  puVar1 = auStack_40;
  dVar3 = (double)*(float *)(DAT_10122044 + 0x2c);
  puVar2 = &DAT_10110224;
  FUN_100c8506(puVar1,&DAT_10110224);
  (*DAT_10121ef8)(s_sv_skyvec_y_1011020c,auStack_40,puVar1,puVar2,dVar3);
  puVar1 = auStack_40;
  dVar3 = (double)*(float *)(DAT_10122044 + 0x30);
  puVar2 = &DAT_10110224;
  FUN_100c8506(puVar1,&DAT_10110224);
  (*DAT_10121ef8)(s_sv_skyvec_z_10110200,auStack_40,puVar1,puVar2,dVar3);
  FUN_10057940(param_1);
  return;
}

