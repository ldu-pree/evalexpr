/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 10:45:42 by jsarkis           #+#    #+#             */
/*   Updated: 2019/02/27 18:20:57 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_create_elem(int a, int b, char op)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp)
	{
		temp->a = a;
		temp->b = b;
		temp->op = op;
		temp->next = NULL;
	}
	return (temp);
}

void	ft_list_push_back(t_list **begin_list, int a, int b, char op)
{
	t_list *temp;

	temp = *begin_list;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = ft_create_elem(a, b, op);
	}
	else
		*begin_list = ft_create_elem(a, b, op);
}

void	ft_list_push_front(t_list **begin_list, int a, int b, char op)
{
	t_list *new;

	new = ft_create_elem(a, b, op);
	new->next = *begin_list;
	*begin_list = new;
}

int ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return (i);
}

t_list	*ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

t_list	*ft_remove_first(t_list *list)
{
	t_list *next;

	if (list)
	{
		next = list->next;
		free(list);
		return (next);
	}
	else
		return (NULL);
}

void	ft_list_clear(t_list **begin_list)
{
	while (*begin_list)
		*begin_list = ft_remove_first(*begin_list);
	*begin_list = NULL;
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		printf("%d %c %d\n", list->a, list->op, list->b);
		list = list->next;
	}
}

t_list  *ft_list_at(t_list *begin_list, unsigned int nbr)
{
    unsigned int    i;
    t_list          *temp;

    i = 0;
    temp = begin_list;
    while (i < nbr)
    {
        if (temp->next == NULL)
            return (NULL);
        temp = temp->next;
        i++;
    }
    return (temp);
}

void    ft_list_reverse(t_list **begin_list)
{
    t_list *prev;
    t_list *current;
    t_list *next;

    prev = NULL;
    current = *begin_list;
    next = *begin_list;
    while (current)
    {
        next = next->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *begin_list = prev;
}
