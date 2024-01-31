/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:20:50 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/15 11:24:39 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int main (void)
{
	int x;
	int y;
	int a;
	int b;

	x = 25;
	y = 10;
	
	ft_ultimate_div_mod(&x, &y);

	printf("%d %d", x, y);
}*/
