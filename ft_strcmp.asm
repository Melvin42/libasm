			global	ft_strcmp

			section	.text
ft_strcmp:
			xor		rax, rax

loop:
			mov		dl, byte [rdi + rax]
			mov		cl, byte [rsi + rax]
			inc		rax
			cmp		dl, cl
			je		loop
			jmp		end

;checker \0 et return la bonne valeur
end:
			
			ret


;int i = 0;
;
;while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
;	i++;
;}
;return (s1[i] - s2[i])
