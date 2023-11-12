/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alberrod <alberrod@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:44:25 by alberrod          #+#    #+#             */
/*   Updated: 2023/10/30 18:34:55 by alberrod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	validate_duplication(char *used, char each)
{
	int	i;

	i = 0;
	while (used[i] != '\0')
	{
		if (used[i] == each)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	validate_base(char *base)
{
	int		i;
	char	used[18];
	int		duplication;

	i = 0;
	while (i - 18)
	{
		used[i] = 0;
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		duplication = validate_duplication(used, base[i]);
		used[i] = base[i];
		used[i + 1] = '\0';
		if (duplication == 1)
			return (1);
		i++;
	}
	if (i == 1 || i == 0)
		return (1);
	return (i);
}

void	print_base(long nbr, char *base, int len)
{
	int		i;
	int		remainder;
	char	output[33];

	i = 0;
	while (i < 33)
	{
		output[i] = 0;
		i++;
	}
	output[i] = '\0';
	i = 0;
	while (nbr > 0)
	{
		remainder = nbr % len;
		output[i] = base[remainder];
		nbr = nbr / len;
		i++;
	}
	while (i > 0)
	{
		write(1, &output[i - 1], 1);
		i--;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	len = validate_base(base);
	if (len < 2)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	print_base(nb, base, len);
}
/*
int	main(void)
{
	ft_putnbr_base(-10000000, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-532, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-532, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-532, "01234567");
	write(1, "\n", 1);
	ft_putnbr_base(-532, "poniguay");
	write(1, "\n", 1);
	return (0);
}
*/
