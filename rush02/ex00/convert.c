/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluengo- <aluengo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:50:38 by aluengo-          #+#    #+#             */
/*   Updated: 2023/11/26 22:02:52 by aluengo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	convert(int n)
{
	int	centena;
	int	resto;

	if (n == 0)
	{
		write(1, "Zero", 4);
	}
	else if (n < 20)
	{
		write(1, );
	}
	else if (n < 100)
	{
		write(1, );
		if (n % 10 != 0)
		{
			write(1, " ", 1);
			write(1,);
		}
	}
	else
	{
		centena = n / 100;
		resto = n % 100;
		if (centena > 0)
		{
			write(1, );
			write(1, " ", 1);
			write(1, );
			write(1, " ", 1);
		}
		convert(resto);
	}
}
