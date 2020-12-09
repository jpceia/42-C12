#include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	t_list* l

	l = begin_list;
	while (l->next)
		l = l->next;
	return (l)
}
