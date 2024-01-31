/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:39:36 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/20 12:05:26 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z' )
			return (0);
		i++;
	}
	return (1);
}
/*
int main (void)
{
	char	*string;
	string = "aaaaaa";

	printf("%d", ft_str_is_lowercase(string));
}*/
