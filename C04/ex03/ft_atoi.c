/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:12:31 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/27 16:24:24 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_sign(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	b;

	i = 0;
	value = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '+' || str[i] == 32 || str[i] == '-'
				|| (str[i] >= 9 && str[i] <= 13)) && b == 0)
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			value = value * 10 + (str[i] - '0');
			i++;
			b = 1;
		}
		else
			break ;
	}
	return (check_sign(str) * value);
}

int	check_sign(char *str)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	return (sign);
}
/*
#include <stdio.h>
int main(void)
{
    char *string;
    string = "	 ---+--+1234 567";

    int number = ft_atoi(string);
    printf("Number: %d\n", number);

    return 0;
}*/
