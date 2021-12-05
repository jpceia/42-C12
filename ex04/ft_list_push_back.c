/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:17:44 by jceia             #+#    #+#             */
/*   Updated: 2021/12/05 10:58:24 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*l;

	l = *begin_list;
	if (l == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (l->next)
			l = l->next;
		l->next = ft_create_elem(data);
	}
}
