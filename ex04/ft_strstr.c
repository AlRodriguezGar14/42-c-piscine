/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:53:18 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/26 22:24:45 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	potential_match;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			potential_match = i;
			while (str[i] == *to_find)
			{
				to_find++;
				i++;
				if (*to_find == '\0')
					return (&str[potential_match]);
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[] = "Hello Worldies";
	char	to_match[] = "World";

	char		*match_checker;
	
	match_checker = ft_strstr(&str[0], &to_match[0]);
	printf("match checker: %s\n", match_checker);
	return (0);
}
*/
