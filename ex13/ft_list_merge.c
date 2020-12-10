/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:17:10 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 17:22:23 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*l;

	l = *begin_list1;
	while (l->next)
		l = l->next;
	l->next = begin_list2;
}
