/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:04:27 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 12:17:07 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_l(int l, char a, char b, char c)
{
	int i;

	i = l;
	while (i != 0)
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

void	rush03(int l, int h)
{
	int i;

	i = h;
	while (i != 0)
	{
		if (i == h || i == 1)
			print_l(l, 'A', 'B', 'C');
		else
			print_l(l, 'B', ' ', 'B');
		i--;
	}
}

int		main(void)
{
	rush03(1, 5);
}
