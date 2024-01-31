/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:23:14 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/27 20:31:22 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_strlen(char *str);
void	ft_putnbr_base(int nbr, char *base);
int		check_base(char	*str);
long	check_negative(long nbr);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		j;
	long	leng;

	i = 0;
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return ;
		j = i + 1;
		while (base[i] != base[j] && base[j] != '\0')
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		j = 0;
		i++;
	}
	leng = ft_strlen(base);
	change_base(nbr, base, leng);
}

long	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i <= 1)
	{
		write(2, "La base debe ser mayor a 1\n", 27);
	}
	return (i);
}

void	change_base(long nbr, char *base, long leng)
{
	nbr = check_negative(nbr);
	if (nbr >= leng)
	{
		change_base(nbr / leng, base, leng);
		nbr = nbr % leng;
	}
	write(1, &base[nbr], 1);
}

long	check_negative(long nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	return (nbr);
}
/*
int	main(void)
{
	int n = -2147483647;
	char str[] = "01";
	ft_putnbr_base(n, str);
	return 0;
}*/
