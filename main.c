/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfoundou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 09:53:21 by cfoundou          #+#    #+#             */
/*   Updated: 2019/06/09 14:46:14 by cfoundou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int		ft_skip(char *str, int i)
{
	while ((str[i] > '9' || str[i] < '0') && str[i] != '-' && str[i] != '+')
	{
		if (str[i] != '\f' && str[i] != '\t' && str[i] != '\n'
		&& str[i] != '\r' && str[i] != '\v' && str[i] != ' ')
		{
			write(1, "ERROR::ARGUMENT_INVALID\n\nArg must be int num\n", 45);
			return (-1);
		}
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int		i;
	long	nb;
	int		signe;

	nb = 0;
	signe = 1;
	i = ft_skip(str, 0);
	if (i == -1)
		return (0);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[++i - 1] == '-')
			signe *= -1;
	}
	while (str[i] <= '9' && str[i] >= '0')
		nb = nb * 10 + (str[++i - 1] - 48);
	if (signe == -1 || nb < -2147483648 || nb > 2147483647)
	{
		if (signe == -1)
			write(1, "ERROR::ARGUMENT_INVALID\n\nNum can't be negative\n", 47);
		else
			write(1, "ERROR::ARGUMENT_INVALID\n\nInt overflow\n", 38);
		return (0);
	}
	return ((int)nb);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "ERROR::WRONG_NUMBER_OF_ARGUMENTS\n\nRush only take 2\n", 51);
		return (0);
	}
	if (ft_atoi(argv[1]) == 0 || ft_atoi(argv[2]) == 0)
		return (0);
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
