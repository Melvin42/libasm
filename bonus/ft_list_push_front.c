#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;

t_list *ft_create_elem(void *data) {
	t_list *elem = malloc(sizeof(*elem) * 1);
	elem->data = data;
	elem->next = NULL;
}
int ft_list_size(t_list *begin_list) {
	int i;

	i = 0;
	while (begin_list) {
		++i;
		begin_list = begin_list->next;
	}

	return i;
}

void ft_list_push_front(t_list **begin_list, void *data) {
	t_list *elem = malloc(sizeof(*elem) * 1);

	t_list *tmp = *begin_list;

	elem->data = data;
	*begin_list = elem;
	(*begin_list)->next = tmp;
}

int ft_strcmp(char *s1, char *s2) {
	int i;

	i = 0;
	while (s1[i] && s2[i]) {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *)) {
	t_list *tmp = NULL;
	t_list *start = *begin_list;
	t_list *prev = *begin_list;

	while (*begin_list) {
		printf("%d\n", *((int *)(*begin_list)->data));
		if ((*cmp)((*begin_list)->data, data_ref) == 0) {
			tmp = *begin_list;
			prev->next = (*begin_list)->next;
			printf("remove %d\n", *((int *)(*begin_list)->data));
			if ((*begin_list)->next)
				(*begin_list)->next = (*begin_list)->next->next;

			(*free_fct)(tmp->data);
			tmp->data = NULL;
			(*free_fct)(tmp);
			tmp = NULL;
			continue;
		}
		*begin_list = (*begin_list)->next;
	}
	*begin_list = start;
}

int main(void) {
	t_list *list = NULL;
	printf("%p\n", &list);

	int *n = malloc(sizeof(int) * 1);
	int *n1 = malloc(sizeof(int) * 1);
	int *n2 = malloc(sizeof(int) * 1);
	int *n3 = malloc(sizeof(int) * 1);
	int *n4 = malloc(sizeof(int) * 1);
	int *n5 = malloc(sizeof(int) * 1);
	int *n6 = malloc(sizeof(int) * 1);
	int *n7 = malloc(sizeof(int) * 1);
	int *n8 = malloc(sizeof(int) * 1);
	int *n9 = malloc(sizeof(int) * 1);;
	int *data_ref = malloc(sizeof(int) * 1);;;
	*n = 41;
	*n1 = 42;
	*n2 = 43;
	*n3 = 44;
	*n4 = 45;
	*n5 = 46;
	*n6 = 47;
	*n7 = 42;
	*n8 = 49;
	*n9 = 50;
	*data_ref = 42;

	printf("%d\n", ft_list_size(list));
	list = ft_create_elem(n);
	ft_list_push_front(&list, n1);
	ft_list_push_front(&list, n2);
	ft_list_push_front(&list, n3);
	ft_list_push_front(&list, n4);
	ft_list_push_front(&list, n5);
	ft_list_push_front(&list, n6);
	ft_list_push_front(&list, n7);
	ft_list_push_front(&list, n8);
	ft_list_push_front(&list, n9);
	printf("%d\n", ft_list_size(list));

	t_list	*tmp = list;
	while (list) {
		printf("%d\n", *(int *)list->data);
		list = list->next;
	}
	list = tmp;
	printf("REMOVE IF\n");

	ft_list_remove_if(&list, data_ref, &ft_strcmp, &free);
	while (list) {
		printf("%d\n", *(int *)list->data);
		list = list->next;
	}

	return 0;
}
