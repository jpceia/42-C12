/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 23:34:34 by jceia             #+#    #+#             */
/*   Updated: 2020/12/10 17:36:40 by jceia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
t_list *ft_list_last(t_list *begin_list);
void ft_list_push_back(t_list **begin_list, void *data);
t_list *ft_list_push_strs(int size, char **strs);
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list *ft_list_at(t_list *begin_list, unsigned int nbr);
void ft_list_reverse(t_list **begin_list);
void ft_list_foreach(t_list *begin_list, void (*f)(void *));

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
void ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void ft_list_sort(t_list **begin_list, int (*cmp)());

void print_str(void *str)
{
	printf("%s\n", str);
}

char	*ft_strdup(char *src)
{
	unsigned int	index;
	char			*dest;

	index = 0;
	while (src[index])
		index++;
	dest = malloc(index + 1);
	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return (1);
		if (*s2 > *s1)
			return (-1);
		s1++;
		s2++;
	}
	if (*s1 > 0)
		return (1);
	if (*s2 > 0)
		return (-1);
	return (0);
}


int main(int argc, char** argv)
{
	(void)argc;
	(void)argv;
	t_list* e1 = ft_create_elem(ft_strdup("hello"));
	//it_list* e2 = ft_create_elem("world");
	printf("%s\n", e1->data);
	ft_list_push_front(&e1, ft_strdup("mid"));
	ft_list_push_front(&e1, ft_strdup("world")); 
	ft_list_push_front(&e1, ft_strdup("A")); 
	ft_list_push_front(&e1, ft_strdup("AAAA")); 
	ft_list_push_front(&e1, ft_strdup("ZZZZ")); 
	ft_list_push_front(&e1, ft_strdup("BBBB")); 
	ft_list_push_back(&e1, ft_strdup("pushed back"));
	//e1 = ft_list_push_strs(argc, argv);
	printf("First: %s\n", e1->data);
	printf("Second: %s\n", e1->next->data);
	printf("Second: %s\n", ft_list_at(e1, 1)->data);
	printf("Last: %s\n", ft_list_last(e1)->data);
	printf("Size of the list: %d\n", ft_list_size(e1));
	
	printf("Printing the whole list:\n");
	ft_list_foreach(e1, &print_str);

	printf("Printing the whole list (after reversion):\n");
	ft_list_reverse(&e1);	
	ft_list_foreach(e1, &print_str);
	printf("Element with mid: %s\n", ft_list_find(e1, "mid", &ft_strcmp)->data);
	ft_list_remove_if(&e1, "hello", &ft_strcmp, free);
	printf("Printing list after removing 'hello'\n");
	ft_list_foreach(e1, &print_str);

	printf("Printing list after sorting\n");
	ft_list_sort(&e1, &ft_strcmp);
	ft_list_foreach(e1, &print_str);

	ft_list_clear(e1, free);
}
