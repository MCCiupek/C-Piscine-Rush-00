/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:14:41 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 16:18:55 by haguerni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_l(int l, char a, char b, char c)
{
	int i;

	i = l;
	while (i > 0)
	{
		if (i == l)
			ft_putchar(a);
		else if (i == 1)
			ft_putchar(c);
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
			print_l(l, 'A', 'B', 'C');
		else if (i == 1)
			print_l(l, 'C', 'B', 'A');
		else
			print_l(l, 'B', ' ', 'B');
		i--;
	}
}
