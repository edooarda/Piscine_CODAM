/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/26 12:04:08 by edribeir      #+#    #+#                 */
/*   Updated: 2023/06/29 09:26:43 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <limits.h>

void	ft_putnbr(int nb)
{
	int		i;
	long	nbl;
	char	number[10];

	nbl = nb;
	i = 0;
	if (nbl == 0)
		write (1, "0", 1);
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	while (nbl > 0)
	{
		number[i] = (nbl % 10) + 48;
		nbl = nbl / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (1, &number[i], 1);
		i--;
	}
}

// int	main(void)
// {
// 	//ft_putnbr();
// 	ft_putnbr(INT_MAX);
// 	ft_putnbr(INT_MAX);
// 	return (0);
// }
