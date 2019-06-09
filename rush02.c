/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 12:03:17 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 16:15:00 by haguerni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_l(int l, char a, char b)
{
	int i;

	i = l;
	while (i > 0)
	{
		if (i == l || i == 1)
			ft_putchar(a);
		else
			ft_putchar(b);
		i--;
	}
	write(1, "\n", 1);
}

void	rush(int l, int h)
{
	int i;

	i = h;
	while (i > 0)
	{
		if (i == h)
			print_l(l, 'A', 'B');
		else if (i == 1)
			print_l(l, 'C', 'B');
		else
			print_l(l, 'B', ' ');
		i--;
	}
}
