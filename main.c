#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, const void *buf, size_t count);

int main(int ac, char **av) {/
	char str[13] = "Hello World!\n";


	printf("%ld\n", ft_strlen(str));
	//printf("%ld\n", strlen(str));
//	int		ret = 0;
//	int		fd = 0;
//	char	buf[2];
//
//	if (ac != 2) {
//		printf("Provide at least one argument\n");
//		exit(1);
//	}
//	fd = open(av[1], O_RDONLY);
//
//	while ((ret = read(-1, buf, 1))) {
//		if (ret < 0)
//			break ;
//		buf[ret] = '\0';
//		printf("ret = %d\n", ret);
//		printf("errno = %d\n", errno);
//		printf("%s", buf);
//	}
//	printf("\n");
//	printf("%ld\n", ft_write(-1, "Hello World!\n", 13));
//	ft_write(-1, "Hello World!\n", 13);
//	printf("%d\n", errno);
//	fflush(stdout);
//	printf("%ld\n", write(-1, "Hello World!\n", 13));
//	printf("%d\n", errno);
//	fflush(stdout);
	return 0;
}
