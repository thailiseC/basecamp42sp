/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:42:00 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/19 19:34:50 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 21;
	b = 10;
	div = 0;
	mod = 0;
	printf("No início:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
	ft_div_mod(a, b, &div, &mod);
	printf("No fim:\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
}
*/