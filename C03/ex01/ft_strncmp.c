/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:12:25 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/22 16:30:43 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n < 1)
		return (0);
	else
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n - 1 > i)
			i++;
		return (s1[i] - s2[i]);
	}
}
/*
int main (void)
{
	char *str1 = "";
	char *str2 = "holao";
	int result;

	result = ft_strncmp(str1, str2, 0);
	printf("%d", result);
}*/
