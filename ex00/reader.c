/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarnard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 00:39:44 by hbarnard          #+#    #+#             */
/*   Updated: 2019/02/28 01:11:05 by hbarnard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str);
int calculate(int a, int b, char c);

int	reader(char *c)
{
	int		a;
	int		b;
	char	n;
	int 	i;

	i = 0;
	a = atoi(c, i);
	while (c[i] <= '9' && c[i] >= '0')
		i++;
	n = c[i++];
	b = atoi(c, i);
	return (calculate(a, b, n));
}
