/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <rmarcano@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:16:56 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/30 19:53:53 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return ;
}

void	swap_params(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	order_params(int argc, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - i - 1)
		{
			k = 0;
			while (av[j][k] != '\0' && av[j + 1][k] != '\0' && k != -1)
			{
				if (av[j][k] > av[j + 1][k])
					swap_params(&av[j], &av[j + 1]);
				else if (av[j][k] == av[j + 1][k])
					k++;
				else
					k = -1 ;
			}
			j++;
		}
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	order_params(argc, argv);
	print_params(argc, argv);
	return (0);
}
