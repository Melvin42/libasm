			global	ft_strcmp

			section	.text
ft_strcmp:
			xor		rax, rax

loop:
			mov		dl, byte [rdi + rax]
			mov		cl, byte [rsi + rax]
			inc		rax
			cmp		dl, 0x0
			je		end
			cmp		cl, 0x0
			je		end
			cmp		dl, cl
			je		loop

end:
			sub dl, cl
			movsx rax, dl	;move data with sign or zero extend
			ret


;int i = 0;
;
;while (s1[i] != '\0' && s2[i] != '\0') {
;	if (s1[i] == s2[i])
;		return (s1[i] - s2[i]);
;	i++;
;}
;return (s1[i] - s2[i])
