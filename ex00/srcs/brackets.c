/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:20:12 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/02/27 23:01:13 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	brackets(char *c, int t)
{
	int i;
	int v;

	v = 0;
	i = 0;
	while (c[i] != '\0' && v == 0)
	{
		if (c[i] == ')')
			v = 1;
		i++;
		while (c[i] != '(' && v == 1)
			i--;
	}
	bracket_str(i, c);
}

void	bracket_str(int i, char *c)
{
	int l;
	char str[l];

	l = 0;
	while (c[i] != ')')
	{
		str[l] = c[i];
		l++;
		i++;
	}
	reader(str);
}

void	bracket_count(char *c)
{
	int i;
	int t;

	t = 0;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == ')')
			t++;
		i++;
	}
	if (t == 0)
		reader(c);
	if (t > 0)
		brackets(c, t);
}
