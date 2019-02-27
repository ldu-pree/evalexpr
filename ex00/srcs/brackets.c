/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 21:20:12 by ldu-pree          #+#    #+#             */
/*   Updated: 2019/02/28 00:59:05 by ldu-pree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	brackets(char *c, int t)
{
	int i;
	int v;
	int l;

	l = 0;
	v = 0;
	i = 0;
	while (c[i] != '\0' && v == 0)
	{
		if (c[i] == ')')
		{
			v = 1;
			l = i;
		}
		i++;
		while (c[i] != '(' && v == 1)
			i--;
	}
	xbracket(l, i, c)
	bracket_str(i, c);
}

void	xbracket(int l, int k, char *c)
{
	int t;
	char xstr[t];

`	t = 0;
	while (c[l+1] != '\0')
	{
		if (c[l+1] == ')')
			while (l < k &&
	}

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
