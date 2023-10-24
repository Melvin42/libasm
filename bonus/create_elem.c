#include <stdlib.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;

t_list *ft_create_elem(void *data) {
	t_list *elem = malloc(sizeof(*elem) * 1);
	elem->data = data;
	elem->next = 0;
}

int main(void) {
	t_list *list;

	int *n = malloc(sizeof(int) * 1);
	*n = 42;

	list = ft_create_elem(n);

	printf("%d\n", *(int*)(list)->data);
	return 0;
}
