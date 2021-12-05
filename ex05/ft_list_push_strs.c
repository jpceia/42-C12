/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 00:22:59 by jceia             #+#    #+#             */
/*   Updated: 2021/12/05 01:09:32 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		index;
	t_list	*l;
	t_list	*l_prev;

	if (!**strs)
		return (NULL);
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
