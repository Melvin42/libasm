#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*data;
	struct s_list	*next;
} t_list;

int		ft_atoi_base(char *str, char *base);
void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin_list);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
// function pointed by cmp will be user as follows:
// (*cmp)(list_ptr->data, list_other_ptr->data);
// cmp could be ft_strcmp
void	ft_list_remove_if(t_list **begin_list, void *data_ref,
							int (*cmp)(), void (*free_fct)(void *));

int main(int ac, char **av) {
	printf("Super Main!\n");
	return 0;
}
