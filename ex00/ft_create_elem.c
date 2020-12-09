#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list ll;
	ll.next = NULL;
	ll.data = data;
	return (ll);
}
