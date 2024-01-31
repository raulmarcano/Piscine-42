/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:16:50 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/13 18:47:53 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	transform(int n)
{
	int	x;
	int	y;

	if (n < 10)
	{
		putchar('0');
		putchar(n + '0');
	}
	else
	{
		x = n / 10;
		y = n % 10;
		putchar(x + '0');
		putchar(y + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			transform(i);
			putchar(' ');
			transform(j);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
	return(0);
}*/
