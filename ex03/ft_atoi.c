/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:03:04 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/30 17:19:50 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	output;
	int	total_neg;
	int	pos_neg;

	i = 0;
	output = 0;
	total_neg = 0;
	pos_neg = 1;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			total_neg++;
		i++;
	}
	if (total_neg % 2 == 1)
		pos_neg = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		output = output * 10 + str[i] - '0';
		i++;
	}
	return (output * pos_neg);
}
/*
int	main(void)
{
	int num = ft_atoi( " ---+--+1234ab567");
	printf("num: %d\n", num);
	return (0);
}
*/
