/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing_module.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-mun <agil-mun@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:23:41 by agil-mun          #+#    #+#             */
/*   Updated: 2023/10/29 18:57:56 by agil-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Variables Globales		-->	str_number
// Funciones externas		--> str_len(char *str)
// Funcin principal			--> final_writer
// Funciones de este módulo	--> OK triad_quantity(int len)							OK triad_creator(int j)	
// 							-->	triad_writer(char *tri)i AKA Andoni_triad(tri) 	order_writer (int triad_q)

int	ft_strlen(char *str);

int	triad_quantity(int len)
{
	int	triad_q;

	if (len % 3 == 0)
		triad_q = len / 3;
	else 
		triad_q = len / 3 + 1;
	return(triad_q);
}

int	triad_creator(int j)
{
	int	tri_count;

	tri_count = len % 3;
	if (tri_count == 0)
	{
		tri[0] = str_number[0 + j];
		tri[1] = str[1 + j];
		tri[2] = str[2 + j];
	}
	else if (tri_count == 2)
	{
		tri[0] = '0';
		tri[1] = str[0];
		tri[2] = str[1];
	}
	else if (tri_count == 1)
	{
		tri[0] = '0';
		tri[1] = '0';
		tri[2] = str[0];
	}
	j = j + 3;

	return (j);
}

void	final_writer()
{
	int	len;
	int	triad_q;
	int	j;
	char	triad[3];
	
	len = str_len(str_number);
	triad_q = triad_quantity(len);
	j = 0;
	j = triad_creator(j);
	
	triad_writer(triad);
	order_writer(triad_q);
	
	while (triad_q != 1)
	{
		j = triad_creator(j);
		triad_writer(triad);
		order_writer(triad_q);
	}

	j = triad_creator(j);
	triad_writer(triad);
}




