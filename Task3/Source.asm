.686
PUBLIC @Function1@8
PUBLIC @FindMax@8
.model flat
.stack
.code

	@Function1@8 proc	
	
	mov		eax,	1
	mov		ebx,	dword ptr[edx + 4 * ecx - 4]
	cycle2:
		mov		edi,	dword ptr[edx + 4 * ecx - 4]
		cmp    ebx,edi
		je mark1
		inc eax
		mark1:
	loop cycle2
	ret


	@Function1@8 endp

	@FindMax@8 proc	
	
	mov		eax,	0
	mov		ebx,	dword ptr[edx + 4 * ecx - 4]
	cycle2:
		mov		edi,	dword ptr[edx + 4 * ecx - 4]
		cmp    ebx,edi
		JGE mark1
		mov ebx,edi
		mark1:
	loop cycle2
	mov eax,ebx
	ret


	@FindMax@8 endp

end