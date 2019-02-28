/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:50:41 by camurray          #+#    #+#             */
/*   Updated: 2019/02/03 12:51:59 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return (0);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
		return (0);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
	return (0);
}

int		ft_atoi(char **str)
{
	int		nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr * sign);
}
