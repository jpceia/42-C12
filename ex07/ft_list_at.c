/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:49:05 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 16:08:08 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	index;
	t_list 	*l;

	index = 0;
	l = begin_list;
	while (index < nbr)
	{
		if (!l)
			return (0);
		l = l->next;
		index++;
	}
	return (l);
}
