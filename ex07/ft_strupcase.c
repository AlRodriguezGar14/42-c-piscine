/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:57:18 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/24 20:55:08 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if (*str <= 'z' && *str >= 'a')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char	hi[] = "aloha ghj gk gjkg jgh";
	ft_strupcase(hi);
	printf("%s", hi);

	return (0);
}
*/
