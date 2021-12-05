/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:24:32 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 17:42:43 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*l;
	t_list	*l_prev;
	t_list	*holder;

	l = *begin_list;
	l_prev = 0;
	while (l->next)
	{
		if (cmp(l, l->next) < 0)
		{
			holder = l->next;
			if (l_prev)
				l_prev->next = l->next;
			l->next = l->next->next;
			holder->next = l;
			ft_list_sort(begin_list, cmp);
		}
		l_prev = l;
		l = l->next;
	}
}
