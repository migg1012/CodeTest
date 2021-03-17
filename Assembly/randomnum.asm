;Random number generator
segment .data
	;
	;  initialized data
	;

segment .bss
	;
	; uninitialized data
	;

segment .text
	global randnum

randnum:
	push ebp            ;save registers
	mov ebp, esp        ;transfer stack pointer to ebp so that it can point to the arguments
	mov eax, [ebp+8]    ;first argument
	cmp eax, [ebp+12]   ;check if first argument is smaller than second
	jl  inorder         ;jump if first is smaller.  checkes the sf = sign flag is not equal of = overflow flag
	xchg eax,[ebp+12]   ;swap first and second argument if first is greater
	mov [ebp+8], eax

inorder:
    rdtsc               ;loads 64bit time into register pair edx and eax (edx:eax)  eax = low order 32 bit   edx= high order 32bit
    shr eax, 2          ;shifts eax only to the right by 2
    mov ebx, [ebp+12]   ;the larger value
    add ebx, 1          ;plus 1
    sub ebx,[ebp+8]     ;the difference or delta  = range of lower bound to upper bound
    cdq                 ;clear edx
    idiv ebx            ;divide edx:eax by ebx
    add edx, [ebp+8]

goback:
    mov eax, edx        ;returns random number
    mov esp, ebp        ;mov back esp to original
    pop ebp             ;restores ebp
    ret
