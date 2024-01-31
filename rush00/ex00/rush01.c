/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arenilla <arenilla@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:10:47 by arenilla          #+#    #+#             */
/*   Updated: 2023/11/12 17:02:03 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

int	negative(int x, int y){
	if((x < 0) || (y < 0)){
	return 1;
	}
	return 0;
}



void	rush(int x, int y)
{
if (negative(x,y) == 1)
		{
		write (1, "Los valores deben ser mayor a 0 " , 32);
		return;
		}
	int	a;
	int	b;

	char (test);
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && a != 1 && b != 1))
				test = '/';
			else if ((a == x && b == 1) || (b == y && a == 1))
				test = '\\';
			else if (a == 1 || a == x || b == 1 || b == y)
				test = '*';
			else
				test = ' ';
			ft_putchar(test);
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
