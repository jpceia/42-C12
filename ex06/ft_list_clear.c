/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:31:54 by jceia             #+#    #+#             */
/*   Updated: 2021/12/05 01:09:17 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*l;
	t_list	*l_next;

	if (!begin_list)
		return ;
	l = begin_list;
	while (l)
	{
		l_next = l->next;
		free_fct(l->data);
		free(l);
		l = l_next;
	}
}
