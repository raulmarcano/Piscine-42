/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:41:45 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/12 11:40:57 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	a;

	a = 122;
	while (a >= 97)
	{	
		write(1, &a, 1);
		a--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
}*/
