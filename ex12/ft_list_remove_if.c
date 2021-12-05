/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:47:29 by jceia             #+#    #+#             */
/*   Updated: 2021/12/05 01:04:52 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
			int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*l;
	t_list	*l_prev;
	t_list	*l_next;

	l = *begin_list;
	l_prev = 0;
	while (l)
	{
		if (cmp(l->data, data_ref) == 0)
		{
			if (l_prev != 0)
				l_prev->next = l->next;
			l_next = l->next;
			free_fct(l->data);
			free(l);
		}
		else
		{
			l_prev = l;
			l_next = l->next;
		}
		l = l_next;
	}
}
