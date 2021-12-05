/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:24:32 by jceia             #+#    #+#             */
/*   Updated: 2021/12/05 11:33:01 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*l;
	t_list	*l_prev;
	t_list	*holder;

	l = *begin_list;
	l_prev = NULL;
	while (l->next)
	{
		if (cmp(l->data, l->next->data) < 0)
		{
			holder = l->next;
			l->next = l->next->next;
			holder->next = l;
			if (l_prev)
				l_prev->next = holder;
			else
				*begin_list = holder;
			ft_list_sort(begin_list, cmp);
			break ;
		}
		l_prev = l;
		l = l->next;
	}
}
