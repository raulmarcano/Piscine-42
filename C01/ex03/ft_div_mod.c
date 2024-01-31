/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:41:13 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/15 13:33:01 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{

	int x;
	int y;
	int  division;
	int modulo;

	x = 25;
	y = 10;

	ft_div_mod(x, y, &division, &modulo);

	printf("%d %d", division, modulo);
}*/
