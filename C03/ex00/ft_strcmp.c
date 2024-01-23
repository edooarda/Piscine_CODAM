/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/19 16:33:30 by edribeir      #+#    #+#                 */
/*   Updated: 2023/06/28 18:06:09 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i])))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char s1[] = "STRING";
// 	char s2[] = "HELL";
// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d", strcmp(s1, s2));
// 	return (0);
// }
