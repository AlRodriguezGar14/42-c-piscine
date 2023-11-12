/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-mun <agil-mun@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:34:10 by agil-mun          #+#    #+#             */
/*   Updated: 2023/10/24 11:35:32 by agil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	numeric_check(char c)
{
	int	i;
	int	ans;

	ans = 0;
	i = 48;
	while (i <= 57)
	{
		if (c == i)
			ans = 1;
		i++;
	}	
	return (ans);
}

int	ft_str_is_numeric(char *str)
{
	int	ans;
	int	i;

	ans = 1;
	i = 0;
	while (ans == 1 && str[i] != '\0')
	{
		if (numeric_check(str[i]) == 0)
			ans = 0;
		else
			i++;
	}
	return (ans);
}
/*
int	main(void)
{
	char	strOK[29] = "1245678903123123";
	char	strKO[29] = "bu3n4s t4rd3s!";

	printf("%d\n", numeric_check('c'));
	printf("%d\n", numeric_check('7'));
	printf("strOK %d\n", ft_str_is_numeric(strOK));
	printf("strKO %d", ft_str_is_numeric(strKO));
}*/
