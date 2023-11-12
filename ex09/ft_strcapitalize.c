/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:56:49 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/25 20:45:00 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (!(str[i -1] >= 'A' && str[i -1] <= 'Z')
				&& !(str[i -1] >= '0' && str[i -1] <= '9'))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	salut[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(&salut[0]);
	printf("%s", salut);
	return (0);
}
*/
