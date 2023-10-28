			extern	malloc
			global	ft_list_push_front
			section	.text

ft_create_elem:
			push	rdi
			mov		rdi, 16
			push	rdx ; align stack? or save rdx?
			call	malloc wrt ..plt
			pop		rdx
			test	rax, rax
			jz		fail_exit;
			pop		rdi
			mov		qword [rax], rdi
			mov		qword [rax + 8], 0x0
			ret

ft_list_push_front:
			mov		rdx, rdi ; rdi **begin
			mov		rdi, rsi ; rsi data
			call	ft_create_elem ; elem in rax
			mov		rsi, [rdx]
			mov		qword [rax + 8], rsi
			mov		qword [rdx], rax
			ret

fail_exit:
			xor		rax, rax

