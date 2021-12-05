/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:49:05 by jceia             #+#    #+#             */
/*   Updated: 2021/12/05 01:08:54 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	index;
	t_list			*l;

	index = 0;
	l = begin_list;
	while (index < nbr)
	{
		if (!l)
			return (NULL);
		l = l->next;
		index++;
	}
	return (l);
}
