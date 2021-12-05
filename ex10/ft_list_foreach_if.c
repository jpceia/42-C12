/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:17:18 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 16:43:56 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
			void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list	*l;

	l = begin_list;
	while (l)
	{
		if (cmp(l->data, data_ref) == 0)
			f(l->data);
		l = l->next;
	}
}
