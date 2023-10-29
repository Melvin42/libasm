			global	ft_list_remove_if
			section	.text

	; r8 == begin_list
	; [r8] == *begin_list
	; [[r8]] = *begin_list->data
	; [[r8 + 8]] == *begin_list->next
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
			mov		r8, qword [r8]
			mov		r11, qword [r8]
			mov		r9, qword [r8 + 8]
			push	rdx
			push	rcx
			push	r8
			push	r11
			push	rsi
			call	rcx
			pop		rsi
			pop		r11
			pop		r8
			pop		rcx
			pop		rdx
			mov		rdi, r8
			push	rdx
			push	rcx
			push	rsi
			call	rcx
			pop		rsi
			pop		rcx
			pop		rdx
			mov		qword [r10], r9
			mov		r8, r10
			jmp		loop_remove_first_elem

loop_remove_other_elem:
			jmp		end

end:
			ret



