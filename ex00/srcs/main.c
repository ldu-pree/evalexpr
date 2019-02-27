/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarkis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 16:00:11 by jsarkis           #+#    #+#             */
/*   Updated: 2019/02/27 20:56:43 by jsarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n < 10)
		ft_putchar((n % 10) + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_power(int base, int power)
{
	if (power == 0)
		return (1);
	else
		return (ft_power(base, power - 1) * base);
}

int		ft_atoi(char *str)
{
	int i;
	int len;
	int sum;

	i = 0;
	len = ft_strlen(str) - 1;
	sum = 0;
	while (len >= 0)
	{
		sum += (str[i] - '0') * ft_power(10, len);
		i++;
		len--;
	}
	return (sum);
}

int		ft_add(int a, int b)
{
	return (a + b);
}

char	*ft_copy(char *str, int index, int count)
{
	char *cpy;
	int i;

	cpy = (char *)malloc(sizeof(char) * count + 1);
	i = 0;
	while (i < count)
	{
		cpy[i] = str[index + i];
		i++;
	}
	return (cpy);
}

/////DO NOT MOVE THIS FUNCTION
int		ft_pos(char *str, char to_find)
{
	int i;

	i = 0;
	while (str[i] != to_find)
	{
		i++;
		if (str[i
	}
	return (i);
}

int		ft_do_op(int a, int b, char op)
{
	int result;

	result = 0;
	if (op == '+')
		result = ft_add(a, b);
	return (result);
}

int		eval_expr(char *str)
{
	int a;
	int b;
	while (
	a = ft_do_op(a, b, '+');
	return (a);
}

int		main(int ac, char **av)
{
	if (1 < ac)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
