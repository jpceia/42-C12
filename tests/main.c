/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpceia <joao.p.ceia@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:34:04 by jpceia            #+#    #+#             */
/*   Updated: 2021/12/05 11:08:48 by jpceia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    print_node(void *ptr)
{
    char *str;

    str = (char *)ptr;
    printf("%s\n", str);
}

int    strcontains(void *p1, void *p2)
{
    char *str1;
    char *str2;

    str1 = (char *)p1;
    str2 = (char *)p2;
    return (strstr(str1, str2) == NULL);
}

int	main(int argc, char *argv[])
{
    int i;
    t_list *lst;
    
    if (argc <= 1)
    {
        printf("Usage: ./test <string> [<string> ...]\n");
        return (EXIT_FAILURE);
    }

    printf("ft_create_elem(\"hello world\"):\n");
    lst = ft_create_elem("hello world");
    ft_list_foreach(lst, print_node);
    ft_list_clear(lst, 0);
    printf("-----------------\n");
    printf("ft_list_push_front:\n");
    lst = NULL;
    i = 0;
    while (argv[++i])
        ft_list_push_front(&lst, argv[i]);
    ft_list_foreach(lst, &print_node);
    printf("ft_list_size: %d\n", ft_list_size(lst));
    printf("ft_list_last: %s\n", (char *)ft_list_last(lst)->data);
    ft_list_clear(lst, 0);
    printf("-----------------\n");
    printf("ft_list_push_back:\n");
    lst = NULL;
    i = 0;
    while (argv[++i])
        ft_list_push_back(&lst, argv[i]);
    ft_list_foreach(lst, &print_node);
    i = 0;
    printf("-----------------\n");
    printf("ft_list_at:\n");
    while (i + 1 < argc)
    {
        printf("list at %d: %s\n", i, (char *)ft_list_at(lst, i)->data);
        i++;
    }
    printf("-----------------\n");
    printf("ft_list_reverse:\n");
    ft_list_reverse(&lst);
    ft_list_foreach(lst, &print_node);
    printf("-----------------\n");
    printf("ft_list_foreach_if: string contains 'a'\n");
    ft_list_foreach_if(lst, &print_node, "a", &strcontains);
    printf("-----------------\n");
    printf("ft_list_sort:\n");
    ft_list_sort(&lst, &strcmp);
    ft_list_foreach(lst, &print_node);
    ft_list_clear(lst, 0);
    return (EXIT_SUCCESS);
}