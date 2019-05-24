.686
PUBLIC @Function1@8
PUBLIC @Function2@8
.model flat
.stack
.code

	@Function1@8 proc	
	mov ebx, ecx
	sub ecx,1
	mov edi, ecx
	;Bubble sort
	loop1:
	mov ecx,ebx
	sub ecx,edi
	cmp ecx,0
	jne mark2
	inc ecx
	mark2:

	loop2:
	mov eax,dword ptr[edx + 4*ecx - 4]
	cmp dword ptr[edx + 4*ecx], eax
	jg mark1
	mov esi,dword ptr[edx + 4*ecx]
	mov dword ptr[edx + 4*ecx],eax
	mov dword ptr[edx + 4*ecx - 4],esi
	mark1:
	loop loop2
	mov ecx,edi
	sub edi,1
	loop loop1
	;Calculate count

	mov ecx,ebx
	mov edi,1
	mov eax,dword ptr[edx + 4*ecx - 4]
	loop3:
	cmp eax,dword ptr[edx + 4*ecx - 4]
	je mark3
	mov eax,dword ptr[edx + 4*ecx - 4]
	inc edi
	mark3:
	loop loop3
	mov eax,edi
	ret


	@Function1@8 endp

	@Function2@8 proc	

	mov eax,dword ptr[edx + 4*ecx - 4]
	mov edi,0
	mov ebx,eax
	mov esi,0
	loop1:
	cmp eax,dword ptr[edx + 4*ecx - 4]
	je mark1
	cmp esi,edi
	jge mark2
	mov esi,edi
	xor edi,edi
	mov ebx,dword ptr[edx + 4*ecx ]
	mark2:
	mov eax,dword ptr[edx + 4*ecx - 4]
	xor edi,edi
	mark1:
	inc edi	
	cmp esi,edi
	jge mark3
	mov esi,edi
	xor edi,edi
	mov ebx,dword ptr[edx + 4*ecx ]
	mark3:
	loop loop1

	mov eax,ebx
	ret
	@Function2@8 endp

end