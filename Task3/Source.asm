.686
PUBLIC @Function1@12
.model flat
.stack
.code

	@Function1@12 proc	
	
	push	ebp
	mov		ebp,	esp
	mov		esi,	[ebp + 8]
	mov		edi,	ecx

	mov		ecx,	1
	shl		ecx,	16
	cycle1:
		mov		word ptr[esi + 2 * ecx - 2], 0
	loop cycle1

	mov		eax,	0
	mov		ecx,	edi
	cycle2:
		mov		ax,	word ptr[edx + 2 * ecx - 2]
		inc		word ptr[esi + 2 * eax]
	loop cycle2

	mov		eax,	0
	mov		ecx,	1
	shl		ecx,	16
	cycle3:
		mov		bx,	word ptr[esi + 2 * ecx - 2]
		test	bx,	bx
		jz		no_instances
		inc		eax
		no_instances:
	loop cycle3

	pop		ebp
	ret 4

	@Function1@12 endp

end