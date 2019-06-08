/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:14:41 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 12:31:54 by mciupek          ###   ########.fr       */
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

void	rush04(int l, int h)
{
	int i;

	i = h;
	while (i > 0)
	{
		if (i == h)
			print_l(l, 'A', 'B', 'C');
		else if (i == 1)
			print_l(l, 'C', 'B', 'A');
		else
			print_l(l, 'B', ' ', 'B');
		i--;
	}
}

int		main(void)
{
	rush04(4, 4);
}
