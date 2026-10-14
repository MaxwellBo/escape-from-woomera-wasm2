
/* public: virtual void __thiscall CTriggerChangeCVar::Think(void) */

void __thiscall CTriggerChangeCVar::Think(CTriggerChangeCVar *this)

{
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  CTriggerChangeCVar *pCVar4;
  undefined1 local_100 [256];
  
                    /* 0xa9b90  246  ?Think@CTriggerChangeCVar@@UAEXXZ */
  if ((*(uint *)(*(int *)(this + 4) + 0x1a0) & 0x80000) != 0) {
    pCVar4 = this + 0xb8;
    iVar1 = *(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10122044 + 0x98);
    puVar2 = local_100;
    pcVar3 = s__s__s_10119e1c;
    FUN_100c8506(puVar2,(byte *)s__s__s_10119e1c);
    (*DAT_10121ea4)(local_100,puVar2,pcVar3,iVar1,pCVar4);
    *(uint *)(*(int *)(this + 4) + 0x1a0) = *(uint *)(*(int *)(this + 4) + 0x1a0) & 0xfff7ffff;
  }
  return;
}

