			global	ft_list_remove_if
			section	.text

			;rdi = *begin
			;rsi = data_ref
			;rdx = cmp
			;rcx = free
ft_list_remove_if:
			mov		r8, rdi; rax = start = *begin_list
			mov		r10, rdi; rax = start = *begin_list

loop_remove_first_elem:
			cmp		r8, 0x0
			je		loop_remove_other_elem
			mov		rdi, [r8]
			mov		rdi, [rdi]
			push	rdx
			push	rcx
			call	rdx
			pop		rcx
			pop		rdx
			cmp		rax, 0x0
			jne		loop_remove_other_elem
			push	rdx
			push	rcx
			push	r8
			call	rcx
			pop		r8
			pop		rcx
			pop		rdx
			mov		r9, r8
			mov		r8, qword [r8 + 8]
			mov		rdi, r9
			push	rdx
			push	rcx
			push	r8
			mov		rdi, r9
			call	rcx
			pop		r8
			pop		rcx
			pop		rdx
			jmp		loop_remove_first_elem

loop_remove_other_elem:

			jmp		end

end:
			ret



