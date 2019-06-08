/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:24:35 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 12:32:46 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_l(int l, char a, char b, char c)
{
	int i;

	i = l;
	while (i > 0)
	{
		if (i == l)
			write(1, &a, 1);
		else if (i == 1)
			write(1, &c, 1);
		else
			write(1, &b, 1);
		i--;
	}
	write(1, "\n", 1);
}

void	rush01(int l, int h)
{
	int i;

	i = h;
	while (i > 0)
	{
		if (i == h)
			print_l(l, '/', '*', 92);
		else if (i == 1)
			print_l(l, 92, '*', '/');
		else
			print_l(l, '*', ' ', '*');
		i--;
	}
}

int		main(void)
{
	rush01(0, 0);
}
