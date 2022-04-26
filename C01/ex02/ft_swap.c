/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:27:22 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/19 19:32:05 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	printf("Antes: a = %d\n", a);
	printf("Antes: b = %d\n", b);
	ft_swap(&a, &b);
	printf("Depois: a = %d\n", a);
	printf("Depois: b = %d\n", b);
}
*/