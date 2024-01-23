/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkhatibi <zkhatibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:50:14 by zkhatibi          #+#    #+#             */
/*   Updated: 2023/06/11 14:13:26 by zkhatibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	print_column(int x, char first, char middle, char last)
{
	int	current_column;

	current_column = 1;
	while (current_column <= x)
	{
		if (current_column == 1)
		{
			ft_putchar(first);
		}
		else if (current_column == x)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		current_column++;
	}
	ft_putchar('\n');
}

int	error_function(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int	current_line;
	int	error;

	current_line = 1;
	error = error_function(x, y);
	while (current_line <= y && error != 0)
	{
		if (current_line == 1)
		{
			print_column(x, 'o', '-', 'o');
		}
		else if (current_line == y)
		{
			print_column(x, 'o', '-', 'o');
		}
		else
		{
			print_column(x, '|', ' ', '|');
		}
		current_line++;
	}
}
