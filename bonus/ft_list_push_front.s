			extern	malloc
			global	ft_create_elem
			section	.text

ft_create_elem:
			push	rdi
			mov		rdi, 16
			call	malloc wrt ..plt
			test	rax, rax
			jz		fail_exit
			pop		rdi
			mov		qword [rax], rdi
			mov		qword [rax + 8], 0x0
			ret

ft_list_push_front:
			

fail_exit:
			xor		rax, rax
			ret
		
