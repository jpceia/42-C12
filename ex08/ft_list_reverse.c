/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:56:50 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 16:11:28 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*l;
	t_list	*l_prev;
	t_list	*l_next;

	l = *begin_list;
	l_prev = 0;
	while (l)
	{
		l_next = l->next;
		l->next = l_prev;
		l_prev = l;
		l = l_next;
	}
	*begin_list = l_prev;
}
