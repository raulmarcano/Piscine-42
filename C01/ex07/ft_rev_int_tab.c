/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarcano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:38:43 by rmarcano          #+#    #+#             */
/*   Updated: 2023/11/15 16:04:10 by rmarcano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	k = size - 1;
	while (i < k)
	{
	temp = tab[k];
	tab[k] = tab[i];
	tab[i] = temp;
	i++;
	k--;
	}
}

/*
int main (void)
{

	int size;
	int array[] = {1, 2, 3, 4, 5, 6, 7};
	int *tab = array;

	size = sizeof(array) / sizeof(array[0]);
	
	printf("Original array:");
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");

	ft_rev_int_tab(tab, size);
	

	printf("Reverted array:");
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");


}*/
