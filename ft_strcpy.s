			global	ft_strcpy

			section	.text
ft_strcpy:
			xor		rax, rax

loop:
			mov		dl, byte [rsi + rax]
			mov		byte [rdi + rax], dl
			inc		rax
			cmp		byte [rsi + rax], 0x0
			jne		loop

end:
			mov		byte [rdi + rax], 0x0
			mov		rax, rdi
			ret


;int i = 0;
;
;while (src[i] != '\0') {
;	dest[i] = src[i];
;	++i;
;}
;dest[i] = '\0';
;return dest;
