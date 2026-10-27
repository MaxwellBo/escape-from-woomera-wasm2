/* Ghidra decompiler failed on this function (overlapping varnodes).
   Listing is Capstone disassembly of the function body. */

100c8ae2  8bc8                 mov ecx, eax
100c8ae4  50                   push eax
100c8ae5  9b                   wait
100c8ae6  d93c24               fnstcw word ptr [esp]
100c8ae9  66813c247f02         cmp word ptr [esp], 0x27f
100c8aef  7405                 je 0x100c8af6
100c8af1  e82f4d0000           call 0x100cd825
100c8af6  81e10000f07f         and ecx, 0x7ff00000
100c8afc  8d542408             lea edx, [esp + 8]
100c8b00  81f90000f07f         cmp ecx, 0x7ff00000
100c8b06  0f849d000000         je 0x100c8ba9
100c8b0c  e8444d0000           call 0x100cd855
100c8b11  0f848e000000         je 0x100c8ba5
100c8b17  a90000f07f           test eax, 0x7ff00000
100c8b1c  0f84f6000000         je 0x100c8c18
100c8b22  8a4c240f             mov cl, byte ptr [esp + 0xf]
100c8b26  80e180               and cl, 0x80
100c8b29  0f8561010000         jne 0x100c8c90
100c8b2f  d9f1                 fyl2x
100c8b31  e8da4c0000           call 0x100cd810
100c8b36  80f901               cmp cl, 1
100c8b39  7502                 jne 0x100c8b3d
100c8b3b  d9e0                 fchs
100c8b3d  833d7049131000       cmp dword ptr [0x10134970], 0
100c8b44  0f85644d0000         jne 0x100cd8ae
100c8b4a  8d0d18e01110         lea ecx, [0x1011e018]
100c8b50  ba1d000000           mov edx, 0x1d
100c8b55  e99f4d0000           jmp 0x100cd8f9
100c8b5a  833d7049131000       cmp dword ptr [0x10134970], 0
100c8b61  0f85474d0000         jne 0x100cd8ae
100c8b67  8d0d18e01110         lea ecx, [0x1011e018]
100c8b6d  ba1d000000           mov edx, 0x1d
100c8b72  e8394c0000           call 0x100cd7b0
100c8b77  5a                   pop edx
100c8b78  c3                   ret
100c8b79  8d542408             lea edx, [esp + 8]
100c8b7d  e8d34c0000           call 0x100cd855
100c8b82  f644241608           test byte ptr [esp + 0x16], 8
100c8b87  7503                 jne 0x100c8b8c
100c8b89  41                   inc ecx
100c8b8a  eb33                 jmp 0x100c8bbf
100c8b8c  dec1                 faddp st(1)
100c8b8e  b801000000           mov eax, 1
100c8b93  ebc5                 jmp 0x100c8b5a
100c8b95  f644240e08           test byte ptr [esp + 0xe], 8
100c8b9a  75f0                 jne 0x100c8b8c
100c8b9c  dec1                 faddp st(1)
100c8b9e  b807000000           mov eax, 7
100c8ba3  ebb5                 jmp 0x100c8b5a
100c8ba5  33c9                 xor ecx, ecx
100c8ba7  eb16                 jmp 0x100c8bbf
100c8ba9  33c9                 xor ecx, ecx
100c8bab  25ffff0f00           and eax, 0xfffff
100c8bb0  0b442410             or eax, dword ptr [esp + 0x10]
100c8bb4  75c3                 jne 0x100c8b79
100c8bb6  8d542408             lea edx, [esp + 8]
100c8bba  e8964c0000           call 0x100cd855
100c8bbf  8b44240c             mov eax, dword ptr [esp + 0xc]
100c8bc3  8bd0                 mov edx, eax
100c8bc5  250000f07f           and eax, 0x7ff00000
100c8bca  81e2ffff0f00         and edx, 0xfffff
100c8bd0  3d0000f07f           cmp eax, 0x7ff00000
100c8bd5  7506                 jne 0x100c8bdd
100c8bd7  0b542408             or edx, dword ptr [esp + 8]
100c8bdb  75b8                 jne 0x100c8b95
100c8bdd  85c9                 test ecx, ecx
100c8bdf  75bb                 jne 0x100c8b9c
100c8be1  83ec74               sub esp, 0x74
100c8be4  8bcc                 mov ecx, esp
100c8be6  51                   push ecx
100c8be7  83ec10               sub esp, 0x10
100c8bea  dd1c24               fstp qword ptr [esp]
100c8bed  dd5c2408             fstp qword ptr [esp + 8]
100c8bf1  9b                   wait
100c8bf2  dd7108               fnsave dword ptr [ecx + 8]
100c8bf5  e8a24d0000           call 0x100cd99c
100c8bfa  83c410               add esp, 0x10
100c8bfd  59                   pop ecx
100c8bfe  dd6108               frstor dword ptr [ecx + 8]
100c8c01  dd01                 fld qword ptr [ecx]
100c8c03  83c474               add esp, 0x74
100c8c06  85c0                 test eax, eax
100c8c08  0f84a04c0000         je 0x100cd8ae
100c8c0e  b801000000           mov eax, 1
100c8c13  e942ffffff           jmp 0x100c8b5a
100c8c18  8b44240c             mov eax, dword ptr [esp + 0xc]
100c8c1c  25ffff0f00           and eax, 0xfffff
100c8c21  0b442408             or eax, dword ptr [esp + 8]
100c8c25  0f85f7feffff         jne 0x100c8b22
100c8c2b  ddd8                 fstp st(0)
100c8c2d  8b442414             mov eax, dword ptr [esp + 0x14]
100c8c31  a90000f07f           test eax, 0x7ff00000
100c8c36  743d                 je 0x100c8c75
100c8c38  e878000000           call 0x100c8cb5
100c8c3d  8a6c240f             mov ch, byte ptr [esp + 0xf]
100c8c41  c0ed07               shr ch, 7
100c8c44  f744241780000000     test dword ptr [esp + 0x17], 0x80
100c8c4c  7416                 je 0x100c8c64
100c8c4e  db2d40e41110         fld xword ptr [0x1011e440]
100c8c54  84cd                 test ch, cl
100c8c56  7402                 je 0x100c8c5a
100c8c58  d9e0                 fchs
100c8c5a  b802000000           mov eax, 2
100c8c5f  e9f6feffff           jmp 0x100c8b5a
100c8c64  d9ee                 fldz
100c8c66  84cd                 test ch, cl
100c8c68  0f84404c0000         je 0x100cd8ae
100c8c6e  d9e0                 fchs
100c8c70  e9394c0000           jmp 0x100cd8ae
100c8c75  ddd8                 fstp st(0)
100c8c77  25ffff0f00           and eax, 0xfffff
100c8c7c  0b442410             or eax, dword ptr [esp + 0x10]
100c8c80  7507                 jne 0x100c8c89
100c8c82  d9e8                 fld1
100c8c84  e9254c0000           jmp 0x100cd8ae
100c8c89  d9ee                 fldz
100c8c8b  e91e4c0000           jmp 0x100cd8ae
100c8c90  d9c1                 fld st(1)
100c8c92  e81e000000           call 0x100c8cb5
100c8c97  d9e0                 fchs
100c8c99  84c9                 test cl, cl
100c8c9b  0f858efeffff         jne 0x100c8b2f
100c8ca1  ddd8                 fstp st(0)
100c8ca3  ddd8                 fstp st(0)
100c8ca5  db2da0e21110         fld xword ptr [0x1011e2a0]
100c8cab  b801000000           mov eax, 1
100c8cb0  e9a5feffff           jmp 0x100c8b5a
