#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list b;

	b = ft_create_elem(data);
	b.next = *begin_list;
}
