NAME = libasm.a

ASMFLAGS = -felf64

CFLAGS = -Wall -Wextra -Werror

ASM = nasm

CC = gcc $(FLAGS)

AR = ar rc

ASM_FILES = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_read.s ft_write.s ft_strdup.s

C_FILES = main.c

BONUS_ASM_FILES = ft_atoi_base.s

BONUS_C_FILES = main_bonus.c

AR = ar rc

all: $(NAME)

$(NAME):

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
