.686
PUBLIC @Function1@12
.model flat
.stack
.code

	@Function1@12 proc	
	
	push	ebp
	mov		ebp,		esp
	mov		esi,	[ebp + 8]
	mov		ebx,	dword ptr[edx + 4 * esi]
	
	cycle:
		mov		eax,	dword ptr[ebx + 4*ecx - 4]
		mov		edi,	dword ptr[edx + 4*ecx - 4]
		xchg	eax,	dword ptr[edi + 4 * esi]
		mov		dword ptr[ebx + 4*ecx - 4],	eax
	loop cycle
	pop		ebp
	ret 4

	@Function1@12 endp

end