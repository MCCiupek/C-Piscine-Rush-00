/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:03:33 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 12:18:54 by mciupek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_l(int l, char a, char b)
{
	int i;

	i = l;
	while (i != 0)
	{
		if (i == l || i == 1)
			write(1, &a, 1);
		else
			write(1, &b, 1);
		i--;
	}
	write(1, "\n", 1);
}

void	rush00(int l, int h)
{
	int i;

	i = h;
	while (i != 0)
	{
		if (i == h || i == 1)
			print_l(l, 'o', '-');
		else
			print_l(l, '|', ' ');
		i--;
	}
}

int		main(void)
{
	rush00(4, 4);
}