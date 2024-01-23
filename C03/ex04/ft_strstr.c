/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/22 18:04:40 by edribeir      #+#    #+#                 */
/*   Updated: 2023/06/29 09:02:35 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == 0)
		return (str);
	while (str[j] != 0 && to_find[i] != 0)
	{
		i = 0;
		while (str[j + i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
			return (&str[j]);
		j++;
	}
	return (0);
}

// int main ()
// {
// 	char strin[] = "toehhahaoeohahaok";
// 	char tofind[] = "haha";

// 	printf("%s", ft_strstr(strin, tofind));
// 	//printf("%s", strstr(strin, tofind));
// }