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

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
void ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *));

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

//	char	str_to_dup[14] = "Hello World!\n";
//	char	*str_to_dup2 = NULL; // = malloc(sizeof(char) * 14);
//
//	str_to_dup2 = strdup(str_to_dup);
//	printf("std = %s\n", str_to_dup2);
//
//	free(str_to_dup2);
//	str_to_dup2 = NULL;
//	str_to_dup2 = ft_strdup(str_to_dup);
//	printf("ft = %s\n", str_to_dup2);

/***************************	FT_CREATE_ELEM TESTS	*******************************/
	t_list	*list = NULL;
	int		*n = malloc(sizeof(int) * 1);
	int		*n1 = malloc(sizeof(int) * 1);
	int		*n2 = malloc(sizeof(int) * 1);
	int		*n3 = malloc(sizeof(int) * 1);
	int		*n4 = malloc(sizeof(int) * 1);
	char	*n5 = malloc(sizeof(char) * 1);
	char	*n6 = malloc(sizeof(char) * 1);
	char	*n7 = malloc(sizeof(char) * 5);
	*n = 42;
	*n1 = 43;
	*n2 = 44;
	*n3 = 45;
	*n4 = 46;
	*n5 = 'A';
	*n6 = '\x42';
	n7 = "\x42\x42\x42\x42\x00";

	printf("List size = %d\n", ft_list_size(list));
	ft_list_push_front(&list, n);
	ft_list_push_front(&list, n1);
	ft_list_push_front(&list, n2);
	ft_list_push_front(&list, n3);
	ft_list_push_front(&list, n4);
	ft_list_push_front(&list, n5);
	ft_list_push_front(&list, n6);
	ft_list_push_front(&list, n7);
	printf("List size = %d\n", ft_list_size(list));

//	t_list *tmp = list;
//	printf("ptr = %p, data = %s, next = %p\n", tmp,
//			(char*)tmp->data, tmp->next);
//	while (tmp) {
//		printf("ptr = %p, data = %d, next = %p\n", tmp,
//				*(int*)tmp->data, tmp->next);
//		printf("ptr = %p, data = %c, next = %p\n", tmp,
//				*(char*)tmp->data, tmp->next);
//		tmp = tmp->next;
//	}

	int		*n8 = malloc(sizeof(int) * 1);
	int		*data_ref = malloc(sizeof(int) * 1);

	*n8 = 42;
	*data_ref = 42;
	ft_list_push_front(&list, n8);
	ft_list_remove_if(&list, data_ref, &strcmp, &free);

	printf("ptr = %p, data = %d, next = %p\n", list,
			*(int*)list->data, list->next);
	printf("ptr = %p, data = %d, next = %p\n", list->next,
			*(int*)(list->next)->data, list->next->next);
	return 0;
}
