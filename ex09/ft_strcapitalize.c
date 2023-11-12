/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:56:49 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/24 18:36:19 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	word_index;

	word_index = 0;
	while (*str != '\0')
	{
		if ((*str <= 'z' && *str >= 'a') && word_index == 0)
		{
			*str = *str - 32;
		}
		if ((*str <= 'Z' && *str >= 'A') && word_index != 0)
		{
			*str = *str + 32;
		}
		word_index++;
		if (*str < 65 && !(*str >= '0' && *str <= '9'))
		{
			word_index = 0;
		}
	str++;
	}
	return (str);
}
/*
int	main(void)
{
	char	salut[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(salut);
	printf("%s", salut);
	return (0);
}
*/
