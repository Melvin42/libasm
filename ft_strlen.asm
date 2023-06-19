			global	ft_strlen
			section	.text
ft_strlen:
			xor		rax, rax

loop:
			mov		dl, byte [rdi + rax]
			cmp		dl, 0x0
			je		end
			inc		rax
			jmp		loop

end:
			ret
