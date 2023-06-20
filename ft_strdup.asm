			extern	malloc
			global	ft_strdup

			section	.text

ft_strdup:
			xor		rax, rax

count_loop:
			mov		dl, byte [rdi + rax]
			cmp		dl, 0x0
			je		cpy_loop
			inc		rax
			jmp		count_loop
			inc		rax
			push	rax
			call	malloc wrt ..plt
			test	rax, rax
			jz		fail_exit
			add		esp, 4

cpy_loop:
			mov		dl, byte [rsi + rax]
			mov		byte [rdi + rax], dl
			inc		rax
			cmp		byte [rsi + rax], 0x0
			jne		cpy_loop

;A bien tester, verifier les registres de cpy et la valeur de ret en cas d'erreur malloc

success_exit:
			mov		byte [rdi + rax], 0x0
			mov		rax, rdi
			ret

fail_exit:
			xor		rax, rax
			ret


;int		size = strlen(src);
;char	*ret = malloc(size);
;		strcpy(ret, src);
;	
;	return ret;
