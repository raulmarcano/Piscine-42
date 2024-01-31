/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:09:30 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/24 12:13:30 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	result;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i] != '\0')
		i++;
	while (src[result] != '\0')
		result++;
	result = result + i;
	while ((i + 1) < size && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char destino[20] = "Hola, ";
	char source[] = "mundo! Buenas";
	unsigned int size;

	size = sizeof(destino);

	printf("%d\n", ft_strlcat(destino, source, size));
	printf("%s", destino);
}*/
