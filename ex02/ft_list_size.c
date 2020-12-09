#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int		size;
	t_list*	l;

	size = 1;
	l = begin_list;
	while(l = l->next)
		size++;
	return (size);
}
