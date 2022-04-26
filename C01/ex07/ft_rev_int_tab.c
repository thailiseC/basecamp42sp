/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:21:39 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/19 19:49:42 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	first;
	int	last;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		aux = tab[first];
		tab[first] = tab[last];
		tab[last] = aux;
		first++;
		last--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	size;
	int	array[8];
	int	*tab;
	int	i;

	size = 8;
	array[0] = 0;
	array[1] = 1;
	array[2] = 2;
	array[3] = 3;
	array[4] = 4;
	array[5] = 5;
	array[6] = 6;
	array[7] = 7;
	tab = &array[0];
	i = 0;
	printf("Ordem dos elementos no início: ");
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("Ordem dos elementos no final: ");
	i = 0;
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/