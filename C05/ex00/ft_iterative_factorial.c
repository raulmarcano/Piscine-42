/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:19:28 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/29 16:21:44 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	i = 0;
	res = 1;
	while (i < nb)
	{
		res = res *(i + 1);
		i++;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
    int numero = 3;
    long long resultado = ft_iterative_factorial(numero);
	printf("%lld", resultado);
	return 0;
}*/
