/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:17:44 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 00:20:44 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
 
void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *l;

	l = *begin_list;
	while (l->next)
		l = l->next;
	l->next = ft_create_elem(data);
}
