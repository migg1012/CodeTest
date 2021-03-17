
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
	enter n, 0
	push          ;save registers
		;
		;   body of the function
		;
	pop
	mov eax, 0   ; restore registers
	leave
	ret
