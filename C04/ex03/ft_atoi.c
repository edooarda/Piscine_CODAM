/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/26 14:12:23 by edribeir      #+#    #+#                 */
/*   Updated: 2023/06/29 09:20:06 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_atoi(char *str)
{
	int	i;
	int	c;
	int	number;

	number = 0;
	i = 0;
	c = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{	
		if (str[i] == '-')
			c++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10;
		number = number + (str[i] - 48);
		i++;
	}
	if (!(c % 2))
		return (number);
	return (-number);
}

// int main (void)
// {
// 	char x[] = " --+--+12d34ab567";
// 	printf("%d", ft_atoi(x));
// }