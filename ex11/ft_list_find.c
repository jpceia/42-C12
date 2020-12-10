/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:24:36 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 16:46:29 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list* l;

	l = begin_list;
	while (l && cmp(l->data, data_ref) != 0)
		l = l->next;
	return (l);
}
