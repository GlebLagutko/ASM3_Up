.686
.model flat
.stack
public _IsPOly


.data
str1 db 'adcda',0
str2 db ' ',0

.code


_IsPoly proc
	    mov ecx, 5
		lea esi, str1
		add esi, ecx
		dec esi
		lea edi, str2
		std

		mark :
		lodsb
			mov byte ptr[edi], al
			inc edi
			loop mark
			cld

			lea     si, str1
			lea     di, str2
			mov eax,0
			cmps str1, str2
			jne _end
			mov eax, 1

			_end:
			ret
_IsPOly endp



end