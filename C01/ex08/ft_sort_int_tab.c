/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:58:24 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/15 19:17:12 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
			temp = tab[j];
			tab[j] = tab[j + 1];
			tab[j + 1] = temp;
			}
		j++;
		}
	i++;
	}
}
/*
int main (void)
{

	int size;
	int array[] = {9, 3, 5, 4, 8, 1, 7};
	int *tab = array;

	size = sizeof(array) / sizeof(array[0]);

	printf("Original array:");
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");

	ft_sort_int_tab(tab, size);


	printf("Reverted array:");
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");


}*/
