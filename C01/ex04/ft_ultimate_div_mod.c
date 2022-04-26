/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:35:53 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/19 19:38:50 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *a / *b;
	*b = aux % *b;
}

/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 10;
	printf("Antes: a = %d\n", a);
	printf("Antes: b = %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("Depois: a = %d\n", a);
	printf("Depois: b = %d\n", b);
}
*/