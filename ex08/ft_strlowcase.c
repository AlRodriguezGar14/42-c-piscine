/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:35:29 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/24 18:27:44 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str <= 'Z' && *str >= 'A')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char	hi[] ="GSHFDJ HJGKSGL GDLK";
	ft_strlowcase(hi);
	printf("%s", hi);

	return (0);
}
*/
