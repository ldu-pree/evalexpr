/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:49:39 by camurray          #+#    #+#             */
/*   Updated: 2019/02/03 12:52:32 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

void	ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_atoi(char **str);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		eval_sum(char **expr);
int		eval_expr(char *expr);
int		eval_factor(char **expr);
int		eval_sub(char **expr);

#endif
