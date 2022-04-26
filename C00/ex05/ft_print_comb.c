/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thade-ol <thade-ol@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 01:15:52 by thade-ol          #+#    #+#             */
/*   Updated: 2022/04/12 23:23:13 by thade-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_numbers(char unit_a, char dozen_b, char hundred_c)
{
	ft_putchar(hundred_c);
	ft_putchar(dozen_b);
	ft_putchar(unit_a);
	if (hundred_c != '7' || dozen_b != '8' || unit_a != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				ft_numbers(a, b, c);
				a++;
			}
		b++;
		}
	c++;
	}
}
