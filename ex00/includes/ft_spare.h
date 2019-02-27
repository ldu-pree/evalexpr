/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 10:23:01 by jsarkis           #+#    #+#             */
/*   Updated: 2019/02/27 18:31:13 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	int				a;
	int				b;
	int				(*op)(int int);
}					t_list;

t_list	*ft_create_elem(int a, int b, char op);

void    ft_list_push_back(t_list **begin_list, int a, int b, char op);

void    ft_list_push_front(t_list **begin_list, int a, int b, char op);

int 	ft_list_size(t_list *begin_list);

t_list  *ft_list_last(t_list *begin_list);

t_list  *ft_list_push_params(int ac, char **av);

t_list  *ft_remove_first(t_list *list);

void    ft_list_clear(t_list **begin_list);

void	ft_print_list(t_list *list);

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);

void    ft_list_reverse(t_list **begin_list);
# include "ft_list_functions.c"
#endif
