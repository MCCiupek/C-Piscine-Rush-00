/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfoundou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:39:17 by cfoundou          #+#    #+#             */
/*   Updated: 2019/06/08 18:08:23 by cfoundou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affo(int i, int x)
{
	if (i == 0 || i == x - 1)
		write(1, "o", 1);
	else
		write(1, "-", 1);
}

void	rush(int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = -1;
		while (++i < x)
		{
			if (j == 0 || j == y - 1)
			{
				affo(i, x);
			}
			else
			{
				if (i == 0 || i == x - 1)
					write(1, "|", 1);
				else
					write(1, " ", 1);
			}
		}
		j++;
		write(1, "\n", 1);
	}
}
