/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 23:00:43 by hbarnard          #+#    #+#             */
/*   Updated: 2019/02/27 23:11:28 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int i)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (i >= 10)
	{
		ft(putnbr(i / 10));
		ft_putchar(i % 10 + '0');
	}
	else
		ft_putchar(i + '0');
}
