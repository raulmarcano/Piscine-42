/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:58:21 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/23 11:14:51 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_change_hex(char c)
{
	int	x;
	int	y;

	x = c / 16;
	y = c % 16;
	put_char('\\');
	put_char(x + '0');
	if (y > 9)
		put_char(y + 87);
	else
		put_char(y + '0');
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			ft_change_hex(str[i]);
		else
			put_char(str[i]);
		i++;
	}
}
/*
int main (void)
{
	char str[] = "\n, 	, ñ";

	ft_putstr_non_printable(str);
	
}*/
