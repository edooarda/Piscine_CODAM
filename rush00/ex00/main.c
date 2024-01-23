/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkhatibi <zkhatibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:50:10 by zkhatibi          #+#    #+#             */
/*   Updated: 2023/06/11 14:31:41 by zkhatibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int	ft_atoi(char *str)
{
	int	size;
	int	i;
	int	minus;

	size = 0;
	i = 0;
	minus = 0;
	if (str[i] == '-')
	{
		minus = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		size *= 10;
		size += (str[i] - '0');
		i++;
		if (size < 1 || size > 2147483647)
			return (0);
	}
	if (minus)
		size = -size;
	return (size);
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "The argument amount you put in is wrong", 40);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[2]);
	if ((a < 1) || (b < 1))
	{
		write(1, "Please enter a number that is higher or equal to 1", 51);
		write(1, "\n", 1);
		write(1, "But is less than or equal ", 27);
		write(1, "to the INT_MAX value of 2147483647", 35);
		return (0);
	}
	x = a;
	y = b;
	rush(x, y);
	return (0);
}
