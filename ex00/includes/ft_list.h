/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 18:24:44 by jsarkis           #+#    #+#             */
/*   Updated: 2019/02/27 18:37:13 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	int				a;
	int				b;
	int				(*op)(int, int);
}					t_list;

t_list  *ft_create_elem(int a, int b, int (*op)(int, int));

# include "ft_list_functions.c"
#endif
