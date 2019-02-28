/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 09:21:41 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/02/28 10:51:15 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>
#include <stdlib.h>

int		eval_sub(char **str)
{
	int nbr;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		nbr = eval_sum(str);
		if (**str == ')')
			(*str)++;
		return (nbr);
	}
	return (ft_atoi(str));
}

int		eval_factor(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operation;

	nbr1 = eval_sub(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		operation = **str;
		if (operation != '/' && operation != '*' &&
				operation != '%')
			return (nbr1);
		(*str)++;
		nbr2 = eval_sub(str);
		if (operation == '/')
			nbr1 /= nbr2;
		else if (operation == '*')
			nbr1 *= nbr2;
		else
			nbr1 %= nbr2;
	}
	return (nbr1);
}

int		eval_sum(char **str)
{
	int		nbr1;
	int		nbr2;
	char	operation;

	nbr1 = eval_factor(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		operation = **str;
		if (operation != '+' && operation != '-')
			return (nbr1);
		(*str)++;
		nbr2 = eval_factor(str);
		if (operation == '+')
			nbr1 += nbr2;
		else
			nbr1 -= nbr2;
	}
	return (nbr1);
}

int		eval_expr(char *str)
{
	return (eval_sum(&str));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
