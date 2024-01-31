/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:32:30 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/21 15:10:34 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
	{
		dest[i] = '\0';
	}
	return (i);
}
/*
int main (void)
{
	char	destino[10];
	char	source[] = "holaholahola";
	int dest_size;
	dest_size = 10;
	ft_strlcpy(destino, source, dest_size);
	printf("Source:%s\n", source);
	printf("Destiny:%s\n", destino);
}*/
