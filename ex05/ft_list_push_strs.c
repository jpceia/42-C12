/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:22:59 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 15:52:17 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		index;
	t_list	*l;
	t_list	*l_prev;

	if(!**strs)
		return (0);
	index = 0;
	l_prev = 0;
	while (index < size)
	{
		l = ft_create_elem(strs[index]);
		l->next = l_prev;
		l_prev = l;
		index++;
	}
	return (l);
}
