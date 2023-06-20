#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, const void *buf, size_t count);
char	*ft_strdup(const char *s);

int main(int ac, char **av) {

/***************************	FT_STRLEN TESTS	*******************************/

//	char str[13] = "Hello World!\n";
//	char str1[13] = "Hello Worl!\n";
//	char str2[12] = "Hello Wor!\n";
//	char str3[11] = "Hello Wo!\n";
//	char str4[10] = "Hello W!\n";
//	char str5[9] = "Hello !\n";
//	char str6[8] = "Hello!\n";
//	char str7[7] = "Hell!\n";
//	char str8[6] = "Hel!\n";
//	char str9[5] = "He!\n";
//	char str10[4] = "H!\n";
//	char str11[3] = "H\n";
//	char str12[2] = "H";
//	char str13[1] = "";
//
//
//	printf("%ld\n", strlen(av[1]));
//	printf("%ld\n", ft_strlen(av[1]));
//	printf("%ld\n", strlen(str));
//	printf("%ld\n", strlen(str1));
//	printf("%ld\n", strlen(str2));
//	printf("%ld\n", strlen(str3));
//	printf("%ld\n", strlen(str4));
//	printf("%ld\n", strlen(str5));
//	printf("%ld\n", strlen(str6));
//	printf("%ld\n", strlen(str7));
//	printf("%ld\n", strlen(str8));
//	printf("%ld\n", strlen(str9));
//	printf("%ld\n", strlen(str10));
//	printf("%ld\n", strlen(str11));
//	printf("%ld\n", strlen(str12));
//	printf("%ld\n", strlen(str13));
//
//	printf("%ld\n", ft_strlen(str));
//	printf("%ld\n", ft_strlen(str1));
//	printf("%ld\n", ft_strlen(str2));
//	printf("%ld\n", ft_strlen(str3));
//	printf("%ld\n", ft_strlen(str4));
//	printf("%ld\n", ft_strlen(str5));
//	printf("%ld\n", ft_strlen(str6));
//	printf("%ld\n", ft_strlen(str7));
//	printf("%ld\n", ft_strlen(str8));
//	printf("%ld\n", ft_strlen(str9));
//	printf("%ld\n", ft_strlen(str10));
//	printf("%ld\n", ft_strlen(str11));
//	printf("%ld\n", ft_strlen(str12));
//	printf("%ld\n", ft_strlen(str13));

/***************************	FT_STRCPY TESTS	*******************************/

//	char	dest_cpy[7] = "Hello\n";
//	char	src_cpy[7] = "World\n";
//	char	dest_cpy2[7] = "World\n";
//	char	src_cpy2[14] = "Hello World!\n";
//
//
//	printf("dest before = %s\n", dest_cpy);
//	printf("%s\n", ft_strcpy(dest_cpy, src_cpy));
//	printf("dest after = %s\n", dest_cpy);
//	printf("dest before = %s\n", dest_cpy2);
//	printf("%s\n", ft_strcpy(dest_cpy2, src_cpy2));
//	printf("dest before = %s\n", dest_cpy2);
/***************************	FT_STRCMP TESTS	*******************************/

//	char str[13] = "Hello World!\n";
//	char strtocmp[14] = "Hello World!\n";
//	char strtocmp2[14] = "Hello World!\n";
//
//	char strtocmp3[14] = "Hello World!\n";
//	char strtocmp4[14] = "Hello World?\n";
//
//	printf("same = %d\n", strcmp(strtocmp, strtocmp2));
//	printf("ft same = %d\n", ft_strcmp(strtocmp, strtocmp2));
//	printf("diff = %d\n", strcmp(strtocmp3, strtocmp4));
//	printf("ft diff = %d\n", ft_strcmp(strtocmp3, strtocmp4));

/***************************	FT_READ TESTS	*******************************/

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

/***************************	FT_WRITE TESTS	*******************************/

//	printf("%ld\n", ft_write(-1, "Hello World!\n", 13));
//	ft_write(-1, "Hello World!\n", 13);
//	printf("%d\n", errno);
//	fflush(stdout);
//	printf("%ld\n", write(-1, "Hello World!\n", 13));
//	printf("%d\n", errno);
//	fflush(stdout);

/***************************	FT_STRDUP TESTS	*******************************/

	char	str_to_dup[14] = "Hello World!\n";
	char	*str_to_dup2 = NULL; // = malloc(sizeof(char) * 14);

	str_to_dup2 = strdup(str_to_dup);
	printf("std = %s\n", str_to_dup2);

	free(str_to_dup2);
	str_to_dup2 = NULL;
	str_to_dup2 = ft_strdup(str_to_dup);
	printf("ft = %s\n", str_to_dup2);

	return 0;
}
