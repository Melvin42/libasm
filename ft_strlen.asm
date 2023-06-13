			global	ft_strlen
			section	.text
ft_strlen:
			inc		rdx
			cmp		rdi, 0
			jne		ft_strlen
			ret

;			int i = 0;
;			while (str[i] != '\0')
;				i++;
;			return i;
