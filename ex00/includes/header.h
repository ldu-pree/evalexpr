/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 09:20:46 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/02/28 09:37:37 by ldu-pree         ###   ########.fr       */
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
