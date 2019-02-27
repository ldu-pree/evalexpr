/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:33:21 by jsarkis           #+#    #+#             */
/*   Updated: 2019/02/27 19:27:07 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list  *ft_create_elem(int a, int b, int (*op)(int, int))
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
