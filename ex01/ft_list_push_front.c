/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:48:36 by jceia             #+#    #+#             */
/*   Updated: 2020/12/09 23:56:22 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list* b;
	b = ft_create_elem(data);
	b->next = *begin_list;
	*begin_list = b;
}
