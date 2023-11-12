/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-mun <agil-mun@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:31:59 by agil-mun          #+#    #+#             */
/*   Updated: 2023/10/24 11:33:52 by agil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	alpha_check(char c)
{
	int	i;
	int	ans;

	ans = 0;
	i = 65;
	while (i <= 122)
	{
		if (c == i)
			ans = 1;
		else if (i == 90)
			i = 96;
		i++;
	}	
	return (ans);
}

int	ft_str_is_alpha(char *str)
{
	int	ans;
	int	i;

	ans = 1;
	i = 0;
	while (ans == 1 && str[i] != '\0')
	{
		if (alpha_check(str[i]) == 0)
			ans = 0;
		else
			i++;
	}
	return (ans);
}

/*
int	main(void)
{
	char	strOK[29] = "buenastardes";
	char	strKO[29] = "buenas tardes!";

	printf("%d\n", alpha_check('c'));
	printf("%d\n", alpha_check('0'));
	printf("strOK %d\n", ft_str_is_alpha(strOK));
	printf("strKO %d", ft_str_is_alpha(strKO));
}*/
