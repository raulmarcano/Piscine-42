/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aluengo- <aluengo-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 21:06:24 by aluengo-          #+#    #+#             */
/*   Updated: 2023/11/26 21:08:13 by aluengo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	choose_dict(char *dict)
{
	int	fd;

	if (dict)
		dict = "numbers.dict";
	fd = open(dict, O_RDONLY);
	close(fd);
	if (fd == -1)
	{
		write(2, "Error Dict", 10);
		exit(EXIT_FAILURE);
	}
}
