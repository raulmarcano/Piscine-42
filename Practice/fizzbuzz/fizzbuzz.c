/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:45:24 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/30 16:09:50 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int nbr)
{
	if (nbr < 10)
		putchar(nbr +'0');
	else
	{
		putnbr(nbr / 10);
		putchar(nbr % 10 + '0');
	}
}

int main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
	if (i % 3 == 0 && i % 5 == 0)
		write(1, "fizzbuzz", 8);
	else if (i % 3 == 0)
		write(1, "fizz", 4);
	else if (i % 5 == 0)
		write(1, "buzz", 4);
	else
	{
		putnbr(i);
	}
	write(1, "\n", 1);
	i++;
	}
	return (0);
}
