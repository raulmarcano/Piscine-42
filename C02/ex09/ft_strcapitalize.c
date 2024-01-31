/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:36:52 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/20 17:53:47 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	int		n;

	i = 0;
	n = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (n == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (n == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 'z')
			n = 1;
		else
			n = 0;
		i++;
	}
	return (str);
}
/*
int main (void)
{

	char	str[200] = "salut 42mots q-d come ? cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}*/
