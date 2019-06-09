/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mciupek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:24:35 by mciupek           #+#    #+#             */
/*   Updated: 2019/06/08 16:13:49 by haguerni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

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
			print_l(l, '/', '*', 92);
		else if (i == 1)
			print_l(l, 92, '*', '/');
		else
			print_l(l, '*', ' ', '*');
		i--;
	}
}
