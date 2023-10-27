			extern	malloc
			global	ft_list_push_front
			section	.text

ft_create_elem:
			push	rdi
			mov		rdi, 16
			call	malloc wrt ..plt
			test	rax, rax
			jz		fail_exit;
			pop		rdi
			mov		qword [rax], rdi
			mov		qword [rax + 8], 0x0
			ret

ft_list_push_front:
			mov		rdx, rdi ; rdi **begin
			mov		rdi, rsi ; rsi data
			push	rcx
			call	ft_create_elem ; elem in rax
			pop		rcx
			mov		rsi, [rdx]
			mov		qword [rax + 8], rsi
			mov		qword [rdx], rax
			ret

fail_exit:
			xor		rax, rax

