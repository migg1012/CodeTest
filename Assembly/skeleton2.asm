
segment data
	;
	;  initialized data
	;

segment bss
	;
	; uninitialized data
	;

segment text
	global func

func:
	push ebp         ;save registers
	mov ebp, esp
	sub esp, n
	push             ;save registers
		;
		;   body of the function
		;
	pop               ;restore registers
	mov eax, 0        ;return value
	mov  esp, ebp
	pop ebp
	ret               ;return to caller
