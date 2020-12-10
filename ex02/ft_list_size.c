#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list	*l;
	int		size;

	size = 0;
	l = begin_list;
	while(l)
	{
		size++;
		l = l->next;
	}
	return (size);
}
