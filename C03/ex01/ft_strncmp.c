/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/22 15:08:53 by edribeir      #+#    #+#                 */
/*   Updated: 2023/06/22 17:16:40 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

// int main ()
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Sunshine";

// 	unsigned int m;
// 	m = 1;
// 	printf("%d\n", ft_strncmp(s1, s2, m));
// 	printf("%d", strncmp(s1, s2, m));
// }