/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluengo- <aluengo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 22:03:15 by aluengo-          #+#    #+#             */
/*   Updated: 2023/11/26 22:04:28 by aluengo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	convert(int n);
void	choose_dict(char *dict);

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	sign;

	sign = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			sign = -sign;
			i++;
		}
		else if (str[i] == '+' || str[i] == ' ')
			i++;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			value = value * 10 + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	return (sign * value);
}

int	main(int argc, char	**argv)
{
	int		numero;
	char	*dict;

	if (argc <= 2)
		numero = ft_atoi(argv[1]);
	else if (argc <= 3)
	{
		numero = ft_atoi(argv[2]);
		dict = argv[1];
		choose_dict(dict);
	}
	else
		write(1, "Maximo 2 argumentos", 19);
	if (numero < 0)
		write(1, "El valor debe ser mayor a 0", 27);
	convert(numero);
	return (0);
}
